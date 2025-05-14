// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cart : ModuleRules
{
	public Cart(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { 
			"Core", "CoreUObject", "Engine", "InputCore",
			"EnhancedInput",
			"NavigationSystem",
			"AIModule"          // AIŠÖ˜A‚àg‚Á‚Ä‚¢‚ê‚Î•K{
		});
	}
}
