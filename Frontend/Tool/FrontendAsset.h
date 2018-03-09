// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FrontendTxt.h"
#include "FrontendTabData.h"
/**
 * 
 */

class KINGDOM_API FrontendAsset
{
public:
	FrontendAsset();
	~FrontendAsset();

	static FrontendAsset& GetInstance();
public:
	UObject* LoadAssetFromPath(const FString& path, UClass* uclass);
	UTexture2D* LoadTexture2DFromPath(const FString& path);
	UMaterial* LoadMaterialFromPath(const FString& path);

public:	
	void LoadBinariesFiles();
	bool GetBinariesTabFileIds(const FString& File, OUT TArray<int>& OutIds);
	bool GetBinariesTabFile(const FString& File, int Id, OUT TMap<FString, FString>& OutList);

	FString	GetBinariesIni(const FString& File, const FString& Section, const FString& Key/*, bool IsFrontendDirectory*/);
private:	

	const FrontendTxt* GetFrontendTxt(const FString& File);
public:
	FString GetFrontendContentDir();
	FString GetKingdomConfigRootDir();

private:
	TMap<FString, FrontendTxt> FrontendTxtList;
};
