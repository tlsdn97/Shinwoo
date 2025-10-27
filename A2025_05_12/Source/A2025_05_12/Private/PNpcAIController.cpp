// Fill out your copyright notice in the Description page of Project Settings.


#include "PNpcAIController.h"
#include "GameFramework/Character.h"
#include "NavigationSystem.h"

void APNpcAIController::BeginPlay()
{
    Super::BeginPlay();

    APawn* ControlledPawn = GetPawn();
    if (!ControlledPawn) return;

    StartLocation = ControlledPawn->GetActorLocation();

    TargetLocation = StartLocation + ControlledPawn->GetActorRotation().RotateVector(TargetOffset);

    bMovingForward = true;
    MoveToNextPoint();
}

void APNpcAIController::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result)
{
    Super::OnMoveCompleted(RequestID, Result);

    bMovingForward = !bMovingForward;

    FTimerHandle TimerHandle;
    GetWorld()->GetTimerManager().SetTimer(
        TimerHandle,
        this,
        &APNpcAIController::MoveToNextPoint,
        1.0f,
        false
    );

}

void APNpcAIController::MoveToNextPoint()
{
    FVector Destination = bMovingForward ? TargetLocation : StartLocation;
    MoveToLocation(Destination);
}
