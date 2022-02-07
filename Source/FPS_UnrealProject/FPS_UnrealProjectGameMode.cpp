// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPS_UnrealProjectGameMode.h"
#include "FPS_UnrealProjectHUD.h"
#include "FPS_UnrealProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_UnrealProjectGameMode::AFPS_UnrealProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_UnrealProjectHUD::StaticClass();
}
