// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PDialogueData.generated.h"

USTRUCT(BlueprintType)
struct FDialogueData : public FTableRowBase
{
    GENERATED_BODY()

    // NPC 대사 라인
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<FString> Lines;
};

UCLASS()
class A2025_05_12_API UPDialogueData : public UDataTable
{
	GENERATED_BODY()
	
};
