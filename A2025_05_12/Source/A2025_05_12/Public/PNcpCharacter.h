// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PNcpCharacter.generated.h"

UCLASS()
class A2025_05_12_API APNcpCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    APNcpCharacter();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction")
    class USphereComponent* InteractionSphere;

    bool bCanInteract = false;

    // 대화 내용
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dialogue")
    TArray<FString> DialogueLines;

    // 대화 위젯
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<class UPDialogueWidget> DialogueWidgetClass;
    UPROPERTY()
    class UPDialogueWidget* DialogueWidgetInstance;

    // 대화 시작/종료
    UFUNCTION()
    void StartConversation(class APPlayer* Player);
    UFUNCTION()
    void EndConversation();

    // 애니메이션
    void PlayTalkAnimation();
    void StopTalkAnimation();

    UPROPERTY()
    class APPlayer* CurrentTargetPlayer;


protected:
    virtual void BeginPlay() override;

    // Sphere Overlap
    UFUNCTION()
    void OnPlayerEnter(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

    UFUNCTION()
    void OnPlayerExit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
   class UAnimMontage* TalkMontage;
};
