// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost.h"
#include "PAIController.h"

APAIGhost::APAIGhost()
{
	AIControllerClass = APAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
}
