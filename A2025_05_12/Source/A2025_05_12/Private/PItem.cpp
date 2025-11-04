// Fill out your copyright notice in the Description page of Project Settings.


#include "PItem.h"
#include "PPlayer.h"
#include "PGameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

APItem::APItem()
{
    PrimaryActorTick.bCanEverTick = false;

    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
    Collision->SetupAttachment(RootComponent);
    Collision->SetSphereRadius(120.f);
    Collision->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
}

void APItem::BeginPlay()
{
    Super::BeginPlay();
    Collision->OnComponentBeginOverlap.AddDynamic(this, &APItem::OnOverlap);
}

void APItem::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    APPlayer* Player = Cast<APPlayer>(OtherActor);
    if (Player)
    {
        UPGameInstance* GI = Cast<UPGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
        if (GI)
        {
            GI->SetSavedLocation(Player->GetActorLocation());
        }
        Destroy();
    }
}
