// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "POverlapSpawner.generated.h"

UCLASS()
class A2025_05_12_API APOverlapSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	APOverlapSpawner();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    class UBoxComponent* BoxComp;

    // 스폰할 클래스 (에디터에서 지정)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<AActor> FallingClass;

    // 스폰될 높이 오프셋 (위로 얼만큼)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning", meta = (ClampMin = "0.0"))
    float SpawnHeight = 1000.0f;

    // 같은 프레임/짧은 시간 내에 여러 번 스폰되는 것을 막을 디바운스(초)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning", meta = (ClampMin = "0.0"))
    float SpawnCooldown = 0.5f;

protected:
    virtual void BeginPlay() override;

private:
    UFUNCTION()
    void OnBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,
        bool bFromSweep, const FHitResult& SweepResult);

    bool CanSpawn();
    double LastSpawnTime = -9999.0;
};
