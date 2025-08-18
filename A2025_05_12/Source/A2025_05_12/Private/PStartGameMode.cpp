// Fill out your copyright notice in the Description page of Project Settings.


#include "PStartGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

void APStartGameMode::BeginPlay()
{
    Super::BeginPlay();

    if (StartMenuWidgetClass)
    {
        StartMenuWidget = CreateWidget<UUserWidget>(GetWorld(), StartMenuWidgetClass);
        if (StartMenuWidget)
        {
            StartMenuWidget->AddToViewport();

            APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
            if (PC)
            {
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}
