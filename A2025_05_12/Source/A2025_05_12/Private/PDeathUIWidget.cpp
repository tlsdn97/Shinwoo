// Fill out your copyright notice in the Description page of Project Settings.


#include "PDeathUIWidget.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "PPlayer.h"
#include "PGameInstance.h"

void UPDeathUIWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

    if (RestartButton)
    {
        RestartButton->OnClicked.AddDynamic(this, &UPDeathUIWidget::OnRestartClicked);
    }
}

void UPDeathUIWidget::OnRestartClicked()
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

