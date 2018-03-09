// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Attribute.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Styling/SlateColor.h"
#include "Styling/CoreStyle.h"
#include "Widgets/SLeafWidget.h"
#include "SlateCore.h" 

class FPaintArgs;
class FSlateWindowElementList;
class UTexture2D;

DECLARE_DELEGATE(FAnimationEndDelegate)

/**
 *  Implements a widget that displays an image with a desired width and height and can draw flipbook from texture.
 */
class KINGDOM_API SKFImage : public SLeafWidget
{
public:
    SLATE_BEGIN_ARGS(SKFImage)
        : _ColorAndOpacity(FLinearColor::White)
        , _Duration(0.05f)
        , _LoopInterval(0.0f)
        , _ColumnCount(1)
        , _RowCount(1)
		, _InitFrameIndex(0)
        , _CutFrameCount(0)		
    {}

    /** Color and opacity */
    SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)

        /** Time between each frame */
        SLATE_ATTRIBUTE(float, Duration)

        /** Time between each loop */
        SLATE_ATTRIBUTE(float, LoopInterval)
        SLATE_ATTRIBUTE(int32, ColumnCount)
        SLATE_ATTRIBUTE(int32, RowCount)

        /** Number of the blocking frames */
        SLATE_ATTRIBUTE(int32, CutFrameCount)

		SLATE_ATTRIBUTE(int32, InitFrameIndex)

        SLATE_EVENT(FAnimationEndDelegate, OnAnimationStoped)
		SLATE_EVENT(FAnimationEndDelegate, OnAnimationEndReached)
		/** Invoked when the mouse is pressed in the widget. */
		SLATE_EVENT(FPointerEventHandler, OnMouseButtonDown)

        SLATE_END_ARGS()

        /** Constructor */
        SKFImage()
    {
        bCanTick = false;
        bCanSupportFocus = false;
    }


    /** Constructs this widget with InArgs */
    void Construct(const FArguments& InArgs);

public:
    virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect&  MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

    virtual FVector2D ComputeDesiredSize(float) const override;

    virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

public:
    void SetDuration(float InDuration);

    void SetLoopInterval(float InLoopInterval);

    void SetColumnCount(int32 InColumnCount);

    void SetRowCount(int32 InRowCount);

	void SetFrameIndex(int32 InFrameIndex);

    void SetCutFrameCount(int32 InCutFrameCount);

	void SetDesiredItemPadding(const FMargin& InDesiredPadding);

    void PlayAnimation(bool InShouldLoop = false, bool InShouldNotifyAtEnd = false);

    bool IsAnimationPlaying();

    void PauseAnimation();

    bool IsAnimationPaused();

    void ResumeAnimation();

    void ResetAnimation();

    void StopAnimation(bool InShouldNotifyAtEnd = false);

    void SetImageRes(UTexture2D* InImageRes);

    /** See the ColorAndOpacity attribute */
    void SetColorAndOpacity(const TAttribute<FSlateColor>& InColorAndOpacity);

    /** See the ColorAndOpacity attribute */
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
	/** See the Image attribute */
	void SetImage(TAttribute<const FSlateBrush*> InImage);
	void SetImage(const FSlateBrush* InImage);

	/** See OnMouseButtonDown event */
	void SetOnMouseButtonDown(FPointerEventHandler EventHandler);
protected:

    void NotifyAnimationEndReached();
	void NotifyAnimationStoped();

    void UpdateImageBrushUVRegion();

    float AccumulatedFrameTime;
    float AccumulatedLoopIntervalTime;
    int32 CachedFrameIndex;

    bool bIsInLoopInterval;
    bool  bShouldLoop;

    bool bIsFirstLoop;
    bool bShouldNotifyAtEnd;

    bool bIsPaused;

    FSlateBrush ImageBrush;

    /** Color and opacity scale for this image */
    TAttribute<FSlateColor> ColorAndOpacity;

    float Duration;
    float LoopInterval;
    int32 ColumnCount;
    int32 RowCount;
    int32 CutFrameCount;
	int32 InitFrameIndex;
	FMargin DesiredItemPadding;

    FAnimationEndDelegate OnAnimationStopedHandler;
	FAnimationEndDelegate OnAnimationEndReachedHandler;
	/** Invoked when the mouse is pressed in the image */
	FPointerEventHandler OnMouseButtonDownHandler;
};
