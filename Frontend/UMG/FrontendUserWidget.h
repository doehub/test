// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FrontendUserWidget.generated.h"


/**
 * 
 */
UCLASS()
class KINGDOM_API UFrontendUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:	

	enum EnumGamePadButton
	{
		L1 = 0x1,
		L2 = 0x2,
		L3 = 0x4,

		R1 = 0x8,
		R2 = 0x10,
		R3 = 0x20,

		DPadUp = 0x40,
		DPadDown = 0x80,
		DPadLeft = 0x0100,
		DPadRight = 0x0200,

		FaceButtonTop = 0x0400,
		FaceButtonBottom = 0x0800,
		FaceButtonLeft = 0x1000,
		FaceButtonRight = 0x2000,

		LeftThumbStickXAxis = 0x4000,
		LeftThumbStickYAxis = 0x8000,
		RightThumbStickXAxis = 0x10000,
		RightThumbStickYAxis = 0x20000,
	};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		bool UsePS4EnterButtonAssignmentType = true;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
		bool CheckHook = false;
public:
	
	UFUNCTION(BlueprintCallable)
		void SetHookDPadUp(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::DPadUp, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookDPadDown(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::DPadDown, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookDPadLeft(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::DPadLeft, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookDPadRight(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::DPadRight, bHook, bHandled); };

	UFUNCTION(BlueprintCallable)
		void SetHookFaceButtonTop(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::FaceButtonTop, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookFaceButtonBottom(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::FaceButtonBottom, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookFaceButtonLeft(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::FaceButtonLeft, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookFaceButtonRight(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::FaceButtonRight, bHook, bHandled); };

	UFUNCTION(BlueprintCallable)
		void SetHookLeftThumbStick(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::LeftThumbStickXAxis, bHook, bHandled); SetHook(EnumGamePadButton::LeftThumbStickYAxis, bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookRightThumbStick(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::RightThumbStickXAxis, bHook, bHandled); SetHook(EnumGamePadButton::RightThumbStickYAxis, bHook, bHandled); };

	UFUNCTION(BlueprintCallable)
		void SetHookR2(bool bHook, bool bHandled) { SetHook(EnumGamePadButton::R2, bHook, bHandled); };

	UFUNCTION(BlueprintCallable)
		void SetHookDPad(bool bHook, bool bHandled) { SetHookDPadUp(bHook, bHandled); SetHookDPadDown(bHook, bHandled); SetHookDPadLeft(bHook, bHandled); SetHookDPadRight(bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookFaceButton(bool bHook, bool bHandled) { SetHookFaceButtonTop(bHook, bHandled); SetHookFaceButtonBottom(bHook, bHandled); SetHookFaceButtonLeft(bHook, bHandled); SetHookFaceButtonRight(bHook, bHandled); };
	UFUNCTION(BlueprintCallable)
		void SetHookPS4GamePad(bool bHook, bool bHandled) { SetHook(-1, bHook, bHandled); };

	/*Use less as far as possible, shut down after use*/
	UFUNCTION(BlueprintCallable)
		void SetHookAnyKey(bool bHook, bool bHandled = true);
public:
	UFUNCTION(BlueprintNativeEvent)
		void OnL1_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnL2_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnR1_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnR2_Pressed();

	UFUNCTION(BlueprintNativeEvent)
		void OnDPadUp_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadDown_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadLeft_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadRight_Pressed();

	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonTop_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonBottom_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonLeft_Pressed();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonRight_Pressed();


	UFUNCTION(BlueprintNativeEvent)
		void OnL1_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnL2_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnR1_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnR2_Released();

	UFUNCTION(BlueprintNativeEvent)
		void OnDPadUp_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadDown_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadLeft_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnDPadRight_Released();

	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonTop_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonBottom_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonLeft_Released();
	UFUNCTION(BlueprintNativeEvent)
		void OnFaceButtonRight_Released();

	UFUNCTION(BlueprintNativeEvent)
		void OnLeftThumbStickXAxis(float Value);
	UFUNCTION(BlueprintNativeEvent)
		void OnLeftThumbStickYAxis(float Value);
	UFUNCTION(BlueprintNativeEvent)
		void OnRightThumbStickXAxis(float Value);
	UFUNCTION(BlueprintNativeEvent)
		void OnRightThumbStickYAxis(float Value);

	UFUNCTION(BlueprintNativeEvent)
		void OnAnyKey_Pressed(FKey Key);
	UFUNCTION(BlueprintNativeEvent)
		void OnAnyKey_Released(FKey Key);
public:
	UFUNCTION(BlueprintNativeEvent)
		bool HasListenInputEvent();

public:
	UFUNCTION(BlueprintCallable, Category = "Input", meta = (BlueprintProtected = "true"))
		void SetHookPriority(int32 NewPriority);
	UFUNCTION(BlueprintCallable, Category = "Input")
		void SetPlayerInputable(bool Enable);
public:
	void SetHook(uint64 mask, bool bHook, bool bHandled);
	bool HasHook(uint64 mask);
	bool HasHandled(uint64 mask);
	bool ProcessThumbStick(EnumGamePadButton e, float Value);
	bool ProcessAction(EnumGamePadButton e, bool IsPressed);	
	bool ProcessAnyKey(FKey Key, bool IsPressed);

	void TickInputListener();
protected:
	void OnGamePadInputAction(EnumGamePadButton e, bool IsPressed);
	void OnGamePadInputThumbStick(float Value, EnumGamePadButton e);
	void OnGamePadInputKey(FKey Key, bool IsPressed);

public:
	virtual void InitializeInputComponent() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	virtual void SetVisibility(ESlateVisibility InVisibility) override;
private:
	EnumGamePadButton CheckCast(EnumGamePadButton e);
	FName EnumToName(EnumGamePadButton e) const;

	void ResetGamePadInputEvent(uint64 mask);
	void StopListeningForInputThumbStick(FName AxisName);
	void StopListeningForInputKey(FKey Key);
private:
	uint64 HookMask = 0;
	uint64 HandledMask = 0;
	
	bool HookAnyKey = false;
	bool HandleAnyKey = false;

	bool bAddToController = false;
};
