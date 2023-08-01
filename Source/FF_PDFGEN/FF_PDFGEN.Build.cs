// Some copyright should be here...

using System;
using System.IO;
using UnrealBuildTool;

public class FF_PDFGEN : ModuleRules
{
	public FF_PDFGEN(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        string Includes_Open62541 = "../Source/FF_PDFGEN/ThirdParty/PDFGen";
        PrivateIncludePaths.Add(Includes_Open62541);

        PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "ExtendedVars",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
