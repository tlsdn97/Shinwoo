// Fill out your copyright notice in the Description page of Project Settings.


#include "PBTService_CheckPlayerLost.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

UPBTService_CheckPlayerLost::UPBTService_CheckPlayerLost()
{
	bNotifyTick = true;
	Interval = 0.5f;
}

void UPBTService_CheckPlayerLost::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
    AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetActor"));
    AAIController* AICon = OwnerComp.GetAIOwner();
    ACharacter* AIPawn = Cast<ACharacter>(AICon ? AICon->GetPawn() : nullptr);

    UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();
    if (BBComp)
    {
        BBComp->SetValueAsObject("TargetActor", Target);
    }

    if (!Target || !AIPawn) return;

    const float Distance = FVector::Dist(AIPawn->GetActorLocation(), Target->GetActorLocation());


    if (!AICon->LineOfSightTo(Target) || Distance > LoseDistance)
    {
        UE_LOG(LogTemp, Warning, TEXT("[AI] 시야에서 놓침: 추적 중지"));
        OwnerComp.GetBlackboardComponent()->ClearValue("TargetActor");
        AIPawn->GetCharacterMovement()->MaxWalkSpeed = 300.f;
    }
}
