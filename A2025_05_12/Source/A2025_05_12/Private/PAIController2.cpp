// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController2.h"
#include "BehaviorTree/BlackboardComponent.h"

void APAIController2::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (BehaviorTree)
    {
        RunBehaviorTree(BehaviorTree);
    }
}
