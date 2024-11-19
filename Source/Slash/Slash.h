// Copyright Lone Pack Studio (2024)

#pragma once

#include "CoreMinimal.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 25, FColor::Red, true);

