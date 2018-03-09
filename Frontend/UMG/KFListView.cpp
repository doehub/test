// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Kingdom.h"
#include "KFListView.h"

#define LOCTEXT_NAMESPACE "UMG"

namespace ListViewText
{
	static const FText skFailedToGenerate =
	    NSLOCTEXT( "KF.ListView", "FailedToGenerate",
	               "The widget you've provided doesn't implement the List Item interface or your data is invalid." );
}

UKFListView::UKFListView()
	: ItemHeight(128.f)
	, ListItemClass(nullptr)
	, SelectionMode(ESelectionMode::Single)
	, ConsumeMouseWheel(EConsumeMouseWheel::WhenScrollingPossible)
	, bClearSelectionOnClick(false)
	, NumPreAllocatedEntries(1)
	, ScrollBarStyle(FCoreStyle::Get().GetWidgetStyle<FScrollBarStyle>("Scrollbar"))
	, ScrollBarThickness(12, 12)
{
	
}

TSharedRef<SWidget> UKFListView::RebuildWidget()
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

	MyListView = SNew(SListView<UObject*>)
		.HandleGamepadEvents(false)
		.SelectionMode(SelectionMode)
		.ListItemsSource(&ActiveItems)
		.ClearSelectionOnClick(bClearSelectionOnClick)
		.ItemHeight(GetTotalItemHeight())
		.ConsumeMouseWheel(ConsumeMouseWheel)
		.ExternalScrollbar(Scrollbar)
		.ScrollbarVisibility(FKFSlateVisibility2Visibility(ScrollbarVisibility)())
		.OnGenerateRow_UObject(this, &ThisClass::HandleGenerateRow)
		.OnMouseButtonClick_UObject(this, &ThisClass::HandleItemClicked)
		.OnSelectionChanged_UObject(this, &ThisClass::HandleSelectionChanged)
		.OnRowReleased_UObject(this, &ThisClass::HandleRowReleased);

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

void UKFListView::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	Clear();
	MyListView.Reset();
	WidgetFactory.Reset(bReleaseChildren);
}

void UKFListView::BeginDestroy()
{
	Super::BeginDestroy();

	if (MyListView.IsValid())
	{
		MyListView.Reset();
	}
}

void UKFListView::SetItemCount(int32 Count)
{
	for (int n = ActiveItems.Num(); n < Count; ++n)
	{
		ActiveItems.Add(NewObject<UTexture2D>());
	}

	ActiveItems.SetNum(Count);

	if (MyListView.IsValid())
	{
		MyListView->RequestListRefresh();
	}
}

int32 UKFListView::GetItemCount() const
{
	return ActiveItems.Num();
}

UObject* UKFListView::GetItemAt(int32 Index) const
{
	return ActiveItems.Num() > Index ? ActiveItems[Index] : nullptr;
}

int32 UKFListView::GetIndexFromItem(UObject* Item ) const
{
	for ( int32 ItemIdx = 0; ItemIdx < ActiveItems.Num(); ++ItemIdx )
	{
		if ( Item == ActiveItems[ItemIdx])
		{
			return ItemIdx;
		}
	}

	return INDEX_NONE;
}

UUserWidget* UKFListView::GetWidgetFromItem(UObject* Item) const
{
	if (MyListView.IsValid())
	{
		TSharedPtr<ITableRow> TableRow = MyListView->WidgetFromItem(Item);
		TSharedPtr<SObjectTableRow<UObject*>> ObjTableRow = StaticCastSharedPtr<SObjectTableRow<UObject*>>(TableRow);
		if(ObjTableRow.IsValid())
		{
			return ObjTableRow->GetWidgetObject();
		}
	}

	return nullptr;
}

UUserWidget* UKFListView::GetWidgetFromIndex(int32 Index)
{
	if (UObject* Obj = GetItemAt(Index))
	{
		return GetWidgetFromItem(Obj);
	}

	return nullptr;
}

void UKFListView::SetItemHeight(float NewHeight)
{
	ItemHeight = NewHeight;
	if ( MyListView.IsValid() )
	{
		MyListView->SetItemHeight( GetTotalItemHeight() );
	}
}

void UKFListView::SetDesiredItemPadding(const FMargin& DesiredPadding)
{
	DesiredItemPadding = DesiredPadding;
	
	if (MyListView.IsValid())
	{
		MyListView->RequestListRefresh();
	}
}

int32 UKFListView::GetNumItemsSelected() const
{
	return MyListView.IsValid() ? MyListView->GetNumItemsSelected() : 0;
}

int32 UKFListView::GetSelectedIndex() const
{
	if (MyListView.IsValid())
	{
		TArray<UObject*> SelectedItems = MyListView->GetSelectedItems();
		UObject* Obj = SelectedItems.Num() > 0 ? SelectedItems[0] : nullptr;
		if (IsValid(Obj))
		{
			return GetIndexFromItem(Obj);
		}
	}

	return INDEX_NONE;
}

bool UKFListView::GetSelectedIndexs(TArray<int32>& OutIndexs) const
{
	TArray<UObject*> Items;
	if (GetSelectedItems(Items))
	{
		for (auto item : Items)
		{
			OutIndexs.Add(GetIndexFromItem(item));
		}
		return true;
	}	

	return false;
}

bool UKFListView::GetSelectedItems(TArray<UObject*>& OutItems) const
{
	if (MyListView.IsValid())
	{
		OutItems = MyListView->GetSelectedItems();
		return true;
	}

	return false;
}

bool UKFListView::IsItemVisible(int32 Index) const
{
	if (UObject* obj = GetItemAt(Index))
	{
		return IsItemVisible(obj);
	}

	return false;
}

bool UKFListView::IsItemVisible(UObject* Item) const
{
	return MyListView.IsValid() ? MyListView->IsItemVisible(Item) : false;
}

void UKFListView::ScrollIntoView(UObject* Item )
{
	if ( MyListView.IsValid() )
	{
		MyListView->RequestScrollIntoView( Item );
	}
}

void UKFListView::ScrollIntoView(int32 Index)
{
	if (UObject* Obj = GetItemAt(Index))
	{
		ScrollIntoView(Obj);
	}
}

void UKFListView::ScrollIntoView( const UObject* Item )
{
	ScrollIntoView(const_cast<UObject*>(Item));
}

bool UKFListView::SetSelectedItem(int32 Index, bool bWaitIfPendingRefresh)
{
	if (UObject* Obj = GetItemAt(Index))
	{
		return SetSelectedItem(Obj, bWaitIfPendingRefresh);
	}

	return false;
}

bool UKFListView::SetSelectedItem(UObject* Item, bool bWaitIfPendingRefresh)
{
	if (MyListView.IsValid() && ActiveItems.Contains(Item))
	{
		if (bWaitIfPendingRefresh)
		{
			// Take the slow route to make sure we wait for any pending refresh to complete
			ItemToSelectAfterRefresh = Item;
			SelectItemAfterRefresh();
		}
		else
		{
			// Just go for it
			SetSelectedItemInternal(Item);
		}
		
		return true;
	}

	return false;
}

bool UKFListView::SetSelectedItem(const UObject* Item, bool bWaitIfPendingRefresh)
{
	return SetSelectedItem(const_cast<UObject*>(Item), bWaitIfPendingRefresh);
}

void UKFListView::SetItemSelection(int32 Index, bool bSelected)
{
	if (UObject* Obj = GetItemAt(Index))
	{
		SetItemSelection(Obj, bSelected);
	}
}

void UKFListView::SetItemSelection(UObject* Item, bool bSelected )
{
	if ( MyListView.IsValid() && ActiveItems.Contains( Item ) )
	{
		MyListView->SetItemSelection(Item, bSelected);
	}
}

void UKFListView::ClearSelection()
{
	if ( MyListView.IsValid() )
	{
		MyListView->ClearSelection();
	}
}

void UKFListView::Clear()
{
	ActiveItems.Reset();

	if (MyListView.IsValid())
	{
		MyListView->RequestListRefresh();
	}
}

bool UKFListView::IsRefreshPending() const
{
	return MyListView.IsValid() ? MyListView->IsPendingRefresh() : false;
}

TSharedRef<ITableRow> UKFListView::HandleGenerateRow(UObject* Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	checkf(Item, TEXT("Check 'Items' is a invalid UObject item"));
	UUserWidget* Widget = WidgetFactory.Acquire();
	check(Widget);
	// Make sure we take the widget first BEFORE setting data on it
	// This ensures that the widget has had a chance to construct before we set data on it
	TSharedRef<ITableRow> GeneratedRow = WidgetFactory.TakeAndCacheRow<ObjectRowType>(Widget, OwnerTable);

	if(Widget->Implements<UKFListItem>())
	{
		Widget->SetPadding(DesiredItemPadding);
	}

	return GeneratedRow;
}

void UKFListView::HandleItemClicked(UObject* Item)
{
	int32 Index = GetIndexFromItem(Item);
	if (UUserWidget* Widget = GetWidgetFromItem(Item))
	{
		if (Widget->Implements<UKFListItem>())
		{
			IKFListItem::Execute_OnClicked(Widget);
		}
	}

	OnItemClicked.Broadcast(Index);
}

void UKFListView::HandleSelectionChanged(UObject* Item, ESelectInfo::Type SelectInfo)
{
	const bool bItemSelected = MyListView.IsValid() ? MyListView->Private_IsItemSelected(Item) : false;
	int32 Index = GetIndexFromItem(Item);
	OnItemSelected.Broadcast(Index, bItemSelected);
}

void UKFListView::HandleRowReleased(const TSharedRef<ITableRow>& Row)
{
	// Get the actual UserWidget from the released row
	const TSharedRef<ObjectRowType>& ObjectRow = StaticCastSharedRef<ObjectRowType>(Row);
	UUserWidget* ItemWidget = Cast<UUserWidget>(ObjectRow->GetWidgetObject());
	if (ItemWidget)
	{
		WidgetFactory.Release(ItemWidget);
	}
}

float UKFListView::GetTotalItemHeight() const
{
	return ItemHeight + DesiredItemPadding.Bottom + DesiredItemPadding.Top;
}

void UKFListView::DynamicHandleItemClicked(UObject* Widget)
{
// 	if (Widget && ensure(Widget->Implements<UKFListItem>()))
// 	{
// 		UObject* Data = IKFListItem::Execute_GetData(Widget);
// 
// 		const bool bIsSelected = MyListView->Private_IsItemSelected(Data);
// 		if (SelectionMode == ESelectionMode::Single)
// 		{
// 			MyListView->ClearSelection();
// 			MyListView->SetItemSelection(Data, !bIsSelected);
// 		}
// 		else if (SelectionMode == ESelectionMode::Multi)
// 		{
// 			MyListView->SetItemSelection(Data, !bIsSelected);
// 		}
// 
// 		HandleItemClicked(Data);
// 	}
}

void UKFListView::SelectItemAfterRefresh()
{
	if (MyListView.IsValid() && ItemToSelectAfterRefresh.IsValid())
	{
		if (MyListView->IsPendingRefresh())
		{
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimerForNextTick(this, &UKFListView::SelectItemAfterRefresh);
			}
		}
		else
		{
			SetSelectedItemInternal(ItemToSelectAfterRefresh.Get());
		}
	}
	else
	{
		ItemToSelectAfterRefresh.Reset();
	}
}

void UKFListView::SetSelectedItemInternal(UObject* Item)
{
	if (MyListView.IsValid())
	{
		MyListView->SetSelection(Item, ESelectInfo::OnNavigation);
		MyListView->RequestScrollIntoView(Item);

		ItemToSelectAfterRefresh.Reset();
	}
}

