// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PAIGhost2.generated.h"

UCLASS()
class A2025_05_12_API APAIGhost2 : public ACharacter
{
	GENERATED_BODY()

public:
	APAIGhost2();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
   class UPawnSensingComponent* PawnSensingComp;

   UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
   float WalkSpeeds = 400.f;

    UFUNCTION()
    void OnSeePawn2(APawn* Pawn);
};
