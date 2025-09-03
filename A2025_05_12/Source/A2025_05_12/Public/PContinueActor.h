// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PContinueActor.generated.h"

UCLASS()
class A2025_05_12_API APContinueActor : public AActor
{
	GENERATED_BODY()
	
public:	
	APContinueActor();
protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, Category = "Collision")
    class UBoxComponent* CollisionBox;

    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UUserWidget> ContinueWidgetClass;

    bool bIsTriggered = false;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


};
