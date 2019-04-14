/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "Runtime/Engine/Classes/Engine/EngineTypes.h"

#include "TobiiGTOMTypes.generated.h"

class UTobiiGazeFocusableWidget;
typedef int32 FocusComponentUID;

UENUM(BlueprintType)
enum class ETobiiCleanUIMode : uint8
{
	Disabled			/** CleanUI is disabled for this widget. */
	, Normal			/** CleanUI will only consider the gaze point for determining alpha, and will ignore nearby widgets. */
	, FocusExclusive	/** This widget is aware of it's neighbors and only one widget can be faded in at a time. This is intended to be used together with the GTOM focus system to ensure only the focused widget is faded in. */
};

/**
  * Information about an object that is being considered when determining user focus.
  * When utilizing gaze, this is almost always what you should be using as your input data.
  */
USTRUCT(BlueprintType)
struct FTobiiGazeFocusData
{
	GENERATED_USTRUCT_BODY()

public:
	FTobiiGazeFocusData()
		: FocusedPrimitiveComponent()
		, FocusedActor()
		, FocusedWidget()
		, LastVisibleWorldLocation(0.0f, 0.0f, 0.0f)
		, FocusConfidence(0.0f)
	{}

	//This is the actor that the Focused Primitive Component belongs to.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Data")
	TWeakObjectPtr<AActor> FocusedActor;

	//This is the primitive component that is most likely to hold the user's focus.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Data")
	TWeakObjectPtr<UPrimitiveComponent> FocusedPrimitiveComponent;

	//This is the primitive component that is most likely to hold the user's focus.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Data")
	TWeakObjectPtr<UTobiiGazeFocusableWidget> FocusedWidget;

	//This is the point on the Focused Primitive Component that was last confirmed visible to the user. This is very useful when aligning objects towards a focused object.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Data")
	FVector LastVisibleWorldLocation;

	//This is how confident the focus system is that this object is in focus. The object with the highest confidence is not necessarily the object with focus however.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Focus Data")
	float FocusConfidence;
};

//This contains the tags that will be used to inform the GTOM system about the primitive component they are attached to.
class TOBIIGTOM_API FTobiiGazeFocusTags
{
public:
	static FName HasGazeFocusTag;						//A primitive component with this tag currently has gaze focus.
	static FName GazeFocusableTag;						//A primitive component with this tag will participate in GTOM even if the actor owning the primitive doesn't have a GazeFocusableComponent, or if the default for the gaze focusable is off.
	static FName NotGazeFocusableTag;					//A primitive component with this tag will not participate in GTOM even if the actor owning the primitive component has a GazeFocusableComponent.
	static FString GazeFocusablePriorityTag;			//A primitive component with this tag will modify it's priority. Priority is used when only a certain number of focusables can participate in an operation. An example of this is ID buffer based GTOM. This is an argument tag, this means you must provide the value after the tag. Usage example: GazeFocusablePriorityTag 100
	static FString GazeFocusableMaximumDistanceTag;		//A primitive component with this tag and has the GazeFocusableTag will only be considered if the distance between the GTOM source and the component is shorter than the argument part of the tag. Please note that this tag cannot be used to force the GTOM line traces to be longer than default, only exclude the primitive if the distance is longer than this argument. This is an argument tag, this means you must provide the value after the tag. Usage example: GazeFocusableMaximumDistanceTag 10000
	static FString GazeFocusableLayerTag;				//A focus manager can opt to only query a subset of focusables by using a focus layer. A primitive will this tag will only be subject to the layer supplied as the argument. This is an argument tag, this means you must provide the value after the tag. Usage example: GazeFocusableLayerTag Enemies
};
