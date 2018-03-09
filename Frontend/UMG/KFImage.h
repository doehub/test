// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/Widget.h"
#include "UObject/ObjectMacros.h"
#include "Misc/Attribute.h"
#include "Styling/SlateBrush.h"
#include "Input/Reply.h"
#include "KFImage.generated.h"

class SKFImage;
class UTexture2D;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFImageAnimationEvent);
/**
 *
 */
UCLASS()
class KINGDOM_API UKFImage : public UWidget
{
    GENERATED_BODY()

public:
    UKFImage(const FObjectInitializer& ObjectInitializer);

public:
	/** Image to draw */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		FSlateBrush Brush;

	/** A bindable delegate for the Image. */
	UPROPERTY()
		FGetSlateBrush BrushDelegate;

	/** Color and opacity */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (sRGB = "true"))
		FLinearColor ColorAndOpacity;

	/** A bindable delegate for the ColorAndOpacity. */
	UPROPERTY()
		FGetLinearColor ColorAndOpacityDelegate;

public:

	UPROPERTY(EditAnywhere, Category = Events, meta = (IsBindableEvent = "True"))
		FOnPointerEvent OnMouseButtonDownEvent;

public:

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetColorAndOpacity(FLinearColor InColorAndOpacity);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetOpacity(float InOpacity);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBrush(const FSlateBrush& InBrush);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize = false);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize = false);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBrushFromMaterial(UMaterialInterface* Material);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetBrushFromFrame(FSlateBrush InBrush, int32 InRowCount, int32 InColumnCount, int32 InFrameIndex, const FMargin InDesiredItemPadding);

	/**  */
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		UMaterialInstanceDynamic* GetDynamicMaterial();


public:
    //Custom section

    /** 0.05s(20FPS) is enough for UI Animation, so clamp min duration at 0.05. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0.05", ClampMax = "100"))
        float Duration;

    /** Time between each animation loop */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0"))
        float LoopInterval;

	/** Number of frames in the row*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "1"))
		int32 RowCount;

    /** Number of frames in the column*/
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "1"))
        int32 ColumnCount;

	/** Init image at frames index*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0"))
		int32 InitFrameIndex;

    /** The Animation may contain some empty frames, here is the opportunity to block them.  */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation", meta = (ClampMin = "0"))
        int32 FrameCount;

	/** the padding around every frame
	*	Param DesirePadding valid area from {0.0,0.0,0.0,0.0} to {1.0,1.0,1.0,1.0}
	*/
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "Animation", meta = (DesignerRebuild = true))
		FMargin DesiredItemPadding;

    /** True if you want the flipbook auto play*/
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation", meta = (sRGB = "true"))
        bool bAutoPlay;

    /** When an animation loop is end, this event will notify depends on your parameter in PlayAnimation(). */
    UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
		FOnKFImageAnimationEvent OnAnimationStoped;
	/** When an animation of all frame is played, called before next loop*/
	UPROPERTY(BlueprintAssignable, Category = "Animation|Events")
		FOnKFImageAnimationEvent OnAnimationEndReached;
public:
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void NewAnimation(const FSlateBrush& InBrush, float InDuration, float InLoopInterval, int32 InRowCount, int32 InColumnCount, int32 InInitFrameIndex, int32 InFrameCount, const FMargin& InDesiredItemPadding);

    UFUNCTION(BlueprintCallable, Category = "Animation")
        void PlayAnimation(bool ShouldLoop);
	
    UFUNCTION(BlueprintCallable, Category = "Animation")
        void PauseAnimation();

    UFUNCTION(BlueprintCallable, Category = "Animation")
        void ResumeAnimation();

    UFUNCTION(BlueprintCallable, Category = "Animation")
        void StopAnimation(bool ShouldnotifyAnimationEndEvent);

    UFUNCTION(BlueprintCallable, Category = "Animation")
        bool IsAnimationPlaying();

    UFUNCTION(BlueprintCallable, Category = "Animation")
        bool IsAnimationPaused();
	
	UFUNCTION(BlueprintCallable, Category = "Animation")
		void SetFrameIndex(int32 InFrameIndex);

    virtual void SynchronizeProperties() override;

    virtual void ReleaseSlateResources(bool bReleaseChildren) override;

#if WITH_EDITOR
    virtual const FText GetPaletteCategory() override;
#endif

protected:
    TSharedPtr<SKFImage> MyImage;

    virtual TSharedRef<SWidget> RebuildWidget() override;

    void HandleAnimationEndReached();
	void HandleAnimationStoped();
	FReply HandleMouseButtonDown(const FGeometry& Geometry, const FPointerEvent& MouseEvent);

	PROPERTY_BINDING_IMPLEMENTATION(FSlateColor, ColorAndOpacity);
	PROPERTY_BINDING_IMPLEMENTATION(FSlateBrush, Brush);
};
