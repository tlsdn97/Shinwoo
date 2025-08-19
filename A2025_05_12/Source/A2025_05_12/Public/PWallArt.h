// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PWallArt.generated.h"

UCLASS()
class A2025_05_12_API APWallArt : public AActor
{
	GENERATED_BODY()
	
public:	
	APWallArt();
protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* WallMesh;

	virtual void OnConstruction(const FTransform& Tranform)	override;

};
