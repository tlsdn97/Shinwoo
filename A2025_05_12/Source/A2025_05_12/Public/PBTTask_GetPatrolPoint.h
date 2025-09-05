// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PBTTask_GetPatrolPoint.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPBTTask_GetPatrolPoint : public UBTTaskNode
{
	GENERATED_BODY()
public:
    UPBTTask_GetPatrolPoint();

protected:
    virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

    UPROPERTY(EditAnywhere, Category = "AI")
    float PatrolRadius = 800.f;
};
