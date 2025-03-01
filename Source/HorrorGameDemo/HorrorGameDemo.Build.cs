// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HorrorGameDemo : ModuleRules
{
	public HorrorGameDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
