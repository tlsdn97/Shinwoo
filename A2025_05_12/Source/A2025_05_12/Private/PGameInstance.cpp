// Fill out your copyright notice in the Description page of Project Settings.


#include "PGameInstance.h"

UPGameInstance::UPGameInstance()
{
	SavedLocation = FVector::ZeroVector;
	bHasSavedLocation = false;
}

void UPGameInstance::SetSavedLocation(const FVector& NewLocation)
{
	SavedLocation = NewLocation;
	bHasSavedLocation = true;
}

FVector UPGameInstance::GetSavedLocation() const
{
	return SavedLocation;
}

bool UPGameInstance::HasSavedLocation() const
{
	return bHasSavedLocation;
}

void UPGameInstance::ClearSavedLocation()
{
	SavedLocation = FVector::ZeroVector;
	bHasSavedLocation = false;
}
