// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "FrontendBlueprintExport.h"
#include "Tool/FrontendAsset.h"
#include "KingdomGameUserSettings.h"
#include "FileManagerGeneric.h"

UTexture2D* UFrontendBlueprintExport::LoadTexture2DFromPath(const FString& path)
{
	return FrontendAsset::GetInstance().LoadTexture2DFromPath(path);
}

UMaterial* UFrontendBlueprintExport::LoadMaterialFromPath(const FString& path)
{
	return FrontendAsset::GetInstance().LoadMaterialFromPath(path);
}
TArray<FString> UFrontendBlueprintExport::GetFilesFromFolder(const FString& Path, const FString& Filter, bool InFiles, bool InDirectory)
{
	FString AssetPath = FrontendAsset::GetInstance().GetFrontendContentDir() / Path;
	TArray<FString> FileList;
	FFileManagerGeneric::Get().FindFilesRecursive(FileList, *AssetPath, *Filter, InFiles, InDirectory);
	return FileList;
}

// 
// float UFrontendBlueprintExport::GetDefaultEngineFloatValue(const FString& section, const FString& key)
// {
// 	float value = 0.0f;
// 	if (GConfig->GetFloat(*section, *key, value, GEngineIni))
// 	{
// 	}
// 
// 	return value;
// }
// 
// 
// TArray<FVector2D> UFrontendBlueprintExport::GetResolution()
// {	
// 	TArray<FVector2D> AllSolutions;
// 	for (int i = 0; i < UKingdomGameUserSettings::DefaultResCount; ++i)
// 	{
// 		const FIntPoint& solution = UKingdomGameUserSettings::DefaultResolutions[i];
// 		AllSolutions.Add(FVector2D(solution.X, solution.Y));
// 	}
// 
// 	return AllSolutions;
// }

TArray<int> UFrontendBlueprintExport::GetBinariesTabFileIds(const FString& File)
{
	TArray<int> IdsList;
	FrontendAsset::GetInstance().GetBinariesTabFileIds(File, IdsList);
	return IdsList;
}

TMap<FString, FString> UFrontendBlueprintExport::GetBinariesTabFile(const FString& File, int Id)
{
	TMap<FString, FString> OutList;
//	FrontendAsset::GetInstance().GetBinariesTabFile(File, Id, OutList);
	Get_Frontend_txt_struct_to_map(File, Id, OutList, 0);
	return OutList;
}

FString	UFrontendBlueprintExport::GetBinariesIni(const FString& File, const FString& Section, const FString& Key)
{
	return FrontendAsset::GetInstance().GetBinariesIni(File, Section, Key);
}