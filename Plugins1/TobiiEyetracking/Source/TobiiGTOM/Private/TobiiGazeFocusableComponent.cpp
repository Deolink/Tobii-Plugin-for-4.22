/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiGazeFocusableComponent.h"
#include "TobiiGTOMBlueprintLibrary.h"
#include "TobiiBlueprintLibrary.h"
#include "TobiiTypes.h"
#include "TobiiGTOMModule.h"

#include "tobii_gtom.h"

#include "Runtime/Engine/Public/DrawDebugHelpers.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"
#include "Engine/Engine.h"

#include "Runtime/Core/Public/HAL/IConsoleManager.h"

static TAutoConsoleVariable<int32> CVarDrawCleanUIDebug(TEXT("tobii.debug.CleanUI"), 1, TEXT("0 - CleanUI debug visualizations are not displayed. 1 - CleanUI debug visualizations are displayed."));

static TMap<FocusComponentUID, TWeakObjectPtr<UTobiiGazeFocusableComponent>> GRegisteredTobiiFocusables;
static TSet<FPrimitiveComponentId>* GazeFocusPrioSetA = nullptr;
static TSet<FPrimitiveComponentId>* GazeFocusPrioSetB = nullptr;
static bool bUseGazeFocusPrioSetA = true;

void UTobiiGazeFocusableComponent::ClearFocusableComponents()
{
	GRegisteredTobiiFocusables.Empty();
}

const TMap<FocusComponentUID, TWeakObjectPtr<UTobiiGazeFocusableComponent>>& UTobiiGazeFocusableComponent::GetFocusableComponents()
{
	return GRegisteredTobiiFocusables;
}

void UTobiiGazeFocusableComponent::UpdateGazeFocusPrio(FVector POVActorLocation, int32 MaxNrFocusables)
{
	TMap<FPrimitiveComponentId, float> PrioMap;
	TSet<FPrimitiveComponentId> NonPrioSet;

	//Determine which primitive components should be considered for gaze focus.
	for (auto& FocusableElement : GRegisteredTobiiFocusables)
	{
		if (FocusableElement.Value.IsValid())
		{
			UTobiiGazeFocusableComponent* FocusableComponent = FocusableElement.Value.Get();
			AActor* FocusableActor = FocusableComponent->GetOwner();
			if (FocusableActor != nullptr)
			{
				TArray<UActorComponent*> PrimitiveComponents = FocusableActor->GetComponentsByClass(UPrimitiveComponent::StaticClass());
				for (UActorComponent* Comp : PrimitiveComponents)
				{
					UPrimitiveComponent* PrimitiveComponent = (UPrimitiveComponent*)Comp;
					if (PrimitiveComponent == nullptr)
					{
						continue;
					}

					bool bSkipComponent = false;
					float MaxDistance = 0.0f;
					float Priority = 0.0f;
					for (const FName& CurrentTag : PrimitiveComponent->ComponentTags)
					{
						if (CurrentTag == FTobiiGazeFocusTags::NotGazeFocusableTag)
						{
							bSkipComponent = true;
							break;
						}

						FString CurrentTagString = CurrentTag.ToString();
						if (CurrentTagString.StartsWith(FTobiiGazeFocusTags::GazeFocusableMaximumDistanceTag))
						{
							FString Argument = CurrentTagString.RightChop(FTobiiGazeFocusTags::GazeFocusableMaximumDistanceTag.Len());
							if (Argument.IsNumeric())
							{
								MaxDistance = FCString::Atof(*Argument);
							}
						}
						if (CurrentTagString.StartsWith(FTobiiGazeFocusTags::GazeFocusablePriorityTag))
						{
							FString Argument = CurrentTagString.RightChop(FTobiiGazeFocusTags::GazeFocusablePriorityTag.Len());
							if (Argument.IsNumeric())
							{
								Priority = FCString::Atof(*Argument);
							}
						}
					}

					if (bSkipComponent)
					{
						continue;
					}

					if (MaxDistance == 0.0f)
					{
						MaxDistance = FocusableComponent->DefaultMaxFocusDistance;
					}
					if (Priority == 0.0f)
					{
						Priority = FocusableComponent->DefaultFocusPriority;
					}

					bool bAcceptComponent = true;
					if (MaxDistance != 0.0f)
					{
						float Distance = FVector::Distance(POVActorLocation, PrimitiveComponent->GetComponentLocation());
						if (Distance > MaxDistance)
						{
							bAcceptComponent = false;
						}
					}

					if (bAcceptComponent)
					{
						if (Priority == 0.0f)
						{
							NonPrioSet.Add(PrimitiveComponent->ComponentId);
						}
						else
						{
							PrioMap.Add(PrimitiveComponent->ComponentId, Priority);
						}
					}
				}
			}
		}
	}

	PrioMap.ValueSort(TGreater<float>());

	TSet<FPrimitiveComponentId>* NewGazeFocusPrioSet = new TSet<FPrimitiveComponentId>();
	MaxNrFocusables -= 1; //Since we test before add, take that into account
	for (auto& SortedElement : PrioMap)
	{
		if (NewGazeFocusPrioSet->Num() >= MaxNrFocusables)
		{
			break;
		}
		NewGazeFocusPrioSet->Add(SortedElement.Key);
	}
	for (auto NonPrioElement : NonPrioSet)
	{
		if (NewGazeFocusPrioSet->Num() >= MaxNrFocusables)
		{
			break;
		}
		NewGazeFocusPrioSet->Add(NonPrioElement);
	}
	
	//Destroy old set, set our new one and flip our record pointer so the one we swapped into becomes the active one.
	TSet<FPrimitiveComponentId>*& ListPtr = bUseGazeFocusPrioSetA ? GazeFocusPrioSetB : GazeFocusPrioSetA;
	if (ListPtr != nullptr)
	{
		delete ListPtr;
	}
	ListPtr = NewGazeFocusPrioSet;
	bUseGazeFocusPrioSetA = !bUseGazeFocusPrioSetA;
}

const TSet<FPrimitiveComponentId>* UTobiiGazeFocusableComponent::GetGazeFocusPrioSet()
{
	return bUseGazeFocusPrioSetA ? GazeFocusPrioSetA : GazeFocusPrioSetB;
}

bool UTobiiGazeFocusableComponent::IsPrimitiveFocusable(UPrimitiveComponent* Primitive)
{
	if (Primitive == nullptr || Primitive->ComponentHasTag(FTobiiGazeFocusTags::NotGazeFocusableTag))
	{
		//Override disabled
		return false;
	}
	else if (Primitive->ComponentHasTag(FTobiiGazeFocusTags::GazeFocusableTag))
	{
		//Override enabled
		return true;
	}
	else if (Primitive->GetOwner())
	{
		UTobiiGazeFocusableComponent* GazeFocusable = (UTobiiGazeFocusableComponent*)Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		if (GazeFocusable != nullptr && GazeFocusable->bDefaultIsFocusable)
		{
			return true;
		}
	}

	return false;
}

float UTobiiGazeFocusableComponent::GetMaxFocusDistanceForPrimitive(UPrimitiveComponent* Primitive)
{
	float MaxDistance = 0.0f;
	bool bMaxDistanceFound = false;
	if (Primitive == nullptr)
	{
		return MaxDistance;
	}

	for (const FName& CurrentTag : Primitive->ComponentTags)
	{
		FString CurrentTagString = CurrentTag.ToString();
		if (CurrentTagString.StartsWith(FTobiiGazeFocusTags::GazeFocusableMaximumDistanceTag))
		{
			FString Argument = CurrentTagString.RightChop(FTobiiGazeFocusTags::GazeFocusableMaximumDistanceTag.Len());
			if (Argument.IsNumeric())
			{
				MaxDistance = FCString::Atof(*Argument);
				bMaxDistanceFound = true;
			}
		}
	}

	if (!bMaxDistanceFound && Primitive->GetOwner() && Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass()))
	{
		UTobiiGazeFocusableComponent* GazeFocusableComponent = (UTobiiGazeFocusableComponent*)Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		MaxDistance = GazeFocusableComponent->DefaultMaxFocusDistance;
	}

	return MaxDistance;
}

float UTobiiGazeFocusableComponent::GetFocusPriorityForPrimitive(UPrimitiveComponent* Primitive)
{
	float Priority = 0.0f;
	bool bPriorityFound = false;
	if (Primitive == nullptr)
	{
		return Priority;
	}

	for (const FName& CurrentTag : Primitive->ComponentTags)
	{
		FString CurrentTagString = CurrentTag.ToString();
		if (CurrentTagString.StartsWith(FTobiiGazeFocusTags::GazeFocusablePriorityTag))
		{
			FString Argument = CurrentTagString.RightChop(FTobiiGazeFocusTags::GazeFocusablePriorityTag.Len());
			if (Argument.IsNumeric())
			{
				Priority = FCString::Atof(*Argument);
				bPriorityFound = true;
			}
		}
	}

	if (!bPriorityFound && Primitive->GetOwner() && Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass()))
	{
		UTobiiGazeFocusableComponent* GazeFocusableComponent = (UTobiiGazeFocusableComponent*)Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		Priority = GazeFocusableComponent->DefaultFocusPriority;
	}

	return Priority;
}

FName UTobiiGazeFocusableComponent::GetFocusLayerForPrimitive(UPrimitiveComponent* Primitive)
{
	FName FocusLayer = FName("Default");
	bool bFocusLayerFound = false;
	if (Primitive == nullptr)
	{
		return FocusLayer;
	}

	for (const FName& CurrentTag : Primitive->ComponentTags)
	{
		FString CurrentTagString = CurrentTag.ToString();
		if (CurrentTagString.StartsWith(FTobiiGazeFocusTags::GazeFocusableLayerTag))
		{
			FString Argument = CurrentTagString.RightChop(FTobiiGazeFocusTags::GazeFocusableLayerTag.Len());
			Argument.TrimStartAndEndInline();
			if (!Argument.IsEmpty())
			{
				FocusLayer = FName(*Argument);
				bFocusLayerFound = true;
			}
		}
	}

	if (!bFocusLayerFound && Primitive->GetOwner() && Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass()))
	{
		UTobiiGazeFocusableComponent* GazeFocusableComponent = (UTobiiGazeFocusableComponent*)Primitive->GetOwner()->GetComponentByClass(UTobiiGazeFocusableComponent::StaticClass());
		FocusLayer = GazeFocusableComponent->DefaultFocusLayer;
	}

	return FocusLayer;
}

//////////////////////////////////////////////

UTobiiGazeFocusableComponent::UTobiiGazeFocusableComponent()
	: bDefaultIsFocusable(true)
	, DefaultFocusPriority(0.0f)
	, DefaultMaxFocusDistance(0.0f)
	, DefaultFocusLayer("Default")

	, bRefreshedOnce(false)
	, bApplyCleanUIToNonSelectedWidgets(false)
{
	PrimaryComponentTick.bCanEverTick = true;
}

UTobiiGazeFocusableWidget* UTobiiGazeFocusableComponent::GetGazeFocusedWidget()
{
	return GazeFocusedWidget.IsValid() ? GazeFocusedWidget.Get() : nullptr;
}

void UTobiiGazeFocusableComponent::ReceiveFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent)
{
	OnReceivedGazeFocus(FocusManager, FocusedComponent);
	ReceivedGazeFocus.Broadcast(FocusManager, FocusedComponent);
	UpdateWorldSpaceUI();
}

void UTobiiGazeFocusableComponent::LoseFocus(UTobiiGazeFocusManagerComponent* FocusManager, UPrimitiveComponent* FocusedComponent)
{
	OnLostGazeFocus(FocusManager, FocusedComponent);
	LostGazeFocus.Broadcast(FocusManager, FocusedComponent);
}

void UTobiiGazeFocusableComponent::BeginPlay()
{
	Super::BeginPlay();

	GRegisteredTobiiFocusables.Add(GetUniqueID(), this);
}

void UTobiiGazeFocusableComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	GRegisteredTobiiFocusables.Remove(GetUniqueID());

	Super::EndPlay(EndPlayReason);
}

void UTobiiGazeFocusableComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GEngine == nullptr
		|| GEngine->GameViewport == nullptr
		|| GEngine->GameViewport->GetGameViewport() == nullptr)
	{
		return;
	}

	if (!bRefreshedOnce)
	{
		bRefreshedOnce = true;
		Refresh();
	}
	
	UpdateWorldSpaceUI();
}

void UTobiiGazeFocusableComponent::UpdateWorldSpaceUI()
{
 	TArray<TobiiUIElementData> CurrentElementData;
 	for (TWeakObjectPtr<UTobiiGazeFocusableWidget> WorldSpaceWidget : FocusableWidgets)
 	{
 		if (!WorldSpaceWidget.IsValid() || !WorldSpaceWidget->HostComponent.IsValid() || !WorldSpaceWidget->IsVisible() || !WorldSpaceWidget->HostComponent->IsVisible())
 		{
 			continue;
 		}
 
 		STobiiGazeFocusableWidget* SlateContainer = (STobiiGazeFocusableWidget*)&WorldSpaceWidget->TakeWidget().Get();
 		FSlateRect WidgetRenderBounds = SlateContainer->GetCachedGeometry().GetRenderBoundingRect();
 		FVector WidgetCenter, WidgetTopLeft;
 		UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(WorldSpaceWidget->HostComponent.Get(), WidgetRenderBounds.GetCenter(), WidgetCenter);
 		UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(WorldSpaceWidget->HostComponent.Get(), WidgetRenderBounds.GetTopLeft(), WidgetTopLeft);
 		const float WidgetBoundingSphereRadius = FVector::Dist(WidgetCenter, WidgetTopLeft);
 
 		if (WorldSpaceWidget->CleanUIMode == ETobiiCleanUIMode::Normal)
 		{
 			const FTobiiGazeData& GazeData = ITobiiCore::GetEyeTracker()->GetCombinedGazeData();
 			const FTobiiGazeData& CombinedGazeData = ITobiiCore::GetEyeTracker()->GetCombinedGazeData();
 
 			SlateContainer->bHasWorldConeFocus = UTobiiGTOMBlueprintLibrary::TestConeSphereIntersection(GazeData.WorldGazeOrigin, GazeData.WorldGazeDirection, CombinedGazeData.WorldGazeConeAngleDegrees, WidgetCenter, WidgetBoundingSphereRadius);
 			SlateContainer->bIsGazeStable = CombinedGazeData.bIsStable;
 		}
 
 		TobiiUIElementData WorldSpaceData;
 		WorldSpaceData.Id = WorldSpaceWidget->GetUniqueID();
 		WorldSpaceData.IsScreenSpaceWidget = false;
 		WorldSpaceData.WorldCenter[0] = WidgetCenter.X;
 		WorldSpaceData.WorldCenter[1] = WidgetCenter.Y;
 		WorldSpaceData.WorldCenter[2] = WidgetCenter.Z;
 		WorldSpaceData.WorldTopLeft[0] = WidgetTopLeft.X;
 		WorldSpaceData.WorldTopLeft[1] = WidgetTopLeft.Y;
 		WorldSpaceData.WorldTopLeft[2] = WidgetTopLeft.Z;
 		CurrentElementData.Add(WorldSpaceData);
 
 		static const auto DrawDebugCVar = IConsoleManager::Get().FindConsoleVariable(TEXT("tobii.debug"));
 		if (DrawDebugCVar->GetInt() && CVarDrawCleanUIDebug.GetValueOnGameThread())
 		{
 			DrawDebugBox(GetWorld(), WidgetCenter, FVector(50.0f), FColor::Magenta, false, 0.0f);
 			DrawDebugBox(GetWorld(), WidgetTopLeft, FVector(20.0f), FColor::Magenta, false, 0.0f);
 			//DrawDebugBox(GetWorld(), WidgetCenter, FVector(WidgetBoundingSphereRadius), SlateContainer->bHasWorldConeFocus ? FColor::Green : FColor::Purple, false, 0.0f);
 		}
 	}
 
 	TobiiUIData UIData;
 	UIData.NrElements = CurrentElementData.Num();
 	UIData.Elements = CurrentElementData.GetData();
 
 	TobiiGazeFocusableID SelectedID = FTobiiGTOMModule::Get().GTOMEngine->ProcessUISet(UIData);
 	UTobiiGazeFocusableWidget* NewFocusedWidget = nullptr;
 	for (TWeakObjectPtr<UTobiiGazeFocusableWidget> WorldSpaceWidget : FocusableWidgets)
 	{
 		if (WorldSpaceWidget.IsValid() && WorldSpaceWidget->HostComponent.IsValid())
 		{
 			STobiiGazeFocusableWidget* SlateContainer = (STobiiGazeFocusableWidget*)&WorldSpaceWidget->TakeWidget().Get();
 			if (WorldSpaceWidget->IsVisible() && WorldSpaceWidget->HostComponent->IsVisible())
 			{
 				bool bIsSelectedWidget = WorldSpaceWidget->GetUniqueID() == SelectedID;
 				if (bIsSelectedWidget)
 				{
 					NewFocusedWidget = WorldSpaceWidget.Get();
 				}
 
 				if (WorldSpaceWidget->CleanUIMode == ETobiiCleanUIMode::FocusExclusive)
 				{
 					if (bIsSelectedWidget)
 					{
 						SlateContainer->bHasWorldConeFocus = true;
 						SlateContainer->bIsGazeStable = true;
 					}
 					else
 					{
 						SlateContainer->bHasWorldConeFocus = false;
 						SlateContainer->bIsGazeStable = true;
 					}
 				}
 			}
 			else if (WorldSpaceWidget->CleanUIMode == ETobiiCleanUIMode::FocusExclusive)
 			{
 				SlateContainer->bHasWorldConeFocus = false;
 				SlateContainer->bIsGazeStable = true;
 			}
 		}
 	}
 
 	if (NewFocusedWidget == nullptr && GazeFocusedWidget.IsValid())
 	{
 		//We lost focus completely
 		GazeFocusedWidget->LoseFocus();
 	}
 	else if (NewFocusedWidget != nullptr && !GazeFocusedWidget.IsValid())
 	{
 		//We gained focus from no focus
 		NewFocusedWidget->ReceiveFocus();
 	}
 	else if (NewFocusedWidget != nullptr && GazeFocusedWidget.IsValid() && NewFocusedWidget != GazeFocusedWidget.Get())
 	{
 		//Focus shifted from one object to another
 		GazeFocusedWidget->LoseFocus();
 		NewFocusedWidget->ReceiveFocus();
 	}
 
 	GazeFocusedWidget = NewFocusedWidget;
}

void UTobiiGazeFocusableComponent::Refresh()
{
	FocusableWidgets.Empty();
	AActor* Owner = GetOwner();
 	if (Owner != nullptr)
 	{
 		TArray<UActorComponent*> WidgetComponents = Owner->GetComponentsByClass(UWidgetComponent::StaticClass());
 		for (UActorComponent* Component : WidgetComponents)
 		{
			UWidgetComponent* WidgetComponent = (UWidgetComponent*)Component;
 			GatherGazeFocusableWidgets(WidgetComponent->GetUserWidgetObject(), FocusableWidgets, WidgetComponent);
 		}
 	}
}

void UTobiiGazeFocusableComponent::GatherGazeFocusableWidgets(UWidget* Parent, TArray<TWeakObjectPtr<UTobiiGazeFocusableWidget>>& OutFocusableWidgets, UWidgetComponent* OptionalHostWidgetComponent)
{
	UUserWidget* UserWidget = Cast<UUserWidget>(Parent);
	if (UserWidget != nullptr)
	{
		GatherGazeFocusableWidgets(UserWidget->GetRootWidget(), OutFocusableWidgets, OptionalHostWidgetComponent);
	}
	else
	{
		UTobiiGazeFocusableWidget* CleanUIContainer = Cast<UTobiiGazeFocusableWidget>(Parent);
		if (CleanUIContainer != nullptr)
		{
			CleanUIContainer->HostComponent = OptionalHostWidgetComponent;
			TSharedRef<SWidget> SlateWidget = CleanUIContainer->TakeWidget();
			((STobiiGazeFocusableWidget*)&SlateWidget.Get())->bIsWorldSpaceWidget = true;
			OutFocusableWidgets.Add(CleanUIContainer);
		}

		UPanelWidget* Panel = Cast<UPanelWidget>(Parent);
		if (Panel != nullptr)
		{
			for (int32 ChildIdx = 0; ChildIdx < Panel->GetChildrenCount(); ChildIdx++)
			{
				GatherGazeFocusableWidgets(Panel->GetChildAt(ChildIdx), OutFocusableWidgets, OptionalHostWidgetComponent);
			}
		}
	}
}
