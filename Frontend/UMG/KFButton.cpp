// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "KFButton.h"
#include "UMG.h"




/////////////////////////////////////////////////////
// UKFButton

UKFButton::UKFButton(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
//	ColorAndOpacity = FLinearColor::White;
	bHasStyleModified = false;
	Opacity = 1.0f;
	BackgroundColor = FLinearColor::White;
	TextColor = FLinearColor::Black;
	MyKFButtonStyle = KFWidgetStyleMgr::Get().GetWidgetStyle<FKFButtonStyle>(TEXT("KFButton"));

	if (!IsRunningDedicatedServer())
	{
		static ConstructorHelpers::FObjectFinder<UFont> RobotoFontObj(TEXT("/Engine/EngineFonts/Roboto"));
		MyKFButtonStyle.TextBlockStyle.Font = FSlateFontInfo(RobotoFontObj.Object, 24, FName("Bold"));
	}
}

void UKFButton::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	MyButton.Reset();
}

TSharedRef<SWidget> UKFButton::RebuildWidget()
{
	MyButton = SNew(SKFButton)
		.OnClicked(BIND_UOBJECT_DELEGATE(FOnClicked, SlateHandleClicked))
		.OnPressed(BIND_UOBJECT_DELEGATE(FSimpleDelegate, SlateHandlePressed))
		.OnReleased(BIND_UOBJECT_DELEGATE(FSimpleDelegate, SlateHandleReleased))
		.OnHovered_UObject(this, &ThisClass::SlateHandleHovered)
		.OnUnhovered_UObject(this, &ThisClass::SlateHandleUnhovered)
		.OnFocused_UObject(this, &ThisClass::SlateHandleFocused)
		.OnUnFocused_UObject(this, &ThisClass::SlateHandleUnFocused)
		;

	if (GetChildrenCount() > 0)
	{
		Cast<UButtonSlot>(GetContentSlot())->BuildSlot(MyButton.ToSharedRef());
	}

	return RebuildDesignWidget(MyButton.ToSharedRef());
}

void UKFButton::SynchronizeProperties()
{
	if (MyButton.IsValid())
	{
		if (true)
		{
			MyButton->SetStyle(&MyKFButtonStyle);
			TextColor = MyKFButtonStyle.TextBlockStyle.ColorAndOpacity;
		}
		else
		{
			MyButton->SetStyle(GetStyleCDO());
			if (const FKFButtonStyle* Style = MyButton->GetStyle())
			{
				TextColor = Style->TextBlockStyle.ColorAndOpacity;
			}
		}

		MyButton->SetText(GetDisplayText());
		SetTextColor(TextColor);
		SetBackgroundColor(BackgroundColor);
		MyButton->SetLineHeightPercentage(LineHeightPercentage);
	}

	Super::SynchronizeProperties();
}

UClass* UKFButton::GetSlotClass() const
{
	return UButtonSlot::StaticClass();
}

void UKFButton::OnSlotAdded(UPanelSlot* InSlot)
{
	// Add the child to the live slot if it already exists
	if (MyButton.IsValid())
	{
		CastChecked<UButtonSlot>(InSlot)->BuildSlot(MyButton.ToSharedRef());
	}
}

void UKFButton::OnSlotRemoved(UPanelSlot* InSlot)
{
	// Remove the widget from the live slot if it exists.
	if (MyButton.IsValid())
	{
		MyButton->SetContent(SNullWidget::NullWidget);
	}
}

// void UKFButton::SetStyle(const UKFButtonStyle* InStyle)
// {
// 	ButtonStyle = InStyle;
// 	if (MyButton.IsValid())
// 	{
// 		MyButton->SetButtonStyle(ButtonStyle);
// 	}
// }

// void UKFButton::SetColorAndOpacity(FSlateColor InColorAndOpacity)
// {
// 	ColorAndOpacity = InColorAndOpacity;
// 
// 	if (MyTextBlock.IsValid())
// 	{
// 		MyTextBlock->SetColorAndOpacity(ColorAndOpacity);
// 	}
// }

void UKFButton::SetBackgroundColor(FSlateColor InBackgroundColor)
{
	BackgroundColor = InBackgroundColor;
	if (MyButton.IsValid())
	{
		FLinearColor color = BackgroundColor.GetSpecifiedColor();
		MyButton->SetBorderBackgroundColor(FSlateColor( FLinearColor(color.R, color.G, color.B, color.A*Opacity) ));
	}
}

bool UKFButton::IsPressed() const
{
	if (MyButton.IsValid())
	{
		return MyButton->IsPressed();
	}

	return false;
}

bool UKFButton::IsFocused() const
{
	if (MyButton.IsValid())
	{
		return MyButton->IsFocused();
	}

	return false;
}

FText UKFButton::GetText() const
{
	return Text;
}

void UKFButton::SetText(FText InText)
{
	Text = InText;
	TextDelegate.Unbind();
	if (MyButton.IsValid())
	{
		TAttribute<FText> TextBinding = GetDisplayText();
		MyButton->SetText(TextBinding);
	}
}

TAttribute<FText> UKFButton::GetDisplayText()
{
	return PROPERTY_BINDING(FText, Text);
}

FReply UKFButton::SlateHandleClicked()
{
	OnClicked.Broadcast();

	return FReply::Handled();
}

void UKFButton::SlateHandlePressed()
{
	OnPressed.Broadcast();
}

void UKFButton::SlateHandleReleased()
{
	OnReleased.Broadcast();
}

void UKFButton::SlateHandleHovered()
{
	OnHovered.Broadcast();
}

void UKFButton::SlateHandleUnhovered()
{
	OnUnhovered.Broadcast();
}

void UKFButton::SlateHandleFocused()
{
	OnFocused.Broadcast();
}

void UKFButton::SlateHandleUnFocused()
{
	OnUnFocused.Broadcast();
}

void UKFButton::OnBindingChanged(const FName& Property)
{
	Super::OnBindingChanged(Property);

	if (MyButton.IsValid())
	{
		static const FName TextProperty(TEXT("TextDelegate"));
		static const FName TextColorProperty(TEXT("TextColorDelegate"));

		if (Property == TextProperty)
		{
			TAttribute<FText> TextBinding = GetDisplayText();
			MyButton->SetText(TextBinding);
		}
// 		else if (Property == TextColorProperty)
// 		{
// 			TAttribute<FSlateColor> TextColorBinding = PROPERTY_BINDING(FSlateColor, TextColor);
// 			MyTextBlock->SetColorAndOpacity(TextColorBinding);
// 		}
	}
}

void UKFButton::SetTextColor(FSlateColor InColor)
{
	TextColor = InColor;
	if (MyButton.IsValid())
	{
		FLinearColor color = TextColor.GetSpecifiedColor();
		MyButton->SetTextColor(FSlateColor(FLinearColor(color.R, color.G, color.B, color.A*Opacity)));
	}
}

void UKFButton::SetOpacity(float InOpacity)
{
	Opacity = FMath::Clamp(InOpacity, 0.0f, 1.0f);
	SetTextColor(TextColor);
	SetBackgroundColor(BackgroundColor);
}

float UKFButton::GetOpacity()
{
	return Opacity;
}

void UKFButton::SetFont(FSlateFontInfo InFontInfo)
{
//	Font = InFontInfo;
	if (MyButton.IsValid())
	{
		MyButton->SetFont(InFontInfo);
	}
}

void UKFButton::SetWidgetStyle(TSubclassOf<UKFButtonWidgetStyle> InStyle)
{
	if (InStyle)
	{		
		if (const UKFButtonWidgetStyle* WidgetStyle = Cast<UKFButtonWidgetStyle>(InStyle->GetDefaultObject()))
		{
			SetSlateStyle(*(const FKFButtonStyle*)WidgetStyle->GetStyle());
		}
	}
}

void UKFButton::SetSlateStyle(const FKFButtonStyle& InStyle)
{
	if (!bHasStyleModified)
	{
		bHasStyleModified = true;
		DefaultStyle = MyKFButtonStyle;
	}
	MyKFButtonStyle = InStyle;
	SynchronizeProperties();
}

void UKFButton::SetImageFromEvent(const EKFButtonImage InType)
{
	if (!bHasStyleModified)
	{
		bHasStyleModified = true;
		DefaultStyle = MyKFButtonStyle;
	}
	
	FSlateBrush* SelectBrush = nullptr;
	switch (InType)
	{
	case EKFButtonImage::Normal:
		SelectBrush = &DefaultStyle.ButtonStyle.Normal;
		break;
	case EKFButtonImage::Hovered:
		SelectBrush = &DefaultStyle.ButtonStyle.Hovered;
		break;
	case EKFButtonImage::Pressed:
		SelectBrush = &DefaultStyle.ButtonStyle.Pressed;
		break;
	case EKFButtonImage::Focused:
		SelectBrush = &DefaultStyle.ButtonStyle.Focused;
		break;
	case EKFButtonImage::Disabled:
		SelectBrush = &DefaultStyle.ButtonStyle.Disabled;
		break;
	default:
		break;
	}
	if (SelectBrush && MyKFButtonStyle.ButtonStyle.Normal != *SelectBrush)
	{
		MyKFButtonStyle.ButtonStyle.SetNormal(*SelectBrush);
		SynchronizeProperties();
	}
}

void UKFButton::SetImageFromTexture(UTexture2D* Texture, bool bMatchSize/* = false*/)
{
	FSlateBrush Brush;
	Brush.SetResourceObject(Texture);

	if (Texture) // Since this texture is used as UI, don't allow it affected by budget.
	{
		Texture->bIgnoreStreamingMipBias = true;
	}

	if (bMatchSize && Texture)
	{
		Brush.ImageSize.X = Texture->GetSizeX();
		Brush.ImageSize.Y = Texture->GetSizeY();
	}

	SetImageFromBrush(Brush);
}

void UKFButton::SetImageFromMaterial(UMaterialInterface* Material)
{
	FSlateBrush Brush;
	Brush.SetResourceObject(Material);

	SetImageFromBrush(Brush);
}

void UKFButton::SetImageFromBrush(const FSlateBrush& Brush)
{
	if (!bHasStyleModified)
	{
		bHasStyleModified = true;
		DefaultStyle = MyKFButtonStyle;
	}

	const FSlateBrush& SourceBrush = Brush;
	MyKFButtonStyle.ButtonStyle.SetNormal(SourceBrush);
	MyKFButtonStyle.ButtonStyle.SetHovered(SourceBrush);
	MyKFButtonStyle.ButtonStyle.SetPressed(SourceBrush);
	MyKFButtonStyle.ButtonStyle.SetFocused(SourceBrush);
	MyKFButtonStyle.ButtonStyle.SetDisabled(SourceBrush);

	SynchronizeProperties();
}

void UKFButton::ResetStyle()
{
	if (bHasStyleModified)
	{
		bHasStyleModified = false;
		MyKFButtonStyle = DefaultStyle;
		SynchronizeProperties();
	}
}

void UKFButton::ApplyStyle()
{
	bHasStyleModified = false;
}

const FKFButtonStyle* UKFButton::GetStyleCDO()
{
// 	if (WidgetStyleClass)
// 	{
// 		const UKFButtonWidgetStyle* WidgetStyle = Cast<UKFButtonWidgetStyle>(WidgetStyleClass->GetDefaultObject());
// 		if (WidgetStyle)
// 		{
// 			return (const FKFButtonStyle*)(WidgetStyle->GetStyle());
// 		}
// //		return Cast<FKFButtonStyle>(WidgetStyleClass->GetDefaultObject());
// 	}
	return nullptr;
}

/////////////////////////////////////////////////////
