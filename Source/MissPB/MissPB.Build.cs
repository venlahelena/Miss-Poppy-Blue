// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MissPB : ModuleRules
{
	public MissPB(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
