// Fill out your copyright notice in the Description page of Project Settings.


#include "PBTService_CheckPlayer.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Actor.h"

UPBTService_CheckPlayer::UPBTService_CheckPlayer()
{
    NodeName = "Check Player Valid";
    bNotifyTick = true;
}

void UPBTService_CheckPlayer::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

    UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
    AActor* Target = Cast<AActor>(BB->GetValueAsObject("TargetActor"));

    if ((Target && !Target->IsValidLowLevel()) || (Target && Target->IsPendingKillPending()))
    {
        BB->ClearValue("TargetActor");
        return;
    }

    if (!Target)
    {
        TimeSinceLost += DeltaSeconds;
        if (TimeSinceLost >= LoseSightTime)
        {
            BB->ClearValue("TargetActor");
            TimeSinceLost = 0.f;
        }
    }
    else
    {
        TimeSinceLost = 0.f;
    }
}
