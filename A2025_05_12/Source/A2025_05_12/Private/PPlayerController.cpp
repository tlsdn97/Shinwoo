// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayerController.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "PDeathUIWidget.h"
#include "PDieWidget.h"
#include "PEndingUI.h"

void APPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (!GameOverWidgetClass)
    {
        UE_LOG(LogTemp, Warning, TEXT("GameOverWidgetClass is not set."));
    }

}

void APPlayerController::ShowDieUI()
{
    if (GameOverWidget || !GameOverWidgetClass) return;

    GameOverWidget = CreateWidget<UPDeathUIWidget>(this, GameOverWidgetClass);
    if (!GameOverWidget) return;

    GameOverWidget->AddToViewport();
    SetInputMode(FInputModeUIOnly());
    bShowMouseCursor = true;
    if (GetPawn()) GetPawn()->DisableInput(this);

    if (GameOverWidget->RestartButton)
    {
        GameOverWidget->RestartButton->OnClicked.AddDynamic(this, &APPlayerController::OnRePlaytClicked);
    }

    if (GameOverWidget->QuitButton)
    {
        GameOverWidget->QuitButton->OnClicked.AddDynamic(this, &APPlayerController::OnExitClicked);
    }
}

void APPlayerController::OnRePlaytClicked()
{
    SetInputMode(FInputModeGameOnly());
    bShowMouseCursor = false;

    if (GetPawn())
    {
        GetPawn()->EnableInput(this);
    }

    UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void APPlayerController::OnExitClicked()
{
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}
