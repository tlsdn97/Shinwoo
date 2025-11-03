// Fill out your copyright notice in the Description page of Project Settings.


#include "PItem.h"
#include "PPlayer.h"
#include "PSaveGame.h"
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
    Collision->InitSphereRadius(150.f);
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
        UPSaveGame* SaveData = Cast<UPSaveGame>(
            UGameplayStatics::CreateSaveGameObject(UPSaveGame::StaticClass()));

        SaveData->SavedLocation = Player->GetActorLocation();
        SaveData->SavedRotation = Player->GetActorRotation();

        UGameplayStatics::SaveGameToSlot(SaveData, TEXT("PlayerSlot"), 0);

        UE_LOG(LogTemp, Log, TEXT("세이브 지점 저장됨: %s"), *SaveData->SavedLocation.ToString());
        Destroy();
    }
}
