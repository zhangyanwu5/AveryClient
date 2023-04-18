// Copyright Epic Games, Inc. All Rights Reserved.

#include "AveryClientGameMode.h"
#include "AveryClientCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAveryClientGameMode::AAveryClientGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
