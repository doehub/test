// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Misc/Attribute.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Styling/SlateColor.h"
#include "Layout/Margin.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateTypes.h"
#include "Styling/CoreStyle.h"
#include "Framework/SlateDelegates.h"
#include "Styling/SlateWidgetStyleAsset.h"
#include "Widgets/Layout/SBorder.h"
#include "KFTextBlock.h"
#include "Input/SButton.h"
#include "KFUITypes.h"
#include "UMG.h"

class FPaintArgs;
class FSlateWindowElementList;
enum class ETextFlowDirection : uint8;
enum class ETextShapingMethod : uint8;
/**
 * 
 */
class KINGDOM_API SKFButton : public SButton
{
public:

	SLATE_BEGIN_ARGS(SKFButton)
		: _Content()
 		, _ButtonStyle(&KFWidgetStyleMgr::Get().GetWidgetStyle< FKFButtonStyle >("KFButton"))
// 		, _TextStyle(&FCoreStyle::Get().GetWidgetStyle< FTextBlockStyle >("NormalText"))
		, _HAlign(HAlign_Fill)
		, _VAlign(VAlign_Center)
		, _ContentPadding(FMargin(4.0, 0.0))
		, _Text()
		, _ClickMethod(EButtonClickMethod::DownAndUp)
		, _PressMethod(EButtonPressMethod::DownAndUp)
		, _TouchMethod(EButtonTouchMethod::DownAndUp)
		, _DesiredSizeScale(FVector2D(1, 1))
		, _ContentScale(FVector2D(1, 1))
		, _ButtonColorAndOpacity(FLinearColor::White)
		, _ForegroundColor(FCoreStyle::Get().GetSlateColor("InvertedForeground"))
		, _IsFocusable(true)
		, _WrapTextAt(0.0f)
		, _AutoWrapText(true)
		, _LineHeightPercentage(1.0f)
		, _Justification(ETextJustify::Center)
//		, _TextColor(FLinearColor::Black)
	{}

	/** Slot for this button's content (optional) */
	SLATE_DEFAULT_SLOT(FArguments, Content)

		/** The visual style of the button */
		SLATE_STYLE_ARGUMENT(FKFButtonStyle, ButtonStyle)

// 		/** The text style of the button */
// 		SLATE_STYLE_ARGUMENT(FTextBlockStyle, TextStyle)

		/** Horizontal alignment */
		SLATE_ARGUMENT(EHorizontalAlignment, HAlign)

		/** Vertical alignment */
		SLATE_ARGUMENT(EVerticalAlignment, VAlign)

		/** Spacing between button's border and the content. */
		SLATE_ATTRIBUTE(FMargin, ContentPadding)

		/** The text to display in this button, if no custom content is specified */
		SLATE_ATTRIBUTE(FText, Text)

		SLATE_ATTRIBUTE(FSlateFontInfo, Font)
		/** Called when the button is clicked */
		SLATE_EVENT(FOnClicked, OnClicked)

		/** Called when the button is pressed */
		SLATE_EVENT(FSimpleDelegate, OnPressed)

		/** Called when the button is released */
		SLATE_EVENT(FSimpleDelegate, OnReleased)

		SLATE_EVENT(FSimpleDelegate, OnHovered)

		SLATE_EVENT(FSimpleDelegate, OnUnhovered)

		SLATE_EVENT(FSimpleDelegate, OnFocused)

		SLATE_EVENT(FSimpleDelegate, OnUnFocused)

		/** Sets the rules to use for determining whether the button was clicked.  This is an advanced setting and generally should be left as the default. */
		SLATE_ARGUMENT(EButtonClickMethod::Type, ClickMethod)

		/** How should the button be clicked with keyboard/controller button events? */
		SLATE_ARGUMENT(EButtonPressMethod::Type, PressMethod)

		/** How should the button be clicked with touch events? */
		SLATE_ARGUMENT(EButtonTouchMethod::Type, TouchMethod)

		SLATE_ATTRIBUTE(FVector2D, DesiredSizeScale)

		SLATE_ATTRIBUTE(FVector2D, ContentScale)

		SLATE_ATTRIBUTE(FSlateColor, ColorAndOpacity)

		SLATE_ATTRIBUTE(FSlateColor, ForegroundColor)

		SLATE_ATTRIBUTE(FSlateColor, ButtonColorAndOpacity)
		/** Sometimes a button should only be mouse-clickable and never keyboard focusable. */
		SLATE_ARGUMENT(bool, IsFocusable)

		/** The sound to play when the button is pressed */
		SLATE_ARGUMENT(TOptional<FSlateSound>, PressedSoundOverride)

		/** The sound to play when the button is hovered */
		SLATE_ARGUMENT(TOptional<FSlateSound>, HoveredSoundOverride)
		SLATE_ARGUMENT(TOptional<FSlateSound>, FocusedSoundOverride)
		/** Which text shaping method should we use? (unset to use the default returned by GetDefaultTextShapingMethod) */
		SLATE_ARGUMENT(TOptional<ETextShapingMethod>, TextShapingMethod)

		/** Which text flow direction should we use? (unset to use the default returned by GetDefaultTextFlowDirection) */
		SLATE_ARGUMENT(TOptional<ETextFlowDirection>, TextFlowDirection)

		SLATE_ATTRIBUTE(float, WrapTextAt)
		SLATE_ATTRIBUTE(bool, AutoWrapText)
		/** The amount to scale each lines height by. */
		SLATE_ATTRIBUTE(float, LineHeightPercentage)
		/** How the text should be aligned with the margin. */
		SLATE_ATTRIBUTE(ETextJustify::Type, Justification)

		SLATE_END_ARGS()



	const FSlateBrush* GetBorderEx() const;

	virtual bool IsFocused() const
	{
		return bIsFocused;
	}
	/**
	* Construct this widget
	*
	* @param	InArgs	The declaration data for this widget
	*/
	void Construct(const FArguments& InArgs);


	void SetFocusedSound(TOptional<FSlateSound> InFocusedSound);

	void SetStyle(const FKFButtonStyle* ButtonStyle);
	const FKFButtonStyle* GetStyle() { return &KFButtonStyle;  };
	void OnSetText();
public:

	void SetFont(FSlateFontInfo InFontInfo) { if (MyTextBlock.IsValid()) MyTextBlock->SetFont(InFontInfo); };

	void SetText(const TAttribute< FString >& InText) {	if (MyTextBlock.IsValid()) MyTextBlock->SetText(InText); OnSetText();};
	void SetText(const FString& InText) {if (MyTextBlock.IsValid()) MyTextBlock->SetText(InText); OnSetText();};
	void SetText(const TAttribute< FText >& InText) {if (MyTextBlock.IsValid()) MyTextBlock->SetText(InText); OnSetText();};
	void SetText(const FText& InText) {	if (MyTextBlock.IsValid()) MyTextBlock->SetText(InText); OnSetText();};

	void SetTextColor(FSlateColor InColorAndOpacity) { if (MyTextBlock.IsValid()) MyTextBlock->SetColorAndOpacity(InColorAndOpacity); };
	/** See TextStyle argument */
	void SetTextStyle(const FTextBlockStyle* InTextStyle) { if (MyTextBlock.IsValid()) MyTextBlock->SetTextStyle(InTextStyle); };
	/** See TextShapingMethod attribute */
	void SetTextShapingMethod(const TOptional<ETextShapingMethod>& InTextShapingMethod) { if (MyTextBlock.IsValid()) MyTextBlock->SetTextShapingMethod(InTextShapingMethod); };
	/** See TextFlowDirection attribute */
	void SetTextFlowDirection(const TOptional<ETextFlowDirection>& InTextFlowDirection) { if (MyTextBlock.IsValid()) MyTextBlock->SetTextFlowDirection(InTextFlowDirection); };
	/** See WrapTextAt attribute */
	void SetWrapTextAt(const TAttribute<float>& InWrapTextAt) { if (MyTextBlock.IsValid()) MyTextBlock->SetWrapTextAt(InWrapTextAt); };
	/** See AutoWrapText attribute */
	void SetAutoWrapText(const TAttribute<bool>& InAutoWrapText) { if (MyTextBlock.IsValid()) MyTextBlock->SetAutoWrapText(InAutoWrapText); };
	/** Set WrappingPolicy attribute */
	void SetWrappingPolicy(const TAttribute<ETextWrappingPolicy>& InWrappingPolicy) { if (MyTextBlock.IsValid()) MyTextBlock->SetWrappingPolicy(InWrappingPolicy); };
	/** See ShadowOffset attribute */
	void SetShadowOffset(const TAttribute<FVector2D>& InShadowOffset) { if (MyTextBlock.IsValid()) MyTextBlock->SetShadowOffset(InShadowOffset); };
	/** See ShadowColorAndOpacity attribute */
	void SetShadowColorAndOpacity(const TAttribute<FLinearColor>& InShadowColorAndOpacity) { if (MyTextBlock.IsValid()) MyTextBlock->SetShadowColorAndOpacity(InShadowColorAndOpacity); };
	/** See MinDesiredWidth attribute */
	void SetMinDesiredWidth(const TAttribute<float>& InMinDesiredWidth) { if (MyTextBlock.IsValid()) MyTextBlock->SetMinDesiredWidth(InMinDesiredWidth); };
	/** See LineHeightPercentage attribute */
	void SetLineHeightPercentage(const TAttribute<float>& InLineHeightPercentage) { if (MyTextBlock.IsValid()) MyTextBlock->SetLineHeightPercentage(InLineHeightPercentage); };
	/** See Margin attribute */
	void SetMargin(const TAttribute<FMargin>& InMargin) { if (MyTextBlock.IsValid()) MyTextBlock->SetMargin(InMargin); };
	/** See Justification attribute */
	void SetJustification(const TAttribute<ETextJustify::Type>& InJustification) { if (MyTextBlock.IsValid()) MyTextBlock->SetJustification(InJustification); };
public:

	// SWidget overrides

 	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;

	virtual FReply OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent) override;

	virtual void OnFocusLost(const FFocusEvent& InFocusEvent) override;

protected:

 	bool bIsFocused;

 	FSimpleDelegate OnFocused;
 
 	FSimpleDelegate OnUnFocused;

 	const FSlateBrush* FocusedImage;

	FSlateSound FocusedSound;
	void PlayFocusedSound() const;	

	TSharedPtr<STextBlock> MyTextBlock;
	FKFButtonStyle KFButtonStyle;
	FButtonStyle ParentStyle;
private:

//	virtual FVector2D ComputeDesiredSize(float) const override;
};
