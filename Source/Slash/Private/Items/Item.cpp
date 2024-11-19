// Copyright Lone Pack Studio (2024)


#include "Items/Item.h"
#include "DrawDebugHelpers.h"
#include "Slash/Slash.h"


// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	UWorld* World = GetWorld();
	FVector Location = GetActorLocation();
	FVector Forward = GetActorForwardVector();

	
	DRAW_SPHERE(Location);
	DRAW_VECTOR(Location, Location + Forward * 100.f);
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

