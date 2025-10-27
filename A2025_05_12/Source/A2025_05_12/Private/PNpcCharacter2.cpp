// Fill out your copyright notice in the Description page of Project Settings.


#include "PNpcCharacter2.h"
#include "PNpcAIController.h"
#include "GameFramework/CharacterMovementComponent.h"

APNpcCharacter2::APNpcCharacter2()
{  
	PrimaryActorTick.bCanEverTick = true;

	BaseZ = 0.f;
	FloatSpeed = 2.f; 
	FloatHeight = 20.f;

	AIControllerClass = APNpcAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void APNpcCharacter2::BeginPlay()
{
	Super::BeginPlay();
	BaseZ = GetActorLocation().Z;
}

void APNpcCharacter2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	float NewZ = BaseZ + FMath::Sin(GetWorld()->GetTimeSeconds() * FloatSpeed) * FloatHeight;
	CurrentLocation.Z = NewZ;

	SetActorLocation(CurrentLocation);
}

