// Copyright Epic Games, Inc. All Rights Reserved.

#include "HorrorGameDemoGameMode.h"
#include "HorrorGameDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameDemoGameMode::AHorrorGameDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
