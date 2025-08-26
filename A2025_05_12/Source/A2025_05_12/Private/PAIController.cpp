// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController.h"
#include "PAIGhost.h"

APAIController::APAIController(FObjectInitializer const& ObjectInitializer)
{
}

void APAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (APAIGhost* const npc = Cast<APAIGhost>(InPawn))
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
