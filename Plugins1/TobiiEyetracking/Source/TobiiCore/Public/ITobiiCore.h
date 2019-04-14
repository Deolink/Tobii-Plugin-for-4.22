/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "ITobiiEyetracker.h"

#include "Runtime/EyeTracker/Public/IEyeTrackerModule.h"
#include "Runtime/Core/Public/Modules/ModuleInterface.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

DECLARE_DELEGATE(FPostLoadedTobiiEyetrackingDelegate);

/**
  * The public interface of the TobiiEyeX Module.
  */
class ITobiiCore : public IEyeTrackerModule
{
public:
	/**
	  * Singleton-like access to this module's interface.  This is just for convenience!
	  * Beware of calling this during the shutdown phase, though. Your module might have been
	  * unloaded already.
	  *
	  * @return Returns singleton instance, loading the module on demand if needed
	  */
	static inline ITobiiCore& Get()
	{
		return FModuleManager::LoadModuleChecked<ITobiiCore>("TobiiCore");
	}

	/**
	  * Checks to see if this module is loaded and ready.  It is only valid to call Get() if 
	  * IsAvailable() returns true.
	  *
	  * @return True if the module is loaded and ready to use
	  */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("TobiiCore");
	}

	virtual FString GetModuleKeyName() const override
	{
		return FString("TobiiCore");
	}

	static TSharedPtr<ITobiiEyeTracker, ESPMode::ThreadSafe> GetEyeTracker()
	{
		return IsAvailable() ? Get().GetEyeTrackerInternal() : TSharedPtr<ITobiiEyeTracker, ESPMode::ThreadSafe>(nullptr);
	}

protected:
	virtual TSharedPtr<ITobiiEyeTracker, ESPMode::ThreadSafe> GetEyeTrackerInternal() = 0;
};
