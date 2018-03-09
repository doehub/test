// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KFTextBlock.h"
#include "UObject/ObjectMacros.h"
#include "Input/Reply.h"
#include "Styling/SlateTypes.h"
#include "Widgets/SWidget.h"
#include "Components/ContentWidget.h"
#include "SKFButton.h"
#include "KFUITypes.h"
#include "KFButton.generated.h"


class SButton;
class USlateWidgetStyleAsset;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFButtonClickedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFButtonPressedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFButtonReleasedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFButtonHoverEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKFButtonFocusedEvent);

/**
* The button is a click-able primitive widget to enable basic interaction, you
* can place any other widget inside a button to make a more complex and
* interesting click-able element in your UI.
*
* * Single Child
* * Clickable
*/

UCLASS(ClassGroup = UI, meta = (Category = "KF UI"))
class KINGDOM_API UKFButton : public UContentWidget
{
	GENERATED_UCLASS_BODY()

public:

	/** The color multiplier for the txt content */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance", meta = (sRGB = "true"))
// 		FSlateColor TextColor;
// 	/** A bindable delegate for the ColorAndOpacity. */
// 	UPROPERTY()
// 		FGetSlateColor TextColorDelegate;

/** The font to render the text with */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Appearance)
// 		FSlateFontInfo Font;


	/** The text to display */
	UPROPERTY(EditAnywhere, Category = Content, meta = (MultiLine = "true"))
		FText Text;
	UPROPERTY()
		FGetText TextDelegate;	

	/** How the text should be aligned with the margin. */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wrapping")
// 		TEnumAsByte<ETextJustify::Type> Justification = ETextJustify::Center;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wrapping")
// 		bool AutoWrapText = true;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wrapping")
// 		float WrapTextAt = 0.0f;

	/** The amount of blank space left around the edges of text area at each size */
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance", meta = ( DisplayName = "Margin"))
// 		FMargin TextMargin;

	/** The amount to scale each lines height by at each size */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance")
		float LineHeightPercentage = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Appearance", meta = (sRGB = "true"))
		FSlateColor BackgroundColor;

public:

	/** Called when the button is clicked */
	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonClickedEvent OnClicked;

	/** Called when the button is pressed */
	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonPressedEvent OnPressed;

	/** Called when the button is released */
	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonReleasedEvent OnReleased;

	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonHoverEvent OnHovered;

	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonHoverEvent OnUnhovered;

	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonFocusedEvent OnFocused;

	UPROPERTY(BlueprintAssignable, Category = "KFButton|Event")
		FOnKFButtonFocusedEvent OnUnFocused;

public:

// 	/** Sets the color multiplier for the button background */
// 	UFUNCTION(BlueprintCallable, Category = "Button|Appearance")
// 		void SetStyle(const UKFButtonStyle* InStyle);

	/*Set text and button's opacity*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Appearance")
		void SetOpacity(float InOpacity);

	UFUNCTION(BlueprintCallable, Category = "KFButton|Appearance")
		float GetOpacity();

	/** Sets the color multiplier for the text content */
	UFUNCTION(BlueprintCallable, Category = "KFButton|Appearance")
		void SetTextColor(FSlateColor InColorAndOpacity);

// 	UFUNCTION(BlueprintCallable, Category = "Button|Appearance")
// 		void SetColorAndOpacity(FLinearColor InColorAndOpacity) { SetTextColor(InColorAndOpacity); };

	UFUNCTION(BlueprintCallable, Category = "KFButton|Appearance")
		void SetBackgroundColor(FSlateColor InBackgroundColor);

	/**
	* Returns true if the user is actively pressing the button.  Do not use this for detecting 'Clicks', use the OnClicked event instead.
	*
	* @return true if the user is actively pressing the button otherwise false.
	*/
	UFUNCTION(BlueprintCallable, Category = "KFButton")
		bool IsPressed() const;

	UFUNCTION(BlueprintCallable, Category = "KFButton")
		bool IsFocused() const;
	/**
	* Gets the widget text
	* @return The widget text
	*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Text", meta = (DisplayName = "GetText (Text)"))
		FText GetText() const;

	/**
	* Directly sets the widget text.
	* Warning: This will wipe any binding created for the Text property!
	* @param InText The text to assign to the widget
	*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Text", meta = (DisplayName = "SetText (Text)"))
		virtual void SetText(FText InText);

	UFUNCTION(BlueprintCallable, Category = "KFButton|Appearance")
		void SetFont(FSlateFontInfo InFontInfo);

	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetWidgetStyle(TSubclassOf<UKFButtonWidgetStyle> InStyle);
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetSlateStyle(const FKFButtonStyle& InStyle);
	//update normal slate brush from the style, call ResetStyle to recover
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetImageFromEvent(const EKFButtonImage InType);
	/*update all event texture, call ResetStyle to recover*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetImageFromTexture(UTexture2D* Texture, bool bMatchSize = false);
	/*update all event material, call ResetStyle to recover*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetImageFromMaterial(UMaterialInterface* Material);
	/*update all event brush, call ResetStyle to recover*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void SetImageFromBrush(const FSlateBrush& Brush);
	/*recover SetImageFromXXX's modified style attr*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void ResetStyle();
	/*update style and cant't recover*/
	UFUNCTION(BlueprintCallable, Category = "KFButton|Style")
		void ApplyStyle();

protected:
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KFButton")
// 		bool UserStyle = false;
// 
// 	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KFButton", meta = (DisplayName = "BP_Style", ExposeOnSpawn = true, EditCondition = "!UserStyle"))
// 		TSubclassOf<UKFButtonWidgetStyle> WidgetStyleClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "KFButton", meta = (DisplayName = "Style", EditCondition = true))
		FKFButtonStyle MyKFButtonStyle;

public:

	//~ Begin UWidget Interface
	virtual void SynchronizeProperties() override;
	//~ End UWidget Interface

	//~ Begin UVisual Interface
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override { return NSLOCTEXT("KF", "KFButton", "KF"); }
#endif

protected:

	// UPanelWidget
	virtual UClass* GetSlotClass() const override;
	virtual void OnSlotAdded(UPanelSlot* Slot) override;
	virtual void OnSlotRemoved(UPanelSlot* Slot) override;
	// End UPanelWidget

protected:
	/** Handle the actual click event from slate and forward it on */
	FReply SlateHandleClicked();
	void SlateHandlePressed();
	void SlateHandleReleased();
	void SlateHandleHovered();
	void SlateHandleUnhovered();
	void SlateHandleFocused();
	void SlateHandleUnFocused();

protected:
	//~ Begin UWidget Interface
	const FKFButtonStyle* GetStyleCDO();

	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	virtual TAttribute<FText> GetDisplayText();

	virtual void OnBindingChanged(const FName& Property);
protected:
	/** Cached pointer to the underlying slate button owned by this UWidget */
	TSharedPtr<SKFButton> MyButton;
	float Opacity;
	FSlateColor TextColor;
	//temporary cache, can quickly restore style, use for images changed frequently
	FKFButtonStyle DefaultStyle;
	bool bHasStyleModified;

 	PROPERTY_BINDING_IMPLEMENTATION(FText, Text);
// 	PROPERTY_BINDING_IMPLEMENTATION(FSlateColor, TextColor);
};
