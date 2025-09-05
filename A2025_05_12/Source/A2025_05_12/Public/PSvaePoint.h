// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PSvaePoint.generated.h"

UCLASS()
class A2025_05_12_API APSvaePoint : public AActor
{
	GENERATED_BODY()
	
public:	
	APSvaePoint();

protected:
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* Collision;

    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* Mesh;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,const FHitResult& SweepResult);

};
