// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PEndingUI.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPEndingUI : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	class UButton* EndButton;

	virtual bool Initialize() override;
	
	UFUNCTION()
	void OnEndClicked();

	
};
