// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "UMG.h"
#include "Widgets/Views/SListView.h"
#include "SObjectTableRow.h"
#include "WidgetFactory.h"
#include "KFUITypes.h"
#include "Widgets/Layout/SScrollBar.h"
#include "KFListView.generated.h"

UCLASS()
class KINGDOM_API UKFListView : public UWidget
{
	GENERATED_BODY()

	/** The object row specialization used for the tiles */
	using ObjectRowType = SObjectTableRow<UObject*>;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClicked, int32, Index);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemSelected, int32, Index, bool, Selected);
public:
	UKFListView();

	/** Called when an item is clicked, parameter is the item clicked */
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnItemClicked OnItemClicked;

	/** Called when an item is selected, parameter is the item selected */
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnItemSelected OnItemSelected;	

public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void BeginDestroy() override;

	/** Adds an the item to the list */
	UFUNCTION(BlueprintCallable, Category = ListView)
	void SetItemCount(int32 Count);

	UFUNCTION(BlueprintCallable, Category = ListView)
	int32 GetItemCount() const;

	/** Returns the widget at the given index */
//	UFUNCTION(BlueprintCallable, Category = ListView, meta = ( Display = "GetItemAt" ))
	UObject* GetItemAt( int32 Index ) const;

	/** Returns the index that the specified item is at. Will return the first found, or -1 for not found */
//	UFUNCTION( BlueprintCallable, Category = ListView )
	int32 GetIndexFromItem(UObject* Item ) const;
	UUserWidget* GetWidgetFromItem(UObject* Item) const;

	UFUNCTION(BlueprintCallable, Category = ListView)
	UUserWidget* GetWidgetFromIndex(int32 Index);

	/** Sets the height of every item in the list */
	UFUNCTION( BlueprintCallable, Category = TileView )
	void SetItemHeight( float NewHeight );

	/** Sets the padding around every item in the list */
	UFUNCTION( BlueprintCallable, Category = TileView )
	void SetDesiredItemPadding( const FMargin& DesiredPadding );

	/** Gets the number of items currently selected in the list */
	UFUNCTION( BlueprintCallable, Category = ListView )
	int32 GetNumItemsSelected() const;

	/** Gets the first selected index, if any; recommended that you only use this for single selection Indexs. */
	UFUNCTION( BlueprintCallable, Category = ListView )
	int32 GetSelectedIndex() const;

	/** Gets a list of all the currently selected items */
	UFUNCTION( BlueprintCallable, BlueprintPure = false, Category = ListView )
	bool GetSelectedIndexs( TArray<int32>& OutIndexs) const;
	bool GetSelectedItems(TArray<UObject*>& OutItems) const;
	/** Gets whether the entry for the given object is currently visible in the list */
	UFUNCTION( BlueprintCallable, Category = ListView )
	bool IsItemVisible(int32 Index ) const;
	bool IsItemVisible(UObject* Item) const;
	/** Requests that the entry for the given index object is scrolled into view */
	UFUNCTION(BlueprintCallable, Category = ListView)
	void ScrollIntoView(int32 Index);
	void ScrollIntoView(UObject* Item );
	void ScrollIntoView(const UObject* Item);

	/** Removes all items from the list */
	UFUNCTION( BlueprintCallable, Category = ListView )
	void Clear();

	/** @return True if a refresh is pending and the list will be rebuilt on the next tick */
	UFUNCTION( BlueprintCallable, Category = ListView )
	bool IsRefreshPending() const;

	/** 
	 * Require that the entry from the given index object selected and scrolled into view
	 * this function will clear other selected sections
	 */
	UFUNCTION( BlueprintCallable, Category = ListView )
	bool SetSelectedItem(int32 Index, bool bWaitIfPendingRefresh);
	bool SetSelectedItem(UObject* Item, bool bWaitIfPendingRefresh);
	bool SetSelectedItem(const UObject* Item, bool bWaitIfPendingRefresh);

	/** Manually sets whether the entry for the given item is selected. */
	UFUNCTION( BlueprintCallable, Category = ListView )
	void SetItemSelection(int32 Index, bool bSelected);
	void SetItemSelection(UObject* Item, bool bSelected );

	/** Clear selection */
	UFUNCTION( BlueprintCallable, Category = ListView )
	void ClearSelection();

	void RebuildListItems()
	{
		if (MyListView.IsValid())
		{
			MyListView->RebuildList();
		}
	}

#if WITH_EDITOR
	virtual const FText GetPaletteCategory() override { return NSLOCTEXT( "KF", "KFListView", "KF" ); }
#endif

protected:
	virtual TSharedRef<class SWidget> RebuildWidget() override;

	TSharedRef<ITableRow> HandleGenerateRow(UObject* Item, const TSharedRef<STableViewBase>& OwnerTable);
	void HandleItemClicked(UObject* Item);
	void HandleSelectionChanged(UObject* Item, ESelectInfo::Type SelectInfo);
	void HandleRowReleased(const TSharedRef<ITableRow>& Row);

	float GetTotalItemHeight() const;

	/** The list of items to generate widgets for */
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Content, meta = (DisplayName = "Items"))
	TArray<UObject*> ActiveItems;
//	TArray<UObject*> InactiveItems;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Content, meta = (DesignerRebuild = true))
	float ItemHeight;

	/** The padding desired between each element in the list. Optional for a given list item to listen. */
	UPROPERTY( EditInstanceOnly, BlueprintReadOnly, Category = ListView, meta = ( DesignerRebuild = true ) )
	FMargin DesiredItemPadding;

	UPROPERTY( EditInstanceOnly, BlueprintReadOnly, Category = ListView, meta = ( DesignerRebuild = true ) )
	TSubclassOf<UUserWidget> ListItemClass;

	UPROPERTY( EditInstanceOnly, BlueprintReadOnly, Category = ListView )
	TEnumAsByte<ESelectionMode::Type> SelectionMode;

	UPROPERTY( EditInstanceOnly, BlueprintReadOnly, Category = ListView )
	bool bClearSelectionOnClick;

	/** 
	 * How many tile widgets should be pre-allocated when the list is created? 
	 * This is about the number of tiles that you expect to see at any given time.
	 */
	UPROPERTY( EditInstanceOnly, Category = ListView )
	int32 NumPreAllocatedEntries;
	
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Scroll)
	EConsumeMouseWheel ConsumeMouseWheel;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Scroll)
	FScrollBarStyle ScrollBarStyle;	
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Scroll)
	ESlateVisibility ScrollbarVisibility;
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = Scroll)
	FVector2D  ScrollBarThickness;

	TSharedPtr<SListView<UObject*>> MyListView;
 	TWidgetFactory<UUserWidget> WidgetFactory;

private:
	void DynamicHandleItemClicked(UObject* Widget);

	void SelectItemAfterRefresh();
	TWeakObjectPtr<UObject> ItemToSelectAfterRefresh;

	void SetSelectedItemInternal(UObject* Item);
};