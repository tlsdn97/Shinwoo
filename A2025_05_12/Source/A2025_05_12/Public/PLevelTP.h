// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PLevelTP.generated.h"

UCLASS()
class A2025_05_12_API APLevelTP : public AActor
{
	GENERATED_BODY()
	
public:	
	APLevelTP();

protected:
	virtual void BeginPlay() override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor)override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	FString TPLelvelName;

	UPROPERTY()
	class UBoxComponent* TPLevelVolume;

};
