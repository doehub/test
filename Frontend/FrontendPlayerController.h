// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UMG/FrontendUserWidget.h"
#include "FrontendPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class KINGDOM_API AFrontendPlayerController : public APlayerController
{
	GENERATED_BODY()
	

public:
	virtual void BeginPlay() override;

};
