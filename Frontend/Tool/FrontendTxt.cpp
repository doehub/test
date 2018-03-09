// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "FrontendTxt.h"
#include "PlatformFilemanager.h"
#include "FileManagerGeneric.h"


static const FString SplitConfigChar = TEXT("\t");

static void Split(const FString& InStr, const FString& SplitChar, OUT TArray<FString>& OutList)
{
	FString SplitStr = InStr;
	int32 Index = -1;
	while ((Index = SplitStr.Find(SplitChar)) != -1)
	{
		OutList.Add(SplitStr.Left(Index));
		SplitStr = SplitStr.Mid(Index + SplitChar.Len());
	}

	if (!SplitStr.IsEmpty())
	{
		OutList.Add(SplitStr);
	}
}

FrontendTxt::FrontendTxt()
{
}

FrontendTxt::~FrontendTxt()
{
}

bool FrontendTxt::Load(const FString& Path)
{
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
	{
		return false;
	}
		
	FString FileContent;
	if (!FFileHelper::LoadFileToString(FileContent, *Path))
	{
		return false;
	}

	TArray<FString> ContentList;
	Split(FileContent, TEXT("\r\n"), ContentList);
	int RecordNum = ContentList.Num();
	if (RecordNum > 0)
	{
		Split(ContentList[0], SplitConfigChar, PropertyList);

		int Column = PropertyList.Num();
		if (Column > 0)
		{
			TArray<FString> Record;
			for (int i = 3; i < RecordNum; ++i)
			{
				Record.Reset(Column);
				Split(ContentList[i], SplitConfigChar, Record);

				if (Record.Num() == PropertyList.Num())
				{
					RecordList.Add(FCString::Atoi(*Record[0]), Record);
				}
			}
		}
	}

	FilePath = Path;
	return true;
}

FString FrontendTxt::GetFileName()
{
	FString Result;
	int32 Index = 0;
	if (FilePath.FindLastChar(TEXT('/'), Index))
	{
		Result = FilePath.Right(FilePath.Len() - Index - 1);
	}

	Result = FPaths::GetBaseFilename(FilePath, true);

	return Result;
}

int FrontendTxt::GetInt(int Id, const FString& Key)
{
	FString Value = this->GetString(Id, Key);
	if (Value.IsEmpty())
	{
		return 0;
	}

	return FCString::Atoi(*Value);
}

float FrontendTxt::GetFloat(int Id, const FString& Key)
{
	FString Value = this->GetString(Id, Key);
	if (Value.IsEmpty())
	{
		return 0;
	}

	return FCString::Atof(*Value);
}

FString FrontendTxt::GetString(int Id, const FString& Key)
{
	int32 nKeyIndex = -1;
	for (int i = 0; i < PropertyList.Num(); ++i)
	{
		if (Key == PropertyList[i])
		{
			nKeyIndex = i;
			break;
		}
	}

	if (nKeyIndex == -1)
	{
		return TEXT("");
	}

	if (!RecordList.Find(Id))
	{
		return TEXT("");
	}

	if (RecordList[Id].Num() <= nKeyIndex)
	{
		return TEXT("");
	}

	return RecordList[Id][nKeyIndex];
}

// int FrontendTxt::GetInt(const FString& Id, const FString& Key)
// {
// 	return this->GetInt(FCString::Atoi(*Id), Key);
// }
// 
// float FrontendTxt::GetFloat(const FString& Id, const FString& Key)
// {
// 	return this->GetFloat(FCString::Atoi(*Id), Key);
// }
// 
// FString FrontendTxt::GetString(const FString& Id, const FString& Key)
// {
// 	return this->GetString(FCString::Atoi(*Id), Key);
// }