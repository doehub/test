// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KFListView.h"

#include "KFTileView.generated.h"

UENUM(BlueprintType)
enum class EKFTileItemAlignment : uint8
{
	EvenlyDistributed UMETA(DisplayName = "Even"),
	LeftAligned UMETA(DisplayName = "Left"),
	RightAligned UMETA(DisplayName = "Right"),
	CenterAligned UMETA(DisplayName = "Center"),
	Fill,
};

static FORCEINLINE EListItemAlignment AsListItemAlignment(EKFTileItemAlignment Align)
{
	switch (Align)
	{
	default:
	case EKFTileItemAlignment::EvenlyDistributed: return EListItemAlignment::EvenlyDistributed;
	case EKFTileItemAlignment::LeftAligned: return EListItemAlignment::LeftAligned;
	case EKFTileItemAlignment::RightAligned: return EListItemAlignment::RightAligned;
	case EKFTileItemAlignment::CenterAligned: return EListItemAlignment::CenterAligned;
	case EKFTileItemAlignment::Fill: return EListItemAlignment::Fill;
	}
}

UCLASS()
class KINGDOM_API UKFTileView : public UKFListView
{
	GENERATED_BODY()

public:
	UKFTileView();

protected:
	virtual TSharedRef<class SWidget> RebuildWidget() override;

	float GetTotalItemWidth() const;

	UPROPERTY(EditInstanceOnly, Category = Content, meta = (DesignerRebuild = true))
	EKFTileItemAlignment ItemAlignment;

	UPROPERTY(EditInstanceOnly, Category = Content, meta = (DesignerRebuild = true))
	float ItemWidth;
};