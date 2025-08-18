// Fill out your copyright notice in the Description page of Project Settings.


#include "PContiueWidget.h"
#include "Components/Button.h"
#include "Blueprint/UserWidget.h"	
#include "Kismet/GameplayStatics.h"
#include "PEndingCredWiget.h"

bool UPContiueWidget::Initialize()
{
	bool bResult = Super::Initialize();

	if (ExitButton)
	{
		ExitButton->OnClicked.AddDynamic(this, &UPContiueWidget::OnExitClicked);
	}

	return bResult;
}

void UPContiueWidget::OnExitClicked()
{
	UUserWidget* EndingWidget = CreateWidget<UUserWidget>(GetWorld(), LoadClass<UUserWidget>(nullptr, TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprint/Game/BP_EndingCredWidget.BP_EndingCredWidget_C'")));
	if (EndingWidget)
	{
		EndingWidget->AddToViewport();
	}

	RemoveFromParent();
}
