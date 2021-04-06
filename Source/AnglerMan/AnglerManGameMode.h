// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AnglerManGameMode.generated.h"

UCLASS(minimalapi)
class AAnglerManGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAnglerManGameMode();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
		FTransform SpawnPoint;

	UPROPERTY(EditAnywhere, BlueprintREADWrite)
		bool pq;

	UPROPERTY(EditAnywhere, BlueprintREADWrite)
		bool pe;

	UPROPERTY(EditAnywhere, BlueprintREADWrite)
		FVector pqLocation;

	UPROPERTY(EditAnywhere, BlueprintREADWrite)
		FVector peLocation;
};



