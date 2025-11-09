// Fill out your copyright notice in the Description page of Project Settings.


#include "POverlapSpawner.h"
#include "Components/BoxComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"

APOverlapSpawner::APOverlapSpawner()
{
	PrimaryActorTick.bCanEverTick = false;

    BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    RootComponent = BoxComp;

    // 오버랩 이벤트 활성화
    BoxComp->SetGenerateOverlapEvents(true);
    BoxComp->SetCollisionProfileName(TEXT("OverlapAllDynamic"));

    // 기본 박스 크기 (원하면 에디터에서 변경)
    BoxComp->SetBoxExtent(FVector(50.0f, 50.0f, 50.0f));
}

void APOverlapSpawner::BeginPlay()
{
	Super::BeginPlay();
	
    if (BoxComp)
    {
        BoxComp->OnComponentBeginOverlap.AddDynamic(this, &APOverlapSpawner::OnBoxBeginOverlap);
    }
}

void APOverlapSpawner::OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (!OtherActor) return;
    if (!FallingClass) return; // 에디터에서 클래스 지정 필요

    if (!CanSpawn()) return;

    FVector TargetLocation = OtherActor->GetActorLocation();
    FVector SpawnLocation = TargetLocation + FVector(0.0f, 0.0f, SpawnHeight);
    FRotator SpawnRotation = FRotator::ZeroRotator;

    FActorSpawnParameters Params;
    Params.Owner = this;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

    GetWorld()->SpawnActor<AActor>(FallingClass, SpawnLocation, SpawnRotation, Params);
}

bool APOverlapSpawner::CanSpawn()
{
    double Now = GetWorld()->GetRealTimeSeconds();
    if (Now - LastSpawnTime >= (double)SpawnCooldown)
    {
        LastSpawnTime = Now;
        return true;
    }
    return false;;
}

