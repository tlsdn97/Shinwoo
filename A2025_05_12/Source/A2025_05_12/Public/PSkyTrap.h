// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PSkyTrap.generated.h"

UCLASS()
class A2025_05_12_API APSkyTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	APSkyTrap();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* MeshComp;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UBoxComponent* CollisionBox;

    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

    void ShowDeathUI();

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> DeathUIClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "0.0"))
    float FallSpeed = 1500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FailSafe", meta = (ClampMin = "0.0"))
    float AutoDeathTime = 0.0f;
private:
    bool bHasTriggered = false;
};
