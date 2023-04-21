// Copyright Epic Games, Inc. All Rights Reserved.

#include "MadBossGameMode.h"
#include "MadBossCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMadBossGameMode::AMadBossGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
