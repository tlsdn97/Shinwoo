// Fill out your copyright notice in the Description page of Project Settings.


#include "PTPActor.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "PPlayer.h"
#include "Engine/World.h"

APTPActor::APTPActor()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	RootComponent = TriggerBox;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	MeshComponent->SetupAttachment(RootComponent);
	MeshComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APTPActor::OnOverlapBegin);
}

void APTPActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void APTPActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!TeleportTarget || !OtherActor || !OtherActor->IsA(APPlayer::StaticClass()))
	{
		return;
	}

	AActor* Target = TeleportTarget;
	AActor* Player = OtherActor;
	UWorld* World = GetWorld();

	if (!World) return;

	if (TeleportDelay > 0.f)
	{
		FTimerHandle TimerHandle;

		World->GetTimerManager().SetTimer(TimerHandle, [Player, Target]()
			{
				if (Player && Target)
				{
					Player->SetActorLocation(Target->GetActorLocation());
				}
			}, TeleportDelay, false);
	}
	else
	{
		Player->SetActorLocation(Target->GetActorLocation());
	}
}