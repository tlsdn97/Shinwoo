// Fill out your copyright notice in the Description page of Project Settings.


#include "PDeathUIWidget.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "PPlayer.h"

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

