// Copyright Lone Pack Studio (2024)


#include "Bird.h"

// Sets default values
ABird::ABird()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABird::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

