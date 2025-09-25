// Fill out your copyright notice in the Description page of Project Settings.


#include "PDieActor.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "EngineUtils.h"

APDieActor::APDieActor()
{
    PrimaryActorTick.bCanEverTick = false;

    CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
    RootComponent = CollisionBox;

    CollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
    CollisionBox->SetCollisionObjectType(ECC_WorldDynamic);
    CollisionBox->SetCollisionResponseToAllChannels(ECR_Ignore);
    CollisionBox->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);

    
}

void APDieActor::BeginPlay()
{   
    Super::BeginPlay();

    if (CollisionBox)
    {
        CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APDieActor::OnOverlapBegin);
    }

    bIsTriggered = false;
}

void APDieActor::ResetTrigger()
{
    bIsTriggered = false;

    if (CollisionBox)
    {
        CollisionBox->SetGenerateOverlapEvents(true);
        CollisionBox->ClearMoveIgnoreActors();
    }
}

void APDieActor::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (bIsTriggered) return;

    if (OtherActor && OtherActor->ActorHasTag("Player"))
    {
        if (DeathWidgetClass)
        {
            UUserWidget* DeathWidget = CreateWidget<UUserWidget>(GetWorld(), DeathWidgetClass);
            if (DeathWidget)
            {
                DeathWidget->AddToViewport();
                bIsTriggered = true;

                APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
                if (PC)
                {
                    PC->SetInputMode(FInputModeUIOnly());
                    PC->bShowMouseCursor = true;
                }
            }
        }
    }
}
