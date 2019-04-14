/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

using System;
using System.IO;
using System.Diagnostics;
using Tools.DotNETCommon;

namespace UnrealBuildTool.Rules
{
    public class TobiiGTOM : ModuleRules
    {
        public TobiiGTOM(ReadOnlyTargetRules Target) : base(Target)
        {
            PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

            PrivateDependencyModuleNames.AddRange(new string[]
            {
                "Core"
                , "CoreUObject"
                , "Engine"
                , "Slate"
                , "SlateCore"
                , "UMG"
                , "HeadMountedDisplay"
            });

            PublicDependencyModuleNames.AddRange(new string[]
            {
                "TobiiCore"
            });

            PrivateIncludePaths.AddRange(new string[]
            {
                "TobiiGTOM/Public"
                , "TobiiGTOM/Public/GTOMAwareUI"
            });

            string AssemblyLocation = Path.GetDirectoryName(new Uri(System.Reflection.Assembly.GetExecutingAssembly().CodeBase).LocalPath);
            DirectoryReference RootDirectory = new DirectoryReference(Path.Combine(AssemblyLocation, "..", "..", ".."));
            bool IsEnginePlugin = RootDirectory.GetDirectoryName() == "Engine";
            PublicDefinitions.Add("TOBII_COMPILE_AS_ENGINE_PLUGIN=" + (IsEnginePlugin ? 1 : 0));

            //Platform specific
            if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Win32)
            {
                string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "Win64" : "Win32";
                string PluginsPath = Path.Combine(ModuleDirectory, "../../../");
                string TobiiRelativeAPIPath = "TobiiEyetracking/ThirdParty/GameIntegration";
                string TobiiRelativeIncludePath = Path.Combine(TobiiRelativeAPIPath, "include");
                string TobiiRelativeLibraryBasePath = Path.Combine(TobiiRelativeAPIPath, "lib");

                //Includes
                PrivateIncludePaths.Add(Path.Combine(PluginsPath, TobiiRelativeIncludePath));

                //Add libraries
                AddLibrary(Path.Combine(PluginsPath, TobiiRelativeLibraryBasePath, PlatformString, "tobii_g2om.lib"));
                AddLibrary(Path.Combine(PluginsPath, TobiiRelativeLibraryBasePath, PlatformString, "Tobii.GameIntegration.GTOM.lib"));

                //Add DLL
                string RelativeG2OMDllPath = "";
                string RelativeGTOMDllPath = "";
                const string G2OMDllName = "tobii_g2om.dll";
                const string GTOMDllName = "Tobii.GameIntegration.GTOM.dll";

                if (IsEnginePlugin)
                {
                    RelativeG2OMDllPath = Path.Combine("Binaries/ThirdParty/TobiiEyetracking", PlatformString, G2OMDllName);
                    RuntimeDependencies.Add("$(EngineDir)/" + RelativeG2OMDllPath);

                    RelativeGTOMDllPath = Path.Combine("Binaries/ThirdParty/TobiiEyetracking", PlatformString, GTOMDllName);
                    RuntimeDependencies.Add("$(EngineDir)/" + RelativeGTOMDllPath);
                }
                else
                {
                    RelativeG2OMDllPath = Path.Combine(TobiiRelativeLibraryBasePath, PlatformString, G2OMDllName);
                    RuntimeDependencies.Add(Path.Combine(PluginsPath, RelativeG2OMDllPath));

                    RelativeGTOMDllPath = Path.Combine(TobiiRelativeLibraryBasePath, PlatformString, GTOMDllName);
                    RuntimeDependencies.Add(Path.Combine(PluginsPath, RelativeGTOMDllPath));
                }
                
                PublicDefinitions.Add("TOBII_G2OM_RELATIVE_DLL_PATH=R\"(" + RelativeG2OMDllPath + ")\"");
                PublicDelayLoadDLLs.Add(G2OMDllName);

                PublicDefinitions.Add("TOBII_GTOM_RELATIVE_DLL_PATH=R\"(" + RelativeGTOMDllPath + ")\"");
                PublicDelayLoadDLLs.Add(GTOMDllName);

                PublicDefinitions.Add("TOBII_EYETRACKING_ACTIVE=1");
            }
            else
            {
                PublicDefinitions.Add("TOBII_EYETRACKING_ACTIVE=0");
            }
        }

        private void AddLibrary(string libraryPath)
        {
            if (File.Exists(libraryPath))
            {
                PublicAdditionalLibraries.Add(libraryPath);
            }
            else
            {
                Debug.WriteLine("Cannot find Tobii API Lib file. Path does not exist! " + libraryPath);
            }
        }
    }
}
