// Fill out your copyright notice in the Description page of Project Settings.


#include "PDieWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UPDieWidget::NativeConstruct()
{
    Super::NativeConstruct();

	if (RetryButton)
	{
		RetryButton->OnClicked.AddDynamic(this, &UPDieWidget::OnRetryClicked);
	}
}

void UPDieWidget::OnRetryClicked()
{
    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        FName CurrentLevel = *UGameplayStatics::GetCurrentLevelName(GetWorld());
        UGameplayStatics::OpenLevel(GetWorld(), CurrentLevel);

        PC->SetInputMode(FInputModeGameOnly());
        PC->bShowMouseCursor = false;
    }
}