// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Kingdom.h"

#include "KFListItem.h"

UKFListItem::UKFListItem( const FObjectInitializer& Initializer )
    : Super( Initializer )
{
}

void IKFListItem::OnItemIndex_Implementation( int32 InIndexInList )
{
	
}

void IKFListItem::OnItemSelected_Implementation(bool bSelected)
{
	// stub
}

// bool IKFListItem::IsItemExpanded_Implementation() const
// {
// 	return false;
// }
// 
// void IKFListItem::ToggleExpansion_Implementation()
// {
// 	// stub
// }
// 
// int32 IKFListItem::GetIndentLevel_Implementation() const
// {
// 	return INDEX_NONE;
// }
// 
// int32 IKFListItem::DoesItemHaveChildren_Implementation() const
// {
// 	return INDEX_NONE;
// }
// 
// ESelectionMode::Type IKFListItem::GetSelectionMode_Implementation() const
// {
// 	return ESelectionMode::None;
// }
//
// void IKFListItem::Private_OnExpanderArrowShiftClicked_Implementation()
// {
// 	// stub
// }

void IKFListItem::OnClicked_Implementation()
{

}