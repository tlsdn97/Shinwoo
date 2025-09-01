// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController.h"
#include "PAIGhost2.h"
#include "BehaviorTree/BehaviorTree.h"

APAIController::APAIController(FObjectInitializer const& ObjectInitializer)
{
}

void APAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (APAIGhost2* const npc = Cast<APAIGhost2>(InPawn))
	{
		if (UBehaviorTree* const tree = npc->GetBehavioTree())
		{
			UBlackboardComponent* b;
			UseBlackboard(tree->BlackboardAsset,b);
			Blackboard = b;
			RunBehaviorTree(tree);
		}
	}
}
