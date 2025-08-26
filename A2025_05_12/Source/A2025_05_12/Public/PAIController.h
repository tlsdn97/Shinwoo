// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "PAIController.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API APAIController : public AAIController
{
	GENERATED_BODY()

public:
	explicit APAIController(FObjectInitializer const& ObjectInitializer);

protected:
	virtual void OnPossess(APawn* InPawn) override;
};
