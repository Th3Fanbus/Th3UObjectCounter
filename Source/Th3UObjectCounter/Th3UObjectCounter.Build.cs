/* SPDX-License-Identifier: MPL-2.0 */

using UnrealBuildTool;

public class Th3UObjectCounter : ModuleRules
{
    public Th3UObjectCounter(ReadOnlyTargetRules Target) : base(Target)
    {
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        ShadowVariableWarningLevel = WarningLevel.Error;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyParentIncludePaths = false;
        CppStandard = CppStandardVersion.Cpp20;
        bUseUnity = false;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine",
        });
    }
}
