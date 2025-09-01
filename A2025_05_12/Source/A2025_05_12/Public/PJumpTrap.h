// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PJumpTrap.generated.h"

UCLASS()
class A2025_05_12_API APJumpTrap : public AActor
{
	GENERATED_BODY()
	
public:	
	APJumpTrap();

protected:
    virtual void BeginPlay() override;
   
    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* TriggerBox;
    
    UPROPERTY(EditAnywhere, Category = "Jump Settings")
    float ForwardPower = 3000.f;
    
    UPROPERTY(EditAnywhere, Category = "Jump Settings")
    float UpPower = 0.7f;
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	 

};
