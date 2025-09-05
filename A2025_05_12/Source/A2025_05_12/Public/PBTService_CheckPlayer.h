// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "PBTService_CheckPlayer.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPBTService_CheckPlayer : public UBTService
{
	GENERATED_BODY()
	
public:
    UPBTService_CheckPlayer();

protected:
    virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

private:
    float LoseSightTime = 3.0f; 
    float TimeSinceLost = 0.f;
};
