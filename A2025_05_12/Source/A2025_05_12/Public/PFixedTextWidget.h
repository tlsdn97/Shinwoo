// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PFixedTextWidget.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPFixedTextWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* InfoText;
};
