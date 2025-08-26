// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost2.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "Blueprint/UserWidget.h"

APAIGhost2::APAIGhost2()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APAIGhost2::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &APAIGhost2::OnOverlapBegin);
	
}

void APAIGhost2::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
{
    if (!OtherActor || OtherActor == this) return;

    ACharacter* PlayerChar = Cast<ACharacter>(OtherActor);
    if (!PlayerChar) return;

    if (UIWidgetClass)
    {
        UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), UIWidgetClass);
        if (Widget)
        {
            Widget->AddToViewport();

            if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
            {
                PC->bShowMouseCursor = true;
                PC->SetInputMode(FInputModeUIOnly());
            }
        }
    }
}
