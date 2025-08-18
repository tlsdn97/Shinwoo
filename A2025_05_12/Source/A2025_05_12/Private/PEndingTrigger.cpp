// Fill out your copyright notice in the Description page of Project Settings.


#include "PEndingTrigger.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"	

APEndingTrigger::APEndingTrigger()
{
	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollistionBox"));
	RootComponent = CollisionBox;

	CollisionBox->SetCollisionProfileName(TEXT("Trigger"));
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APEndingTrigger::OnOverlapBegin);

}

void APEndingTrigger::BeginPlay()
{
	Super::BeginPlay();
}

void APEndingTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Player") && ContinueWidgetClass)
	{
		ContinuWidget = CreateWidget<UUserWidget>(GetWorld(), ContinueWidgetClass);

		if (ContinuWidget)
		{
			ContinuWidget->AddToViewport();
			APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
			if (PC)
			{
				PC->SetInputMode(FInputModeUIOnly());
				PC->bShowMouseCursor = true;
			}
		}
	}
}

