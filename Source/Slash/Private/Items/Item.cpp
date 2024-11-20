// Copyright Lone Pack Studio (2024)


#include "Items/Item.h"
#include "Slash/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;	
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
}

float AItem::TransformedCos()
{
	return Amplitude  *  FMath::Cos(RunningTime * TimeConstant);
}

float AItem::TransformedSin()
{
	return Amplitude  *  FMath::Sin(RunningTime * TimeConstant);
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	// float DeltaZ = Amplitude  *  FMath::Sin(RunningTime * TimeConstant);
	// AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));
	
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() *100.f);
}

