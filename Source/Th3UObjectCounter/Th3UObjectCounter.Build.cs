/* SPDX-License-Identifier: MPL-2.0 */

using UnrealBuildTool;
using System.IO;
using System;

public class Th3UObjectCounter : ModuleRules
{
	public Th3UObjectCounter(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bUseUnity = false;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core", "CoreUObject",
			"Engine",
			"InputCore",
			"SlateCore", "Slate", "UMG",
			"DummyHeaders", "FactoryGame", "SML"
		});
	}
}
