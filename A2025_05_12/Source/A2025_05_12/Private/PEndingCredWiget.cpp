// Fill out your copyright notice in the Description page of Project Settings.


#include "PEndingCredWiget.h"
#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UPEndingCredWiget::NativeConstruct()
{
    Super::NativeConstruct();

    if (ExitButton)
    {
        ExitButton->OnClicked.AddDynamic(this, &UPEndingCredWiget::OnExitClicked);
    }

    GetWorld()->GetTimerManager().SetTimer( ScrollTimerHandle, this, &UPEndingCredWiget::AutoScroll, 0.02f, true
    );
}

void UPEndingCredWiget::AutoScroll()
{
    if (CreditScrollBox)
    {
        ScrollOffset += 1.0f;
        CreditScrollBox->SetScrollOffset(ScrollOffset);
    }
}

void UPEndingCredWiget::OnExitClicked()
{
    UGameplayStatics::OpenLevel(this, FName("StartMenuMap"));
}