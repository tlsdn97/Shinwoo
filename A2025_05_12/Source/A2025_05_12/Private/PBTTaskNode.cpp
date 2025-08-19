// Fill out your copyright notice in the Description page of Project Settings.


#include "PBTTaskNode.h"
#include "AIController.h"		
#include "BehaviorTree/BlackBoardComponent.h"
#include "GameFramework/Pawn.h"
#include "PPatrolRouteComponent.h"

UPBTTaskNode::UPBTTaskNode()
{
	NodeName = "Set Next Partol Point";
}

EBTNodeResult::Type UPBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    AAIController* AICon = OwnerComp.GetAIOwner();
    if (!AICon) return EBTNodeResult::Failed;

    APawn* Pawn = AICon->GetPawn();
    if (!Pawn) return EBTNodeResult::Failed;

    UPPatrolRouteComponent* PatrolComp = Pawn->FindComponentByClass<UPPatrolRouteComponent>();
    if (!PatrolComp) return EBTNodeResult::Failed;

    AActor* NextPoint = PatrolComp->GetNextPatrolPoint();
    if (!NextPoint) return EBTNodeResult::Failed;

    OwnerComp.GetBlackboardComponent()->SetValueAsVector("TargetLocation", NextPoint->GetActorLocation());

    return EBTNodeResult::Succeeded;
}


