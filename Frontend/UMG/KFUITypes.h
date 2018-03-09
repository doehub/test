// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "KFUITypes.generated.h"
/**
 * 
 */

UENUM(BlueprintType)
enum class EKFButtonImage : uint8
{
	Normal,
	Hovered,
	Pressed,
	Focused,
	Disabled,
};

UENUM(BlueprintType)
enum class EKFTextType : uint8
{
	Static,
	Rich,
};

struct FKFSlateVisibility2Visibility
{
	FKFSlateVisibility2Visibility(ESlateVisibility NewVisibility)
	{
		switch (NewVisibility)
		{
		case ESlateVisibility::Collapsed:				ToVisibility = EVisibility::Collapsed; break;
		case ESlateVisibility::Hidden:					ToVisibility = EVisibility::Hidden; break;
		case ESlateVisibility::HitTestInvisible:		ToVisibility = EVisibility::HitTestInvisible; break;
		case ESlateVisibility::SelfHitTestInvisible:	ToVisibility = EVisibility::SelfHitTestInvisible; break;
		case ESlateVisibility::Visible:					ToVisibility = EVisibility::Visible; break;
		}
	}

	const EVisibility& operator()()const
	{
		return ToVisibility;
	}

	EVisibility ToVisibility;
};

USTRUCT(BlueprintType)
struct KINGDOM_API FKFButtonFocusStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FKFButtonFocusStyle();
	FKFButtonFocusStyle(const FButtonStyle& InStyle);
	virtual ~FKFButtonFocusStyle() {};

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FKFButtonFocusStyle& GetDefault();

	/** Button appearance when the button is not hovered or pressed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FSlateBrush Normal;
	FKFButtonFocusStyle& SetNormal(const FSlateBrush& InNormal) { Normal = InNormal; return *this; }

	/** Button appearance when hovered */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FSlateBrush Hovered;
	FKFButtonFocusStyle& SetHovered(const FSlateBrush& InHovered) { Hovered = InHovered; return *this; }

	/** Button appearance when pressed */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FSlateBrush Pressed;
	FKFButtonFocusStyle& SetPressed(const FSlateBrush& InPressed) { Pressed = InPressed; return *this; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FSlateBrush Focused;
	FKFButtonFocusStyle& SetFocused(const FSlateBrush& InFocused) { Focused = InFocused; return *this; }

	/** Button appearance when disabled, by default this is set to an invalid resource when that is the case default disabled drawing is used. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FSlateBrush Disabled;
	FKFButtonFocusStyle& SetDisabled(const FSlateBrush& InDisabled) { Disabled = InDisabled; return *this; }

	/**
	* Padding that accounts for the border in the button's background image.
	* When this is applied, the content of the button should appear flush
	* with the button's border. Use this padding when the button is not pressed.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FMargin NormalPadding;
	FKFButtonFocusStyle& SetNormalPadding(const FMargin& InNormalPadding) { NormalPadding = InNormalPadding; return *this; }

	/**
	* Same as NormalPadding but used when the button is pressed. Allows for moving the content to match
	* any "movement" in the button's border image.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance)
		FMargin PressedPadding;
	FKFButtonFocusStyle& SetPressedPadding(const FMargin& InPressedPadding) { PressedPadding = InPressedPadding; return *this; }

	/**
	* The sound the button should play when pressed
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Pressed Sound"))
		FSlateSound PressedSlateSound;
	FKFButtonFocusStyle& SetPressedSound(const FSlateSound& InPressedSound) { PressedSlateSound = InPressedSound; return *this; }

	/**
	* The sound the button should play when initially hovered over
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Hovered Sound"))
		FSlateSound HoveredSlateSound;
	FKFButtonFocusStyle& SetHoveredSound(const FSlateSound& InHoveredSound) { HoveredSlateSound = InHoveredSound; return *this; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sound, meta = (DisplayName = "Focused Sound"))
		FSlateSound FocusedSlateSound;
	FKFButtonFocusStyle& SetFocusedSound(const FSlateSound& InFocusedSound) { FocusedSlateSound = InFocusedSound; return *this; }


	UPROPERTY()
		FName PressedSound_DEPRECATED;
	UPROPERTY()
		FName HoveredSound_DEPRECATED;
	/**
	* Used to upgrade the deprecated FName sound properties into the new-style FSlateSound properties
	*/
	void PostSerialize(const FArchive& Ar);
	void GetFButtonStyle(OUT FButtonStyle& OutStyle);
};

USTRUCT(BlueprintType)
struct KINGDOM_API FKFButtonStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

		FKFButtonStyle();
	virtual ~FKFButtonStyle() {};

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FKFButtonStyle& GetDefault();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance, meta = (ShowOnlyInnerProperties, DisplayName = "Button"))
		FKFButtonFocusStyle ButtonStyle;
	FKFButtonStyle& SetFocusButtonStyle(const FKFButtonFocusStyle& InFocusButtonStyle) { ButtonStyle = InFocusButtonStyle; return *this; }

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Appearance, meta = (ShowOnlyInnerProperties, DisplayName = "TextBlock"))
		FTextBlockStyle TextBlockStyle;
	FKFButtonStyle& SetTextBlockStyle(const FTextBlockStyle& InTextBlockStyle) { TextBlockStyle = InTextBlockStyle; return *this; }
	
	void PostSerialize(const FArchive& Ar);
};

template<>
struct TStructOpsTypeTraits<FKFButtonStyle> : public TStructOpsTypeTraitsBase2<FKFButtonStyle>
{
	enum
	{
		WithPostSerialize = true,
		WithCopy = true,
	};
};

UCLASS(Blueprintable, BlueprintType, hidecategories = Object, MinimalAPI)
class UKFButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category = Appearance, EditAnywhere, BlueprintReadWrite, meta = (ShowOnlyInnerProperties))
		FKFButtonStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast<const struct FSlateWidgetStyle*>(&WidgetStyle);
	}
};


//////////////////////////////////////////////////////////////////////////
class KINGDOM_API FFrontendSlateStyle
{
public:
	static FFrontendSlateStyle& Get() { static FFrontendSlateStyle ins; return ins; };
	const FSlateBrush* GetBrush(const FString& RelativePath);
private:	
	FFrontendSlateStyle() { ResetToDefault(); };
	void ResetToDefault();
	void SetStyle(const TSharedRef< class ISlateStyle >& NewStyle);
	TSharedRef<class ISlateStyle> Create(const FName& InStyleSetName = "FrontendSlateStyle");
	
private:

	/** Singleton instances of this style. */
	TSharedPtr< class ISlateStyle > Instance;
	TMap<FString, bool> SlateBrushResources;
};

//////////////////////////////////////////////////////////////////////////
class KINGDOM_API KFWidgetStyleMgr
{
public:
	static KFWidgetStyleMgr& Get() { static KFWidgetStyleMgr ins; return ins; };

	template< typename WidgetStyleType >
	const WidgetStyleType& GetWidgetStyle(FName PropertyName, const ANSICHAR* Specifier = nullptr) const
	{
		return FCoreStyle::Get().GetWidgetStyle<WidgetStyleType>(PropertyName, Specifier);
	}

public:
	FScrollBarStyle& GetDefaultScrollBarStyle();
private:
	KFWidgetStyleMgr() { RegisterKingdomFrontendWidgetStyle();  };
	void RegisterKingdomFrontendWidgetStyle();

};
