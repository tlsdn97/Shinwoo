// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayer.h"
#include "Camera/CameraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SpotLightComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h" 

APPlayer::APPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

    FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    FirstPersonCamera->SetupAttachment(GetCapsuleComponent());
    FirstPersonCamera->SetRelativeLocation(FVector(0.f, 0.f, 64.f));
    FirstPersonCamera->bUsePawnControlRotation = true;

    FirstPersonArms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonArms"));
    FirstPersonArms->SetupAttachment(FirstPersonCamera);
    FirstPersonArms->SetOnlyOwnerSee(true);
    FirstPersonArms->bCastDynamicShadow = true;
    FirstPersonArms->CastShadow = true;

    ShoulderLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("ShoulderLight"));
    ShoulderLight->SetupAttachment(FirstPersonArms, TEXT("ShoulderSocket"));
    ShoulderLight->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
    ShoulderLight->Intensity = 5000.f;
    ShoulderLight->AttenuationRadius = 1000.f;
    ShoulderLight->InnerConeAngle = 20.f;
    ShoulderLight->OuterConeAngle = 40.f;
    ShoulderLight->bUseInverseSquaredFalloff = false;
    ShoulderLight->LightColor = FColor::White;

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeed;
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
    ShoulderLight->SetVisibility(bLightOn);
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

