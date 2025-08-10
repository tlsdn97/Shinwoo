// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "PDoor.generated.h"

UCLASS()
class A2025_05_12_API APDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	APDoor();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* DoorFrame;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* Door;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* TriggerBox;

	UPROPERTY(EditAnywhere)
	UCurveFloat* OpenCurve;

	float ClosedYaw;
	float OpenedYaw;

	UPROPERTY(EditAnywhere, Category = "Door")
	float OpenAngle = 90.f;

	UPROPERTY(EditAnywhere, Category = "Door")
	float CloseDelay = 5.f;

	FTimerHandle CloseTimerHandle;

	FTimeline DoorTimeline;

	bool bIsOpen = false;

	UFUNCTION()
	void OnTriggerBoxOverlapBegin(class UPrimitiveComponent* OverlappedComp,AActor* OtherActor,class UPrimitiveComponent* OtherComp,int32 OtherBodyIndex,bool bFromSweep,const FHitResult& SweepResult);

	UFUNCTION()
	void HandleTimelineProgress(float Value);

	void SetOpenDirection(class APPlayer* Player);

	void CloseDoor();


};
