// Fill out your copyright notice in the Description page of Project Settings.


#include "PNcpCharacter.h"
#include "Components/SphereComponent.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Blueprint/UserWidget.h"
#include "PDialogueWidget.h"
#include "PPlayer.h"

APNcpCharacter::APNcpCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    // Interaction Sphere 积己
    InteractionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("InteractionSphere"));
    InteractionSphere->SetupAttachment(RootComponent);
    InteractionSphere->InitSphereRadius(250.f);

    InteractionSphere->OnComponentBeginOverlap.AddDynamic(this, &APNcpCharacter::OnPlayerEnter);
    InteractionSphere->OnComponentEndOverlap.AddDynamic(this, &APNcpCharacter::OnPlayerExit);
}

void APNcpCharacter::BeginPlay()
{
    Super::BeginPlay();
}

void APNcpCharacter::OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if (OtherActor->ActorHasTag("Player"))
        bCanInteract = true;
}

void APNcpCharacter::OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    if (OtherActor->ActorHasTag("Player"))
        bCanInteract = false;
}

void APNcpCharacter::StartConversation(APPlayer* Player)
{
    if (!DialogueWidgetClass || DialogueWidgetInstance || !bCanInteract) return;

    APlayerController* PC = Cast<APlayerController>(Player->GetController());
    if (!PC) return;

    PC->bShowMouseCursor = true;
    PC->SetInputMode(FInputModeUIOnly());

    // NPC 风橇 局聪
    PlayTalkAnimation();

    // Dialogue Widget 积己
    DialogueWidgetInstance = CreateWidget<UPDialogueWidget>(GetWorld(), DialogueWidgetClass);
    if (DialogueWidgetInstance)
    {
        DialogueWidgetInstance->AddToViewport();
        DialogueWidgetInstance->InitDialogue(DialogueLines, this);
    }
}

void APNcpCharacter::EndConversation()
{
    if (DialogueWidgetInstance)
    {
        DialogueWidgetInstance->RemoveFromParent();
        DialogueWidgetInstance = nullptr;
    }

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {
        PC->bShowMouseCursor = false;
        PC->SetInputMode(FInputModeGameOnly());
    }

    StopTalkAnimation();
}

void APNcpCharacter::PlayTalkAnimation()
{
    if (TalkMontage && !GetMesh()->IsPlayingRootMotion())
    {
        PlayAnimMontage(TalkMontage);
    }
}

void APNcpCharacter::StopTalkAnimation()
{
    if (GetMesh() && GetMesh()->GetAnimInstance())
    {
        GetMesh()->GetAnimInstance()->StopAllMontages(0.25f);
    }
}

