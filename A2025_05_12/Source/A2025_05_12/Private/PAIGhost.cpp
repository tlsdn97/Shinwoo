// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIGhost.h"
#include "PPlayerController.h"
#include "PAIController.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


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

}

UBehaviorTree* APAIGhost::GetBehavioTree() const
{
	return Tree;
}

void APAIGhost::BeginPlay()
{
    Super::BeginPlay();
    DetectionSphere->OnComponentBeginOverlap.AddDynamic(this, &APAIGhost::OnOverlapBegin);

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