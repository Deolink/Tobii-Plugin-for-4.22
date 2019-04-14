/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiCoreModule.h"

#include "UserGuide/TobiiEditorExtension.h"

#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"

IMPLEMENT_MODULE(FTobiiCoreModule, TobiiCore)

/************************************************************************/
/* FTobiiCoreModule                                                     */
/************************************************************************/
void FTobiiCoreModule::StartupModule()
{
#if TOBII_EYETRACKING_ACTIVE
	FString RelativeGICDllPath = FString(TEXT(TOBII_GIC_RELATIVE_DLL_PATH)); 

#if TOBII_COMPILE_AS_ENGINE_PLUGIN
	FString FullGICDllPath = FPaths::Combine(FPaths::EngineDir(), RelativeGICDllPath);
#else
	FString FullGICDllPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectPluginsDir(), RelativeGICDllPath));
#endif //TOBII_COMPILE_AS_ENGINE_PLUGIN

	GICDllHandle = FPlatformProcess::GetDllHandle(*FullGICDllPath);

	if (GICDllHandle != nullptr)
	{
		EyeTracker = TSharedPtr<ITobiiEyeTracker, ESPMode::ThreadSafe>(new FTobiiEyeTracker());

#if WITH_EDITOR
		EditorExtensions = new FTobiiEditorExtension(this);
#endif //WITH_EDITOR
	}
	else
	{
		EyeTracker.Reset();
	}

#else
	EyeTracker.Reset();
#endif //TOBII_EYETRACKING_ACTIVE

	IModularFeatures::Get().RegisterModularFeature(GetModularFeatureName(), this);
}

void FTobiiCoreModule::ShutdownModule()
{
	IModularFeatures::Get().UnregisterModularFeature(GetModularFeatureName(), this);

#if WITH_EDITOR
	if (EditorExtensions != nullptr)
	{
		delete EditorExtensions;
	}
#endif

	if (EyeTracker.IsValid())
	{
		FTobiiEyeTracker* EyetrackerPtr = (FTobiiEyeTracker*)EyeTracker.Get();
		EyetrackerPtr->Shutdown();
		EyeTracker.Reset();
	}
}

TSharedPtr<IEyeTracker, ESPMode::ThreadSafe> FTobiiCoreModule::CreateEyeTracker()
{
	return StaticCastSharedPtr<IEyeTracker, ITobiiEyeTracker, ESPMode::ThreadSafe>(EyeTracker);
}

bool FTobiiCoreModule::IsEyeTrackerConnected() const
{
	return EyeTracker.IsValid();
}

TSharedPtr<ITobiiEyeTracker, ESPMode::ThreadSafe> FTobiiCoreModule::GetEyeTrackerInternal()
{
	return EyeTracker;
}
