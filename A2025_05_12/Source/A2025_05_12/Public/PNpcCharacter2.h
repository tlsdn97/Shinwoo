// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PNpcCharacter2.generated.h"

UCLASS()
class A2025_05_12_API APNpcCharacter2 : public ACharacter
{
	GENERATED_BODY()

public:
	APNpcCharacter2();
protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
private:
    float BaseZ;
    float FloatSpeed;
    float FloatHeight;

};
