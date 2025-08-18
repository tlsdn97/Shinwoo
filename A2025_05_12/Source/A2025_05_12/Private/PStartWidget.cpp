// Fill out your copyright notice in the Description page of Project Settings.


#include "PStartWidget.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

bool UPStartWidget::Initialize()
{
    bool bResult = Super::Initialize();

    if (StartButton)
        StartButton->OnClicked.AddDynamic(this, &UPStartWidget::OnStartClicked);

    if (QuitButton)
        QuitButton->OnClicked.AddDynamic(this, &UPStartWidget::OnQuitClicked);

    return bResult;
}

void UPStartWidget::OnStartClicked()
{
    if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
    {
        PC->bShowMouseCursor = false;
        FInputModeGameOnly InputMode;
        PC->SetInputMode(InputMode);
    }

    UGameplayStatics::OpenLevel(this, TEXT("GameMap"));
}

void UPStartWidget::OnQuitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, true);
}
