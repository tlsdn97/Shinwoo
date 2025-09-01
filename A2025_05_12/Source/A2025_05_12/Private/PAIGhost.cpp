// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost.h"
#include "PPlayerController.h"
#include "PAIController.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"


APAIGhost::APAIGhost()
{
	PrimaryActorTick.bCanEverTick = true;

	DetectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("DetectionSphere"));
	DetectionSphere->SetupAttachment(RootComponent);
	DetectionSphere->SetSphereRadius(150.f);
	DetectionSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	DetectionSphere->SetCollisionObjectType(ECC_WorldDynamic);
	DetectionSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	DetectionSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

	AIControllerClass = APAIController::StaticClass();
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;

    PawnSensing = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    PawnSensing->SightRadius = 1000.0f;
    PawnSensing->SetPeripheralVisionAngle(60.0f);

    bIsChasing = false;
    bCanChase = true;

    GetCharacterMovement()->MaxWalkSpeed = WalkSpeeds;

}

void APAIGhost::BeginPlay()
{
    Super::BeginPlay();
    DetectionSphere->OnComponentBeginOverlap.AddDynamic(this, &APAIGhost::OnOverlapBegin);

    if (PawnSensing)
    {
        PawnSensing->OnSeePawn.AddDynamic(this, &APAIGhost::OnSeePawn);
    }

    OriginalLocation = GetActorLocation();

}

void APAIGhost::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,  UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* Player = Cast<ACharacter>(OtherActor);
	if (!Player) return;

	APPlayerController* PC = Cast<APPlayerController>(Player->GetController());
	if (PC)
	{
		PC->ShowDieUI();
	}
}

void APAIGhost::OnSeePawn(APawn* Pawn)
{
    if (!bCanChase) return;

    AAIController* AICon = Cast<AAIController>(GetController());
    if (AICon && Pawn)
    {
        UBlackboardComponent* BB = AICon->GetBlackboardComponent();
        if (BB)
        {
            BB->SetValueAsObject(TEXT("TargetActor"), Pawn);
            bIsChasing = true;

            GetWorldTimerManager().ClearTimer(ChaseTimerHandle);
            GetWorldTimerManager().SetTimer(ChaseTimerHandle, this, &APAIGhost::StopChase, ChaseDuration, false);
        }
    }
}

void APAIGhost::StopChase()
{
    AAIController* AICon = Cast<AAIController>(GetController());
    if (AICon)
    {
        UBlackboardComponent* BB = AICon->GetBlackboardComponent();
        if (BB)
        {
            BB->ClearValue(TEXT("TargetActor"));
        }
    }

    SetActorLocation(OriginalLocation);

    bIsChasing = false;
    bCanChase = false;

    FTimerHandle ResetHandle;
    GetWorldTimerManager().SetTimer(ResetHandle, FTimerDelegate::CreateLambda([this]()
        {
            bCanChase = true;
        }), 1.0f, false);
}

