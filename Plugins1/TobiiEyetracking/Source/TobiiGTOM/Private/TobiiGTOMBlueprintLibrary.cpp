/******************************************************************************
* Copyright 2017- Tobii Technology AB. All rights reserved.
*
* @author Temaran | Fredrik Lindh | fredrik.lindh@tobii.com | https://github.com/Temaran
******************************************************************************/

#include "TobiiGTOMBlueprintLibrary.h"
#include "TobiiGTOMModule.h"
#include "TobiiGazeFocusableComponent.h"

#include "Runtime/Core/Public/Misc/ConfigCacheIni.h"
#include "Runtime/Core/Public/Misc/Paths.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Public/Slate/SceneViewport.h"
#include "Engine/Engine.h"

UTobiiGTOMBlueprintLibrary::UTobiiGTOMBlueprintLibrary(const class FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
}

bool UTobiiGTOMBlueprintLibrary::IsPrimitiveComponentGazeFocusable(UPrimitiveComponent* PrimitiveComponent)
{
	return UTobiiGazeFocusableComponent::IsPrimitiveFocusable(PrimitiveComponent);
}

bool UTobiiGTOMBlueprintLibrary::FindLargestInscribedAlignedRect(float CircleSegmentAngleRad, float CircleRadius, FVector2D& LargestInscribedRectSize, float& DistanceToCenter)
{
	//https://math.stackexchange.com/questions/2829710/largest-inscribed-rectangle-in-sector

	if (CircleSegmentAngleRad > FLT_EPSILON && CircleRadius > FLT_EPSILON)
	{
		if (CircleSegmentAngleRad >= PI - FLT_EPSILON)
		{
			const float SqrtTwo = FMath::Sqrt(2.0f);
			const float SqrtTwoOverTwo = SqrtTwo / 2.0f;
			LargestInscribedRectSize.Set(SqrtTwo * CircleRadius, SqrtTwoOverTwo * CircleRadius);
			DistanceToCenter = CircleRadius / 2.0f;
		}
		else
		{
			const float Theta = CircleSegmentAngleRad / 4.0f;
			float ThetaSine, ThetaCosine;
			FMath::SinCos(&ThetaSine, &ThetaCosine, Theta);
			const float Height = CircleRadius * ThetaSine * 2.0f;
			const float AlongX = CircleRadius * ThetaCosine;

			const float HalfAlpha = CircleSegmentAngleRad / 2.0f;
			float HalfAlphaSine, HalfAlphaCosine;
			FMath::SinCos(&HalfAlphaSine, &HalfAlphaCosine, HalfAlpha);
			const float B = CircleRadius * ThetaSine * HalfAlphaCosine / HalfAlphaSine;

			LargestInscribedRectSize.Set(AlongX - B, Height);
			DistanceToCenter = B + FMath::Min(LargestInscribedRectSize.X, LargestInscribedRectSize.Y) / 2.0f;
		}

		return true;
	}

	LargestInscribedRectSize.Set(0.0f, 0.0f);
	DistanceToCenter = 0.0f;
	return false;
}

bool UTobiiGTOMBlueprintLibrary::TransformWidgetLocalPointToWorld(UWidgetComponent* Component, const FVector2D& LocalWidgetLocation, FVector& OutWorldLocation)
{
	if (Component == nullptr)
	{
		return false;
	}

	EWidgetGeometryMode GeometryMode = Component->GetGeometryMode();
	switch (GeometryMode)
	{
	case EWidgetGeometryMode::Plane:
	{
		//First let's calculate some measurements we will need
		const FVector2D DrawSize = Component->GetDrawSize();
		const FVector2D Pivot = Component->GetPivot();

		//Undo the pivot and transform to world space			
		OutWorldLocation = Component->GetComponentTransform().TransformPosition(FVector(0.0f, DrawSize.X * Pivot.X - LocalWidgetLocation.X, DrawSize.Y * Pivot.Y - LocalWidgetLocation.Y));

		return true;
	}

	case EWidgetGeometryMode::Cylinder:
	{
		//First let's calculate some measurements we will need
		const FVector2D DrawSize = Component->GetDrawSize();
		const FVector2D Pivot = Component->GetPivot();
		const float NormalizedLocationX = LocalWidgetLocation.X / DrawSize.X;
		const float ArcAngleRadians = FMath::DegreesToRadians(Component->GetCylinderArcAngle());
		const float Radius = DrawSize.X / ArcAngleRadians;
		const float Apothem = Radius * FMath::Cos(0.5f * ArcAngleRadians);
		const float ChordLength = 2.0f * Radius * FMath::Sin(0.5f * ArcAngleRadians);
		const float PivotOffsetX = ChordLength * (0.5 - Pivot.X);

		//Determine the endpoints of the UI surface in UI space radians. The projection is "reversed" here so the UI surface segment is actually centered around X-.
		const float Endpoint1 = FMath::Fmod(FMath::Atan2(-0.5f * ChordLength, -Apothem) + 2 * PI, 2 * PI);
		const float Endpoint2 = FMath::Fmod(FMath::Atan2(+0.5f * ChordLength, -Apothem) + 2 * PI, 2 * PI);

		//Figure out where on the circle segment our X is using our normalized coordinate 
		const float InterpolatedAngle = FMath::Lerp(Endpoint1, Endpoint2, NormalizedLocationX);

		//We can now determine our coordinate in circle space (the space where the origin is the center of the cylinder circle Y-segment the X-coordinate we are seeking is on) as well as the distance to the cylinder surface.
		const float CircleSpaceWidgetX = Radius * FMath::Cos(InterpolatedAngle);
		const float CircleSpaceWidgetDistanceY = Radius * FMath::Sin(InterpolatedAngle);

		//Figure out our Z coordinate in widget space. This is easy since it's a cylinder.
		const float WidgetSpaceZ = DrawSize.Y * Pivot.Y - LocalWidgetLocation.Y;

		//We now convert the circle space coordinates to widget space (The origin is located at the center of the corda, in the middle of the widget component plane) and insert the widget space Z.
		const FVector WidgetSpaceCoord(Apothem + CircleSpaceWidgetX, -CircleSpaceWidgetDistanceY + PivotOffsetX, WidgetSpaceZ);

		//Finally we can simply transform this location to world space and we're done.
		OutWorldLocation = Component->GetComponentTransform().TransformPosition(WidgetSpaceCoord);

		return true;
	}

	default:
		break;
	}

	return false;
}

bool UTobiiGTOMBlueprintLibrary::TestConeSphereIntersection(const FVector& ConeApex, const FVector& ConeDirection, const float ConeAngleDeg, const FVector& SphereCenter, const float SphereRadius)
{
	//http://blog.julien.cayzac.name/2009/12/frustum-culling-sphere-cone-test-with.html

	float ConeAngleSine, ConeAngleCosine;
	FMath::SinCos(&ConeAngleSine, &ConeAngleCosine, FMath::DegreesToRadians(ConeAngleDeg));

	const FVector DirectionTowardsSphere = SphereCenter - ConeApex;
	const float SelfDot = FVector::DotProduct(DirectionTowardsSphere, DirectionTowardsSphere);
	const float a = FVector::DotProduct(DirectionTowardsSphere, ConeDirection);
	const float p(a*ConeAngleSine);
	const float q(ConeAngleCosine * ConeAngleCosine * SelfDot - a * a);
	const bool tmp(q < 0);

	float lhs[2];
	lhs[0] = (SphereRadius*SphereRadius - q);
	lhs[1] = -lhs[0];
	int result = (lhs[(p < SphereRadius) || !tmp] < 2.0f * SphereRadius * p) ? -1 : tmp;
	return result != 0; // -1 means partially included. 1 means fully included
}

bool UTobiiGTOMBlueprintLibrary::TestRectEllipseIntersection(const FVector2D& RectangleCenter, const FVector2D& RectangleRightAxis, const FVector2D& RectangleUpAxis, const FVector2D& RectangleExtents, const FVector2D& EllipseCenter, const FVector2D& EllipseRadii, const float& EllipseRotationDeg)
{
	//https://www.geometrictools.com/Documentation/IntersectionRectangleEllipse.pdf :: Minkowski sum

	//Compute the increase in extents for R'.
	float EllipseSine, EllipseCosine;
	FMath::SinCos(&EllipseSine, &EllipseCosine, FMath::DegreesToRadians(EllipseRotationDeg));
	FMatrix2x2 V(EllipseCosine, -EllipseSine, EllipseSine, EllipseCosine);
	FMatrix2x2 VT(EllipseCosine, EllipseSine, -EllipseSine, EllipseCosine);
	FMatrix2x2 D(1.0f / EllipseRadii.X, 0.0f, 0.0f, 1.0f / EllipseRadii.Y);
	FMatrix2x2 M = V.Concatenate(D).Concatenate(D).Concatenate(VT);
	FMatrix2x2 MInv = M.Inverse();

	const float LRight = FMath::Sqrt(FVector2D::DotProduct(RectangleRightAxis, MInv.TransformVector(RectangleRightAxis)));
	const float LUp = FMath::Sqrt(FVector2D::DotProduct(RectangleUpAxis, MInv.TransformVector(RectangleUpAxis)));

	//Transform the ellipse center to the rectangle coordinate system.
	FVector2D KmC = EllipseCenter - RectangleCenter;
	float xi[2] = { FVector2D::DotProduct(RectangleRightAxis, KmC), FVector2D::DotProduct(RectangleUpAxis, KmC) };
	if (FMath::Abs(xi[0]) <= RectangleExtents.X + LRight && FMath::Abs(xi[1]) <= RectangleExtents.Y + LUp)
	{
		float s[2] = { (xi[0] >= 0.0f ? 1.0f : -1.0f), (xi[1] >= 0.0f ? 1.0f : -1.0f) };
		FVector2D PmC = s[0] * RectangleExtents.X * RectangleRightAxis + s[1] * RectangleExtents.X * RectangleUpAxis;
		FVector2D MDelta = M.TransformVector(KmC - PmC);

		if (s[0] * FVector2D::DotProduct(RectangleRightAxis, MDelta) <= 0.0f
			|| s[1] * FVector2D::DotProduct(RectangleUpAxis, MDelta) <= 0.0f)
		{
			return true;
		}

		return FVector2D::DotProduct(MDelta, M.TransformVector(MDelta)) <= 1.0f;
	}

	return false;
}
