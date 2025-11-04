// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "PGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPGameInstance();

    void SetSavedLocation(const FVector& NewLocation);
    FVector GetSavedLocation() const;
    bool HasSavedLocation() const;

    void ClearSavedLocation();

private:
    FVector SavedLocation;
    bool bHasSavedLocation;
};
