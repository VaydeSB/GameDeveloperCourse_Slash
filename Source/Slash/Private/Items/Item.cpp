// Copyright Lone Pack Studio (2024)


#include "Items/Item.h"

// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called!"));
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

