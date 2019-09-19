// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sekirime_SkillsTarget : TargetRules
{
	public Sekirime_SkillsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("Sekirime_Skills");
	}
}
