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
#include "TimerManager.h"
#include "PGameInstance.h"


APPlayer::APPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

    CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
    CameraBoom->SetupAttachment(GetRootComponent());
    CameraBoom->TargetArmLength = 300.0f;
    CameraBoom->bUsePawnControlRotation = true;     

    FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
    FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
    FollowCamera->bUsePawnControlRotation = false;

    HeadLightRoot = CreateDefaultSubobject<USceneComponent>(TEXT("HeadLightRoot"));
    HeadLightRoot->SetupAttachment(FollowCamera);
    HeadLightRoot->SetRelativeLocation(FVector(30.f, 0.f, 0.f));

    HeadLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("HeadLight"));
    HeadLight->SetupAttachment(HeadLightRoot);
    HeadLight->SetIntensity(8000.f);
    HeadLight->SetAttenuationRadius(2000.f);
    HeadLight->SetInnerConeAngle(2.f);
    HeadLight->SetOuterConeAngle(6.f);
    HeadLight->SetCastShadows(true);
    bHeadLightOn = false;
    HeadLight->SetVisibility(false);


    GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;

    Tags.Add("Player");
}

void APPlayer::BeginPlay()
{
    Super::BeginPlay();

    HeadLight->SetVisibility(bHeadLightOn);

    if (TextWidgetClass)
    {
        TextWidgetInstance = CreateWidget<UPFixedTextWidget>(GetWorld(), TextWidgetClass);
        if (TextWidgetInstance)
        {
            TextWidgetInstance->AddToViewport();
        }
    }

    UPGameInstance* GI = Cast<UPGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));

    if (GI && GI->HasSavedLocation())
    {
        // 사망 후 복귀 시 저장된 위치로 이동
        SetActorLocation(GI->GetSavedLocation());
    }
    else
    {
        // 새로 실행할 때는 PlayerStart 기준으로 유지
        if (GI)
        {
            GI->ClearSavedLocation();
        }
    }
}

void APPlayer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (HeadLight)
    {
        HeadLight->SetWorldRotation(FollowCamera->GetComponentRotation());
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
    bHeadLightOn = !bHeadLightOn;
    HeadLight->SetVisibility(bHeadLightOn);

    UE_LOG(LogTemp, Log, TEXT("HeadLight %s"), bHeadLightOn ? TEXT("ON") : TEXT("OFF"));
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
