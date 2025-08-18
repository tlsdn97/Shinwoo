// Fill out your copyright notice in the Description page of Project Settings.


#include "PAIAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h" 

UPAIAnimInstance::UPAIAnimInstance()
{
    Speed = 0.f;
    bIsInAir = false;
    YawRate = 0.f;
    OwnerPawn = nullptr;
}

void UPAIAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
    Super::NativeUpdateAnimation(DeltaSeconds);

    if (!OwnerPawn)
    {
        OwnerPawn = TryGetPawnOwner();
        if (!OwnerPawn) return;
    }

    FVector Velocity = OwnerPawn->GetVelocity();
    Velocity.Z = 0.f;
    Speed = Velocity.Size();

    ACharacter* Character = Cast<ACharacter>(OwnerPawn);
    if (Character)
    {
        bIsInAir = Character->GetCharacterMovement()->IsFalling();

        FRotator DeltaRot = Character->GetActorRotation() - Character->GetActorRotation();
        YawRate = DeltaRot.Yaw / DeltaSeconds;
    }
}
