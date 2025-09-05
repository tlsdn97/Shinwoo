// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost2.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

APAIGhost2::APAIGhost2()
{
    PrimaryActorTick.bCanEverTick = true;

    PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
    PawnSensingComp->SightRadius = 1200.f;
    PawnSensingComp->SetPeripheralVisionAngle(60.f);

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeeds;
}

void APAIGhost2::BeginPlay()
{
    Super::BeginPlay();

    if (PawnSensingComp)
    {
        PawnSensingComp->OnSeePawn.AddDynamic(this, &APAIGhost2::OnSeePawn2);
    }
}

void APAIGhost2::OnSeePawn2(APawn* Pawn)
{
    if (!Pawn->ActorHasTag("Player")) return;

    AAIController* AICon = Cast<AAIController>(GetController());
    if (AICon && AICon->GetBlackboardComponent())
    {
        AICon->GetBlackboardComponent()->SetValueAsObject("TargetActor", Pawn);
    }
}

