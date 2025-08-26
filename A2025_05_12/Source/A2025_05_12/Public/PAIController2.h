// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PAIController2.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API APAIController2 : public AAIController
{
	GENERATED_BODY()

public:
    APAIController2();

    virtual void OnPossess(APawn* InPawn) override;

    UPROPERTY(EditDefaultsOnly, Category = "AI")
    class UBehaviorTree* BehaviorTreeAsset;

    UPROPERTY(EditAnywhere, Category = "AI|Sight")
    float SightRange = 1200.f;
    UPROPERTY(EditAnywhere, Category = "AI|Sight")
    float SightHalfAngleDeg = 55.f;

    UPROPERTY(EditAnywhere, Category = "AI|Chase")
    float ChaseDuration = 5.f;

    UPROPERTY(EditDefaultsOnly, Category = "AI|BBKeys")
    FName Key_TargetActor = "TargetActor";
    UPROPERTY(EditDefaultsOnly, Category = "AI|BBKeys")
    FName Key_TargetLocation = "TargetLocation";
    UPROPERTY(EditDefaultsOnly, Category = "AI|BBKeys")
    FName Key_IsChasing = "IsChasing";
    UPROPERTY(EditDefaultsOnly, Category = "AI|BBKeys")
    FName Key_ChaseTimeLeft = "ChaseTimeLeft";
	
};
