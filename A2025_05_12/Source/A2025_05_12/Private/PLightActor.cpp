// Fill out your copyright notice in the Description page of Project Settings.


#include "PLightActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/RectLightComponent.h"
#include "UObject/ConstructorHelpers.h"

APLightActor::APLightActor()
{
    PrimaryActorTick.bCanEverTick = false;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    LightMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LightMesh"));
    LightMesh->SetupAttachment(Root);

    static ConstructorHelpers::FObjectFinder<UStaticMesh> PlaneMesh(TEXT("/Engine/BasicShapes/Cube"));
    if (PlaneMesh.Succeeded())
    {
        LightMesh->SetStaticMesh(PlaneMesh.Object);
        LightMesh->SetRelativeScale3D(FVector(2.f, 0.2f, 0.05f));
    }

    RectLight = CreateDefaultSubobject<URectLightComponent>(TEXT("RectLight"));
    RectLight->SetupAttachment(Root);
    RectLight->SourceWidth = 200.f;
    RectLight->SourceHeight = 40.f;
    RectLight->Intensity = 5000.f;
    RectLight->SetLightColor(FLinearColor::White);

    LightOffset = FVector(0.f, 0.f, -20.f);
}

void APLightActor::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    if (RectLight)
    {
        RectLight->SetRelativeLocation(LightOffset);
    }
}


