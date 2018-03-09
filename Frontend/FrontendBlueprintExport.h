// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "FrontendBlueprintExport.generated.h"


/**
 * 
 */
UCLASS()
class KINGDOM_API UFrontendBlueprintExport : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public://asset
	UFUNCTION(BlueprintCallable, Category = "Frontend|Tool")
	static UTexture2D* LoadTexture2DFromPath(const FString& path);

	UFUNCTION(BlueprintCallable, Category = "Frontend|Tool")
	static UMaterial* LoadMaterialFromPath(const FString& path);
	/*Search Root Path: Content/UI/Frontend/*/
	UFUNCTION(BlueprintCallable, Category = "Frontend|Tool")
	static TArray<FString> GetFilesFromFolder(const FString& Path, const FString& Filter, bool InFiles, bool InDirectory);

public:
	UFUNCTION(BlueprintCallable, Category = "Frontend|TabFile")
	static TArray<int> GetBinariesTabFileIds(const FString& File);

	UFUNCTION(BlueprintCallable, Category = "Frontend|TabFile")
	static TMap<FString, FString> GetBinariesTabFile(const FString& File, int Id);

	UFUNCTION(BlueprintCallable, Category = "Frontend|Ini")
	static FString	GetBinariesIni(const FString& File, const FString& Section, const FString& Key);

};
