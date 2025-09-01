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

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, Category = "AI")
    UBehaviorTree* BehaviorTreeAsset;
};
