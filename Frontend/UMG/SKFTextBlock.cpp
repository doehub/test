// Fill out your copyright notice in the Description page of Project Settings.
#include "Kingdom.h"
#include "SKFTextBlock.h"
#include "UMG.h"
#include "Framework/Text/PlainTextLayoutMarshaller.h"
#include "Widgets/Text/TextBlockLayout.h"
#include "Types/ReflectionMetadata.h"

SKFTextBlock::SKFTextBlock()
	:PreferredWidth(100)
{
	ScrollBoxStyle = KFWidgetStyleMgr::Get().GetWidgetStyle<FScrollBoxStyle>("KFScrollBox");
}

SKFTextBlock::~SKFTextBlock()
{
	MyTextBlock.Reset();
	MyScrollBox.Reset();	
}

void SKFTextBlock::Construct( const FArguments& InArgs )
{
	TextStyle = *InArgs._TextStyle;
	HighlightText = InArgs._HighlightText;
	WrapTextAt = InArgs._WrapTextAt;
	AutoWrapText = InArgs._AutoWrapText;
	WrappingPolicy = InArgs._WrappingPolicy;
	Margin = InArgs._Margin;
	LineHeightPercentage = InArgs._LineHeightPercentage;
	Justification = InArgs._Justification;
	MinDesiredWidth = InArgs._MinDesiredWidth;
	Font = InArgs._Font;
	ColorAndOpacity = InArgs._ColorAndOpacity;
	ShadowOffset = InArgs._ShadowOffset;
	ShadowColorAndOpacity = InArgs._ShadowColorAndOpacity;
	HighlightColor = InArgs._HighlightColor;
	HighlightShape = InArgs._HighlightShape;
	OnDoubleClicked = InArgs._OnDoubleClicked;
	BoundText = InArgs._Text;
	TextType = InArgs._TextType.Get();

	ScrollBarStyle = InArgs._ScrollBarStyle;
	Orientation = InArgs._Orientation;
	ScrollBarVisibility = InArgs._ScrollBarVisibility;
	ScrollBarAlwaysVisible = InArgs._ScrollBarAlwaysVisible;
	ScrollBarThickness = InArgs._ScrollBarThickness;
	ExternalScrollbar = InArgs._ExternalScrollbar;

	ContainerWidget = InArgs._ContainerWidget;

	MyScrollBox = CreateScrollBox();	

	TextLayoutCache = MakeUnique<FTextBlockLayout>(FTextBlockStyle::GetDefault(), InArgs._TextShapingMethod, InArgs._TextFlowDirection, FCreateSlateTextLayout(), FPlainTextLayoutMarshaller::Create(), InArgs._LineBreakPolicy);
	TextLayoutCache->SetDebugSourceInfo(TAttribute<FString>::Create(TAttribute<FString>::FGetter::CreateLambda([this] { return FReflectionMetaData::GetWidgetDebugInfo(this); })));

}

int32 SKFTextBlock::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	const FSlateBrush* BrushResource = FCoreStyle::Get().GetBrush("FocusRectangle");

	const bool bEnabled = ShouldBeEnabled(bParentEnabled);
	ESlateDrawEffect DrawEffects =  !bEnabled ? ESlateDrawEffect::DisabledEffect : ESlateDrawEffect::None;

// 	if (BrushResource && BrushResource->DrawAs != ESlateBrushDrawType::NoDrawType)
// 	{
// 		FSlateDrawElement::MakeBox(
// 			OutDrawElements,
// 			LayerId,
// 			AllottedGeometry.ToPaintGeometry(),
// 			BrushResource,
// 			DrawEffects,
// 			BrushResource->GetTint(InWidgetStyle) *InWidgetStyle.GetColorAndOpacityTint()
// 		);
// 	}

	return SCompoundWidget::OnPaint(Args, AllottedGeometry, MyCullingRect.IntersectionWith(AllottedGeometry.GetLayoutBoundingRect()), OutDrawElements, LayerId, InWidgetStyle, bEnabled);
}

void SKFTextBlock::SetFont(const TAttribute< FSlateFontInfo >& InFont)
{
	Font = InFont;
	
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetFont(InFont);
	}
}

void SKFTextBlock::SetColorAndOpacity(const TAttribute<FSlateColor>& InColorAndOpacity)
{
	if (!ColorAndOpacity.IsSet() || !ColorAndOpacity.IdenticalTo(InColorAndOpacity))
	{
		ColorAndOpacity = InColorAndOpacity;
	}

	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetColorAndOpacity(InColorAndOpacity);
	}
}

void SKFTextBlock::SetTextStyle(const FTextBlockStyle* InTextStyle)
{
	if (InTextStyle)
	{
		TextStyle = *InTextStyle;
	}
	else
	{
		FArguments Defaults;
		TextStyle = *Defaults._TextStyle;
	}

	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetTextStyle(&TextStyle);
	}
}

void SKFTextBlock::SetTextShapingMethod(const TOptional<ETextShapingMethod>& InTextShapingMethod)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetTextShapingMethod(InTextShapingMethod);
	}

	TextLayoutCache->SetTextShapingMethod(InTextShapingMethod);
}

void SKFTextBlock::SetTextFlowDirection(const TOptional<ETextFlowDirection>& InTextFlowDirection)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetTextFlowDirection(InTextFlowDirection);
	}

	TextLayoutCache->SetTextFlowDirection(InTextFlowDirection);
}

void SKFTextBlock::SetWrapTextAt(const TAttribute<float>& InWrapTextAt)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetWrapTextAt(InWrapTextAt);
	}

	WrapTextAt = InWrapTextAt;
}

void SKFTextBlock::SetAutoWrapText(const TAttribute<bool>& InAutoWrapText)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetAutoWrapText(InAutoWrapText);
	}

	AutoWrapText = InAutoWrapText;
}

void SKFTextBlock::SetWrappingPolicy(const TAttribute<ETextWrappingPolicy>& InWrappingPolicy)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetWrappingPolicy(InWrappingPolicy);
	}

	WrappingPolicy = InWrappingPolicy;
}

void SKFTextBlock::SetShadowOffset(const TAttribute<FVector2D>& InShadowOffset)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetShadowOffset(InShadowOffset);
	}

	ShadowOffset = InShadowOffset;
}

void SKFTextBlock::SetShadowColorAndOpacity(const TAttribute<FLinearColor>& InShadowColorAndOpacity)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetShadowColorAndOpacity(ShadowColorAndOpacity);
	}

	ShadowColorAndOpacity = InShadowColorAndOpacity;
}

void SKFTextBlock::SetMinDesiredWidth(const TAttribute<float>& InMinDesiredWidth)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetMinDesiredWidth(InMinDesiredWidth);
	}

	MinDesiredWidth = InMinDesiredWidth;
}

void SKFTextBlock::SetLineHeightPercentage(const TAttribute<float>& InLineHeightPercentage)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetLineHeightPercentage(InLineHeightPercentage);
	}

	LineHeightPercentage = InLineHeightPercentage;
}

void SKFTextBlock::SetMargin(const TAttribute<FMargin>& InMargin)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetMargin(InMargin);
	}

	Margin = InMargin;
}

void SKFTextBlock::SetJustification(const TAttribute<ETextJustify::Type>& InJustification)
{
	if (MyTextBlock.IsValid())
	{
		MyTextBlock->SetJustification(InJustification);
	}

	Justification = InJustification;
}

void SKFTextBlock::SetOrientation(EOrientation NewOrientation)
{
	Orientation = NewOrientation;
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->SetOrientation(NewOrientation);
	}
}

void SKFTextBlock::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility)
{	
	if (MyScrollBox.IsValid())
	{
		switch (NewScrollBarVisibility)
		{
		case ESlateVisibility::Collapsed:				ScrollBarVisibility = EVisibility::Collapsed;  MyScrollBox->SetScrollBarVisibility(EVisibility::Collapsed); break;
		case ESlateVisibility::Hidden:					ScrollBarVisibility = EVisibility::Hidden; MyScrollBox->SetScrollBarVisibility(EVisibility::Hidden); break;
		case ESlateVisibility::HitTestInvisible:		ScrollBarVisibility = EVisibility::HitTestInvisible; MyScrollBox->SetScrollBarVisibility(EVisibility::HitTestInvisible); break;
		case ESlateVisibility::SelfHitTestInvisible:	ScrollBarVisibility = EVisibility::SelfHitTestInvisible; MyScrollBox->SetScrollBarVisibility(EVisibility::SelfHitTestInvisible); break;
		case ESlateVisibility::Visible:					ScrollBarVisibility = EVisibility::Visible; MyScrollBox->SetScrollBarVisibility(EVisibility::Visible); break;
		}
	}
}

void SKFTextBlock::SetScrollbarThickness(const FVector2D& NewScrollbarThickness)
{
	ScrollBarThickness = NewScrollbarThickness;
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->SetScrollBarThickness(NewScrollbarThickness);
	}
}

void SKFTextBlock::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	ScrollBarAlwaysVisible = NewAlwaysShowScrollbar;
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->SetScrollBarAlwaysVisible(NewAlwaysShowScrollbar);
	}
}

void SKFTextBlock::SetAllowOverscroll(bool NewAllowOverscroll)
{
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->SetAllowOverscroll(NewAllowOverscroll ? EAllowOverscroll::Yes : EAllowOverscroll::No);
	}
}

void SKFTextBlock::SetScrollOffset(float NewScrollOffset)
{
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->SetScrollOffset(NewScrollOffset);
	}
}

float SKFTextBlock::GetScrollOffset() const
{
	if (MyScrollBox.IsValid())
	{
		return MyScrollBox->GetScrollOffset();
	}

	return 0.0f;
}

void SKFTextBlock::ScrollToStart()
{
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->ScrollToStart();
	}
}

void SKFTextBlock::ScrollToEnd()
{
	if (MyScrollBox.IsValid())
	{
		MyScrollBox->ScrollToEnd();
	}
}

void SKFTextBlock::SetText(const FText& InText)
{
	BoundText = InText;
}

void SKFTextBlock::SetText(const TAttribute< FString >& InText)
{
	SetText(InText.Get());
}
void SKFTextBlock::SetText(const FString& InText)
{
	SetText(FText::FromString(InText));
}

void SKFTextBlock::SetText(const TAttribute< FText >& InText)
{
	BoundText = InText;
}

void SKFTextBlock::AppendText(const FText& InText)
{
	FString Source = BoundText.Get().ToString() + InText.ToString();
	SetText(Source);
	if (TextType == EKFTextType::Rich)
	{
		ParseRich(InText, MyHorizontalBox, ScrollBoxHOffset);
	}
	else
	{
		if (MyTextBlock.IsValid())
		{
			MyTextBlock->SetText(BoundText);
		}
	}
	
}

void SKFTextBlock::Split(const FString& InStr, const FString& Key, TArray<FString>& OutList)
{
	FString strL, StrR;
	FString strContent = InStr;
	while (strContent.Split(Key, &strL, &StrR))
	{
		OutList.Add(strL);
		strContent = StrR;
	}

	if (OutList.Num() > 0)
	{
		OutList.Add(StrR);
	}
	else
	{
		OutList.Add(InStr);
	}
}

TSharedPtr<STextBlock> SKFTextBlock::CreateTextBlock(const FText& InText, const FArguments& Default)
{
	TSharedPtr<STextBlock> OutPtr;
	if (TextType == EKFTextType::Static)
	{
		SAssignNew(OutPtr, STextBlock)
			.TextStyle(Default._TextStyle)
			.HighlightText(Default._HighlightText)
			.WrapTextAt(Default._WrapTextAt)
			.AutoWrapText(Default._AutoWrapText)
			.WrappingPolicy(Default._WrappingPolicy)
			.Margin(Default._Margin)
			.LineHeightPercentage(Default._LineHeightPercentage)
			.Justification(Default._Justification)
			.MinDesiredWidth(Default._MinDesiredWidth)
			.Font(Default._Font)
			.ColorAndOpacity(Default._ColorAndOpacity)
			.ShadowOffset(Default._ShadowOffset)
			.ShadowColorAndOpacity(Default._ShadowColorAndOpacity)
			.HighlightColor(Default._HighlightColor)
			.HighlightShape(Default._HighlightShape)
			.OnDoubleClicked(Default._OnDoubleClicked)
			.Text(InText);
	}
	else
	{
		SAssignNew(OutPtr, STextBlock)
			.TextStyle(Default._TextStyle)
			.HighlightText(Default._HighlightText)
			.Font(Default._Font)
			.ColorAndOpacity(Default._ColorAndOpacity)
			.ShadowOffset(Default._ShadowOffset)
			.ShadowColorAndOpacity(Default._ShadowColorAndOpacity)
			.HighlightColor(Default._HighlightColor)
			.HighlightShape(Default._HighlightShape)
			.OnDoubleClicked(Default._OnDoubleClicked)
			.Text(InText);
	}
	return OutPtr;
}

void SKFTextBlock::GetUserArguments(FArguments& OutArgument)
{
	OutArgument._TextType = TextType;
	OutArgument._TextStyle = &TextStyle;
	OutArgument._Font = GetFont();
	OutArgument._ColorAndOpacity = GetColorAndOpacity();
	OutArgument._ShadowOffset = GetShadowOffset();
	OutArgument._ShadowColorAndOpacity = GetShadowColorAndOpacity();
	OutArgument._HighlightColor = GetHighlightColor();
	OutArgument._HighlightShape = GetHighlightShape();
	OutArgument._HighlightText = HighlightText;
	OutArgument._WrapTextAt = WrapTextAt;
	OutArgument._AutoWrapText = AutoWrapText;
	OutArgument._WrappingPolicy = WrappingPolicy;
	OutArgument._Margin = Margin;
	OutArgument._LineHeightPercentage = LineHeightPercentage;
	OutArgument._Justification = Justification;
	OutArgument._MinDesiredWidth = MinDesiredWidth;
	OutArgument._OnDoubleClicked = OnDoubleClicked;
	OutArgument._Text = BoundText;
}

void SKFTextBlock::ConstructTextBlock()
{
	ScrollBoxHOffset = 0.0f;
	MyScrollBox->ClearChildren();
	MyHorizontalBox = nullptr;
	if (TextType == EKFTextType::Static)
	{
		FArguments Default;
		GetUserArguments(Default);
		MyTextBlock = CreateTextBlock(BoundText.Get(), Default);
		this->ChildSlot[MyTextBlock.ToSharedRef()];
	}
	else
	{
		ParseRich(BoundText.Get(), MyHorizontalBox, ScrollBoxHOffset);
		this->ChildSlot[MyScrollBox.ToSharedRef()];		
	}
}

void SKFTextBlock::ParseRich(const FText& InText, TSharedPtr<SHorizontalBox>& InHorizontalBox, float& offset)
{
	TArray<FTextLineParseResults> LineParseResultsArray;
	FString ProcessedString;
	FDefaultRichTextMarkupParser::Create()->Process(LineParseResultsArray, InText.ToString(), ProcessedString);
	for (auto& LineParseResults : LineParseResultsArray)
	{
		for (auto& TextRun : LineParseResults.Runs)
		{
			FString tagName = TextRun.Name;
			if (tagName == TEXT("image"))
			{
				FString ImagePath;
				FVector2D ImageSize(SlateBrushDefs::DefaultImageSize, SlateBrushDefs::DefaultImageSize);
				for (auto meta : TextRun.MetaData)
				{
					FString metaValue = ProcessedString.Mid(meta.Value.BeginIndex, meta.Value.EndIndex - meta.Value.BeginIndex);
					if (meta.Key == TEXT("path"))
					{
						ImagePath = metaValue;
					}
					else if (meta.Key == TEXT("size"))
					{
						float x = 0, y = 0;
						if (FParse::Value(*metaValue, TEXT("w="), x) && FParse::Value(*metaValue, TEXT("h="), y))
						{
							ImageSize.X = x;
							ImageSize.Y = y;
						}
					}
				}

				if (!ImagePath.IsEmpty() && !ImageSize.IsNearlyZero())
				{
					TSharedPtr<SImage> MyImage = AddScrollBoxImage(InHorizontalBox, offset, ImageSize);
					if (MyImage.IsValid())
					{
						MyImage->SetImage(FFrontendSlateStyle::Get().GetBrush(ImagePath));
					}
				}
			}
			else if (tagName == TEXT("text"))
			{
				FArguments Default;
				GetUserArguments(Default);
				const FString& TextContent = ProcessedString.Mid(TextRun.ContentRange.BeginIndex, TextRun.ContentRange.EndIndex - TextRun.ContentRange.BeginIndex);
				for (auto meta : TextRun.MetaData)
				{
					FString metaValue = ProcessedString.Mid(meta.Value.BeginIndex, meta.Value.EndIndex - meta.Value.BeginIndex);
					if (meta.Key == TEXT("color"))
					{
						FLinearColor OutFontColor;
						if (OutFontColor.InitFromString(metaValue))
						{
							Default._ColorAndOpacity.Set(OutFontColor);
						}
						else
						{
							Default._ColorAndOpacity.Set(FSlateColor(FLinearColor(FColor::FromHex(metaValue))));
						}
					}
					else if (meta.Key == TEXT("font"))
					{
						FSoftObjectPath FontPath(metaValue);
						if (UObject* FontAsset = FontPath.TryLoad())
						{
							FSlateFontInfo FontInfo = Default._Font.Get();
							FontInfo.FontObject = FontAsset;
							Default._Font.Set(FontInfo);
						}
					}
					else if (meta.Key == TEXT("size"))
					{
						FSlateFontInfo FontInfo = Default._Font.Get();
						FontInfo.Size = FCString::Atoi(*metaValue);
						Default._Font.Set(FontInfo);
					}
				}

				AddScrollBoxText(InHorizontalBox, Default, TextContent, offset);
			}
			else
			{
				FArguments Default;
				GetUserArguments(Default);
				const FString& Content = ProcessedString.Mid(TextRun.OriginalRange.BeginIndex, TextRun.OriginalRange.EndIndex - TextRun.OriginalRange.BeginIndex);
				AddScrollBoxText(InHorizontalBox, Default, Content, offset);
			}
		}
		
	}
}

TSharedPtr<SScrollBox> SKFTextBlock::CreateScrollBox()
{
	TSharedPtr<SScrollBox> ScrollBox;
	SAssignNew(ScrollBox, SScrollBox)
		.Style(&ScrollBoxStyle)
		.ScrollBarStyle(ScrollBarStyle)
		.Orientation(Orientation)
		.ScrollBarVisibility(ScrollBarVisibility)
		.ScrollBarAlwaysVisible(ScrollBarAlwaysVisible)
		.ScrollBarThickness(ScrollBarThickness)
		.ExternalScrollbar(ExternalScrollbar)
		.ConsumeMouseWheel(EConsumeMouseWheel::Always);

	return ScrollBox;
}

TSharedPtr<SWidget> SKFTextBlock::CreateHorizontalBox(TSharedPtr<SHorizontalBox>& InHorizontalBox, float height)
{
//	TSharedPtr<SWidget> RootWidget;
// 	SAssignNew(RootWidget, SBox)
// 		.HeightOverride(height)
// 		.HAlign(EHorizontalAlignment(Justification.Get() + 1))
// 		.VAlign(EVerticalAlignment::VAlign_Top)
// 		[SAssignNew(InHorizontalBox, SHorizontalBox)];	
//	return RootWidget;

	return SAssignNew(InHorizontalBox, SHorizontalBox);
}

void SKFTextBlock::InvalidateLayout()
{
	if (ContainerWidget)
	{
		ContainerWidget->InvalidateData.InvalidateFlag = true;
	}	
}

void SKFTextBlock::GetTextBlockSuitableText(const FArguments& InArgs, const FString& InText, float& offset, float& height, bool& IsInsert, TArray<FString>& OutList)
{	
	const float WidgetWidth = PreferredWidth;	

	FTextBlockStyle ComputedStyle = *InArgs._TextStyle;
	ComputedStyle.SetFont(InArgs._Font.Get());
	ComputedStyle.SetColorAndOpacity(InArgs._ColorAndOpacity.Get());
	ComputedStyle.SetShadowOffset(InArgs._ShadowOffset.Get());
	ComputedStyle.SetShadowColorAndOpacity(InArgs._ShadowColorAndOpacity.Get());
	ComputedStyle.SetHighlightColor(InArgs._HighlightColor.Get());
	ComputedStyle.SetHighlightShape(*InArgs._HighlightShape.Get());
	
	struct  
	{
		FVector2D operator() (const TUniquePtr< FTextBlockLayout >& TextLayoutCache, const FArguments& InArgs, const FString& InStr, const FTextBlockStyle& ComputedStyle)
		{
			return TextLayoutCache->ComputeDesiredSize(
				FTextBlockLayout::FWidgetArgs(FText::FromString(InStr), InArgs._HighlightText, InArgs._WrapTextAt, InArgs._AutoWrapText, InArgs._WrappingPolicy, InArgs._Margin, InArgs._LineHeightPercentage, InArgs._Justification),
				1.0f, ComputedStyle
			);
		}
	}GetTextSize;
	
	IsInsert = false;
	FString TotalStr = InText;
	TArray<FString> LinesList;
	int32 StartPosition = INDEX_NONE;
	int32 FindPosition = INDEX_NONE;
	FString StrFind = TEXT("\\n");
	while ( (FindPosition = TotalStr.Find(StrFind, ESearchCase::IgnoreCase, ESearchDir::FromStart, StartPosition)) != INDEX_NONE )
	{
		int32 pos = StartPosition == INDEX_NONE ? 0 : StartPosition;
		LinesList.Add(TotalStr.Mid(pos, FindPosition - pos));
		StartPosition = FindPosition + StrFind.Len();
	}
	
	if (LinesList.Num() == 0)
	{
		LinesList.Add(TotalStr);
	}
	else if (StartPosition != INDEX_NONE)
	{
		LinesList.Add(TotalStr.Mid(StartPosition));
	}

	float MinSpace = 0.0f;
	float space = FMath::Max(0.0f, WidgetWidth - offset);
	if (TotalStr.Len() > 0)
	{
		const FVector2D TextSize = GetTextSize(TextLayoutCache, InArgs, TEXT("W"), ComputedStyle);
		MinSpace = TextSize.X;
		height = TextSize.Y;
		if (ScrollBarVisibility != EVisibility::Collapsed)
		{
			MinSpace += ScrollBarThickness.X;
		}
// 		if (WidgetWidth < MinSpace)
// 		{
// 			for (int i = 0; i < LinesList.Num(); ++i)
// 			{
// 				for (int j = 0; j < LinesList[i].Len(); ++j)
// 				{
// 					OutList.Add(LinesList[i].Mid(j, 1));
// 				}				
// 			}
// 			return;
// 		}
	}

	bool IsDone = false;
	bool IsFirst = true;
	for (int32 line = 0; line < LinesList.Num(); ++line)
	{
		FString LineStr = LinesList[line];
		if (LineStr.IsEmpty())
		{
			space = WidgetWidth;
			OutList.Add(TEXT(""));
			IsFirst = false;
			continue;
		}

		if (!IsFirst)
		{
			space = WidgetWidth;
		}

		while (!LineStr.IsEmpty())
		{
			IsDone = false;
			for (int32 i = LineStr.Len(); i > 0; --i)
			{
				const FString& str = LineStr.Left(i);
				const FVector2D TextSize = GetTextSize(TextLayoutCache, InArgs, str, ComputedStyle);
				if (TextSize.X < space)
				{
					int32 index = i - 1;
					if (i < LineStr.Len() && LineStr[index] != TEXT(' '))
					{
						if (LineStr[index + 1] != TEXT(' ') && LineStr[index + 1] < 128 && LineStr[index] < 128)
						{
							continue;
						}
					}
					LineStr = LineStr.Mid(i);
					space -= TextSize.X;
					OutList.Add(str);
					IsDone = true;

					if (IsFirst)
					{
						IsInsert = true;
					}
					break;
				}
			}
			
			if (!IsDone)
			{
				if (IsFirst || !FMath::IsNearlyEqual(space, WidgetWidth, 0.001f))
				{
					
					if (!FMath::IsNearlyEqual(space, WidgetWidth, 0.001f))
					{
						IsFirst = false;
						space = WidgetWidth;
						continue;
					}
					else if (IsFirst)
					{
						IsFirst = false;
						IsInsert = true;
					}
				}

				int32 StrCount = 1;
				for (int32 cIndex = 0; cIndex < LineStr.Len(); ++cIndex)
				{
					if (LineStr[cIndex] < 128 && LineStr[cIndex] != TEXT(' '))
					{
						if (cIndex == LineStr.Len()-1 && cIndex != 0)
						{
							StrCount = LineStr.Len();
						}
						continue;
					}
					else
					{
						StrCount = FMath::Max(1, cIndex);
						break;
					}
				}

				OutList.Add(LineStr.Mid(0, StrCount));
				LineStr = LineStr.Mid(StrCount);

				if (LineStr.IsEmpty())
				{
					space = 0.f;
				}
				else
				{
					space = WidgetWidth;
				}
			}

			IsFirst = false;
		}
		IsFirst = false;
	}

	if ( (OutList.Num() > 0) && (OutList.Num() > 1 || IsInsert == false))
	{
		const FVector2D TextSize = GetTextSize(TextLayoutCache, InArgs, OutList[OutList.Num() - 1], ComputedStyle);
		space = FMath::Max(WidgetWidth - TextSize.X, 0.0f);
	}		

	offset = WidgetWidth - space;
}

void SKFTextBlock::AddScrollBoxText(TSharedPtr<SHorizontalBox>& InHorizontalBox, const FArguments& Argument, const FString& Content, float& offset)
{
	TArray<FString> OutList;
	float height = 0.0f;
	bool IsInsert = false;
	GetTextBlockSuitableText(Argument, Content, offset, height, IsInsert, OutList);
	float HeightOverride = height/* * LineHeightPercentage.Get()*/;
	if (!InHorizontalBox.IsValid())
	{
		MyScrollBox->AddSlot()
			.HAlign(EHorizontalAlignment(Justification.Get() + 1))
			[CreateHorizontalBox(InHorizontalBox, HeightOverride).ToSharedRef()];
	}

	for (int i = 0; i < OutList.Num(); ++i)
	{
		if (i == 0)
		{
			if (!IsInsert)
			{
				MyScrollBox->AddSlot()
					.HAlign(EHorizontalAlignment(Justification.Get() + 1))
					[CreateHorizontalBox(InHorizontalBox, HeightOverride).ToSharedRef()];
			}

		}
		else
		{
			MyScrollBox->AddSlot()
				.HAlign(EHorizontalAlignment(Justification.Get() + 1))
				[CreateHorizontalBox(InHorizontalBox, HeightOverride).ToSharedRef()];
		}

		InHorizontalBox->AddSlot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				CreateTextBlock(FText::FromString(OutList[i]), Argument).ToSharedRef()
			];
	}
}

TSharedPtr<SImage> SKFTextBlock::AddScrollBoxImage(TSharedPtr<SHorizontalBox>& InHorizontalBox, float& offset, const FVector2D& ImageSize)
{
	if (!InHorizontalBox.IsValid() || (PreferredWidth - offset < ImageSize.X))
	{
		MyScrollBox->AddSlot()
			.HAlign(EHorizontalAlignment(Justification.Get() + 1))
			[CreateHorizontalBox(InHorizontalBox, ImageSize.Y).ToSharedRef()];
	}

	TSharedPtr<SImage> MyImage;
	InHorizontalBox->AddSlot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		[
			SNew(SBox)
			.HeightOverride(ImageSize.Y)
			.WidthOverride(ImageSize.X)
			.HAlign(EHorizontalAlignment::HAlign_Fill)
			.VAlign(EVerticalAlignment::VAlign_Fill)
			[
				SAssignNew(MyImage, SImage)
			]
		];

	offset += ImageSize.X;
	return MyImage;
}

void SKFTextBlock::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{	
	if (FMath::IsNearlyZero(WrapTextAt.Get(0.0f)))
	{
		PreferredWidth = AllottedGeometry.GetLocalSize().X;
	}
	else
	{
		PreferredWidth = WrapTextAt.Get(PreferredWidth);
	}

	if (ContainerWidget)
	{
		bool IsInvalidate = false;
		FVector2D Size = AllottedGeometry.GetLocalSize();
		if (!ContainerWidget->InvalidateData.InvalidateSize.Equals(Size))
		{
			ContainerWidget->InvalidateData.InvalidateSize = Size;
			IsInvalidate = true;
		}

		if (TextType == EKFTextType::Static)
		{
			if (ContainerWidget->InvalidateData.InvalidateFlag)
			{
				ContainerWidget->InvalidateData.InvalidateFlag = false;
				ConstructTextBlock();
			}
		}
		else if (TextType == EKFTextType::Rich)
		{
			if (ContainerWidget->InvalidateData.InvalidateFlag || IsInvalidate)
			{
				ContainerWidget->InvalidateData.InvalidateFlag = false;
				ConstructTextBlock();
			}
		}

		
	}
}

FSlateFontInfo SKFTextBlock::GetFont() const
{
	return Font.IsSet() ? Font.Get() : TextStyle.Font;
}

FSlateColor SKFTextBlock::GetColorAndOpacity() const
{
	return ColorAndOpacity.IsSet() ? ColorAndOpacity.Get() : TextStyle.ColorAndOpacity;
}

FVector2D SKFTextBlock::GetShadowOffset() const
{
	return ShadowOffset.IsSet() ? ShadowOffset.Get() : TextStyle.ShadowOffset;
}

FLinearColor SKFTextBlock::GetShadowColorAndOpacity() const
{
	return ShadowColorAndOpacity.IsSet() ? ShadowColorAndOpacity.Get() : TextStyle.ShadowColorAndOpacity;
}

FLinearColor SKFTextBlock::GetHighlightColor() const
{
	return HighlightColor.IsSet() ? HighlightColor.Get() : TextStyle.HighlightColor;
}

const FSlateBrush* SKFTextBlock::GetHighlightShape() const
{
	return HighlightShape.IsSet() ? HighlightShape.Get() : &TextStyle.HighlightShape;
}

FTextBlockStyle SKFTextBlock::GetComputedTextStyle() const
{
	FTextBlockStyle ComputedStyle = TextStyle;
	ComputedStyle.SetFont(GetFont());
	ComputedStyle.SetColorAndOpacity(GetColorAndOpacity());
	ComputedStyle.SetShadowOffset(GetShadowOffset());
	ComputedStyle.SetShadowColorAndOpacity(GetShadowColorAndOpacity());
	ComputedStyle.SetHighlightColor(GetHighlightColor());
	ComputedStyle.SetHighlightShape(*GetHighlightShape());
	return ComputedStyle;
}