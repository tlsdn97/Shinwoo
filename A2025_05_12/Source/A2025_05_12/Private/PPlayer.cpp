// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "Blueprint/UserWidget.h"

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
}


void APPlayer::BeginPlay()
{
    Super::BeginPlay();
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

