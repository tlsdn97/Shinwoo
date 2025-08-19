// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "PBTTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPBTTaskNode : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPBTTaskNode();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
