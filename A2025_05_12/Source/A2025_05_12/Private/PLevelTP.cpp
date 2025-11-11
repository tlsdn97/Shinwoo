// Fill out your copyright notice in the Description page of Project Settings.


#include "PLevelTP.h"
#include "PPlayer.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

APLevelTP::APLevelTP()
{
	PrimaryActorTick.bCanEverTick = true;

	TPLevelVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("TPLevelVolume"));
	RootComponent = TPLevelVolume;
	TPLevelVolume->SetCollisionProfileName(TEXT("OverlapOnlyPawn"));
}

void APLevelTP::BeginPlay()
{
	Super::BeginPlay();
	
}

void APLevelTP::NotifyActorBeginOverlap(AActor* OtherActor)
{
	APPlayer* Player = Cast<APPlayer>(OtherActor);

	if (Player)
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(TPLelvelName));
	}
}

void APLevelTP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

