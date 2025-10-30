// Fill out your copyright notice in the Description page of Project Settings.

#include "PAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h" 

UPAnimInstance::UPAnimInstance()
{
    ForwardSpeed = 0.0f;
    RightSpeed = 0.0f;
}

void UPAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (!OwningPawn)
    {
        OwningPawn = TryGetPawnOwner();
    }

    if (!OwningPawn) return;

    FVector Velocity = OwningPawn->GetVelocity();
    FRotator ControlRotation = OwningPawn->GetActorRotation();

    FVector LocalVelocity = ControlRotation.UnrotateVector(Velocity);

    ForwardSpeed = LocalVelocity.X;
    RightSpeed = LocalVelocity.Y;
}
