// Fill out your copyright notice in the Description page of Project Settings.


#include "PBTTaskNode_FindRandomLocation.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UPBTTaskNode_FindRandomLocation::UPBTTaskNode_FindRandomLocation()
{
	NodeName = "Find Random Partol Location";
}

EBTNodeResult::Type UPBTTaskNode_FindRandomLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	APawn* AIPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (!AIPawn) return EBTNodeResult::Failed;

	UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
	if (!NavSys) return EBTNodeResult::Failed;

	FNavLocation OutLocation;
	if (NavSys->GetRandomReachablePointInRadius(AIPawn->GetActorLocation(), SearchRadius, OutLocation))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsVector("PartolLocation", OutLocation.Location);
		return EBTNodeResult::Succeeded;
	}


	return EBTNodeResult::Failed;
}
