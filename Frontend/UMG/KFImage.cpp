// Fill out your copyright notice in the Description page of Project Settings.
#include "Kingdom.h"
#include "KFImage.h"
#include "Engine/Texture2D.h"
#include "SKFImage.h"


//LOCTEXT
#define LOCTEXT_NAMESPACE "UMG"

UKFImage::UKFImage(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer)
    , ColorAndOpacity(FLinearColor::White)
    , Duration(0.05f)
    , LoopInterval(0.0f)
    , RowCount(1)
    , ColumnCount(1)
    , FrameCount(1)
{

}

void UKFImage::SetFrameIndex(int32 InFrameIndex)
{
	InitFrameIndex = InFrameIndex;
	if (!MyImage.IsValid())
	{
		return;
	}

	MyImage->SetFrameIndex(InitFrameIndex);
}

void UKFImage::NewAnimation(const FSlateBrush& InBrush, float InDuration, float InLoopInterval, int32 InRowCount, int32 InColumnCount, int32 InInitFrameIndex, int32 InFrameCount, const FMargin& InDesiredItemPadding)
{
	Brush = InBrush;
	Duration = InDuration;
	LoopInterval = InLoopInterval;
	RowCount = InRowCount;
	ColumnCount = InColumnCount;
	InitFrameIndex = InInitFrameIndex;
	FrameCount = InFrameCount;
	DesiredItemPadding = InDesiredItemPadding;

	if (!MyImage.IsValid())
	{
		return;
	}

	StopAnimation(false);
		
	MyImage->SetDuration(Duration);
	MyImage->SetLoopInterval(LoopInterval);
	MyImage->SetColumnCount(ColumnCount);
	MyImage->SetRowCount(RowCount);
	MyImage->SetFrameIndex(InitFrameIndex);
	MyImage->SetCutFrameCount(RowCount*ColumnCount-FrameCount-InInitFrameIndex);
	MyImage->SetImage(&Brush);
}

void UKFImage::PlayAnimation(bool ShouldLoop)
{
    if (!MyImage.IsValid())
    {
        return;
    }

	MyImage->PlayAnimation(ShouldLoop, true);
}

void UKFImage::PauseAnimation()
{
    if (!MyImage.IsValid())
    {
        return;
    }

    MyImage->PauseAnimation();
}

void UKFImage::ResumeAnimation()
{
    if (!MyImage.IsValid())
    {
        return;
    }

    MyImage->ResumeAnimation();
}

void UKFImage::StopAnimation(bool ShouldnotifyAnimationEndEvent)
{
    if (!MyImage.IsValid())
    {
        return;
    }

    MyImage->StopAnimation(ShouldnotifyAnimationEndEvent);
}

bool UKFImage::IsAnimationPlaying()
{
    if (!MyImage.IsValid())
    {
        return false;
    }

    return  MyImage->IsAnimationPlaying();
}

bool UKFImage::IsAnimationPaused()
{
    if (!MyImage.IsValid())
    {
        return false;
    }

    return  MyImage->IsAnimationPaused();
}


void UKFImage::HandleAnimationEndReached()
{
    OnAnimationEndReached.Broadcast();
}

void UKFImage::HandleAnimationStoped()
{
	OnAnimationStoped.Broadcast();
}

TSharedRef<SWidget> UKFImage::RebuildWidget()
{
	MyImage = SNew(SKFImage)
		.OnAnimationEndReached(BIND_UOBJECT_DELEGATE(FAnimationEndDelegate, HandleAnimationEndReached))
		.OnAnimationStoped(BIND_UOBJECT_DELEGATE(FAnimationEndDelegate, HandleAnimationStoped))
		.OnMouseButtonDown(BIND_UOBJECT_DELEGATE(FPointerEventHandler, HandleMouseButtonDown))
		;
    return MyImage.ToSharedRef();
}

void UKFImage::SynchronizeProperties()
{
    UWidget::SynchronizeProperties();

    TAttribute<FSlateColor> ColorAndOpacityBinding = PROPERTY_BINDING(FSlateColor, ColorAndOpacity);
	TAttribute<FSlateBrush> ImageBinding = PROPERTY_BINDING(FSlateBrush, Brush);

    if (MyImage.IsValid())
	{
		NewAnimation(ImageBinding.Get(), Duration, LoopInterval, RowCount, ColumnCount, InitFrameIndex, FrameCount, DesiredItemPadding);
		MyImage->SetColorAndOpacity(ColorAndOpacityBinding);

		if (bAutoPlay)
		{
			MyImage->PlayAnimation(true, true);
		}
		else
		{
			MyImage->StopAnimation(false);
		}
    }
}



void UKFImage::ReleaseSlateResources(bool bReleaseChildren)
{
    Super::ReleaseSlateResources(bReleaseChildren);

    MyImage.Reset();
}

#if WITH_EDITOR



const FText UKFImage::GetPaletteCategory()
{
    return NSLOCTEXT("KF", "KFImage", "KF");
}
#endif

#undef LOCTEXT_NAMESPACE


void UKFImage::SetColorAndOpacity(FLinearColor InColorAndOpacity)
{
	ColorAndOpacity = InColorAndOpacity;
	if (MyImage.IsValid())
	{
		MyImage->SetColorAndOpacity(ColorAndOpacity);
	}
}

void UKFImage::SetOpacity(float InOpacity)
{
	ColorAndOpacity.A = InOpacity;
	if (MyImage.IsValid())
	{
		MyImage->SetColorAndOpacity(ColorAndOpacity);
	}
}

void UKFImage::SetBrush(const FSlateBrush& InBrush)
{
	SetBrushFromFrame(InBrush, 1, 1, 0, FMargin());
}

void UKFImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize)
{
	FSlateBrush NewBrush;
	NewBrush.SetResourceObject(Texture);

	if (Texture) // Since this texture is used as UI, don't allow it affected by budget.
	{
		Texture->bIgnoreStreamingMipBias = true;
	}

	if (bMatchSize && Texture)
	{
		NewBrush.ImageSize.X = Texture->GetSizeX();
		NewBrush.ImageSize.Y = Texture->GetSizeY();
	}

	SetBrush(NewBrush);
}

void UKFImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize)
{
	FSlateBrush NewBrush;
	NewBrush.SetResourceObject(Texture);

	if (bMatchSize && Texture)
	{
		NewBrush.ImageSize.X = Texture->SizeX;
		NewBrush.ImageSize.Y = Texture->SizeY;
	}

	SetBrush(NewBrush);
}

void UKFImage::SetBrushFromMaterial(UMaterialInterface* Material)
{
	FSlateBrush NewBrush;
	NewBrush.SetResourceObject(Material);

	//TODO UMG Check if the material can be used with the UI

	SetBrush(NewBrush);
}

void UKFImage::SetBrushFromFrame(FSlateBrush InBrush, int32 InRowCount, int32 InColumnCount, int32 InFrameIndex, const FMargin InDesiredItemPadding)
{
	NewAnimation(InBrush, 0.0f, 0.0f, InRowCount, InColumnCount, InFrameIndex, 1, InDesiredItemPadding);
}

UMaterialInstanceDynamic* UKFImage::GetDynamicMaterial()
{
	UMaterialInterface* Material = NULL;

	UObject* Resource = Brush.GetResourceObject();
	Material = Cast<UMaterialInterface>(Resource);

	if (Material)
	{
		UMaterialInstanceDynamic* DynamicMaterial = Cast<UMaterialInstanceDynamic>(Material);

		if (!DynamicMaterial)
		{
			DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
			Brush.SetResourceObject(DynamicMaterial);

			if (MyImage.IsValid())
			{
				MyImage->SetImage(&Brush);
			}
		}

		return DynamicMaterial;
	}

	//TODO UMG can we do something for textures?  General purpose dynamic material for them?

	return NULL;
}

FReply UKFImage::HandleMouseButtonDown(const FGeometry& Geometry, const FPointerEvent& MouseEvent)
{
	if (OnMouseButtonDownEvent.IsBound())
	{
		return OnMouseButtonDownEvent.Execute(Geometry, MouseEvent).NativeReply;
	}

	return FReply::Unhandled();
}