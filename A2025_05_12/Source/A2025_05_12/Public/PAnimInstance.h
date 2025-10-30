// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
    UPAnimInstance();

    virtual void NativeUpdateAnimation(float DeltaSeconds) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float ForwardSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
    float RightSpeed;

    UPROPERTY(BlueprintReadOnly, Category = "Character")
    APawn* OwningPawn;
};
