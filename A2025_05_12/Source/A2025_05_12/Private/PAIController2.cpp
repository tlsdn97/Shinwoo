// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIController2.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"

APAIController2::APAIController2()
{
	bAttachToPawn = true;
}

void APAIController2::BeginPlay()
{
    Super::BeginPlay();

    if (BehaviorTreeAsset)
    {
        RunBehaviorTree(BehaviorTreeAsset);

        if (GetBlackboardComponent())
        {
            APawn* MyPawn = GetPawn();
            if (MyPawn)
            {
                GetBlackboardComponent()->SetValueAsVector(TEXT("OriginalLocation"), MyPawn->GetActorLocation());
            }
        }
    }
}
