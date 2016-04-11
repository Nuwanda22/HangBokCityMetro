// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "HangbokCityMetro.h"
#include "HangbokCityMetroGameMode.h"
#include "HangbokCityMetroHUD.h"
#include "HangbokCityMetroCharacter.h"

AHangbokCityMetroGameMode::AHangbokCityMetroGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHangbokCityMetroHUD::StaticClass();
}
