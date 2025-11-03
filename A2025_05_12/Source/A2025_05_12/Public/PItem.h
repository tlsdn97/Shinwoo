// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PItem.generated.h"

UCLASS()
class A2025_05_12_API APItem : public AActor
{
	GENERATED_BODY()
	
public:
	APItem();
protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
    UStaticMeshComponent* Mesh;

    UPROPERTY(VisibleAnywhere)
    class USphereComponent* Collision;

    UFUNCTION()
    void OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};