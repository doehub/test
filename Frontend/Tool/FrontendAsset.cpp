// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "FrontendAsset.h"
#include "FileManagerGeneric.h"
//#include "Runtime/ImageWrapper/Public/Interfaces/IImageWrapper.h"
//#include "Runtime/ImageWrapper/Public/Interfaces/IImageWrapperModule.h"
//#include "GenericPlatformMisc.h"



static FString GetFrontendAssetDir(const FString& path)
{
	FString UAssertPath = path;
// 	FString strContentDir = FPaths::GameContentDir();
// 	if (path.Len() >= strContentDir.Len() && path.Left(strContentDir.Len()) == strContentDir)
// 	{
// 		UAssertPath = path.Right(path.Len() - strContentDir.Len());
// 	}

	FPaths::NormalizeFilename(UAssertPath);
	if (path.Len() >= 6)
	{
		FString LeftPath = path.Left(6);
		if (LeftPath != TEXT("/Game/") && LeftPath != TEXT("\\Game\\"))
		{
			UAssertPath = FString("/Game/") + UAssertPath;
		}
	}
	else
	{
		UAssertPath = FString("/Game/") + UAssertPath;
	}

	FString strExt = TEXT(".uasset");
	if (path.Right(strExt.Len()) == strExt)
	{
		UAssertPath = UAssertPath.Left(UAssertPath.Len() - strExt.Len());
	}

	return UAssertPath;
}



FrontendAsset::FrontendAsset()
{
}

FrontendAsset::~FrontendAsset()
{
}

FrontendAsset& FrontendAsset::GetInstance()
{
	static FrontendAsset ins;
	return ins;
}

UObject* FrontendAsset::LoadAssetFromPath(const FString& path, UClass* uclass)
{
	if (path.IsEmpty())
	{
		return nullptr;
	}

	FString strAssertPath = GetFrontendAssetDir(path);
	return StaticLoadObject(uclass, NULL, *strAssertPath);
}

UTexture2D* FrontendAsset::LoadTexture2DFromPath(const FString& path)
{
	UObject* obj = LoadAssetFromPath(path, UTexture2D::StaticClass());
	if (!obj)
	{
		return nullptr;
	}

	return Cast<UTexture2D>(obj);
}

UMaterial* FrontendAsset::LoadMaterialFromPath(const FString& path)
{
	UObject* obj = LoadAssetFromPath(path, UTexture2D::StaticClass());
	if (!obj)
	{
		return nullptr;
	}

	return Cast<UMaterial>(obj);
}

FString FrontendAsset::GetFrontendContentDir()
{
	return FPaths::ProjectContentDir() + TEXT("UI/Frontend/");
}

FString FrontendAsset::GetKingdomConfigRootDir()
{
	return FModuleManager::Get().GetGameBinariesDirectory();
}

void FrontendAsset::LoadBinariesFiles()
{
	FrontendTxtList.Reset();
	TArray<FString> ConfigPathList;
	ConfigPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config_frontend"));
	ConfigPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config"));
	ConfigPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config_client"));

	for (int i = 0; i < ConfigPathList.Num(); ++i)
	{
		TArray<FString> FileList;
		FFileManagerGeneric::Get().FindFilesRecursive(FileList, *ConfigPathList[i], TEXT("*.txt"), true, false);
		for (int j = 0; j < FileList.Num(); ++j)
		{
			FrontendTxt txtFile;
			if (txtFile.Load(FileList[j]))
			{
				FrontendTxtList.Add(txtFile.GetFileName(), txtFile);
			}
		}
	}
}

const FrontendTxt* FrontendAsset::GetFrontendTxt(const FString& File)
{
	if (FrontendTxtList.Find(File))
	{
		return &FrontendTxtList[File];
	}

	return nullptr;
}

bool FrontendAsset::GetBinariesTabFileIds(const FString& File, OUT TArray<int>& OutIds)
{
	const FrontendTxt* txtFile = this->GetFrontendTxt(File);
	if (!txtFile)
	{
		return false;
	}

	for (TMap<int, TArray<FString>>::TConstIterator iter = txtFile->RecordList.CreateConstIterator(); iter; ++iter)
	{
		OutIds.Add(iter->Key);
	}

	return true;
}

bool FrontendAsset::GetBinariesTabFile(const FString& File, int Id, OUT TMap<FString, FString>& OutList)
{
	const FrontendTxt* txtFile = this->GetFrontendTxt(File);
	if (!txtFile)
	{
		return false;
	}

	if (!txtFile->RecordList.Find(Id))
	{
		return false;
	}

	for (int i = 0; i < txtFile->PropertyList.Num(); ++i)
	{
		OutList.Add(txtFile->PropertyList[i], txtFile->RecordList[Id][i]);
	}
	
	return true;	
}

FString FrontendAsset::GetBinariesIni(const FString& File, const FString& Section, const FString& Key/*, bool IsFrontendDirectory*/)
{
	TArray<FString> IniPathList;
// 	if (IsFrontendDirectory)
// 	{
// 		IniPathList.Add(this->GetFrontendContentDir() / TEXT("config"));
// 	}
// 	else
// 	{
// 		IniPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config"));
// 		IniPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config_client"));
// 	}

	IniPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config_frontend"));
	IniPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config"));
	IniPathList.Add(this->GetKingdomConfigRootDir() / TEXT("config_client"));

	for (int i = 0; i < IniPathList.Num(); ++i)
	{
		FString Path = IniPathList[i] / (File + TEXT(".ini"));
		if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
		{
			continue;
		}

		FString Value;
		if (!GConfig->GetString(*Section, *Key, Value, *Path))
		{
			break;
		}

		int32 Index = -1;
		if ((Index = Value.Find(";")) != -1)
		{
			Value = Value.Left(Index);
		}

		Value.TrimStartInline();
		Value.TrimEndInline();

		return Value;
	}

	return FString();
}