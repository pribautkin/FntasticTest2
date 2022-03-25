// Copyright Epic Games, Inc. All Rights Reserved.

#include "FntasticTest2GameMode.h"
#include "FntasticTest2HUD.h"
#include "FntasticTest2Character.h"
#include "UObject/ConstructorHelpers.h"

AFntasticTest2GameMode::AFntasticTest2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
	// use our custom HUD class
	HUDClass = AFntasticTest2HUD::StaticClass();
}
