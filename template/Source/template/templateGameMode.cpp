// Copyright Epic Games, Inc. All Rights Reserved.

#include "templateGameMode.h"
#include "templateCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtemplateGameMode::AtemplateGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
