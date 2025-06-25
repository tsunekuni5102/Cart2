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
			"AIModule",          // AIä÷òAÇ‡égÇ¡ÇƒÇ¢ÇÍÇŒïKê{
			"Slate",       // Å© í«â¡
			"SlateCore"    // Å© í«â¡
		});
	}
}
