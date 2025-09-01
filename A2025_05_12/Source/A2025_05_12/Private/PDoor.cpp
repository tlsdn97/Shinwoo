// Fill out your copyright notice in the Description page of Project Settings.


#include "PDoor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "PPlayer.h"
#include "TimerManager.h"

APDoor::APDoor()
{
	PrimaryActorTick.bCanEverTick = true;

	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	RootComponent = DoorFrame;

	Door = CreateDefaultSubobject <UStaticMeshComponent>(TEXT("Door"));
	Door->SetupAttachment(DoorFrame);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(RootComponent);

	TriggerBox->SetBoxExtent(FVector(100.f, 100.f, 200.f));
	TriggerBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerBox->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	TriggerBox->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	TriggerBox->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
	TriggerBox->SetGenerateOverlapEvents(true);
}

void APDoor::BeginPlay()
{
	Super::BeginPlay();
	
	ClosedYaw = Door->GetRelativeRotation().Yaw;
	OpenedYaw = ClosedYaw + OpenedYaw + OpenAngle;

	if (OpenCurve)
	{
		FOnTimelineFloat ProgressFunction;
		ProgressFunction.BindUFunction(this, FName("HandleTimelineProgress"));
		DoorTimeline.AddInterpFloat(OpenCurve, ProgressFunction);
	}

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APDoor::OnTriggerBoxOverlapBegin);
}

void APDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DoorTimeline.TickTimeline(DeltaTime);

}

void APDoor::OnTriggerBoxOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APPlayer* Player = Cast<APPlayer>(OtherActor);
	if (Player && !bIsOpen)
	{
		SetOpenDirection(Player);
		DoorTimeline.PlayFromStart();
		bIsOpen = true;

		GetWorldTimerManager().ClearTimer(CloseTimerHandle);
		GetWorldTimerManager().SetTimer(CloseTimerHandle, this, &APDoor::CloseDoor, CloseDelay, false);
	}
}

void APDoor::HandleTimelineProgress(float Value)
{
	float NewYaw = FMath::Lerp(ClosedYaw, OpenedYaw, Value);
	FRotator NewRot = Door->GetRelativeRotation();
	NewRot.Yaw = NewYaw;
	Door->SetRelativeRotation(NewRot);
}

void APDoor::SetOpenDirection(APPlayer* Player)
{
	FVector PlayerForward = Player->GetActorForwardVector(); 
	FVector DoorForward = DoorFrame->GetForwardVector();

	float Dot = FVector::DotProduct(DoorForward, PlayerForward);

	if (Dot < 0)
	{
		OpenedYaw = ClosedYaw + OpenAngle;
	}
	else
	{
		OpenedYaw = ClosedYaw - OpenAngle;
	}
}

void APDoor::CloseDoor()
{
	if (bIsOpen)
	{
		DoorTimeline.ReverseFromEnd();
		bIsOpen = false;
	}
}

