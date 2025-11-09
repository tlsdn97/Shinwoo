// Fill out your copyright notice in the Description page of Project Settings.


#include "PSkyTrap.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

APSkyTrap::APSkyTrap()
{
	PrimaryActorTick.bCanEverTick = false;

    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    RootComponent = MeshComp;
    MeshComp->SetSimulatePhysics(true);
    MeshComp->SetEnableGravity(true);
    MeshComp->SetCollisionProfileName(TEXT("PhysicsActor"));

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    CollisionBox->SetupAttachment(MeshComp);
    CollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f));
    CollisionBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
    CollisionBox->SetGenerateOverlapEvents(true);

    bHasTriggered = false;
}

void APSkyTrap::BeginPlay()
{
	Super::BeginPlay();

    CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APSkyTrap::OnOverlapBegin);

    if (AutoDeathTime > 0.0f)
    {
        FTimerHandle AutoDeathHandle;
        GetWorldTimerManager().SetTimer(
            AutoDeathHandle,
            [this]()
            {
                if (!bHasTriggered)
                {
                    ShowDeathUI();
                }
            },
            AutoDeathTime,
            false
        );
    }
}

void APSkyTrap::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector NewLocation = GetActorLocation();
    NewLocation.Z -= FallSpeed * DeltaTime;
    SetActorLocation(NewLocation);
}
void APSkyTrap::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult)
{
    if (!OtherActor || bHasTriggered)
        return;

    if (OtherActor->ActorHasTag(FName("Player")))
    {
        ShowDeathUI();
        Destroy();
    }
}

void APSkyTrap::ShowDeathUI()
{if (bHasTriggered)
        return;

    bHasTriggered = true;

    APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);
    if (PC && DeathUIClass)
    {
        UUserWidget* DeathUI = CreateWidget<UUserWidget>(PC, DeathUIClass);
        if (DeathUI)
        {
            DeathUI->AddToViewport();
        }
        PC->SetPause(false);
    }

    PC->bShowMouseCursor = true;
}

