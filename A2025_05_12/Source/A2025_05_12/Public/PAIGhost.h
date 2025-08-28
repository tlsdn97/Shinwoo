// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BehaviorTree.h"
#include "PAIGhost.generated.h"

UCLASS()
class A2025_05_12_API APAIGhost : public ACharacter
{
	GENERATED_BODY()

public:
	APAIGhost();

	UBehaviorTree* GetBehavioTree() const;

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
		bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 300.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta =(AllowPrivateAccess = "true"))
	UBehaviorTree* Tree;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class USphereComponent* DetectionSphere;
};
