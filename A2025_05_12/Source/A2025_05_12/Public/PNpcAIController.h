// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PNpcAIController.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API APNpcAIController : public AAIController
{
	GENERATED_BODY()
public:
    virtual void BeginPlay() override;
    virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

protected:

    UPROPERTY(EditAnywhere, Category = "AI Movement", meta = (ClampMin = "-1000", ClampMax = "1000"))
    FVector TargetOffset = FVector(2000.f, 0.f, 0.f);
private:
    FVector StartLocation;
    FVector TargetLocation;
    bool bMovingForward;

    void MoveToNextPoint();
};
