// Fill out your copyright notice in the Description page of Project Settings.


#include "PWallText.h"
#include "Components/TextRenderComponent.h"

APWallText::APWallText()
{
    PrimaryActorTick.bCanEverTick = false;

    TextComponent = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComponent"));
    RootComponent = TextComponent;

    TextComponent->SetHorizontalAlignment(EHTA_Center);
    TextComponent->SetVerticalAlignment(EVRTA_TextCenter);
    TextComponent->SetWorldSize(50.0f);

}

void APWallText::BeginPlay()
{
	Super::BeginPlay();

    TextComponent->SetText(FText::FromString(DisplayText));
    TextComponent->SetTextRenderColor(TextColor);
	
}

#if WITH_EDITOR
void APWallText::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    FName PropertyName = (PropertyChangedEvent.Property != nullptr)
        ? PropertyChangedEvent.Property->GetFName()
        : NAME_None;

    if (PropertyName == GET_MEMBER_NAME_CHECKED(APWallText, DisplayText))
    {
        TextComponent->SetText(FText::FromString(DisplayText));
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(APWallText, TextColor))
    {
        TextComponent->SetTextRenderColor(TextColor);
    }
}
#endif
