// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Components/TextWidgetTypes.h"
#include "Styling/TextBlockWidgetStyle.h"
#include "SKFTextBlock.h"
#include "KFUITypes.h"
#include "KFTextBlock.generated.h"

/**
 * Rich format text
 * image:	<image path="/Game/..." size="w=100 h=100"></>
 * text:	<text font="/Game/..." size="24" color="#FFFFFFFF"|color="R=1.0 G=1.0 B= 1.0 A=1.0">The Text</>
 */

UCLASS(ClassGroup = UI, meta = (Category = "KF UI", DisplayName = "KFText"))
class KINGDOM_API UKFTextBlock : public UTextLayoutWidget
{
	GENERATED_UCLASS_BODY()

public:
	/**
	* Sets the color and opacity of the text in this text block
	*
	* @param InColorAndOpacity		The new text color and opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetColorAndOpacity(FSlateColor InColorAndOpacity);

	/**
	* Sets the opacity of the text in this text block
	*
	* @param InOpacity		The new text opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetOpacity(float InOpacity);
	/*@param InColor.A is not used*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetColor(FSlateColor InColor);

	/**
	* Sets the color and opacity of the text drop shadow
	* Note: if opacity is zero no shadow will be drawn
	*
	* @param InShadowColorAndOpacity		The new drop shadow color and opacity
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);

	/**
	* Sets the offset that the text drop shadow should be drawn at
	*
	* @param InShadowOffset		The new offset
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetShadowOffset(FVector2D InShadowOffset);

	/**
	* Dynamically set the font info for this text block
	*
	* @param InFontInfo THe new font info
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetFont(FSlateFontInfo InFontInfo);

	/**
	*  Set the text justification for this text block
	*
	*  @param InJustification new justification
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetJustification(ETextJustify::Type InJustification);

	/**
	*  Set the minimum desired width for this text block
	*
	*  @param InMinDesiredWidth new minimum desired width
	*/
	UFUNCTION(BlueprintCallable, Category = "Appearance")
		void SetMinDesiredWidth(float InMinDesiredWidth);

public:
	/** The text to display */
	UPROPERTY(EditAnywhere, Category = Content, meta = (MultiLine = "true"))
		FText Text;

	/** A bindable delegate to allow logic to drive the text of the widget */
	UPROPERTY()
		FGetText TextDelegate;

	/** The color of the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		FSlateColor ColorAndOpacity;

	/** A bindable delegate for the ColorAndOpacity. */
	UPROPERTY()
		FGetSlateColor ColorAndOpacityDelegate;

	/** The font to render the text with */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		FSlateFontInfo Font;

	/** The direction the shadow is cast */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		FVector2D ShadowOffset;

	/** The color of the shadow */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, meta = (DisplayName = "Shadow Color"))
		FLinearColor ShadowColorAndOpacity;

	/** A bindable delegate for the ShadowColorAndOpacity. */
	UPROPERTY()
		FGetLinearColor ShadowColorAndOpacityDelegate;

	/** The minimum desired size for the text */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		float MinDesiredWidth;

	/** If true, it will automatically wrap this text widget with an invalidation panel */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Performance, AdvancedDisplay)
		bool bWrapWithInvalidationPanel;
	/*
	*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
		EKFTextType TextType;

	///** Called when this text is double clicked */
	//SLATE_EVENT(FOnClicked, OnDoubleClicked)
// 
// 	/** Controls how the text within this widget should be shaped. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Localization, AdvancedDisplay, meta = (ShowOnlyInnerProperties))
// 		FShapedTextOptions ShapedTextOptions;
// 
// 	/** How the text should be aligned with the margin. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
// 		TEnumAsByte<ETextJustify::Type> Justification;
// 
// 	/** True if we're wrapping text automatically based on the computed horizontal space for this widget. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Wrapping)
// 		bool AutoWrapText;
// 
// 	/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Wrapping)
// 		float WrapTextAt;
// 
// 	/** The wrapping policy to use. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Wrapping, AdvancedDisplay)
// 		ETextWrappingPolicy WrappingPolicy;
// 
// 	/** The amount of blank space left around the edges of text area. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, AdvancedDisplay)
// 		FMargin Margin;
// 
// 	/** The amount to scale each lines height by. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance, AdvancedDisplay)
// 		float LineHeightPercentage;

public:

// 	/** The orientation of the scrolling and stacking in the box. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scroll")
// 		TEnumAsByte<EOrientation> Orientation;
// 
// 	/** Visibility */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scroll")
// 		ESlateVisibility ScrollBarVisibility;
// 
// 	/**  Enable to always consume mouse wheel event, even when scrolling is not possible */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scroll")
// 		EConsumeMouseWheel ConsumeMouseWheel;
// 
// 	/**  */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scroll")
// 		FVector2D ScrollbarThickness;
// 
// 	/**  */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Scroll")
// 		bool AlwaysShowScrollbar;

	UFUNCTION(BlueprintCallable, Category = "KFText|Scroll")
	void SetScrollOffset(float NewScrollOffset);
	UFUNCTION(BlueprintCallable, Category = "KFText|Scroll")
	float GetScrollOffset() const;
	UFUNCTION(BlueprintCallable, Category = "KFText|Scroll")
	void ScrollToStart();
	UFUNCTION(BlueprintCallable, Category = "KFText|Scroll")
	void ScrollToEnd();
public:
	/**
	* Gets the widget text
	* @return The widget text
	*/
	UFUNCTION(BlueprintCallable, Category = "KFText", meta = (DisplayName = "GetText (Text)"))
		FText GetText() const;

	/**
	* Directly sets the widget text.
	* Warning: This will wipe any binding created for the Text property!
	* @param InText The text to assign to the widget
	*/
	UFUNCTION(BlueprintCallable, Category = "KFText", meta = (DisplayName = "SetText (Text)"))
		virtual void SetText(FText InText);

	UFUNCTION(BlueprintCallable, Category = "KFText", meta = (DisplayName = "AppendText (Text)"))
	void AppendText(const FText& InText);
public:
	//~ Begin UWidget Interface
	virtual void SynchronizeProperties() override;
	//~ End UWidget Interface

	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override { return NSLOCTEXT("KF", "KFTextBlock", "KF"); }
#endif

public:
	UFUNCTION(BlueprintCallable, Category = "KFText")
		void SetWrapTextWidth(int32 InWrapTextAt);

	UFUNCTION(BlueprintCallable, Category = "KFText|Slyle")
		void SetSlateStyle(FTextBlockStyle InStyle);

	UFUNCTION(BlueprintCallable, Category = "KFText|Style")
		void SetWidgetStyle(TSubclassOf<UTextBlockWidgetStyle> InStyle);

protected:

// 	/** True to always display text in ALL CAPS */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text", meta = (ExposeOnSpawn = true))
// 		bool bAllCaps;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true))
// 		bool bScroll;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true, EditCondition = bScroll))
// 		float Speed;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true, EditCondition = bScroll))
// 		float StartDelay;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true, EditCondition = bScroll))
// 		float EndDelay;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true, EditCondition = bScroll))
// 		float FadeInDelay;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KF Text|Scrolling", meta = (ExposeOnSpawn = true, EditCondition = bScroll))
// 		float FadeOutDelay;

	virtual TSharedRef<SWidget> RebuildWidget() override;
	virtual void OnBindingChanged(const FName& Property) override;
	virtual TAttribute<FText> GetDisplayText() ;	

private:
//	const UKFTextStyle* GetStyleCDO() const;

// 	enum
// 	{
// 		EFadeIn = 0,
// 		EStart,
// 		EStartWait,
// 		EScrolling,
// 		EStop,
// 		EStopWait,
// 		EFadeOut,
// 	} ActiveState;
// 
// 	bool OnTick(float Delta);
// 
// 	float TimeElapsed;
// 	float ScrollOffset;
// 	float FontAlpha;
// 	bool bPlaying;

// 	TSharedPtr<SScrollBox> ScrollBox;
// 	TSharedPtr<SScrollBar> ScrollBar;
	TSharedPtr<SKFTextBlock> MyTextBlock;
	FDelegateHandle TickHandle;

	FTextBlockStyle MyTextBlockStyle;
	
	struct
	{
		FVector2D InvalidateSize;
		bool InvalidateFlag;
	} InvalidateData;
	friend class SKFTextBlock;


	PROPERTY_BINDING_IMPLEMENTATION(FText, Text);
	PROPERTY_BINDING_IMPLEMENTATION(FSlateColor, ColorAndOpacity);
	PROPERTY_BINDING_IMPLEMENTATION(FLinearColor, ShadowColorAndOpacity);
};