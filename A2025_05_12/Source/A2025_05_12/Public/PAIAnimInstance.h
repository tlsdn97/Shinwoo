// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PAIAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPAIAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
    UPAIAnimInstance();

    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    float Speed;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    bool bIsInAir;

    UPROPERTY(BlueprintReadOnly, Category = "Movement")
    float YawRate;

private:
    APawn* OwnerPawn;
};
