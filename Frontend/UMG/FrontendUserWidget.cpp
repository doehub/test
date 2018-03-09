// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "FrontendUserWidget.h"
#include "../FrontendPlayerController.h"
#include "Kingdom/KingdomGameUserSettings.h"

//////////////////////////////////////////////////////////////////////////
void UFrontendUserWidget::SetHook(uint64 mask, bool bHook, bool bHandled)
{
	if (bHook)
	{
		HookMask |= mask;
	}
	else
	{
		HookMask &= ~mask;
	}

	if (bHandled)
	{
		HandledMask |= mask;
	}
	else
	{
		HandledMask &= ~mask;
	}

	this->ResetGamePadInputEvent(mask);
}

bool UFrontendUserWidget::HasHook(uint64 mask)
{
	return (HookMask & mask) != 0;
}

bool UFrontendUserWidget::HasHandled(uint64 mask)
{
	return (HandledMask & mask) != 0;
}

void UFrontendUserWidget::SetHookAnyKey(bool bHook, bool bHandled)
{
	HookAnyKey = bHook;
	HandleAnyKey = bHandled;

	if (!InputComponent)
	{
		InitializeInputComponent();
	}
	if (InputComponent)
	{
		StopListeningForInputKey(EKeys::AnyKey);

		if (HookAnyKey)
		{
			FInputKeyBinding IKB_Press(FInputChord(EKeys::AnyKey), IE_Pressed);
			IKB_Press.bConsumeInput = HandleAnyKey;
			IKB_Press.KeyDelegate.GetDelegateWithKeyForManualSet().BindUObject(this, &UFrontendUserWidget::OnGamePadInputKey, true);
			InputComponent->KeyBindings.Add(IKB_Press);
		}		
	}
}

bool UFrontendUserWidget::ProcessThumbStick(EnumGamePadButton e, float Value)
{
	if (FMath::IsNearlyZero(Value) || !HasHook(e) || !HasListenInputEvent())
	{
		return HasHandled(e);
	}

	switch (e)
	{
	case EnumGamePadButton::LeftThumbStickXAxis:
		OnLeftThumbStickXAxis(Value);
		break;
	case EnumGamePadButton::LeftThumbStickYAxis:
		OnLeftThumbStickYAxis(Value);
		break;
	case EnumGamePadButton::RightThumbStickXAxis:
		OnRightThumbStickXAxis(Value);
		break;
	case EnumGamePadButton::RightThumbStickYAxis:
		OnRightThumbStickYAxis(Value);
		break;
	default:
		break;
	}
	return HasHandled(e);
}

bool UFrontendUserWidget::ProcessAction(EnumGamePadButton e, bool IsPressed)
{
	if (!HasHook(e) || !HasListenInputEvent())
	{
		return HasHandled(e);
	}
	
	EnumGamePadButton CastE = CheckCast(e);
	switch (CastE)
	{
	case EnumGamePadButton::DPadUp:
		if (IsPressed)
			OnDPadUp_Pressed();
		else
			OnDPadUp_Released();
		break;
	case EnumGamePadButton::DPadDown:
		if (IsPressed)
			OnDPadDown_Pressed();
		else
			OnDPadDown_Released();
		break;
	case EnumGamePadButton::DPadLeft:
		if (IsPressed)
			OnDPadLeft_Pressed();
		else
			OnDPadLeft_Released();		
		break;
	case EnumGamePadButton::DPadRight:
		if (IsPressed)
			OnDPadRight_Pressed();
		else
			OnDPadRight_Released();
		break;
	case EnumGamePadButton::FaceButtonTop:
		if (IsPressed)
			OnFaceButtonTop_Pressed();
		else
			OnFaceButtonTop_Released();
		break;
	case EnumGamePadButton::FaceButtonBottom:
		if (IsPressed)
			OnFaceButtonBottom_Pressed();
		else
			OnFaceButtonBottom_Released();
		break;
	case EnumGamePadButton::FaceButtonLeft:
		if (IsPressed)
			OnFaceButtonLeft_Pressed();
		else
			OnFaceButtonLeft_Released();
		break;
	case EnumGamePadButton::FaceButtonRight:
		if (IsPressed)
			OnFaceButtonRight_Pressed();
		else
			OnFaceButtonRight_Released();
		break;
	case EnumGamePadButton::L1:
		if (IsPressed)
			OnL1_Pressed();
		else
			OnL1_Released();
		break;
	case EnumGamePadButton::L2:
		if (IsPressed)
			OnL2_Pressed();
		else
			OnL2_Released();
		break;
	case EnumGamePadButton::R1:
		if (IsPressed)
			OnR1_Pressed();
		else
			OnR1_Released();
	case EnumGamePadButton::R2:
		if (IsPressed)
			OnR2_Pressed();
		else
			OnR2_Released();
		break;
	default:
		break;
	}
	return HasHandled(e);
}

bool UFrontendUserWidget::ProcessAnyKey(FKey Key, bool IsPressed)
{
	if (HookAnyKey && HasListenInputEvent())
	{
		if (IsPressed)
		{
			OnAnyKey_Pressed(Key);
		}
		else
		{
			OnAnyKey_Released(Key);
		}
	}
	return HandleAnyKey;
}

UFrontendUserWidget::EnumGamePadButton UFrontendUserWidget::CheckCast(EnumGamePadButton e)
{
	EnumGamePadButton CastToE = e;
	if (UsePS4EnterButtonAssignmentType)
	{
		UKingdomGameUserSettings* GameSetting = Cast<UKingdomGameUserSettings>(UGameUserSettings::GetGameUserSettings());
		if (IsValid(GameSetting))
		{
			if (GameSetting->PS4EnterButtonAssignmentType != 1)
			{
				if (e == EnumGamePadButton::FaceButtonRight)
				{
					CastToE = EnumGamePadButton::FaceButtonBottom;
				}
				else if (e == EnumGamePadButton::FaceButtonBottom)
				{
					CastToE = EnumGamePadButton::FaceButtonRight;
				}
			}
		}
	}
	
	return CastToE;
}

void UFrontendUserWidget::OnDPadUp_Pressed_Implementation() {};
void UFrontendUserWidget::OnDPadDown_Pressed_Implementation() {};
void UFrontendUserWidget::OnDPadLeft_Pressed_Implementation() {};
void UFrontendUserWidget::OnDPadRight_Pressed_Implementation() {};

void UFrontendUserWidget::OnFaceButtonTop_Pressed_Implementation() {};
void UFrontendUserWidget::OnFaceButtonBottom_Pressed_Implementation() {};
void UFrontendUserWidget::OnFaceButtonLeft_Pressed_Implementation() {};
void UFrontendUserWidget::OnFaceButtonRight_Pressed_Implementation() {};

void UFrontendUserWidget::OnL1_Pressed_Implementation() {};
void UFrontendUserWidget::OnL2_Pressed_Implementation() {};
void UFrontendUserWidget::OnR1_Pressed_Implementation() {};
void UFrontendUserWidget::OnR2_Pressed_Implementation() {};

void UFrontendUserWidget::OnAnyKey_Pressed_Implementation(FKey Key) {};

void UFrontendUserWidget::OnDPadUp_Released_Implementation() {};
void UFrontendUserWidget::OnDPadDown_Released_Implementation() {};
void UFrontendUserWidget::OnDPadLeft_Released_Implementation() {};
void UFrontendUserWidget::OnDPadRight_Released_Implementation() {};

void UFrontendUserWidget::OnFaceButtonTop_Released_Implementation() {};
void UFrontendUserWidget::OnFaceButtonBottom_Released_Implementation() {};
void UFrontendUserWidget::OnFaceButtonLeft_Released_Implementation() {};
void UFrontendUserWidget::OnFaceButtonRight_Released_Implementation() {};

void UFrontendUserWidget::OnL1_Released_Implementation() {};
void UFrontendUserWidget::OnL2_Released_Implementation() {};
void UFrontendUserWidget::OnR1_Released_Implementation() {};
void UFrontendUserWidget::OnR2_Released_Implementation() {};

void UFrontendUserWidget::OnAnyKey_Released_Implementation(FKey Key) {};


void UFrontendUserWidget::OnLeftThumbStickXAxis_Implementation(float Value) {};
void UFrontendUserWidget::OnLeftThumbStickYAxis_Implementation(float Value) {};
void UFrontendUserWidget::OnRightThumbStickXAxis_Implementation(float Value) {};
void UFrontendUserWidget::OnRightThumbStickYAxis_Implementation(float Value) {};

bool UFrontendUserWidget::HasListenInputEvent_Implementation()
{
	return IsVisible();
}

void UFrontendUserWidget::OnGamePadInputAction(UFrontendUserWidget::EnumGamePadButton e, bool IsPressed)
{
	ProcessAction(e, IsPressed);
}

void UFrontendUserWidget::OnGamePadInputThumbStick(float Value, EnumGamePadButton e)
{
	ProcessThumbStick(e, Value);
}

void UFrontendUserWidget::OnGamePadInputKey(FKey Key, bool IsPressed)
{
	ProcessAnyKey(Key, IsPressed);
}

void UFrontendUserWidget::SetHookPriority(int32 NewPriority)
{
	Super::SetInputActionPriority(NewPriority);

	if (InputComponent)
	{
		if (APlayerController* Controller = GetOwningPlayer())
		{
			Controller->PushInputComponent(InputComponent);
		}
	}
}

void UFrontendUserWidget::SetPlayerInputable(bool Enable)
{
	if (APlayerController* PC = GetOwningPlayer())
	{
		if (Enable)
			PC->EnableInput(NULL);
		else
			PC->DisableInput(NULL);

		if (APawn* Pawn = PC->GetPawn())
		{
			if (Enable)
				Pawn->EnableInput(NULL);
			else
				Pawn->DisableInput(NULL);
		}
	}
}

void UFrontendUserWidget::InitializeInputComponent()
{
	Super::InitializeInputComponent();
	bAddToController = true;
}

void UFrontendUserWidget::NativeConstruct()
{
	Super::NativeConstruct();
	TickInputListener();
}

void UFrontendUserWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UFrontendUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	TickInputListener();
	Super::NativeTick(MyGeometry, InDeltaTime);
}

void UFrontendUserWidget::TickInputListener()
{
	if (CheckHook)
	{
		if (InputComponent)
		{
			if (APlayerController* Controller = GetOwningPlayer())
			{
				bool bBPHasListen = HasListenInputEvent();
				if (bBPHasListen && bAddToController == false)
				{
					bAddToController = true;
					Controller->PushInputComponent(InputComponent);
				}
				else if (!bBPHasListen && bAddToController)
				{
					bAddToController = false;
					Controller->PopInputComponent(InputComponent);
				}
			}
		}
		else if (bAddToController)
		{
			bAddToController = false;
		}
	}
}

void UFrontendUserWidget::SetVisibility(ESlateVisibility InVisibility)
{
	Super::SetVisibility(InVisibility);
	TickInputListener();
}

FName UFrontendUserWidget::EnumToName(UFrontendUserWidget::EnumGamePadButton e) const
{
	switch (e)
	{
	case UFrontendUserWidget::L1:
		return FName("GamePadL1");
		break;
	case UFrontendUserWidget::L2:
		return FName("GamePadL2");
		break;
	case UFrontendUserWidget::L3:
		return FName("GamePadL3");
		break;
	case UFrontendUserWidget::R1:
		return FName("GamePadR1");
		break;
	case UFrontendUserWidget::R2:
		return FName("GamePadR2");
		break;
	case UFrontendUserWidget::R3:
		return FName("GamePadR3");
		break;
	case UFrontendUserWidget::DPadUp:
		return FName("GamePadDPadUp");
		break;
	case UFrontendUserWidget::DPadDown:
		return FName("GamePadDPadDown");
		break;
	case UFrontendUserWidget::DPadLeft:
		return FName("GamePadDPadLeft");
		break;
	case UFrontendUserWidget::DPadRight:
		return FName("GamePadDPadRight");
		break;
	case UFrontendUserWidget::FaceButtonTop:
		return FName("GamePadFaceButtonTop");
		break;
	case UFrontendUserWidget::FaceButtonBottom:
		return FName("GamePadFaceButtonBottom");
		break;
	case UFrontendUserWidget::FaceButtonLeft:
		return FName("GamePadFaceButtonLeft");
		break;
	case UFrontendUserWidget::FaceButtonRight:
		return FName("GamePadFaceButtonRight");
		break;
	case UFrontendUserWidget::LeftThumbStickXAxis:
		return FName("GamePadLeftThumbStickXAxis");
		break;
	case UFrontendUserWidget::LeftThumbStickYAxis:
		return FName("GamePadLeftThumbStickYAxis");
		break;
	case UFrontendUserWidget::RightThumbStickXAxis:
		return FName("GamePadRightThumbStickXAxis");
		break;
	case UFrontendUserWidget::RightThumbStickYAxis:
		return FName("GamePadRightThumbStickYAxis");
		break;
	default:
		break;
	}
	return FName();
}

void UFrontendUserWidget::ResetGamePadInputEvent(uint64 mask)
{
	if (!InputComponent)
	{
		InitializeInputComponent();
	}

	if (InputComponent)
	{
		TArray<UFrontendUserWidget::EnumGamePadButton> GamePadActionList;
		GamePadActionList.Add(UFrontendUserWidget::L1);
		GamePadActionList.Add(UFrontendUserWidget::L2);
		GamePadActionList.Add(UFrontendUserWidget::L3);
		GamePadActionList.Add(UFrontendUserWidget::R1);
		GamePadActionList.Add(UFrontendUserWidget::R2);
		GamePadActionList.Add(UFrontendUserWidget::R3);

		GamePadActionList.Add(UFrontendUserWidget::DPadUp);
		GamePadActionList.Add(UFrontendUserWidget::DPadDown);
		GamePadActionList.Add(UFrontendUserWidget::DPadLeft);
		GamePadActionList.Add(UFrontendUserWidget::DPadRight);

		GamePadActionList.Add(UFrontendUserWidget::FaceButtonTop);
		GamePadActionList.Add(UFrontendUserWidget::FaceButtonBottom);
		GamePadActionList.Add(UFrontendUserWidget::FaceButtonLeft);
		GamePadActionList.Add(UFrontendUserWidget::FaceButtonRight);

		for (size_t i = 0; i < GamePadActionList.Num(); i++)
		{
			UFrontendUserWidget::EnumGamePadButton e = GamePadActionList[i];
			FName ActionName = EnumToName(e);

			if ((e & mask) != 0)
			{
				StopListeningForInputAction(ActionName, IE_Pressed);
				StopListeningForInputAction(ActionName, IE_Released);

				if (HasHook(e))
				{
					FInputActionBinding AB_Pressed(EnumToName(e), IE_Pressed);
					AB_Pressed.bConsumeInput = HasHandled(e);
					AB_Pressed.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &UFrontendUserWidget::OnGamePadInputAction, e, true);
					InputComponent->AddActionBinding(AB_Pressed);

					FInputActionBinding AB_Released(EnumToName(e), IE_Released);
					AB_Released.bConsumeInput = HasHandled(e);
					AB_Released.ActionDelegate.GetDelegateForManualSet().BindUObject(this, &UFrontendUserWidget::OnGamePadInputAction, e, false);
					InputComponent->AddActionBinding(AB_Released);
				}
			}
		}

		TArray<UFrontendUserWidget::EnumGamePadButton> GamePadAxisList;
		GamePadAxisList.Add(UFrontendUserWidget::LeftThumbStickXAxis);
		GamePadAxisList.Add(UFrontendUserWidget::LeftThumbStickYAxis);
		GamePadAxisList.Add(UFrontendUserWidget::RightThumbStickXAxis);
		GamePadAxisList.Add(UFrontendUserWidget::RightThumbStickYAxis);

		for (size_t i = 0; i < GamePadAxisList.Num(); i++)
		{
			UFrontendUserWidget::EnumGamePadButton e = GamePadAxisList[i];
			FName ActionName = EnumToName(e);
			if ((e & mask) != 0)
			{
				StopListeningForInputThumbStick(ActionName);

				if (HasHook(e))
				{
					FInputAxisBinding AB(ActionName);
					AB.bConsumeInput = HasHandled(e);
					AB.AxisDelegate.GetDelegateForManualSet().BindUObject(this, &UFrontendUserWidget::OnGamePadInputThumbStick, e);
					InputComponent->AxisBindings.Add(AB);
				}
			}
		}
	}
}

void UFrontendUserWidget::StopListeningForInputThumbStick(FName AxisName)
{
	if (InputComponent)
	{
		for (int32 ExistingIndex = InputComponent->AxisBindings.Num() - 1; ExistingIndex >= 0; --ExistingIndex)
		{
			const FInputAxisBinding& ExistingBind = InputComponent->AxisBindings[ExistingIndex];
			if (ExistingBind.AxisName == AxisName)
			{
				InputComponent->AxisBindings.RemoveAt(ExistingIndex);
				break;
			}
		}
	}
}

void UFrontendUserWidget::StopListeningForInputKey(FKey Key)
{
	if (InputComponent)
	{
		for (int32 ExistingIndex = InputComponent->KeyBindings.Num() - 1; ExistingIndex >= 0; --ExistingIndex)
		{
			const FInputKeyBinding& ExistingBind = InputComponent->KeyBindings[ExistingIndex];
			if (ExistingBind.Chord.Key == Key)
			{
				InputComponent->KeyBindings.RemoveAt(ExistingIndex);
				break;
			}
		}
	}
}