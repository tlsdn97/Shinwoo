// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PLightActor.generated.h"

UCLASS()
class A2025_05_12_API APLightActor : public AActor
{
	GENERATED_BODY()
	
public:	
	APLightActor();
protected:
    UPROPERTY(VisibleAnywhere, Category = "Components")
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    UStaticMeshComponent* LightMesh;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class URectLightComponent* RectLight;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Light")
    FVector LightOffset;

    virtual void OnConstruction(const FTransform& Transform) override;

};
