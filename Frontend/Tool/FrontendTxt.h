// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class KINGDOM_API FrontendTxt
{
public:
	FrontendTxt();
	~FrontendTxt();

public:
	bool	Load(const FString& Path);
	FString GetFileName();

public:
	int		GetInt(int Id, const FString& Key);
	float	GetFloat(int Id, const FString& Key);
	FString	GetString(int Id, const FString& Key);

// 	int		GetInt(const FString& Id, const FString& Key);
// 	float	GetFloat(const FString& Id, const FString& Key);
// 	FString	GetString(const FString& Id, const FString& Key);

public:
	TArray<FString> PropertyList;
	TMap<int, TArray<FString>> RecordList;

private:
	FString FilePath;
};
