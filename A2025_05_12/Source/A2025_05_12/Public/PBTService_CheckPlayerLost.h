// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "PBTService_CheckPlayerLost.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPBTService_CheckPlayerLost : public UBTService
{
	GENERATED_BODY()
public:
	UPBTService_CheckPlayerLost();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere)
	float LoseDistance = 2000.f;
	
};
