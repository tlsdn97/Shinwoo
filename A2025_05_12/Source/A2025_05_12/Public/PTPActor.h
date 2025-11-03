// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PTPActor.generated.h"

UCLASS()
class A2025_05_12_API APTPActor : public AActor
{
	GENERATED_BODY()
public:	

	APTPActor();

protected:
	virtual void BeginPlay() override;


	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Teleport")
	class UBoxComponent* TriggerBox;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Teleport")
	AActor* TeleportTarget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Teleport")
	float TeleportDelay = 0.f;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtgerComp, int32 OtgerBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
