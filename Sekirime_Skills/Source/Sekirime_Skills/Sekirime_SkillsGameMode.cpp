// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Sekirime_SkillsGameMode.h"
#include "Sekirime_SkillsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASekirime_SkillsGameMode::ASekirime_SkillsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
