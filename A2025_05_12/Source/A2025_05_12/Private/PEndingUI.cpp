// Fill out your copyright notice in the Description page of Project Settings.


#include "PEndingUI.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"


bool UPEndingUI::Initialize()
{
    bool bResult = Super::Initialize();

    if (EndButton)
        EndButton->OnClicked.AddDynamic(this, &UPEndingUI::OnEndClicked);

    return bResult;
}

void UPEndingUI::OnEndClicked()
{
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        PC->bShowMouseCursor = false;
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
    }

    UGameplayStatics::OpenLevel(this, TEXT("StartMap"));
}
