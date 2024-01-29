// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnUnrealGameMode.h"
#include "LearnUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearnUnrealGameMode::ALearnUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
