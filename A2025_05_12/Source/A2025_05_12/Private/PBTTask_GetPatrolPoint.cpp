// Fill out your copyright notice in the Description page of Project Settings.


#include "PBTTask_GetPatrolPoint.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UPBTTask_GetPatrolPoint::UPBTTask_GetPatrolPoint()
{
	NodeName = "Get Patrol Point";
}

EBTNodeResult::Type UPBTTask_GetPatrolPoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AICon = OwnerComp.GetAIOwner();
    APawn* AIPawn = AICon ? AICon->GetPawn() : nullptr;
    if (!AIPawn) return EBTNodeResult::Failed;

    UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
    if (!NavSys) return EBTNodeResult::Failed;

    FVector Origin = AIPawn->GetActorLocation();
    FNavLocation RandomPoint;

    if (NavSys->GetRandomPointInNavigableRadius(Origin, PatrolRadius, RandomPoint))
    {
        OwnerComp.GetBlackboardComponent()->SetValueAsVector("PatrolLocation", RandomPoint.Location);
        return EBTNodeResult::Succeeded;
    }

    return EBTNodeResult::Failed;
}
