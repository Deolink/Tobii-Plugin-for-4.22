/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#pragma once

#include "CoreMinimal.h"

#include "TobiiGazeFocusableWidget.h"

#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Components/WidgetInteractionComponent.h"
#include "Runtime/UMG/Public/Components/WidgetComponent.h"

#include "TobiiGTOMBlueprintLibrary.generated.h"

/**
  * Simplified interface for blueprint use. Only exposes the features most likely to be consumed from BP.
  */
UCLASS()
class TOBIIGTOM_API UTobiiGTOMBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

public:
	/**
	  * This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii GTOM")
	static bool IsPrimitiveComponentGazeFocusable(UPrimitiveComponent* PrimitiveComponent);

	/**
	  * This function will find and return all real roots to the square equation Ax^2 + Bx + C = 0
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii Math Utils")
	static bool FindLargestInscribedAlignedRect(float CircleSegmentAngleRad, float CircleRadius, FVector2D& LargestInscribedRectSize, float& DistanceToCenter);

	/**
      * This function will project a local point in a widget hosted by a widget component into world space
      */
	UFUNCTION(BlueprintCallable, Category = "Tobii Math Utils")
	static bool TransformWidgetLocalPointToWorld(UWidgetComponent* Component, const FVector2D& LocalWidgetLocation, FVector& OutWorldLocation);

	/**
	  * This function will test whether a right angle cone and a sphere intersects. Very useful for world space eye tracking.
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii Math Utils")
	static bool TestConeSphereIntersection(const FVector& ConeApex, const FVector& ConeDirection, const float ConeAngleDeg, const FVector& SphereCenter, const float SphereRadius);

	/**
	  * This function will test whether a rectangle and a rotated ellipse intersects. Very useful for screen space eye tracking.
	  */
	UFUNCTION(BlueprintCallable, Category = "Tobii Math Utils")
	static bool TestRectEllipseIntersection(const FVector2D& RectangleCenter, const FVector2D& RectangleRightAxis, const FVector2D& RectangleUpAxis, const FVector2D& RectangleExtents, const FVector2D& EllipseCenter, const FVector2D& EllipseRadii, const float& EllipseRotationDeg);
};
