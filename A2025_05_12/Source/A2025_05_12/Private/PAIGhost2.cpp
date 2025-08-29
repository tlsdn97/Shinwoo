// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost2.h"
#include "Perception/PawnSensingComponent.h"
#include "PAIController2.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GamePlayStatics.h"

#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
//#include "PlayerController_Sc.h"

APAIGhost2::APAIGhost2()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	PawnSensing->SightRadius = 850.f;
	PawnSensing->SetPeripheralVisionAngle(65.f);

	GetCharacterMovement()->MaxWalkSpeed = 100.f;

	AIControllerClass = APAIController2::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}

void APAIGhost2::BeginPlay()
{
	Super::BeginPlay();
}

void APAIGhost2::OnSeePawn(APawn* Pawn)
{
	auto AICon = Cast<APAIController2>(GetController());
	if (AICon && AICon->GetBlackboardComponent())
	{
		AICon->GetBlackboardComponent()->SetValueAsObject("TargetActor", Pawn);
		GetCharacterMovement()->MaxWalkSpeed = 350.f;
	}
}


