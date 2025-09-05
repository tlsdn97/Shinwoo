// Fill out your copyright notice in the Description page of Project Settings.


#include "PDieWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "PPlayer.h"


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
    APPlayer* Player = Cast<APPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (!Player) return;

    FVector RespawnLocation = Player->GetLastSavePoint();

    if (RespawnLocation != FVector::ZeroVector)
    {
        Player->SetActorLocation(RespawnLocation);

        RemoveFromParent();

        if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
        {
            PC->SetInputMode(FInputModeGameOnly());
            PC->bShowMouseCursor = false;
        }
    }
    else
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
}