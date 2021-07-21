// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5Project_1GameMode.h"
#include "UE5Project_1Character.h"
#include "UObject/ConstructorHelpers.h"

AUE5Project_1GameMode::AUE5Project_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
