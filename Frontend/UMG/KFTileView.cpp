// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Kingdom.h"
#include "KFTileView.h"
#include "Widgets/Views/STileView.h"

UKFTileView::UKFTileView()
	: ItemAlignment(EKFTileItemAlignment::EvenlyDistributed)
	, ItemWidth(128.f)
{
}

TSharedRef<SWidget> UKFTileView::RebuildWidget()
{
	if (!IsDesignTime())
	{
		UClass* ItemClass = ListItemClass != nullptr ? *ListItemClass : UUserWidget::StaticClass();
		WidgetFactory = TWidgetFactory<UUserWidget>(
			ItemClass,
			[this]() -> UGameInstance*
		{
			return GetWorld()->GetGameInstance();
		});

		WidgetFactory.PreConstruct(NumPreAllocatedEntries);
	}

	TSharedPtr<SScrollBar> Scrollbar = SNew(SScrollBar)
		.Style(&ScrollBarStyle)
		.Thickness(ScrollBarThickness);

	MyListView = SNew(STileView<UObject*>)
		.HandleGamepadEvents(false)
		.SelectionMode(SelectionMode)
		.ListItemsSource(&ActiveItems)
		.ClearSelectionOnClick(bClearSelectionOnClick)
		.ItemWidth(GetTotalItemWidth())
		.ItemHeight(GetTotalItemHeight())
		.ConsumeMouseWheel(ConsumeMouseWheel)
		.ExternalScrollbar(Scrollbar)
		.ScrollbarVisibility(FKFSlateVisibility2Visibility(ScrollbarVisibility)())
		.ItemAlignment(AsListItemAlignment(ItemAlignment))
		.OnGenerateTile_UObject(this, &ThisClass::HandleGenerateRow)
		.OnMouseButtonClick_UObject(this, &ThisClass::HandleItemClicked)
		.OnSelectionChanged_UObject(this, &ThisClass::HandleSelectionChanged)
		.OnTileReleased_UObject(this, &ThisClass::HandleRowReleased);

	TSharedPtr<SHorizontalBox> HorizontalBox = SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.FillWidth(1)
		[
			MyListView.ToSharedRef()
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SBox)
			.WidthOverride(FOptionalSize(ScrollBarThickness.X))
		[
			Scrollbar.ToSharedRef()
		]
		];

	return CreateDesignerOutline(HorizontalBox.ToSharedRef());
}

float UKFTileView::GetTotalItemWidth() const
{
	return ItemWidth + DesiredItemPadding.Left + DesiredItemPadding.Right;
}
