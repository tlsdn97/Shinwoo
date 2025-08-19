// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PPatrolRouteComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class A2025_05_12_API UPPatrolRouteComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere, Category = "AI")
	TArray<AActor*> PartolPoints;

	AActor* GetNextPatrolPoint();

private:
	int32 CurrentIndex = -1;
};
