// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController2.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

APAIController2::APAIController2()
{
	bAttachToPawn = true;
}

void APAIController2::OnPossess(APawn* InPawn)
{
    Super::OnPossess(InPawn);
    if (BehaviorTreeAsset)
    {
        RunBehaviorTree(BehaviorTreeAsset);
        if (UBlackboardComponent* BB = GetBlackboardComponent())
        {
            BB->SetValueAsBool(Key_IsChasing, false);
            BB->SetValueAsFloat(Key_ChaseTimeLeft, 0.f);
        }
    }
}
