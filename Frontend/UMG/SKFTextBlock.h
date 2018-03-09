// Fill out your copyright notice in the Description page of Project Settings.
 
#pragma once

#include "CoreMinimal.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Images/SImage.h"
#include "Components/HorizontalBox.h"
#include "KFUITypes.h"
#include "Framework/Text/RichTextMarkupProcessing.h"
/**
 * A simple static text widget
 */
class KINGDOM_API SKFTextBlock : public SCompoundWidget
{

public:

	SLATE_BEGIN_ARGS(SKFTextBlock)
		: _Text()
		, _TextStyle( &FCoreStyle::Get().GetWidgetStyle<FTextBlockStyle>( "NormalText" ) )
		, _Font()
		, _ColorAndOpacity()
		, _ShadowOffset()
		, _ShadowColorAndOpacity()
		, _HighlightColor()
		, _HighlightShape()
		, _HighlightText()
		, _WrapTextAt(0.0f)
		, _AutoWrapText(false)
		, _WrappingPolicy(ETextWrappingPolicy::DefaultWrapping)
		, _Margin()
		, _LineHeightPercentage(1.0f)
		, _Justification(ETextJustify::Left)
		, _MinDesiredWidth(0.0f)
		, _TextShapingMethod()
		, _TextFlowDirection()
		, _LineBreakPolicy()
		, _ScrollBarStyle(&FCoreStyle::Get().GetWidgetStyle<FScrollBarStyle>("Scrollbar"))
		, _TextType(EKFTextType::Static)
		, _ScrollBarVisibility(EVisibility::Collapsed)
		, _ScrollBarAlwaysVisible(false)
		, _ScrollBarThickness(FVector2D(5, 5))
		, _Orientation(Orient_Vertical)
		{
			_Clipping = EWidgetClipping::OnDemand;
		}

		SLATE_ATTRIBUTE(EKFTextType, TextType)
		/** The text displayed in this text block */
		SLATE_ATTRIBUTE( FText, Text )

		/** Pointer to a style of the text block, which dictates the font, color, and shadow options. */
		SLATE_STYLE_ARGUMENT( FTextBlockStyle, TextStyle )

		/** Sets the font used to draw the text */
		SLATE_ATTRIBUTE( FSlateFontInfo, Font )

		/** Text color and opacity */
		SLATE_ATTRIBUTE( FSlateColor, ColorAndOpacity )

		/** Drop shadow offset in pixels */
		SLATE_ATTRIBUTE( FVector2D, ShadowOffset )

		/** Shadow color and opacity */
		SLATE_ATTRIBUTE( FLinearColor, ShadowColorAndOpacity )

		/** The color used to highlight the specified text */
		SLATE_ATTRIBUTE( FLinearColor, HighlightColor )

		/** The brush used to highlight the specified text*/
		SLATE_ATTRIBUTE( const FSlateBrush*, HighlightShape )

		/** Highlight this text in the text block */
		SLATE_ATTRIBUTE( FText, HighlightText )

		/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */
		SLATE_ATTRIBUTE( float, WrapTextAt )

		/** Whether to wrap text automatically based on the widget's computed horizontal space.  IMPORTANT: Using automatic wrapping can result
		    in visual artifacts, as the the wrapped size will computed be at least one frame late!  Consider using WrapTextAt instead.  The initial 
			desired size will not be clamped.  This works best in cases where the text block's size is not affecting other widget's layout. */
		SLATE_ATTRIBUTE( bool, AutoWrapText )

		/** The wrapping policy to use */
		SLATE_ATTRIBUTE( ETextWrappingPolicy, WrappingPolicy )

		/** The amount of blank space left around the edges of text area. */
		SLATE_ATTRIBUTE( FMargin, Margin )

		/** The amount to scale each lines height by. */
		SLATE_ATTRIBUTE( float, LineHeightPercentage )

		/** How the text should be aligned with the margin. */
		SLATE_ATTRIBUTE( ETextJustify::Type, Justification )

		/** Minimum width that a text block should be */
		SLATE_ATTRIBUTE( float, MinDesiredWidth )

		/** Which text shaping method should we use? (unset to use the default returned by GetDefaultTextShapingMethod) */
		SLATE_ARGUMENT( TOptional<ETextShapingMethod>, TextShapingMethod )
		
		/** Which text flow direction should we use? (unset to use the default returned by GetDefaultTextFlowDirection) */
		SLATE_ARGUMENT( TOptional<ETextFlowDirection>, TextFlowDirection )

		/** The iterator to use to detect appropriate soft-wrapping points for lines (or null to use the default) */
		SLATE_ARGUMENT( TSharedPtr<IBreakIterator>, LineBreakPolicy )

		/** Called when this text is double clicked */
		SLATE_EVENT( FOnClicked, OnDoubleClicked )

		SLATE_STYLE_ARGUMENT(FScrollBarStyle, ScrollBarStyle)
		SLATE_ARGUMENT(TSharedPtr<SScrollBar>, ExternalScrollbar)
		SLATE_ARGUMENT(EVisibility, ScrollBarVisibility)
		SLATE_ARGUMENT(bool, ScrollBarAlwaysVisible)
		SLATE_ARGUMENT(FVector2D, ScrollBarThickness)
		SLATE_ARGUMENT(EOrientation, Orientation)

		SLATE_ARGUMENT(class UKFTextBlock*, ContainerWidget)
	SLATE_END_ARGS()

	/** Constructor */
	SKFTextBlock();

	/** Destructor */
	~SKFTextBlock();

	/**
	 * Construct this widget
	 *
	 * @param	InArgs	The declaration data for this widget
	 */
	void Construct( const FArguments& InArgs );

	/**
	 * Gets the text assigned to this text block
	 *
	 * @return	This text block's text string
	 */

	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override; 
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

public:
	//TextBlock
	void SetFont(const TAttribute< FSlateFontInfo >& InFont);

	const FText& GetText() const { return MyTextBlock->GetText(); }

	void SetText(const TAttribute< FString >& InText);
	void SetText(const FString& InText);
	void SetText(const TAttribute< FText >& InText);
	void SetText(const FText& InText);
	void AppendText(const FText& InText);

	void SetColorAndOpacity(const TAttribute<FSlateColor>& InColorAndOpacity);
	/** See TextStyle argument */
	void SetTextStyle(const FTextBlockStyle* InTextStyle);
	/** See TextShapingMethod attribute */
	void SetTextShapingMethod(const TOptional<ETextShapingMethod>& InTextShapingMethod);
	/** See TextFlowDirection attribute */
	void SetTextFlowDirection(const TOptional<ETextFlowDirection>& InTextFlowDirection);
	/** See WrapTextAt attribute */
	void SetWrapTextAt(const TAttribute<float>& InWrapTextAt);
	/** See AutoWrapText attribute */
	void SetAutoWrapText(const TAttribute<bool>& InAutoWrapText);
	/** Set WrappingPolicy attribute */
	void SetWrappingPolicy(const TAttribute<ETextWrappingPolicy>& InWrappingPolicy);
	/** See ShadowOffset attribute */
	void SetShadowOffset(const TAttribute<FVector2D>& InShadowOffset);
	/** See ShadowColorAndOpacity attribute */
	void SetShadowColorAndOpacity(const TAttribute<FLinearColor>& InShadowColorAndOpacity);
	/** See MinDesiredWidth attribute */
	void SetMinDesiredWidth(const TAttribute<float>& InMinDesiredWidth);
	/** See LineHeightPercentage attribute */
	void SetLineHeightPercentage(const TAttribute<float>& InLineHeightPercentage);
	/** See Margin attribute */
	void SetMargin(const TAttribute<FMargin>& InMargin);
	/** See Justification attribute */
	void SetJustification(const TAttribute<ETextJustify::Type>& InJustification);

	void SetTextType(const EKFTextType type) { TextType = type; };
	void InvalidateLayout();	

private:
	FTextBlockStyle GetComputedTextStyle() const;

	/** Gets the current foreground color */
	FSlateColor GetColorAndOpacity() const;

	/** Gets the current font */
	FSlateFontInfo GetFont() const;

	/** Gets the current shadow offset */
	FVector2D GetShadowOffset() const;

	/** Gets the current shadow color and opacity */
	FLinearColor GetShadowColorAndOpacity() const;

	/** Gets the current highlight color */
	FLinearColor GetHighlightColor() const;

	/** Gets the current highlight shape */
	const FSlateBrush* GetHighlightShape() const;
public:
	void SetOrientation(EOrientation NewOrientation);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);

	void SetScrollOffset(float NewScrollOffset);
	float GetScrollOffset() const;
	void ScrollToStart();
	void ScrollToEnd();
private:	
	void ConstructTextBlock();
	TSharedPtr<SScrollBox> CreateScrollBox();
	TSharedPtr<STextBlock> CreateTextBlock(const FText& InText, const FArguments& Default);
	TSharedPtr<SWidget> CreateHorizontalBox(TSharedPtr<SHorizontalBox>& InHorizontalBox, float height);	

	void ParseRich(const FText& InText, TSharedPtr<SHorizontalBox>& InHorizontalBox, float& offset);
	void GetUserArguments(FArguments& OutArgument);
	void Split(const FString& InStr, const FString& Key, TArray<FString>& OutList);
	void GetTextBlockSuitableText(const FArguments& InArgs,  const FString& InText, float& offset, float& height, bool& IsInsert, TArray<FString>& OutList);
	void AddScrollBoxText(TSharedPtr<SHorizontalBox>& InHorizontalBox, const FArguments& Argument, const FString& Content, float& offset);
	TSharedPtr<SImage> AddScrollBoxImage(TSharedPtr<SHorizontalBox>& InHorizontalBox, float& offset, const FVector2D& ImageSize);
protected:
	/** The text displayed in this text block */
	TAttribute< FText > BoundText;

	/** Default style used by the TextLayout */
	FTextBlockStyle TextStyle;

	/** Sets the font used to draw the text */
	TAttribute< FSlateFontInfo > Font;

	/** Text color and opacity */
	TAttribute<FSlateColor> ColorAndOpacity;

	/** Drop shadow offset in pixels */
	TAttribute< FVector2D > ShadowOffset;

	/** Shadow color and opacity */
	TAttribute<FLinearColor> ShadowColorAndOpacity;

	TAttribute<FLinearColor> HighlightColor;

	TAttribute< const FSlateBrush* > HighlightShape;

	/** Highlight this text in the textblock */
	TAttribute<FText> HighlightText;

	/** Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs. */
	TAttribute<float> WrapTextAt;

	/** True if we're wrapping text automatically based on the computed horizontal space for this widget */
	TAttribute<bool> AutoWrapText;

	/** The wrapping policy we're using */
	TAttribute<ETextWrappingPolicy> WrappingPolicy;

	/** The amount of blank space left around the edges of text area. */
	TAttribute< FMargin > Margin;

	/** The amount to scale each lines height by. */
	TAttribute< ETextJustify::Type > Justification;

	/** How the text should be aligned with the margin. */
	TAttribute< float > LineHeightPercentage;

	/** Prevents the text block from being smaller than desired in certain cases (e.g. when it is empty) */
	TAttribute<float> MinDesiredWidth;

	/** The delegate to execute when this text is double clicked */
	FOnClicked OnDoubleClicked;

protected:
	FScrollBoxStyle ScrollBoxStyle;
	const FScrollBarStyle* ScrollBarStyle;
	TSharedPtr<SScrollBar> ExternalScrollbar;
	EVisibility ScrollBarVisibility;
	bool ScrollBarAlwaysVisible;
	FVector2D ScrollBarThickness;
	EOrientation Orientation;	
protected:
	TSharedPtr<SScrollBox> MyScrollBox;
	TSharedPtr<STextBlock> MyTextBlock;	
	TSharedPtr<SHorizontalBox> MyHorizontalBox;
	TUniquePtr< FTextBlockLayout > TextLayoutCache;

	EKFTextType TextType;
	float ScrollBoxHOffset;
	float PreferredWidth;
	class UKFTextBlock* ContainerWidget;
};
