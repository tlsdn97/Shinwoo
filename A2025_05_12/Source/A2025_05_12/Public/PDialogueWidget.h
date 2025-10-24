// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PDialogueWidget.generated.h"

/**
 * 
 */
UCLASS()
class A2025_05_12_API UPDialogueWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
    UFUNCTION(BlueprintCallable)
    void InitDialogue(const TArray<FString>& Lines, class APNcpCharacter* OwnerNPC);

protected:
    virtual void NativeConstruct() override;

    UFUNCTION()
    void NextDialogue();

    UFUNCTION()
    void OnEndButtonClicked();

    UPROPERTY()
    class APNcpCharacter* NPC;

    UPROPERTY()
    TArray<FString> DialogueLines;

    int32 CurrentIndex = 0;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* DialogueText;

    UPROPERTY(meta = (BindWidget))
    class UButton* NextButton;

    UPROPERTY(meta = (BindWidget))
    class UButton* EndButton;
};
