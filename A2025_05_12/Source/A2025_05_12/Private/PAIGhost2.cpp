// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost2.h"


APAIGhost2::APAIGhost2()
{
    PrimaryActorTick.bCanEverTick = true;
}

UBehaviorTree* APAIGhost2::GetBehavioTree() const
{
    return nullptr;
}

void APAIGhost2::BeginPlay()
{
    Super::BeginPlay();
}


