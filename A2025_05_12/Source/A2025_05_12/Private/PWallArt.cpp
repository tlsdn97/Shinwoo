// Fill out your copyright notice in the Description page of Project Settings.


#include "PWallArt.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

APWallArt::APWallArt()
{
	PrimaryActorTick.bCanEverTick = true;

	WallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WallMesh"));
	RootComponent = WallMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("/Engine/BasicShapes/Plane"));
	if (PlaneMesh.Succeeded())
	{
		WallMesh->SetStaticMesh(PlaneMesh.Object);
	}

	WallMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APWallArt::OnConstruction(const FTransform& Tranform)
{
	// TODO
}


