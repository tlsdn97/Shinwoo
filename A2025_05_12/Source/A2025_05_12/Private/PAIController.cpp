// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController.h"
#include "BehaviorTree/BehaviorTree.h"

void APAIController::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);

    if (BehaviorTreeAsset)
    {
        RunBehaviorTree(BehaviorTreeAsset);
    }
}
