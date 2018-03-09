// Fill out your copyright notice in the Description page of Project Settings.
#include "Kingdom.h"
#include "SKFImage.h"
#include "SlateOptMacros.h"
#include "DrawElements.h"  
#include "Engine/Texture2D.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SKFImage::Construct(const FArguments& InArgs)
{
    ColorAndOpacity = InArgs._ColorAndOpacity;
    Duration = InArgs._Duration.Get();
    LoopInterval = InArgs._LoopInterval.Get();
    ColumnCount = InArgs._ColumnCount.Get();
    RowCount = InArgs._RowCount.Get();
	InitFrameIndex = InArgs._InitFrameIndex.Get();
    CutFrameCount = InArgs._CutFrameCount.Get();
    OnAnimationEndReachedHandler = InArgs._OnAnimationEndReached;
	OnAnimationStopedHandler = InArgs._OnAnimationStoped;
	OnMouseButtonDownHandler = InArgs._OnMouseButtonDown;

    bCanTick = false;
    bShouldLoop = false;
    bIsPaused = false;
    bIsFirstLoop = true;
    bShouldNotifyAtEnd = false;	

    AccumulatedFrameTime = 0.0f;
    AccumulatedLoopIntervalTime = 0.0f;
    CachedFrameIndex = InitFrameIndex;

    ImageBrush = FSlateBrush();
    ImageBrush.Tiling = ESlateBrushTileType::NoTile;  //This is very important

	ColumnCount = FMath::Max(1, ColumnCount);
	RowCount = FMath::Max(1, RowCount);

    UpdateImageBrushUVRegion();
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION


int32 SKFImage::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    if (ImageBrush.DrawAs != ESlateBrushDrawType::NoDrawType) {
        const bool bIsEnabled = ShouldBeEnabled(bParentEnabled);
        const ESlateDrawEffect DrawEffects = bIsEnabled ? ESlateDrawEffect::None : ESlateDrawEffect::DisabledEffect;

        const FLinearColor FinalColorAndOpacity(InWidgetStyle.GetColorAndOpacityTint() * ColorAndOpacity.Get().GetColor(InWidgetStyle) * ImageBrush.GetTint(InWidgetStyle));

        FSlateDrawElement::MakeBox(
            OutDrawElements,
            LayerId,
            AllottedGeometry.ToPaintGeometry(),
            &ImageBrush,
//            MyClippingRect,
            DrawEffects,
            FinalColorAndOpacity
        );
    }

    return LayerId;
}

FVector2D SKFImage::ComputeDesiredSize(float) const
{
    return ImageBrush.ImageSize;
}

void SKFImage::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
    if (bIsInLoopInterval)
    {
        AccumulatedLoopIntervalTime += InDeltaTime;

        if (AccumulatedLoopIntervalTime < LoopInterval)
        {
            return;
        }

        bIsInLoopInterval = false;
        AccumulatedFrameTime += AccumulatedLoopIntervalTime - LoopInterval;
        AccumulatedLoopIntervalTime = 0.0f;
    }
    else
    {
        AccumulatedFrameTime += InDeltaTime;
    }

    if (AccumulatedFrameTime < Duration)
    {
        return;
    }

    //This will cause a faster play effect after the game window is suspended. 
    AccumulatedFrameTime -= Duration;

    CachedFrameIndex++;

    //When CachedFrameIndex equals to  (RowCount * ColumnCount - CutFrameCount), this means a loop was completed.
    if (CachedFrameIndex == RowCount * ColumnCount - CutFrameCount)
    {
        bIsInLoopInterval = true;

        //Determine whether to stop playing animation by bShouldLoop
        if (bIsFirstLoop && !bShouldLoop)
        {
            StopAnimation(bShouldNotifyAtEnd);
			NotifyAnimationEndReached();
            return;
        }

        if (bIsFirstLoop)
        {
            bIsFirstLoop = false;
        }
    }

    CachedFrameIndex %= (RowCount * ColumnCount - CutFrameCount);
	CachedFrameIndex = FMath::Max(InitFrameIndex, CachedFrameIndex);
	if (CachedFrameIndex == InitFrameIndex)
	{
		NotifyAnimationEndReached();
	}

    UpdateImageBrushUVRegion();
}


void SKFImage::SetDuration(float InDuration)
{
    Duration = InDuration;
    
    Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetLoopInterval(float InLoopInterval)
{
    LoopInterval = InLoopInterval;

    Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetColumnCount(int32 InColumnCount)
{
    ColumnCount = FMath::Max(1, InColumnCount);
    Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetRowCount(int32 InRowCount)
{
    RowCount = FMath::Max(1, InRowCount);

    Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetFrameIndex(int32 InFrameIndex)
{
	InitFrameIndex = InFrameIndex;
	CachedFrameIndex = InFrameIndex;

	Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetCutFrameCount(int32 InCutFrameCount)
{
    CutFrameCount = InCutFrameCount;

    Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::SetDesiredItemPadding(const FMargin& InDesiredPadding)
{
	DesiredItemPadding.Left = FMath::Clamp(InDesiredPadding.Left, 0.0f, 1.0f);
	DesiredItemPadding.Top = FMath::Clamp(InDesiredPadding.Top, 0.0f, 1.0f);
	DesiredItemPadding.Right = FMath::Clamp(InDesiredPadding.Right, 0.0f, 1.0f);
	DesiredItemPadding.Bottom = FMath::Clamp(InDesiredPadding.Bottom, 0.0f, 1.0f);

	Invalidate(EInvalidateWidget::Layout);
}

void SKFImage::ResetAnimation()
{
    AccumulatedFrameTime = 0.0f;
    CachedFrameIndex = InitFrameIndex;
    bIsFirstLoop = true;

    AccumulatedLoopIntervalTime = 0.0f;
    bIsInLoopInterval = false;

    UpdateImageBrushUVRegion();
}


void SKFImage::PlayAnimation(bool InShouldLoop /*= false*/, bool InShouldNotifyAtEnd /* = false */)
{
    if (IsAnimationPlaying())
    {
        return;
    }
	else if (InitFrameIndex == RowCount * ColumnCount - CutFrameCount)
	{
		ResetAnimation();
		bCanTick = false;
	}
    else
    {
        ResetAnimation();
        bCanTick = true;
        bShouldLoop = InShouldLoop;
        bShouldNotifyAtEnd = InShouldNotifyAtEnd;
    }
}

bool SKFImage::IsAnimationPlaying()
{
    return bCanTick;
}

void SKFImage::PauseAnimation()
{
    if (!IsAnimationPlaying() || bIsPaused)
    {
        return;
    }

    bIsPaused = true;
    bCanTick = false;
}

bool SKFImage::IsAnimationPaused()
{
    return bIsPaused;
}

void SKFImage::ResumeAnimation()
{
    if (!bIsPaused)
    {
        return;
    }

    bCanTick = true;
    bIsPaused = false;
}

void SKFImage::StopAnimation(bool ShouldNotifyEndEvent /* = false */)
{
    if (!IsAnimationPlaying())
    {
        return;
    }

    ResetAnimation();
    bCanTick = false;

    if (ShouldNotifyEndEvent)
    {
        NotifyAnimationStoped();
    }
}

void SKFImage::SetImageRes(UTexture2D* InImageRes)
{
    ImageBrush.SetResourceObject(InImageRes);

    if (InImageRes) // Since this texture is used as UI, don't allow it affected by budget.
    {
        InImageRes->bIgnoreStreamingMipBias = true;
    }

    Invalidate(EInvalidateWidget::Layout);

    UpdateImageBrushUVRegion();
}

void SKFImage::SetColorAndOpacity(const TAttribute<FSlateColor>& InColorAndOpacity)
{
    if (!ColorAndOpacity.IdenticalTo(InColorAndOpacity))
    {
        ColorAndOpacity = InColorAndOpacity;
        Invalidate(EInvalidateWidget::Layout);
    }
}

void SKFImage::SetColorAndOpacity(FLinearColor InColorAndOpacity)
{
    if (ColorAndOpacity.IsBound() || ColorAndOpacity.Get() != InColorAndOpacity)
    {
        ColorAndOpacity = InColorAndOpacity;
        Invalidate(EInvalidateWidget::Layout);
    }
}

void SKFImage::NotifyAnimationEndReached()
{
    if (OnAnimationEndReachedHandler.IsBound())
    {
		OnAnimationEndReachedHandler.Execute();
    }
}

void SKFImage::NotifyAnimationStoped()
{
	if (OnAnimationStopedHandler.IsBound())
	{
		OnAnimationStopedHandler.Execute();
	}
}

void SKFImage::UpdateImageBrushUVRegion()
{
    int32 CurrentRowIndex = CachedFrameIndex / ColumnCount;
    int32 CurrentColumnIndex = CachedFrameIndex % ColumnCount;


    FVector2D StartUV = FVector2D(
        FMath::Clamp((static_cast<float>(CurrentColumnIndex) / static_cast<float>(ColumnCount) + DesiredItemPadding.Left), 0.0f, 1.0f),
		FMath::Clamp((static_cast<float>(CurrentRowIndex) / static_cast<float>(RowCount) + DesiredItemPadding.Top), 0.0f, 1.0f)
    );
    FVector2D EndUV = FVector2D(
		FMath::Clamp((static_cast<float>(CurrentColumnIndex + 1) / static_cast<float>(ColumnCount) + DesiredItemPadding.Right), 0.0f, 1.0f),
		FMath::Clamp((static_cast<float>(CurrentRowIndex + 1) / static_cast<float>(RowCount) + DesiredItemPadding.Bottom), 0.0f, 1.0f)
    );

    ImageBrush.SetUVRegion(FBox2D(StartUV, EndUV));
}

void SKFImage::SetImage(TAttribute<const FSlateBrush*> InImage)
{
	if (InImage.IsBound())
	{
		SetImage(InImage.Get());
	}
}

void SKFImage::SetImage(const FSlateBrush* InImage)
{
	if (!InImage)
	{
		ImageBrush = FSlateBrush();
	}
	else
	{
		ImageBrush = *InImage;
	}

	Invalidate(EInvalidateWidget::Layout);
	UpdateImageBrushUVRegion();
}

FReply SKFImage::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (OnMouseButtonDownHandler.IsBound())
	{
		// If a handler is assigned, call it.
		return OnMouseButtonDownHandler.Execute(MyGeometry, MouseEvent);
	}
	else
	{
		// otherwise the event is unhandled.
		return FReply::Unhandled();
	}
}

void SKFImage::SetOnMouseButtonDown(FPointerEventHandler EventHandler)
{
	OnMouseButtonDownHandler = EventHandler;
}