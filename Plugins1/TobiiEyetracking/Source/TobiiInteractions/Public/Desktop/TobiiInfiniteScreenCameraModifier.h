/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"

#include "TobiiInfiniteScreenCameraModifier.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))
class TOBIIINTERACTIONS_API UTobiiInfiniteScreenCameraModifier : public UCameraModifier
{
	GENERATED_BODY()

public:
	UTobiiInfiniteScreenCameraModifier();

	//Use this to test if the user has turned extended view on and it is available.
	UFUNCTION(BlueprintCallable, Category = "Infinite Screen")
	bool ExtendedViewAvailable();

	/************************************************************************/
	/* UCameraModifier                                                      */
	/************************************************************************/
public:
	virtual bool ModifyCamera(float DeltaTime, struct FMinimalViewInfo& InOutPOV) override;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Infinite Screen Properties")
	FRotator InfiniteScreenAngles;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Infinite Screen Properties")
	FMinimalViewInfo ViewInfoWithoutExtendedView;
};
