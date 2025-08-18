// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PEndingCredWiget.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPEndingCredWiget : public UUserWidget
{
	GENERATED_BODY()

protected:
    UPROPERTY(meta = (BindWidget))
    class UScrollBox* CreditScrollBox;

    UPROPERTY(meta = (BindWidget))
    class UButton* ExitButton;

    FTimerHandle ScrollTimerHandle;
    float ScrollOffset = 0.0f;

    virtual void NativeConstruct() override;

    void AutoScroll();

    UFUNCTION()
    void OnExitClicked();
};
