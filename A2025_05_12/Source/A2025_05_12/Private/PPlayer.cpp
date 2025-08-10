// Fill out your copyright notice in the Description page of Project Settings.


#include "PPlayer.h"

APPlayer::APPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

}

void APPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void APPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

