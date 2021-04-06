// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnglerManGameMode.h"
#include "AnglerManHUD.h"
#include "AnglerManCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAnglerManGameMode::AAnglerManGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	//DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAnglerManHUD::StaticClass();
}
