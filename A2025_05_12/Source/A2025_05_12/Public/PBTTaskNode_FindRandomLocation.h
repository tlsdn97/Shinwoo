// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PBTTaskNode_FindRandomLocation.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPBTTaskNode_FindRandomLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPBTTaskNode_FindRandomLocation();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere)
	float SearchRadius = 1000.f;
};
