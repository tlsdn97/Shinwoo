// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API APPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category = "Game")
    void ShowDieUI();
protected:
    virtual void BeginPlay() override;

    UFUNCTION()
    void OnRePlaytClicked();

    UFUNCTION()
    void OnExitClicked();

    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UPDeathUIWidget> GameOverWidgetClass;

private:
    class UPDeathUIWidget* GameOverWidget;

	
};
