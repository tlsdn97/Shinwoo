// Fill out your copyright notice in the Description page of Project Settings.


#include "PDieWidget.h"
#include "PGameInstance.h"
#include "PPlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "PDieActor.h"


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
    if (!PC) return;

    UPGameInstance* GI = Cast<UPGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
    APPlayer* Player = Cast<APPlayer>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    if (!Player || !GI) return;

    if (GI->HasSavedLocation())
    {
        FVector RespawnLocation = GI->GetSavedLocation();
        Player->SetActorLocation(RespawnLocation);
    }
    else
    {
        FName CurrentLevel = *UGameplayStatics::GetCurrentLevelName(GetWorld());
        UGameplayStatics::OpenLevel(GetWorld(), CurrentLevel);
    }

    RemoveFromParent();

    PC->SetInputMode(FInputModeGameOnly());
    PC->bShowMouseCursor = false;
}

