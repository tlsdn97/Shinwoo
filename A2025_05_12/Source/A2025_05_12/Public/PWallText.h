// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PWallText.generated.h"

UCLASS()
class A2025_05_12_API APWallText : public AActor
{
	GENERATED_BODY()
	
public:	
	APWallText();
protected:
    virtual void BeginPlay() override;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UTextRenderComponent* TextComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WallText")
    FString DisplayText;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WallText")
    FColor TextColor = FColor::Red;
};
