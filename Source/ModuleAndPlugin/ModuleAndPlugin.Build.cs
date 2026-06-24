// ModuleAndPlugin.Build.cs

using UnrealBuildTool;

public class ModuleAndPlugin : ModuleRules
{
    // 기본 게임 모듈에서 Test 모듈과 Temporary 플러그인 모듈의 클래스를 참조하기 위해 추가합니다.
    public ModuleAndPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "EnhancedInput",
            "Test",
            "Temporary"
        });
    }
}
