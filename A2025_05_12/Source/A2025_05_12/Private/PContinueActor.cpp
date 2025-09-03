// Fill out your copyright notice in the Description page of Project Settings.


#include "PContinueActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"

APContinueActor::APContinueActor()
{
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	RootComponent = CollisionBox;

	CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
	CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}

void APContinueActor::BeginPlay()
{
	Super::BeginPlay();
	
	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APContinueActor::OnOverlapBegin);
}

void APContinueActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bIsTriggered) return;

	if (OtherActor && OtherActor->ActorHasTag("Player"))
	{
		if (ContinueWidgetClass)
		{
			UUserWidget* ContinuehWidget = CreateWidget<UUserWidget>(GetWorld(), ContinueWidgetClass);
			if (ContinuehWidget)
			{
				ContinuehWidget->AddToViewport();
				bIsTriggered = true;

				APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
				if (PC)
				{
					PC->SetInputMode(FInputModeUIOnly());
					PC->bShowMouseCursor = true;
				}
			}
		}
	}
}

