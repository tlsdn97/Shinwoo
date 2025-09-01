// Fill out your copyright notice in the Description page of Project Settings.


#include "PJumpTrap.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

APJumpTrap::APJumpTrap()
{
	PrimaryActorTick.bCanEverTick = false;

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(RootComponent);
	TriggerBox->SetBoxExtent(FVector(100, 100, 50));
	TriggerBox->SetCollisionProfileName("Trigger");

	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &APJumpTrap::OnOverlapBegin);

}

void APJumpTrap::BeginPlay()
{
	Super::BeginPlay();
	
}

void APJumpTrap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	ACharacter* Character = Cast<ACharacter>(OtherActor);
	if (Character)
	{
		FRotator ControlRot = Character->Controller->GetControlRotation();
		FVector LaunchDir = ControlRot.Vector();

		LaunchDir.Z = UpPower;

		LaunchDir = LaunchDir.GetSafeNormal();
		FVector LaunchVelocity = LaunchDir * ForwardPower;


		// FVector FowardDir = GetActorForwardVector();
		// FVector LaunchVelocity = (FowardDir * ForwardPower) + FVector(0.f, 0.f, UpPower);

		Character->LaunchCharacter(LaunchVelocity, true, true);
	}
}

