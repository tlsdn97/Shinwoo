// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PContinueWdiget.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPContinueWdiget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* ContinueMessage;

	UPROPERTY(meta = (BindWidget))
	class UButton* AndButton;

	UFUNCTION()
	void OnAndClicked();
	
};
