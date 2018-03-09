// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "SKFButton.h"
#include "Rendering/DrawElements.h"
#include "Framework/Application/SlateApplication.h"
#include "Widgets/Text/STextBlock.h"

/**
* Construct this widget
*
* @param	InArgs	The declaration data for this widget
*/
void SKFButton::Construct(const FArguments& InArgs)
{
	// Text overrides button content. If nothing is specified, put an null widget in the button.
	// Null content makes the button enter a special mode where it will ask to be as big as the image used for its border.
	struct
	{
		TSharedRef<SWidget> operator()(TSharedPtr<STextBlock>& MyTextBlock, const FArguments& InOpArgs) const
		{
			if (InOpArgs._Content.Widget == SNullWidget::NullWidget)
			{
				return SAssignNew(MyTextBlock, STextBlock)
					.Text(InOpArgs._Text)
					.TextStyle(&InOpArgs._ButtonStyle->TextBlockStyle)
					.Justification(InOpArgs._Justification)
					.TextShapingMethod(InOpArgs._TextShapingMethod)
					.TextFlowDirection(InOpArgs._TextFlowDirection)
					.WrapTextAt(InOpArgs._WrapTextAt)
					.AutoWrapText(InOpArgs._AutoWrapText)
					.LineHeightPercentage(InOpArgs._LineHeightPercentage)
					.ColorAndOpacity(InOpArgs._ButtonStyle->TextBlockStyle.ColorAndOpacity);
			}
			else
			{
				return InOpArgs._Content.Widget;
			}
		}
	} DetermineContent;

	SetStyle(InArgs._ButtonStyle);

// 	SBorder::Construct(SBorder::FArguments()
// 		.ContentScale(InArgs._ContentScale)
// 		.DesiredSizeScale(InArgs._DesiredSizeScale)
// 		.BorderBackgroundColor(InArgs._ButtonColorAndOpacity)
// 		.ForegroundColor(InArgs._ForegroundColor)
// 		.BorderImage(this, &SKFButton::GetBorderEx)
// 		.HAlign(HAlign_Center)
// 		.VAlign(VAlign_Center)
// 		.Padding(TAttribute<FMargin>(this, &SKFButton::GetCombinedPadding))
// 		.ShowEffectWhenDisabled(TAttribute<bool>(this, &SKFButton::GetShowDisabledEffect))
// 		[
// 			DetermineContent(MyTextBlock, InArgs)
// 		]
// 	);
// 
// 	ContentPadding = InArgs._ContentPadding;
// 
// 	SetStyle(InArgs._ButtonStyle);
// 
// 	bIsFocusable = InArgs._IsFocusable;
// 
// 	OnClicked = InArgs._OnClicked;
// 	OnPressed = InArgs._OnPressed;
// 	OnReleased = InArgs._OnReleased;
// 	OnHovered = InArgs._OnHovered;
// 	OnUnhovered = InArgs._OnUnhovered;
// 	OnFocused = InArgs._OnFocused;
// 	OnUnFocused = InArgs._OnUnFocused;	
// 
// 	ClickMethod = InArgs._ClickMethod;
// 	PressMethod = InArgs._PressMethod;	

	SButton::Construct(SButton::FArguments()
		.ButtonStyle(&ParentStyle)
		.ContentScale(InArgs._ContentScale)
		.DesiredSizeScale(InArgs._DesiredSizeScale)
		.ButtonColorAndOpacity(InArgs._ButtonColorAndOpacity)
		.ForegroundColor(InArgs._ForegroundColor)
		.HAlign(InArgs._HAlign)
		.VAlign(InArgs._VAlign)
		.ContentPadding(InArgs._ContentPadding)
		.TextStyle(&InArgs._ButtonStyle->TextBlockStyle)
		.TextFlowDirection(InArgs._TextFlowDirection)
		.TextShapingMethod(InArgs._TextShapingMethod)
		.ClickMethod(InArgs._ClickMethod)
		.TouchMethod(InArgs._TouchMethod)
		.PressMethod(InArgs._PressMethod)		
		.OnClicked(InArgs._OnClicked)
		.OnHovered(InArgs._OnHovered)
		.OnUnhovered(InArgs._OnUnhovered)
		.OnPressed(InArgs._OnPressed)
		.OnReleased(InArgs._OnReleased)
		.PressedSoundOverride(InArgs._PressedSoundOverride)
		.HoveredSoundOverride(InArgs._HoveredSoundOverride)
		[
			DetermineContent(MyTextBlock, InArgs)
		]
	);

	OnFocused = InArgs._OnFocused;
	OnUnFocused = InArgs._OnUnFocused;
}

int32 SKFButton::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	bool bEnabled = ShouldBeEnabled(bParentEnabled);
	bool bShowDisabledEffect = GetShowDisabledEffect();

	const FSlateBrush* BrushResource = !bShowDisabledEffect && !bEnabled ? DisabledImage : GetBorderEx();

	ESlateDrawEffect DrawEffects = bShowDisabledEffect && !bEnabled ? ESlateDrawEffect::DisabledEffect : ESlateDrawEffect::None;

	if (BrushResource && BrushResource->DrawAs != ESlateBrushDrawType::NoDrawType)
	{
		FSlateDrawElement::MakeBox(
			OutDrawElements,
			LayerId,
			AllottedGeometry.ToPaintGeometry(),
			BrushResource,
			DrawEffects,
			BrushResource->GetTint(InWidgetStyle) * InWidgetStyle.GetColorAndOpacityTint() * BorderBackgroundColor.Get().GetColor(InWidgetStyle)
		);
	}

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyClippingRect.IntersectionWith(AllottedGeometry.GetLayoutBoundingRect()), OutDrawElements, LayerId, InWidgetStyle, bEnabled);
}

const FSlateBrush* SKFButton::GetBorderEx() const
{
	if (IsFocused())
	{
		return FocusedImage;
	}

	return GetBorder();
}

FReply SKFButton::OnFocusReceived(const FGeometry& MyGeometry, const FFocusEvent& InFocusEvent)
{	
	FReply Ret =  SWidget::OnFocusReceived(MyGeometry, InFocusEvent);

	bIsFocused = true;
	PlayFocusedSound();
	OnFocused.ExecuteIfBound();
	return Ret;
}

void SKFButton::OnFocusLost(const FFocusEvent& InFocusEvent)
{
	SBorder::OnFocusLost(InFocusEvent);

	bIsFocused = false;
	Release();

	OnUnFocused.ExecuteIfBound();
}

void SKFButton::PlayFocusedSound() const
{
	FSlateApplication::Get().PlaySound(FocusedSound);
}

void SKFButton::SetFocusedSound(TOptional<FSlateSound> InFocusedSound)
{
	FocusedSound = InFocusedSound.Get(FocusedSound);
}

void SKFButton::SetStyle(const FKFButtonStyle* ButtonStyle)
{
	/* Get pointer to the button style */
	if (ButtonStyle)
	{
		KFButtonStyle = *ButtonStyle;
	}
	else
	{
		FArguments Defaults;
		KFButtonStyle = *Defaults._ButtonStyle;
	}

	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetTextStyle(&KFButtonStyle.TextBlockStyle);
	}
	
	KFButtonStyle.ButtonStyle.GetFButtonStyle(ParentStyle);
	SetButtonStyle(&ParentStyle);

	FocusedImage = &KFButtonStyle.ButtonStyle.Focused;

	FocusedSound = KFButtonStyle.ButtonStyle.FocusedSlateSound;
}

void SKFButton::OnSetText()
{
	if (MyTextBlock.IsValid())
	{
		const FText& MyText = MyTextBlock->GetText();
		if (MyText.IsEmpty() && this->ChildSlot.GetWidget() == MyTextBlock)
		{
			this->ChildSlot.DetachWidget();
		}
		else if(this->ChildSlot.GetWidget() == SNullWidget::NullWidget)
		{
			this->ChildSlot[MyTextBlock.ToSharedRef()];
		}
	}
}