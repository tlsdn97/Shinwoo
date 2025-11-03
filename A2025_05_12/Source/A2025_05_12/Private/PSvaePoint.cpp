// Fill out your copyright notice in the Description page of Project Settings.


#include "PSvaePoint.h"
#include "Components/BoxComponent.h"
#include "PPlayer.h"

APSvaePoint::APSvaePoint()
{
    Collision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
    RootComponent = Collision;
    Collision->OnComponentBeginOverlap.AddDynamic(this, &APSvaePoint::OnOverlapBegin);

    Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    Collision->SetCollisionResponseToAllChannels(ECR_Ignore);
    Collision->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
    Collision->SetGenerateOverlapEvents(true);
}

void APSvaePoint::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    APPlayer* Player = Cast<APPlayer>(OtherActor);
    if (Player)
    {
        Player->SaveLastPosition();   // 위치 저장
    }
}