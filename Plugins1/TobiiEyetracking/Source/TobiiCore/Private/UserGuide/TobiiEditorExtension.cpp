/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#if WITH_EDITOR

#include "TobiiEditorExtension.h"
#include "STobiiLicenseWindow.h"
#include "STobiiWelcomeWindow.h"

#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "Runtime/Slate/Public/Framework/Application/SlateApplication.h"
#include "Runtime/RHI/Public/RHI.h"

#include "Editor/UnrealEd/Public/Editor.h"

FTobiiEditorExtension::FTobiiEditorExtension(FTobiiCoreModule* InCoreModule)
	: bIsEditorInitialized(false)
	, CoreModule(InCoreModule)
{
	// Defer Level Editor UI extensions until Level Editor has been loaded:
	if (FModuleManager::Get().IsModuleLoaded("LevelEditor"))
	{
		Initialize();
	}
	else
	{
		FModuleManager::Get().OnModulesChanged().AddLambda([this](FName name, EModuleChangeReason reason)
		{
			if ((name == "LevelEditor") && (reason == EModuleChangeReason::ModuleLoaded))
			{
				Initialize();
			}
		});
	}
}

FTobiiEditorExtension::~FTobiiEditorExtension()
{
}

void FTobiiEditorExtension::Initialize()
{
	if (GUsingNullRHI)
	{
		return;
	}

	FSlateRenderer* SlateRenderer = FSlateApplication::Get().GetRenderer();
	if (SlateRenderer != nullptr)
	{
		LoadedDelegateHandle = SlateRenderer->OnSlateWindowRendered().AddRaw(this, &FTobiiEditorExtension::OnEditorLoaded);
	}
}

void FTobiiEditorExtension::OnEditorLoaded(SWindow& SlateWindow, void* ViewportRHIPtr)
{
	// would be nice to use the preprocessor definition WITH_EDITOR instead,
	// but the user may launch a standalone game through the editor...
	if (GEditor == nullptr || CoreModule == nullptr)
	{
		return;
	}

	if (IsInGameThread())
	{
		FSlateRenderer* SlateRenderer = FSlateApplication::Get().GetRenderer();
		SlateRenderer->OnSlateWindowRendered().Remove(LoadedDelegateHandle);
	}

	if (bIsEditorInitialized)
	{
		return;
	}
	bIsEditorInitialized = true;

	if (GConfig != nullptr)
	{
		bool bTobiiLicenseAccepted(false);
		GConfig->GetBool(TEXT("Tobii"), TEXT("TobiiLicenseAccepted"), bTobiiLicenseAccepted, GGameIni);
		if (!bTobiiLicenseAccepted && GEditor != nullptr)
		{
			FSlateApplication::Get().AddWindow(SNew(STobiiLicenseWindow, CoreModule));
		}

		bool bTutorialShown = false;
		GConfig->GetBool(TEXT("Tobii"), TEXT("TobiiTutorialShown"), bTutorialShown, GGameIni);
		if (!bTutorialShown && GEditor != nullptr)
		{
			FSlateApplication::Get().AddWindow(SNew(STobiiWelcomeWindow));
		}
	}
}

#endif //WITH_EDITOR
