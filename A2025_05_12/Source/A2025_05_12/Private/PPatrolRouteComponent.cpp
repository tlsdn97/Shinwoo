// Fill out your copyright notice in the Description page of Project Settings.


#include "PPatrolRouteComponent.h"


AActor* UPPatrolRouteComponent::GetNextPatrolPoint()
{
	if (PartolPoints.Num() == 0) return nullptr;

	CurrentIndex = (CurrentIndex + 1) % PartolPoints.Num();
	return PartolPoints[CurrentIndex];
}
