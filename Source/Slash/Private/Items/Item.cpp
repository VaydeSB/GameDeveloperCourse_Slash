// Copyright Lone Pack Studio (2024)


#include "Items/Item.h"
#include "Slash/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	RootComponent = ItemMesh;
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
}

