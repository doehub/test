// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "KFListItem.generated.h"

UINTERFACE()
class KINGDOM_API UKFListItem : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class KINGDOM_API IKFListItem
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = ListItem)
	void OnItemIndex(int32 InIndexInList);

// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem )
// 	bool IsItemExpanded() const;
// 
// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem )
// 	void ToggleExpansion();
// 
// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem )
// 	int32 GetIndentLevel() const;
// 
// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem )
// 	int32 DoesItemHaveChildren() const;
// 
// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem )
// 	ESelectionMode::Type GetSelectionMode() const;
// 
// 	UFUNCTION( BlueprintNativeEvent, BlueprintCallable, Category = ListItem, meta = ( DisplayName = "OnExpanderArrowShiftClicked" ) )
// 	void Private_OnExpanderArrowShiftClicked();

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = ListItem)
	void OnItemSelected(bool bSelected);

	UFUNCTION(BlueprintNativeEvent, Category = ListItem)
	void OnClicked();
};

// for ease of copy paste

/*
// IKFListItem interface
virtual void SetSelected_Implementation( bool bSelected ) override {}
virtual void SetIndexInList_Implementation( int32 InIndexInList ) override {}
virtual bool IsItemExpanded_Implementation() const override { return false; }
virtual void ToggleExpansion_Implementation() override {}
virtual int32 GetIndentLevel_Implementation() const override { return INDEX_NONE; }
virtual int32 DoesItemHaveChildren_Implementation() const override { return INDEX_NONE; }
virtual ESelectionMode::Type GetSelectionMode_Implementation() const override { return ESelectionMode::None; }
virtual void Private_OnExpanderArrowShiftClicked_Implementation() override {}
virtual void RegisterOnClicked_Implementation(const FOnItemClicked& Callback) override {}
// ~IKFListItem
*/