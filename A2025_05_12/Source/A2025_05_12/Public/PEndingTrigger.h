// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PEndingTrigger.generated.h"

UCLASS()
class A2025_05_12_API APEndingTrigger : public AActor
{
	GENERATED_BODY()
	
public:	
	APEndingTrigger();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* CollisionBox;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> ContinueWidgetClass;

	UPROPERTY()
	class UUserWidget* ContinuWidget;


};
