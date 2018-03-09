// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "KFTextBlock.h"
#include "STextBlock.h"
#include "Widgets/SInvalidationPanel.h"
#include "Engine/Font.h"

UKFTextBlock::UKFTextBlock(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
// 	, bAllCaps(false)
// 	, bScroll(false)
// 	, Speed(20.f)
// 	, StartDelay(2.f)
// 	, EndDelay(2.f)
// 	, FadeInDelay(0.5f)
// 	, FadeOutDelay(0.5f)
// 	, ActiveState(EStart)
// 	, TimeElapsed(0.f)
// 	, ScrollOffset(0.f)
// 	, FontAlpha(1.f)
// 	, bPlaying(true)
	, TextType(EKFTextType::Static)
{
	bIsVariable = false;
	bWrapWithInvalidationPanel = false;
	ShadowOffset = FVector2D(1.0f, 1.0f);
	ColorAndOpacity = FLinearColor::White;
	ShadowColorAndOpacity = FLinearColor::Transparent;
//	Visiblity_DEPRECATED = Visibility = ESlateVisibility::SelfHitTestInvisible;

// 	Orientation = Orient_Vertical;
// 	ScrollBarVisibility = ESlateVisibility::Collapsed;
// 	AlwaysShowScrollbar = false;
// 	ScrollbarThickness = FVector2D(5, 5);

	Text = FText::FromString(TEXT("Text Block"));
	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(TEXT("/Engine/EngineFonts/Roboto"));
		Font = FSlateFontInfo(RobotoFontObj.Object, 24, FName("Bold"));
	}
}

void UKFTextBlock::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	MyTextBlock.Reset();
}

void UKFTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity)
{
	ColorAndOpacity = InColorAndOpacity;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetColorAndOpacity(InColorAndOpacity);
	}
}

void UKFTextBlock::SetOpacity(float InOpacity)
{
	FLinearColor CurrentColor = ColorAndOpacity.GetSpecifiedColor();
	CurrentColor.A = InOpacity;

	SetColorAndOpacity(FSlateColor(CurrentColor));
}

void UKFTextBlock::SetColor(FSlateColor InColor)
{
	FLinearColor NewColor = InColor.GetSpecifiedColor();
	NewColor.A = ColorAndOpacity.GetSpecifiedColor().A;
	SetColorAndOpacity(FSlateColor(NewColor));
}

void UKFTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity)
{
	ShadowColorAndOpacity = InShadowColorAndOpacity;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetShadowColorAndOpacity(InShadowColorAndOpacity);
	}
}

void UKFTextBlock::SetShadowOffset(FVector2D InShadowOffset)
{
	ShadowOffset = InShadowOffset;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetShadowOffset(ShadowOffset);
	}
}

void UKFTextBlock::SetFont(FSlateFontInfo InFontInfo)
{
	Font = InFontInfo;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetFont(Font);
	}
}

void UKFTextBlock::SetJustification(ETextJustify::Type InJustification)
{
	Justification = InJustification;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetJustification(Justification);
	}
}

void UKFTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	MinDesiredWidth = InMinDesiredWidth;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetMinDesiredWidth(MinDesiredWidth);
	}
}

void UKFTextBlock::SetWrapTextWidth(int32 InWrapTextAt)
{
	WrapTextAt = InWrapTextAt;
	SynchronizeProperties();
}

void UKFTextBlock::SetText(FText InText)
{
	Text = InText;
	SynchronizeProperties();
}

void UKFTextBlock::AppendText(const FText& InText)
{
	Text = FText::FromString(Text.ToString() + InText.ToString());
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->AppendText(InText);
	}
}

FText UKFTextBlock::GetText() const
{
	if (MyTextBlock.IsValid())
	{
		return MyTextBlock->GetText();
	}

	return Text;
}

void UKFTextBlock::SetSlateStyle(FTextBlockStyle InStyle)
{
	MyTextBlockStyle = InStyle;
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetTextStyle(&MyTextBlockStyle);
 		MyTextBlock->SetColorAndOpacity(MyTextBlockStyle.ColorAndOpacity);
 		MyTextBlock->SetShadowOffset(MyTextBlockStyle.ShadowOffset);
 		MyTextBlock->SetShadowColorAndOpacity(MyTextBlockStyle.ShadowColorAndOpacity);

		Super::SynchronizeTextLayoutProperties(*MyTextBlock);
	}
}

void UKFTextBlock::SetWidgetStyle(TSubclassOf<UTextBlockWidgetStyle> InStyle)
{
	if (InStyle)
	{
		if (const UTextBlockWidgetStyle* WidgetStyle = Cast<UTextBlockWidgetStyle>(InStyle->GetDefaultObject()))
		{
			SetSlateStyle(*(const FTextBlockStyle*)WidgetStyle->GetStyle());
		}
	}
}

void UKFTextBlock::SynchronizeProperties()
{
	Super::SynchronizeProperties();

	TAttribute<FText> TextBinding = GetDisplayText();
	TAttribute<FSlateColor> ColorAndOpacityBinding = PROPERTY_BINDING(FSlateColor, ColorAndOpacity);
	TAttribute<FLinearColor> ShadowColorAndOpacityBinding = PROPERTY_BINDING(FLinearColor, ShadowColorAndOpacity);

	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetText(TextBinding);
		MyTextBlock->SetFont(Font);
		MyTextBlock->SetColorAndOpacity(ColorAndOpacityBinding);
		MyTextBlock->SetShadowOffset(ShadowOffset);
		MyTextBlock->SetShadowColorAndOpacity(ShadowColorAndOpacityBinding);
		MyTextBlock->SetMinDesiredWidth(MinDesiredWidth);
		MyTextBlock->SetTextType(TextType);

		Super::SynchronizeTextLayoutProperties(*MyTextBlock);

		MyTextBlock->InvalidateLayout();
	}
}

TSharedRef<SWidget> UKFTextBlock::RebuildWidget()
{
//	TickHandle = FTicker::GetCoreTicker().AddTicker(FTickerDelegate::CreateUObject(this, &ThisClass::OnTick));
	
	 SAssignNew(MyTextBlock, SKFTextBlock)
		.TextType(TextType)
		.ContainerWidget(this)
		 ;
	return MyTextBlock.ToSharedRef();
}

TAttribute<FText> UKFTextBlock::GetDisplayText()
{
	TAttribute<FText> TextBinding = PROPERTY_BINDING(FText, Text);
// 	if (bAllCaps)
// 	{
// 		if (TextBinding.IsBound())
// 		{
// 			TAttribute<FText> InternalTextBinding = TextBinding;
// 			TextBinding.Bind(TAttribute<FText>::FGetter::CreateLambda([InternalTextBinding]()
// 			{
// 				return InternalTextBinding.Get(FText::GetEmpty()).ToUpper();
// 			}));
// 		}
// 		else
// 		{
// 			TextBinding = TextBinding.Get(FText::GetEmpty()).ToUpper();
// 		}
// 	}
	return TextBinding;
}

// const UKFTextStyle* UKFTextBlock::GetStyleCDO() const
// {
// 	if (Style)
// 	{
// 		if (const UKFTextStyle* TextStyle = Cast<UKFTextStyle>(Style->ClassDefaultObject))
// 		{
// 			return TextStyle;
// 		}
// 	}
// 	return nullptr;
// }

void UKFTextBlock::OnBindingChanged(const FName& Property)
{
	Super::OnBindingChanged(Property);

	if (MyTextBlock.IsValid())
	{
		static const FName TextProperty(TEXT("TextDelegate"));
		static const FName ColorAndOpacityProperty(TEXT("ColorAndOpacityDelegate"));
		static const FName ShadowColorAndOpacityProperty(TEXT("ShadowColorAndOpacityDelegate"));

		if (Property == TextProperty)
		{
			TAttribute<FText> TextBinding = GetDisplayText();
			MyTextBlock->SetText(TextBinding);
		}
		else if (Property == ColorAndOpacityProperty)
		{
			TAttribute<FSlateColor> ColorAndOpacityBinding = PROPERTY_BINDING(FSlateColor, ColorAndOpacity);
			MyTextBlock->SetColorAndOpacity(ColorAndOpacityBinding);
		}
		else if (Property == ShadowColorAndOpacityProperty)
		{
			TAttribute<FLinearColor> ShadowColorAndOpacityBinding = PROPERTY_BINDING(FLinearColor, ShadowColorAndOpacity);
			MyTextBlock->SetShadowColorAndOpacity(ShadowColorAndOpacityBinding);
		}
	}
}

// bool UKFTextBlock::OnTick(float Delta)
// {
// 	if (!bPlaying)
// 	{
// 		return true;
// 	}
// 
// 	const float ContentSize = ScrollBox->GetDesiredSize().X;
// 	TimeElapsed += Delta;
// 
// 	switch (ActiveState)
// 	{
// 	case EFadeIn:
// 	{
// 		if (!ScrollBar->IsNeeded())
// 		{
// 			FontAlpha = 1.f;
// 			break;
// 		}
// 		else
// 		{
// 			FontAlpha = FMath::Clamp<float>(TimeElapsed / FadeInDelay, 0.f, 1.f);
// 			if (TimeElapsed >= FadeInDelay)
// 			{
// 				FontAlpha = 1.f;
// 				TimeElapsed = 0.f;
// 				ScrollOffset = 0.f;
// 				ActiveState = EStart;
// 			}
// 		}
// 		break;
// 	}
// 	case EStart:
// 	{
// 		if (!ScrollBar->IsNeeded())
// 		{
// 			break;
// 		}
// 		else
// 		{
// 			TimeElapsed = 0.f;
// 			ScrollOffset = 0.f;
// 			ActiveState = EStartWait;
// 		}
// 		break;
// 	}
// 	case EStartWait:
// 	{
// 		if (TimeElapsed >= StartDelay)
// 		{
// 			TimeElapsed = 0.f;
// 			ScrollOffset = 0.f;
// 			ActiveState = EScrolling;
// 		}
// 		break;
// 	}
// 	case EScrolling:
// 	{
// 		ScrollOffset += Speed * Delta;
// 		if (FMath::IsNearlyZero(ScrollBar->DistanceFromBottom()))
// 		{
// 			ScrollOffset = ContentSize;
// 			TimeElapsed = 0.0f;
// 			ActiveState = EStop;
// 		}
// 		break;
// 	}
// 	case EStop:
// 	{
// 		if (!ScrollBar->IsNeeded())
// 		{
// 			break;
// 		}
// 		else
// 		{
// 			TimeElapsed = 0.f;
// 			ActiveState = EStopWait;
// 		}
// 		break;
// 	}
// 	case EStopWait:
// 	{
// 		if (TimeElapsed >= EndDelay)
// 		{
// 			TimeElapsed = 0.f;
// 			ActiveState = EFadeOut;
// 		}
// 		break;
// 	}
// 	case EFadeOut:
// 	{
// 		if (!ScrollBar->IsNeeded())
// 		{
// 			FontAlpha = 1.f;
// 			break;
// 		}
// 		else
// 		{
// 			FontAlpha = 1.0f - FMath::Clamp<float>(TimeElapsed / FadeOutDelay, 0.f, 1.f);
// 			if (TimeElapsed >= FadeOutDelay)
// 			{
// 				FontAlpha = 0.0f;
// 				TimeElapsed = 0.0f;
// 				ScrollOffset = 0.0f;
// 				ActiveState = EFadeIn;
// 			}
// 		}
// 		break;
// 	}
// 	}
// 
// 	if (ScrollBox.IsValid())
// 	{
// 		ScrollBox->SetScrollOffset(ScrollOffset);
// 	}
// 
// 	if (MyTextBlock.IsValid())
// 	{
// 		const FLinearColor& Color = ColorAndOpacity.GetSpecifiedColor();
// //		MyTextBlock->SetColorAndOpacity(FSlateColor(FLinearColor(Color.R, Color.G, Color.B, Color.A * FontAlpha)));
// 	}
// 
// 	return true;
// }

void UKFTextBlock::SetScrollOffset(float NewScrollOffset)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetScrollOffset(NewScrollOffset);
	}
}

float UKFTextBlock::GetScrollOffset() const
{
	if (MyTextBlock.IsValid())
	{
		return MyTextBlock->GetScrollOffset();
	}

	return 0.0f;
}

void UKFTextBlock::ScrollToStart()
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->ScrollToStart();
	}
}

void UKFTextBlock::ScrollToEnd()
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->ScrollToEnd();
	}
}