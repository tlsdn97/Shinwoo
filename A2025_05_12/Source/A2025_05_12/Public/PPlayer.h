// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"
#include "PPlayer.generated.h"

UCLASS()
class A2025_05_12_API APPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	APPlayer();
protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere, Category = "Camera")
   class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, Category = "Camera")
   class UCameraComponent* FollowCamera;


    UPROPERTY(VisibleAnywhere, Category = "Headlight")
  class USceneComponent* HeadLightRoot;

    UPROPERTY(VisibleAnywhere, Category = "Headlight")
    class USpotLightComponent* HeadLight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float WalkSpeed = 300.f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float RunSpeed = 600.f;

    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<class UPFixedTextWidget> TextWidgetClass;

    UPROPERTY()
    class UPFixedTextWidget* TextWidgetInstance;


    UFUNCTION()
    void ToggleShoulderLight();

    void Yaw(float Value);
    void Pitch(float Value);

    void MoveX(float Value);
    void MoveY(float Value);

    void StartRunning();
    void StopRunning();

    void TryInteract();

    bool bHeadLightOn;
    bool bIsRunning = false;
};

