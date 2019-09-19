// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Sekirime_SkillsEditorTarget : TargetRules
{
	public Sekirime_SkillsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Sekirime_Skills");
	}
}
