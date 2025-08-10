// Fill out your copyright notice in the Description page of Project Settings.


#include "PGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "PPlayer.h"

APGameModeBase::APGameModeBase()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Script/Engine.Blueprint'/Game/Blueprint/Player/BP_Player.BP_Player'"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
