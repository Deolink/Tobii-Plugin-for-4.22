/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiGazeFocusManagerComponent.h"
#include "TobiiGazeFocusableComponent.h"
#include "TobiiGTOMModule.h"
#include "tobii_gtom.h"

#include "Engine/Engine.h"
#include "DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarShowGazeFocusDebug(TEXT("tobii.debug.ShowGazeFocusDebug"), 1, TEXT("0 - Gaze focus debug visualizations are disabled. 1 - Gaze focus debug visualizations are enabled."));

UTobiiGazeFocusManagerComponent::UTobiiGazeFocusManagerComponent()
	: bIsWhiteList(false)
	, FocusLayers()

	, DetectedPlayerController()
	, PreviouslyFocusedComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTobiiGazeFocusManagerComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FocusData.FocusedPrimitiveComponent.Reset();
	FocusData.FocusedActor.Reset();
	FocusData.FocusedWidget.Reset();

	const TArray<FTobiiGazeFocusData>& GTOMResults = FTobiiGTOMModule::Get().G2OMFocusResults;
	for (const FTobiiGazeFocusData& Candidate : GTOMResults)
	{
		if (Candidate.FocusedPrimitiveComponent.IsValid() && ValidateFocusLayers(*Candidate.FocusedPrimitiveComponent.Get()))
		{
			FocusData = Candidate;
			break;
		}
	}

	TWeakObjectPtr<UPrimitiveComponent> NewFocusPrimitive = FocusData.FocusedPrimitiveComponent;
	if (!NewFocusPrimitive.IsValid() && PreviouslyFocusedComponent.IsValid())
	{
		//We lost focus completely
		NotifyPrimitiveComponentGazeFocusLost(*PreviouslyFocusedComponent.Get());
	}
	else if (NewFocusPrimitive.IsValid() && !PreviouslyFocusedComponent.IsValid())
	{
		//We gained focus from no focus
		NotifyPrimitiveComponentGazeFocusReceived(*NewFocusPrimitive);
	}
	else if (NewFocusPrimitive.IsValid() && PreviouslyFocusedComponent.IsValid() && NewFocusPrimitive.Get() != PreviouslyFocusedComponent.Get())
	{
		//Focus shifted from one object to another
		NotifyPrimitiveComponentGazeFocusLost(*PreviouslyFocusedComponent.Get());
		NotifyPrimitiveComponentGazeFocusReceived(*NewFocusPrimitive);
	}

	PreviouslyFocusedComponent = TWeakObjectPtr<UPrimitiveComponent>(NewFocusPrimitive);

	//Draw debug visualizations
	static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
	if (GetWorld() != nullptr && DrawDebugCVar->GetInt() && CVarShowGazeFocusDebug.GetValueOnGameThread())
	{
		if (FocusData.FocusedActor != nullptr)
		{
			DrawDebugBox(GetWorld(), FocusData.FocusedActor->GetActorLocation(), FVector(FocusData.FocusedActor->GetSimpleCollisionRadius()), FColor::Green, false, 0.0f, 0, 1.5f);
			DrawDebugString(GetWorld(), FVector::ZeroVector, GetName(), FocusData.FocusedActor.Get(), FColor::White, 0.0f);
		}
	}
}

void UTobiiGazeFocusManagerComponent::GetFocusData(FTobiiGazeFocusData& OutFocusData) const
{
	OutFocusData = FocusData;
}

void UTobiiGazeFocusManagerComponent::GetAllFocusData(TArray<FTobiiGazeFocusData>& OutFocusData) const
{
	OutFocusData.Empty();
	
	const TArray<FTobiiGazeFocusData>& GTOMResults = FTobiiGTOMModule::Get().G2OMFocusResults;
	for (const FTobiiGazeFocusData& Candidate : GTOMResults)
	{
		if (ValidateFocusLayers(*Candidate.FocusedPrimitiveComponent.Get()))
		{
			OutFocusData.Add(Candidate);
		}
	}
}

void UTobiiGazeFocusManagerComponent::NotifyPrimitiveComponentGazeFocusReceived(UPrimitiveComponent& PrimitiveComponentToReceiveFocus)
{
	if (PrimitiveComponentToReceiveFocus.GetOwner() != nullptr)
	{
		PrimitiveComponentToReceiveFocus.ComponentTags.AddUnique(FTobiiGazeFocusTags::HasGazeFocusTag);

		UTobiiGazeFocusableComponent* GazeFocusableComponent = (UTobiiGazeFocusableComponent*)PrimitiveComponentToReceiveFocus.GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		if (GazeFocusableComponent != nullptr)
		{
			GazeFocusableComponent->ReceiveFocus(this, &PrimitiveComponentToReceiveFocus);
		}
	}

	OnFocusableGainedFocus.Broadcast(&PrimitiveComponentToReceiveFocus);
}

void UTobiiGazeFocusManagerComponent::NotifyPrimitiveComponentGazeFocusLost(UPrimitiveComponent& PrimitiveComponentToLoseFocus)
{
	if (PrimitiveComponentToLoseFocus.GetOwner() != nullptr)
	{
		PrimitiveComponentToLoseFocus.ComponentTags.Remove(FTobiiGazeFocusTags::HasGazeFocusTag);

		UTobiiGazeFocusableComponent* GazeFocusableComponent = (UTobiiGazeFocusableComponent*)PrimitiveComponentToLoseFocus.GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		if (GazeFocusableComponent != nullptr)
		{
			GazeFocusableComponent->LoseFocus(this, &PrimitiveComponentToLoseFocus);
		}
	}

	OnFocusableLostFocus.Broadcast(&PrimitiveComponentToLoseFocus);
}

bool UTobiiGazeFocusManagerComponent::ValidateFocusLayers(UPrimitiveComponent& Candidate) const
{
	if (bIsWhiteList)
	{
		//A white list only allows focusables that have a layer that is in the list. 
		for (auto& Layer : FocusLayers)
		{
			if (QueryFocusableLayer(Candidate, Layer))
			{
				return true;
			}
		}
	}
	else
	{
		//A black list will block any focusables whos layer is in the list.
		for (auto& Layer : FocusLayers)
		{
			if (QueryFocusableLayer(Candidate, Layer))
			{
				return false;
			}
		}

		//No filters hit, this object is ok.
		return true;
	}

	return false;
}

bool UTobiiGazeFocusManagerComponent::QueryFocusableLayer(UPrimitiveComponent& Candidate, FName LayerToQuery) const
{
	FName FocusLayer = UTobiiGazeFocusableComponent::GetFocusLayerForPrimitive(&Candidate);
	if (FocusLayer == FName("Default"))
	{
		return true;
	}

	return FocusLayer == LayerToQuery;
}
