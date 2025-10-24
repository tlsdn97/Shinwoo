// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"

#include "GameFramework/InputSettings.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "PFixedTextWidget.h"
#include "PNcpCharacter.h"
#include "PDialogueWidget.h"


APPlayer::APPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

    FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
    FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
    FirstPersonCamera->bUsePawnControlRotation = true;

    FlashlightRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FlashlightRoot"));
    FlashlightRoot->SetupAttachment(FirstPersonCamera);
    FlashlightRoot->SetRelativeLocation(FVector(20.f, 20.f, -10.f));

    Flashlight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Flashlight"));
    Flashlight->SetupAttachment(FlashlightRoot);

    Flashlight->Intensity = 5000.f;
    Flashlight->AttenuationRadius = 2500.f;
    Flashlight->InnerConeAngle = 20.f;
    Flashlight->OuterConeAngle = 40.f;
    Flashlight->LightColor = FColor(255, 248, 231);
    Flashlight->bUseInverseSquaredFalloff = true;
    Flashlight->CastShadows = true;

    GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

    Tags.Add("Player");

    LastSavePoint = FVector::ZeroVector;
}

void APPlayer::BeginPlay()
{
    Super::BeginPlay();

    if (TextWidgetClass)
    {
        TextWidgetInstance = CreateWidget<UPFixedTextWidget>(GetWorld(), TextWidgetClass);
        if (TextWidgetInstance)
        {
            TextWidgetInstance->AddToViewport();
        }
    }
}

void APPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("Yaw", this, &APPlayer::Yaw);
    PlayerInputComponent->BindAxis("Pitch", this, &APPlayer::Pitch);

    PlayerInputComponent->BindAxis("MoveX", this, &APPlayer::MoveX);
    PlayerInputComponent->BindAxis("MoveY", this, &APPlayer::MoveY);

    PlayerInputComponent->BindAction("ToggleLight", IE_Pressed, this, &APPlayer::ToggleShoulderLight);

    PlayerInputComponent->BindAction("Run", IE_Pressed, this, &APPlayer::StartRunning);
    PlayerInputComponent->BindAction("Run", IE_Released, this, &APPlayer::StopRunning);
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APPlayer::TryInteract);
}

void APPlayer::ToggleShoulderLight()
{
    bLightOn = !bLightOn;
    Flashlight->SetVisibility(bLightOn);
}

void APPlayer::Yaw(float Value)
{
    AddControllerYawInput(Value);
}

void APPlayer::Pitch(float Value)
{
    AddControllerPitchInput(-Value);

}

void APPlayer::MoveX(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void APPlayer::MoveY(float Value)
{
    if (Value != 0.0f)
    {
        AddMovementInput(GetActorRightVector(), Value);
    }
}

void APPlayer::StartRunning()
{
    bIsRunning = true;
    GetCharacterMovement()->MaxWalkSpeed = RunSpeed;
}

void APPlayer::StopRunning()
{
    bIsRunning = false;
    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
}

void APPlayer::SetLastSavePoint(FVector Location)
{
    LastSavePoint = Location;
}

FVector APPlayer::GetLastSavePoint() const
{
    return LastSavePoint;
}

void APPlayer::TryInteract()
{
    TArray<AActor*> FoundNPCs;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), APNcpCharacter::StaticClass(), FoundNPCs);

    for (AActor* NPC : FoundNPCs)
    {
        APNcpCharacter* Target = Cast<APNcpCharacter>(NPC);
        if (Target && Target->bCanInteract)
        {
            Target->StartConversation(this);
            break;
        }
    }

}

