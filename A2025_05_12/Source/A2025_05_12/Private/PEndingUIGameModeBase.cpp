// Fill out your copyright notice in the Description page of Project Settings.


#include "PEndingUIGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"


void APEndingUIGameModeBase::BeginPlay()
{
    Super::BeginPlay();

    if (EndingMenuWidgetClass)
    {
        EndingMenuWidget = CreateWidget<UUserWidget>(GetWorld(), EndingMenuWidgetClass);
        if (EndingMenuWidget)
        {
            EndingMenuWidget->AddToViewport();

            APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
            if (PC)
            {
                PC->SetInputMode(FInputModeUIOnly());
                PC->bShowMouseCursor = true;
            }
        }
    }
}
