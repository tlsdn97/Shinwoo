// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PAIGhost.generated.h"

UCLASS()
class A2025_05_12_API APAIGhost : public ACharacter
{
	GENERATED_BODY()

public:
	APAIGhost();
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeeds = 400.f;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* DetectionSphere;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class UPawnSensingComponent* PawnSensing;

	

	FVector OriginalLocation;
	bool bIsChasing;
	bool bCanChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float ChaseDuration = 0.0f;
	FTimerHandle ChaseTimerHandle;

	UFUNCTION()
	void OnSeePawn(APawn* Pawn);
	void StopChase();
};
