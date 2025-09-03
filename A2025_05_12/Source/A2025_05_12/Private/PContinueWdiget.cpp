// Fill out your copyright notice in the Description page of Project Settings.


#include "PContinueWdiget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UPContinueWdiget::NativeConstruct()
{
	Super::NativeConstruct();

	if (AndButton)
	{
		AndButton->OnClicked.AddDynamic(this, &UPContinueWdiget::OnAndClicked);
	}
}

void UPContinueWdiget::OnAndClicked()
{
	if (APlayerController* PC = GetWorld()->GetFirstPlayerController())
	{
		PC->bShowMouseCursor = false;
		FInputModeGameOnly InputMode;
		PC->SetInputMode(InputMode);
	}

	UGameplayStatics::OpenLevel(this, TEXT("EndingMap"));
}
