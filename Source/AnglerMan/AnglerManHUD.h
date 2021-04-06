// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AnglerManHUD.generated.h"

UCLASS()
class AAnglerManHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAnglerManHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

