// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PPlayer.generated.h"

UCLASS()
class A2025_05_12_API APPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	APPlayer();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    class UCameraComponent* FirstPersonCamera;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
    class USkeletalMeshComponent* FirstPersonArms;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Light")
    class USpotLightComponent* ShoulderLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float WalkSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float RunSpeed = 600.f;

    UFUNCTION()
    void ToggleShoulderLight();

    void Yaw(float Value);
    void Pitch(float Value);

    void MoveX(float Value);
    void MoveY(float Value);

    void StartRunning();
    void StopRunning();

    bool bLightOn = true;
    bool bIsRunning = false;
};

