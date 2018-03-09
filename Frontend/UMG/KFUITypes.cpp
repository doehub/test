// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "KFUITypes.h"
#include "Brushes/SlateNoResource.h"
#include "Styling/StyleDefaults.h"
#include "Styling/CoreStyle.h"
#include "Runtime/SlateCore/Public/SlateCore.h"
#include "Kingdom/UI/Frontend/Tool/FrontendAsset.h"

//////////////////////////////////////////////////////////////////////////
FKFButtonFocusStyle::FKFButtonFocusStyle()
	: Normal()
	, Hovered()
	, Pressed()
	, Focused()
	, NormalPadding()
	, PressedPadding()
{
	Disabled = FSlateNoResource();
}

FKFButtonFocusStyle::FKFButtonFocusStyle(const FButtonStyle& InStyle)
	: Normal(InStyle.Normal)
	, Hovered(InStyle.Hovered)
	, Pressed(InStyle.Pressed)
	, Focused(InStyle.Hovered)
	, Disabled(InStyle.Disabled)
	, NormalPadding(InStyle.NormalPadding)
	, PressedPadding(InStyle.PressedPadding)
	, PressedSlateSound(InStyle.PressedSlateSound)
	, HoveredSlateSound(InStyle.HoveredSlateSound)
	, FocusedSlateSound(InStyle.PressedSlateSound)
	, PressedSound_DEPRECATED(InStyle.PressedSound_DEPRECATED)
	, HoveredSound_DEPRECATED(InStyle.HoveredSound_DEPRECATED)
{
	
}

const FName FKFButtonFocusStyle::TypeName(TEXT("FKFButtonFocusStyle"));

void FKFButtonFocusStyle::GetResources(TArray< const FSlateBrush* >& OutBrushes) const
{
	OutBrushes.Add(&Normal);
	OutBrushes.Add(&Hovered);
	OutBrushes.Add(&Pressed);
	OutBrushes.Add(&Focused);
	OutBrushes.Add(&Disabled);
}

const FKFButtonFocusStyle& FKFButtonFocusStyle::GetDefault()
{
	static FKFButtonFocusStyle Default;
	return Default;
}

void FKFButtonFocusStyle::PostSerialize(const FArchive& Ar)
{
	if (Ar.IsLoading() && Ar.UE4Ver() < VER_UE4_FSLATESOUND_CONVERSION)
	{
		// eg, SoundCue'/Game/QA_Assets/Sound/TEST_Music_Ambient.TEST_Music_Ambient'
		PressedSlateSound = FSlateSound::FromName_DEPRECATED(PressedSound_DEPRECATED);
		HoveredSlateSound = FSlateSound::FromName_DEPRECATED(HoveredSound_DEPRECATED);
	}
}

void FKFButtonFocusStyle::GetFButtonStyle(OUT FButtonStyle& OutStyle)
{
	OutStyle.Normal = Normal;
	OutStyle.Hovered = Hovered;
	OutStyle.Disabled = Disabled;
	OutStyle.Pressed = Pressed;

	OutStyle.NormalPadding = NormalPadding;
	OutStyle.PressedPadding = PressedPadding;

	OutStyle.PressedSlateSound = PressedSlateSound;
	OutStyle.HoveredSlateSound = HoveredSlateSound;

	OutStyle.PressedSound_DEPRECATED = PressedSound_DEPRECATED;
	OutStyle.HoveredSound_DEPRECATED = HoveredSound_DEPRECATED;
}

//////////////////////////////////////////////////////////////////////////
FKFButtonStyle::FKFButtonStyle()
{
	
}

const FName FKFButtonStyle::TypeName(TEXT("FKFButtonStyle"));

void FKFButtonStyle::GetResources(TArray< const FSlateBrush* >& OutBrushes) const
{
	ButtonStyle.GetResources(OutBrushes);
	TextBlockStyle.GetResources(OutBrushes);
}

const FKFButtonStyle& FKFButtonStyle::GetDefault()
{
	//ReturnWidgetStyleGetDefault(FKFButtonStyle, "KFButton")
	static FKFButtonStyle Default;
	return Default;
}

void FKFButtonStyle::PostSerialize(const FArchive& Ar)
{
	ButtonStyle.PostSerialize(Ar);
}


//////////////////////////////////////////////////////////////////////////
void KFWidgetStyleMgr::RegisterKingdomFrontendWidgetStyle()
{	
	FKFButtonStyle KFButtonStyle;
	KFButtonStyle.TextBlockStyle = FCoreStyle::Get().GetWidgetStyle< FTextBlockStyle >("NormalText");
	KFButtonStyle.ButtonStyle = FKFButtonFocusStyle(FCoreStyle::Get().GetWidgetStyle<FButtonStyle>("Button"));
	KFButtonStyle.TextBlockStyle.SetColorAndOpacity(FLinearColor::White);
	KFButtonStyle.TextBlockStyle.SetShadowColorAndOpacity(FLinearColor::Transparent);
	((FSlateStyleSet*)&FCoreStyle::Get())->Set(TEXT("KFButton"), KFButtonStyle);

	FScrollBoxStyle KFScrollBoxStyle = FCoreStyle::Get().GetWidgetStyle<FScrollBoxStyle>("ScrollBox");
	KFScrollBoxStyle.SetBottomShadowBrush(FSlateNoResource());
	KFScrollBoxStyle.SetLeftShadowBrush(FSlateNoResource());
	KFScrollBoxStyle.SetRightShadowBrush(FSlateNoResource());
	KFScrollBoxStyle.SetTopShadowBrush(FSlateNoResource());
	((FSlateStyleSet*)&FCoreStyle::Get())->Set(TEXT("KFScrollBox"), KFScrollBoxStyle);
}

FScrollBarStyle& KFWidgetStyleMgr::GetDefaultScrollBarStyle()
{
	static FScrollBarStyle Style = FCoreStyle::Get().GetWidgetStyle<FScrollBarStyle>("Scrollbar");
	return Style;
}

//////////////////////////////////////////////////////////////////////////
void FFrontendSlateStyle::ResetToDefault()
{
	SetStyle(FFrontendSlateStyle::Create());
}

void FFrontendSlateStyle::SetStyle(const TSharedRef< class ISlateStyle >& NewStyle)
{
	if (Instance.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*Instance.Get());
	}

	Instance = NewStyle;

	if (Instance.IsValid())
	{
		FSlateStyleRegistry::RegisterSlateStyle(*Instance.Get());
	}
	else
	{
		ResetToDefault();
	}
}

TSharedRef<class ISlateStyle> FFrontendSlateStyle::Create(const FName& InStyleSetName /*= "FrontendStyle"*/)
{
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet(InStyleSetName));
	Style->SetContentRoot(FrontendAsset::GetInstance().GetFrontendContentDir());
	SlateBrushResources.Empty();

	return Style;
}

const FSlateBrush* FFrontendSlateStyle::GetBrush(const FString& RelativePath)
{	
	TSharedPtr<FSlateStyleSet> Style = StaticCastSharedPtr<FSlateStyleSet>(Instance);
	if (!Style.IsValid())
	{
		return nullptr;
	}

	FString ImagePath = RelativePath;
	FPaths::NormalizeFilename(ImagePath);	
	FName PropertyName = FName(*ImagePath);//FName(*ImagePath.Replace(TEXT("/"), TEXT(".")));

	if (SlateBrushResources.Contains(ImagePath))
	{
		return Style->GetBrush(PropertyName);
	}
	
	FSlateImageBrush* NewBrush = nullptr;
	if (UObject* Image = FrontendAsset::GetInstance().LoadAssetFromPath(ImagePath, UTexture2D::StaticClass()))
	{		
		if (NewBrush = new FSlateImageBrush(Image,  FVector2D(SlateBrushDefs::DefaultImageSize, SlateBrushDefs::DefaultImageSize)))
		{
			Style->Set(PropertyName, NewBrush);
			SlateBrushResources.Add(ImagePath, true);
		}		
	}

	return NewBrush;
}