// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PStartGameMode.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API APStartGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UUserWidget> StartMenuWidgetClass;

private:
    UUserWidget* StartMenuWidget;
};