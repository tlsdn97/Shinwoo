// Fill out your copyright notice in the Description page of Project Settings.


#include "PDialogueWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "PNcpCharacter.h"

void UPDialogueWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (NextButton)
        NextButton->OnClicked.AddDynamic(this, &UPDialogueWidget::NextDialogue);

    if (EndButton)
        EndButton->OnClicked.AddDynamic(this, &UPDialogueWidget::OnEndButtonClicked);
}

void UPDialogueWidget::InitDialogue(const TArray<FString>& Lines, APNcpCharacter* OwnerNPC)
{
    DialogueLines = Lines;
    NPC = OwnerNPC;
    CurrentIndex = 0;

    if (DialogueText && DialogueLines.Num() > 0)
        DialogueText->SetText(FText::FromString(DialogueLines[CurrentIndex]));
}


void UPDialogueWidget::NextDialogue()
{
    if (DialogueLines.Num() == 0) return;

    CurrentIndex++;
    if (CurrentIndex >= DialogueLines.Num())
    {
        OnEndButtonClicked();
    }
    else
    {
        DialogueText->SetText(FText::FromString(DialogueLines[CurrentIndex]));
    }
}

void UPDialogueWidget::OnEndButtonClicked()
{
    if (NPC)
    {
        NPC->EndConversation();
    }
}
