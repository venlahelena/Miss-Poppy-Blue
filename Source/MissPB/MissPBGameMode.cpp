// Copyright Epic Games, Inc. All Rights Reserved.

#include "MissPBGameMode.h"
#include "MissPBCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMissPBGameMode::AMissPBGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
