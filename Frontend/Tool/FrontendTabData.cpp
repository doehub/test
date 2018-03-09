// Fill out your copyright notice in the Description page of Project Settings.

#include "Kingdom.h"
#include "FrontendTabData.h"
#include "FrontendAsset.h"

bool Get_Frontend_txt_struct_armytype(int id, OUT Frontend_txt_struct_armytype& info)
{
	info.id = 0;
	TMap<FString, FString> armytype_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("armytype"), id, armytype_list);
	if (armytype_list.Num() > 0)
	{
		info.id = FCString::Atoi(*armytype_list[TEXT("id")]);
		info.name = armytype_list[TEXT("name")];
		info.price = FCString::Atoi(*armytype_list[TEXT("price")]);
		info.establish_price = FCString::Atoi(*armytype_list[TEXT("establish_price")]);
		info.helmet = FCString::Atoi(*armytype_list[TEXT("helmet")]);
		info.shawl = FCString::Atoi(*armytype_list[TEXT("shawl")]);
		info.armor = FCString::Atoi(*armytype_list[TEXT("armor")]);
		info.shoes = FCString::Atoi(*armytype_list[TEXT("shoes")]);
		info.horse = FCString::Atoi(*armytype_list[TEXT("horse")]);
		info.saddle = FCString::Atoi(*armytype_list[TEXT("saddle")]);
		info.weapon1 = FCString::Atoi(*armytype_list[TEXT("weapon1")]);
		info.weapon2 = FCString::Atoi(*armytype_list[TEXT("weapon2")]);
		info.weapon3 = FCString::Atoi(*armytype_list[TEXT("weapon3")]);
		info.weapon4 = FCString::Atoi(*armytype_list[TEXT("weapon4")]);
		info.skilltype1 = FCString::Atoi(*armytype_list[TEXT("skilltype1")]);
		info.skilltype2 = FCString::Atoi(*armytype_list[TEXT("skilltype2")]);
		info.skilltype3 = FCString::Atoi(*armytype_list[TEXT("skilltype3")]);
		info.skilltype4 = FCString::Atoi(*armytype_list[TEXT("skilltype4")]);
		info.skilltype5 = FCString::Atoi(*armytype_list[TEXT("skilltype5")]);
		info.skilltype6 = FCString::Atoi(*armytype_list[TEXT("skilltype6")]);
		info.skilltype7 = FCString::Atoi(*armytype_list[TEXT("skilltype7")]);
		info.skilltype8 = FCString::Atoi(*armytype_list[TEXT("skilltype8")]);
		info.fight = FCString::Atoi(*armytype_list[TEXT("fight")]);
		info.exp_effect = FCString::Atof(*armytype_list[TEXT("exp_effect")]);
		info.glod = FCString::Atof(*armytype_list[TEXT("glod")]);
		info.recruit_limit = FCString::Atof(*armytype_list[TEXT("recruit_limit")]);
		info.remove_price = FCString::Atoi(*armytype_list[TEXT("remove_price")]);
		info.recruitprice_adjust = FCString::Atoi(*armytype_list[TEXT("recruitprice_adjust")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_aisoldierskill(int id, OUT Frontend_txt_struct_fr_aisoldierskill& info)
{
	info.id = 0;
	TMap<FString, FString> fr_aisoldierskill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_aisoldierskill"), id, fr_aisoldierskill_list);
	if (fr_aisoldierskill_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_aisoldierskill_list[TEXT("id")]);
		info.name = fr_aisoldierskill_list[TEXT("name")];
		info.Text = fr_aisoldierskill_list[TEXT("Text")];
		info.Icontexture = fr_aisoldierskill_list[TEXT("Icontexture")];
		info.Needweapon1 = fr_aisoldierskill_list[TEXT("Needweapon1")];
		info.Needweapon2 = fr_aisoldierskill_list[TEXT("Needweapon2")];
		info.Needweapon3 = fr_aisoldierskill_list[TEXT("Needweapon3")];
		info.NeedText = fr_aisoldierskill_list[TEXT("NeedText")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_background(int id, OUT Frontend_txt_struct_fr_background& info)
{
	info.id = 0;
	TMap<FString, FString> fr_background_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_background"), id, fr_background_list);
	if (fr_background_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_background_list[TEXT("id")]);
		info.Name = fr_background_list[TEXT("Name")];
		info.pricetype = FCString::Atoi(*fr_background_list[TEXT("pricetype")]);
		info.price = FCString::Atoi(*fr_background_list[TEXT("price")]);
		info.TimeOut = FCString::Atoi(*fr_background_list[TEXT("TimeOut")]);
		info.ImageMini = fr_background_list[TEXT("ImageMini")];
		info.ImageBackground = fr_background_list[TEXT("ImageBackground")];
		info.ImagePreview = fr_background_list[TEXT("ImagePreview")];
		info.EffectsID = fr_background_list[TEXT("EffectsID")];
		info.EffectsParam = fr_background_list[TEXT("EffectsParam")];
		info.BeginTime = fr_background_list[TEXT("BeginTime")];
		info.EndTime = fr_background_list[TEXT("EndTime")];
		info.ImageBackground_2 = fr_background_list[TEXT("ImageBackground_2")];
		info.ImageObscure = fr_background_list[TEXT("ImageObscure")];
		info.ImageObscure_2 = fr_background_list[TEXT("ImageObscure_2")];
		info.ImageMsgWin = fr_background_list[TEXT("ImageMsgWin")];
		info.ImageMsgWin_2 = fr_background_list[TEXT("ImageMsgWin_2")];
		info.ImageNormal = fr_background_list[TEXT("ImageNormal")];
		info.ImageNormal_2 = fr_background_list[TEXT("ImageNormal_2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_banner(int id, OUT Frontend_txt_struct_fr_banner& info)
{
	info.id = 0;
	TMap<FString, FString> fr_banner_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_banner"), id, fr_banner_list);
	if (fr_banner_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_banner_list[TEXT("id")]);
		info.itemId = FCString::Atoi(*fr_banner_list[TEXT("itemId")]);
		info.name = fr_banner_list[TEXT("name")];
		info.desc = fr_banner_list[TEXT("desc")];
		info.shape = fr_banner_list[TEXT("shape")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_banner_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_banner info;
	if(!Get_Frontend_txt_struct_fr_banner(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("itemId"), FString::FromInt(info.itemId));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("shape"), info.shape);
	return true;
}

bool Get_Frontend_txt_struct_fr_bsip(int id, OUT Frontend_txt_struct_fr_bsip& info)
{
	info.id = 0;
	TMap<FString, FString> fr_bsip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_bsip"), id, fr_bsip_list);
	if (fr_bsip_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_bsip_list[TEXT("id")]);
		info.type = FCString::Atoi(*fr_bsip_list[TEXT("type")]);
		info.ip = fr_bsip_list[TEXT("ip")];
		info.port = FCString::Atoi(*fr_bsip_list[TEXT("port")]);
		info.IPtype = fr_bsip_list[TEXT("IPtype")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_bsip_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_bsip info;
	if(!Get_Frontend_txt_struct_fr_bsip(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("ip"), info.ip);
	out.Add(TEXT("port"), FString::FromInt(info.port));
	out.Add(TEXT("IPtype"), info.IPtype);
	return true;
}

bool Get_Frontend_txt_struct_fr_bsserver(int id, OUT Frontend_txt_struct_fr_bsserver& info)
{
	info.id = 0;
	TMap<FString, FString> fr_bsserver_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_bsserver"), id, fr_bsserver_list);
	if (fr_bsserver_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_bsserver_list[TEXT("id")]);
		info.area_id = FCString::Atoi(*fr_bsserver_list[TEXT("area_id")]);
		info.net_line = FCString::Atoi(*fr_bsserver_list[TEXT("net_line")]);
		info.type = FCString::Atoi(*fr_bsserver_list[TEXT("type")]);
		info.zone = FCString::Atoi(*fr_bsserver_list[TEXT("zone")]);
		info.name = fr_bsserver_list[TEXT("name")];
		info.line_name = fr_bsserver_list[TEXT("line_name")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_buffinfo(int id, OUT Frontend_txt_struct_fr_buffinfo& info)
{
	info.id = 0;
	TMap<FString, FString> fr_buffinfo_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_buffinfo"), id, fr_buffinfo_list);
	if (fr_buffinfo_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_buffinfo_list[TEXT("id")]);
		info.buffid = fr_buffinfo_list[TEXT("buffid")];
		info.Name = fr_buffinfo_list[TEXT("Name")];
		info.explain = fr_buffinfo_list[TEXT("explain")];
		info.moneymulti = FCString::Atoi(*fr_buffinfo_list[TEXT("moneymulti")]);
		info.expmulti = FCString::Atoi(*fr_buffinfo_list[TEXT("expmulti")]);
		info.armyexpmulti = FCString::Atoi(*fr_buffinfo_list[TEXT("armyexpmulti")]);
		info.heroexpmulti = FCString::Atoi(*fr_buffinfo_list[TEXT("heroexpmulti")]);
		info.genernalexpmulti = FCString::Atoi(*fr_buffinfo_list[TEXT("genernalexpmulti")]);
		info.exploitmulti = FCString::Atoi(*fr_buffinfo_list[TEXT("exploitmulti")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_chathost(int id, OUT Frontend_txt_struct_fr_chathost& info)
{
	info.id = 0;
	TMap<FString, FString> fr_chathost_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_chathost"), id, fr_chathost_list);
	if (fr_chathost_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_chathost_list[TEXT("id")]);
		info.host = fr_chathost_list[TEXT("host")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_chathost_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_chathost info;
	if(!Get_Frontend_txt_struct_fr_chathost(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("host"), info.host);
	return true;
}

bool Get_Frontend_txt_struct_fr_city(int id, OUT Frontend_txt_struct_fr_city& info)
{
	info.id = 0;
	TMap<FString, FString> fr_city_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_city"), id, fr_city_list);
	if (fr_city_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_city_list[TEXT("id")]);
		info.city_name = fr_city_list[TEXT("city_name")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_customroom_map(int id, OUT Frontend_txt_struct_fr_customroom_map& info)
{
	info.id = 0;
	TMap<FString, FString> fr_customroom_map_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_customroom_map"), id, fr_customroom_map_list);
	if (fr_customroom_map_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_customroom_map_list[TEXT("id")]);
		info.mainmode = FCString::Atoi(*fr_customroom_map_list[TEXT("mainmode")]);
		info.submode = FCString::Atoi(*fr_customroom_map_list[TEXT("submode")]);
		info.mapId = FCString::Atoi(*fr_customroom_map_list[TEXT("mapId")]);
		info.mapName = fr_customroom_map_list[TEXT("mapName")];
		info.mapNorms = fr_customroom_map_list[TEXT("mapNorms")];
		info.mapAddress = fr_customroom_map_list[TEXT("mapAddress")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_customroom_mode(int id, OUT Frontend_txt_struct_fr_customroom_mode& info)
{
	info.id = 0;
	TMap<FString, FString> fr_customroom_mode_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_customroom_mode"), id, fr_customroom_mode_list);
	if (fr_customroom_mode_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_customroom_mode_list[TEXT("id")]);
		info.mainmode = FCString::Atoi(*fr_customroom_mode_list[TEXT("mainmode")]);
		info.mainname = fr_customroom_mode_list[TEXT("mainname")];
		info.submode = FCString::Atoi(*fr_customroom_mode_list[TEXT("submode")]);
		info.subname = fr_customroom_mode_list[TEXT("subname")];
		info.subdefault = FCString::Atoi(*fr_customroom_mode_list[TEXT("subdefault")]);
		info.mapdefault = FCString::Atoi(*fr_customroom_mode_list[TEXT("mapdefault")]);
		info.numdefault = FCString::Atoi(*fr_customroom_mode_list[TEXT("numdefault")]);
		info.minnum = FCString::Atoi(*fr_customroom_mode_list[TEXT("minnum")]);
		info.maxnum = FCString::Atoi(*fr_customroom_mode_list[TEXT("maxnum")]);
		info.halfenter = FCString::Atoi(*fr_customroom_mode_list[TEXT("halfenter")]);
		info.winDesc = fr_customroom_mode_list[TEXT("winDesc")];
		info.winNum = fr_customroom_mode_list[TEXT("winNum")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_dlc(int id, OUT Frontend_txt_struct_fr_dlc& info)
{
	info.id = 0;
	TMap<FString, FString> fr_dlc_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_dlc"), id, fr_dlc_list);
	if (fr_dlc_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_dlc_list[TEXT("id")]);
		info.dlc = FCString::Atoi(*fr_dlc_list[TEXT("dlc")]);
		info.name = fr_dlc_list[TEXT("name")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_dlc_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_dlc info;
	if(!Get_Frontend_txt_struct_fr_dlc(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("dlc"), FString::FromInt(info.dlc));
	out.Add(TEXT("name"), info.name);
	return true;
}

bool Get_Frontend_txt_struct_fr_effect(int id, OUT Frontend_txt_struct_fr_effect& info)
{
	info.id = 0;
	TMap<FString, FString> fr_effect_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_effect"), id, fr_effect_list);
	if (fr_effect_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_effect_list[TEXT("id")]);
		info.name = fr_effect_list[TEXT("name")];
		info.EffectAmount = FCString::Atoi(*fr_effect_list[TEXT("EffectAmount")]);
		info.Effect0 = fr_effect_list[TEXT("Effect0")];
		info.Delay0 = FCString::Atof(*fr_effect_list[TEXT("Delay0")]);
		info.Offset0_x = FCString::Atof(*fr_effect_list[TEXT("Offset0_x")]);
		info.Offset0_y = FCString::Atof(*fr_effect_list[TEXT("Offset0_y")]);
		info.Offset0_z = FCString::Atof(*fr_effect_list[TEXT("Offset0_z")]);
		info.Scale0_x = FCString::Atof(*fr_effect_list[TEXT("Scale0_x")]);
		info.Scale0_y = FCString::Atof(*fr_effect_list[TEXT("Scale0_y")]);
		info.Scale0_z = FCString::Atof(*fr_effect_list[TEXT("Scale0_z")]);
		info.Rotate0_x = FCString::Atof(*fr_effect_list[TEXT("Rotate0_x")]);
		info.Rotate0_y = FCString::Atof(*fr_effect_list[TEXT("Rotate0_y")]);
		info.Rotate0_z = FCString::Atof(*fr_effect_list[TEXT("Rotate0_z")]);
		info.LoopAmount = FCString::Atoi(*fr_effect_list[TEXT("LoopAmount")]);
		info.FrameInterval = FCString::Atoi(*fr_effect_list[TEXT("FrameInterval")]);
		info.LoopInterval = FCString::Atoi(*fr_effect_list[TEXT("LoopInterval")]);
		info.Offset_x = FCString::Atof(*fr_effect_list[TEXT("Offset_x")]);
		info.Offset_y = FCString::Atof(*fr_effect_list[TEXT("Offset_y")]);
		info.Offset_z = FCString::Atof(*fr_effect_list[TEXT("Offset_z")]);
		info.Scale_x = FCString::Atof(*fr_effect_list[TEXT("Scale_x")]);
		info.Scale_y = FCString::Atof(*fr_effect_list[TEXT("Scale_y")]);
		info.Scale_z = FCString::Atof(*fr_effect_list[TEXT("Scale_z")]);
		info.Rotate_x = FCString::Atof(*fr_effect_list[TEXT("Rotate_x")]);
		info.Rotate_y = FCString::Atof(*fr_effect_list[TEXT("Rotate_y")]);
		info.Rotate_z = FCString::Atof(*fr_effect_list[TEXT("Rotate_z")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_effect_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_effect info;
	if(!Get_Frontend_txt_struct_fr_effect(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("EffectAmount"), FString::FromInt(info.EffectAmount));
	out.Add(TEXT("Effect0"), info.Effect0);
	out.Add(TEXT("Delay0"), FString::SanitizeFloat(info.Delay0));
	out.Add(TEXT("Offset0_x"), FString::SanitizeFloat(info.Offset0_x));
	out.Add(TEXT("Offset0_y"), FString::SanitizeFloat(info.Offset0_y));
	out.Add(TEXT("Offset0_z"), FString::SanitizeFloat(info.Offset0_z));
	out.Add(TEXT("Scale0_x"), FString::SanitizeFloat(info.Scale0_x));
	out.Add(TEXT("Scale0_y"), FString::SanitizeFloat(info.Scale0_y));
	out.Add(TEXT("Scale0_z"), FString::SanitizeFloat(info.Scale0_z));
	out.Add(TEXT("Rotate0_x"), FString::SanitizeFloat(info.Rotate0_x));
	out.Add(TEXT("Rotate0_y"), FString::SanitizeFloat(info.Rotate0_y));
	out.Add(TEXT("Rotate0_z"), FString::SanitizeFloat(info.Rotate0_z));
	out.Add(TEXT("LoopAmount"), FString::FromInt(info.LoopAmount));
	out.Add(TEXT("FrameInterval"), FString::FromInt(info.FrameInterval));
	out.Add(TEXT("LoopInterval"), FString::FromInt(info.LoopInterval));
	out.Add(TEXT("Offset_x"), FString::SanitizeFloat(info.Offset_x));
	out.Add(TEXT("Offset_y"), FString::SanitizeFloat(info.Offset_y));
	out.Add(TEXT("Offset_z"), FString::SanitizeFloat(info.Offset_z));
	out.Add(TEXT("Scale_x"), FString::SanitizeFloat(info.Scale_x));
	out.Add(TEXT("Scale_y"), FString::SanitizeFloat(info.Scale_y));
	out.Add(TEXT("Scale_z"), FString::SanitizeFloat(info.Scale_z));
	out.Add(TEXT("Rotate_x"), FString::SanitizeFloat(info.Rotate_x));
	out.Add(TEXT("Rotate_y"), FString::SanitizeFloat(info.Rotate_y));
	out.Add(TEXT("Rotate_z"), FString::SanitizeFloat(info.Rotate_z));
	return true;
}

bool Get_Frontend_txt_struct_fr_exename(int id, OUT Frontend_txt_struct_fr_exename& info)
{
	info.id = 0;
	TMap<FString, FString> fr_exename_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_exename"), id, fr_exename_list);
	if (fr_exename_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_exename_list[TEXT("id")]);
		info.Description = fr_exename_list[TEXT("Description")];
		info.ExeName = fr_exename_list[TEXT("ExeName")];
		info.bUseCook = FCString::Atoi(*fr_exename_list[TEXT("bUseCook")]);
		info.bAllowConsole = FCString::Atoi(*fr_exename_list[TEXT("bAllowConsole")]);
		info.bAllowOutput = FCString::Atoi(*fr_exename_list[TEXT("bAllowOutput")]);
		info.bAllowLogServer = FCString::Atoi(*fr_exename_list[TEXT("bAllowLogServer")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_exename_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_exename info;
	if(!Get_Frontend_txt_struct_fr_exename(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("Description"), info.Description);
	out.Add(TEXT("ExeName"), info.ExeName);
	out.Add(TEXT("bUseCook"), FString::FromInt(info.bUseCook));
	out.Add(TEXT("bAllowConsole"), FString::FromInt(info.bAllowConsole));
	out.Add(TEXT("bAllowOutput"), FString::FromInt(info.bAllowOutput));
	out.Add(TEXT("bAllowLogServer"), FString::FromInt(info.bAllowLogServer));
	return true;
}

bool Get_Frontend_txt_struct_fr_faceicon(int id, OUT Frontend_txt_struct_fr_faceicon& info)
{
	info.id = 0;
	TMap<FString, FString> fr_faceicon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_faceicon"), id, fr_faceicon_list);
	if (fr_faceicon_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_faceicon_list[TEXT("id")]);
		info.name = fr_faceicon_list[TEXT("name")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faction_award(int id, OUT Frontend_txt_struct_fr_faction_award& info)
{
	info.id = 0;
	TMap<FString, FString> fr_faction_award_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_faction_award"), id, fr_faction_award_list);
	if (fr_faction_award_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_faction_award_list[TEXT("id")]);
		info.award = FCString::Atof(*fr_faction_award_list[TEXT("award")]);
		info.exp = FCString::Atoi(*fr_faction_award_list[TEXT("exp")]);
		info.feats = FCString::Atoi(*fr_faction_award_list[TEXT("feats")]);
		info.desc = fr_faction_award_list[TEXT("desc")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faction_flag(int id, OUT Frontend_txt_struct_fr_faction_flag& info)
{
	info.id = 0;
	TMap<FString, FString> fr_faction_flag_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_faction_flag"), id, fr_faction_flag_list);
	if (fr_faction_flag_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_faction_flag_list[TEXT("id")]);
		info.flag_color = FCString::Atoi(*fr_faction_flag_list[TEXT("flag_color")]);
		info.flag_icon = FCString::Atoi(*fr_faction_flag_list[TEXT("flag_icon")]);
		info.flag_icon_pos = fr_faction_flag_list[TEXT("flag_icon_pos")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faction_flag_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_faction_flag info;
	if(!Get_Frontend_txt_struct_fr_faction_flag(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("flag_color"), FString::FromInt(info.flag_color));
	out.Add(TEXT("flag_icon"), FString::FromInt(info.flag_icon));
	out.Add(TEXT("flag_icon_pos"), info.flag_icon_pos);
	return true;
}

bool Get_Frontend_txt_struct_fr_faction_flag_icon(int id, OUT Frontend_txt_struct_fr_faction_flag_icon& info)
{
	info.id = 0;
	TMap<FString, FString> fr_faction_flag_icon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_faction_flag_icon"), id, fr_faction_flag_icon_list);
	if (fr_faction_flag_icon_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_faction_flag_icon_list[TEXT("id")]);
		info.icon = fr_faction_flag_icon_list[TEXT("icon")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faction_flag_icon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_faction_flag_icon info;
	if(!Get_Frontend_txt_struct_fr_faction_flag_icon(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("icon"), info.icon);
	return true;
}

bool Get_Frontend_txt_struct_fr_fashion(int id, OUT Frontend_txt_struct_fr_fashion& info)
{
	info.id = 0;
	TMap<FString, FString> fr_fashion_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_fashion"), id, fr_fashion_list);
	if (fr_fashion_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_fashion_list[TEXT("id")]);
		info.Name = fr_fashion_list[TEXT("Name")];
		info.buffid = fr_fashion_list[TEXT("buffid")];
		info.exp = FCString::Atoi(*fr_fashion_list[TEXT("exp")]);
		info.money = FCString::Atoi(*fr_fashion_list[TEXT("money")]);
		info.emoney = FCString::Atoi(*fr_fashion_list[TEXT("emoney")]);
		info.generalexp = FCString::Atoi(*fr_fashion_list[TEXT("generalexp")]);
		info.exploit = FCString::Atoi(*fr_fashion_list[TEXT("exploit")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_fashion_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_fashion info;
	if(!Get_Frontend_txt_struct_fr_fashion(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("Name"), info.Name);
	out.Add(TEXT("buffid"), info.buffid);
	out.Add(TEXT("exp"), FString::FromInt(info.exp));
	out.Add(TEXT("money"), FString::FromInt(info.money));
	out.Add(TEXT("emoney"), FString::FromInt(info.emoney));
	out.Add(TEXT("generalexp"), FString::FromInt(info.generalexp));
	out.Add(TEXT("exploit"), FString::FromInt(info.exploit));
	return true;
}

bool Get_Frontend_txt_struct_fr_formation(int id, OUT Frontend_txt_struct_fr_formation& info)
{
	info.id = 0;
	TMap<FString, FString> fr_formation_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_formation"), id, fr_formation_list);
	if (fr_formation_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_formation_list[TEXT("id")]);
		info.name = fr_formation_list[TEXT("name")];
		info.Text = fr_formation_list[TEXT("Text")];
		info.Icontexture = fr_formation_list[TEXT("Icontexture")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_fujiang_skill(int id, OUT Frontend_txt_struct_fr_fujiang_skill& info)
{
	info.id = 0;
	TMap<FString, FString> fr_fujiang_skill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_fujiang_skill"), id, fr_fujiang_skill_list);
	if (fr_fujiang_skill_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_fujiang_skill_list[TEXT("id")]);
		info.name = fr_fujiang_skill_list[TEXT("name")];
		info.Text = fr_fujiang_skill_list[TEXT("Text")];
		info.Icontexture = fr_fujiang_skill_list[TEXT("Icontexture")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_fujiang_skillBuff(int id, OUT Frontend_txt_struct_fr_fujiang_skillBuff& info)
{
	info.id = 0;
	TMap<FString, FString> fr_fujiang_skillBuff_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_fujiang_skillBuff"), id, fr_fujiang_skillBuff_list);
	if (fr_fujiang_skillBuff_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_fujiang_skillBuff_list[TEXT("id")]);
		info.name = fr_fujiang_skillBuff_list[TEXT("name")];
		info.Text = fr_fujiang_skillBuff_list[TEXT("Text")];
		info.Icontexture = fr_fujiang_skillBuff_list[TEXT("Icontexture")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_helptip(int id, OUT Frontend_txt_struct_fr_helptip& info)
{
	info.id = 0;
	TMap<FString, FString> fr_helptip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_helptip"), id, fr_helptip_list);
	if (fr_helptip_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_helptip_list[TEXT("id")]);
		info.type = FCString::Atoi(*fr_helptip_list[TEXT("type")]);
		info.typeinfo = fr_helptip_list[TEXT("typeinfo")];
		info.Description = fr_helptip_list[TEXT("Description")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_hightmorale_level_rate(int id, OUT Frontend_txt_struct_fr_hightmorale_level_rate& info)
{
	info.id = 0;
	TMap<FString, FString> fr_hightmorale_level_rate_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_hightmorale_level_rate"), id, fr_hightmorale_level_rate_list);
	if (fr_hightmorale_level_rate_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_hightmorale_level_rate_list[TEXT("id")]);
		info.name = fr_hightmorale_level_rate_list[TEXT("name")];
		info.Text = fr_hightmorale_level_rate_list[TEXT("Text")];
		info.Icontexture = fr_hightmorale_level_rate_list[TEXT("Icontexture")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_honor(int id, OUT Frontend_txt_struct_fr_honor& info)
{
	info.id = 0;
	TMap<FString, FString> fr_honor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_honor"), id, fr_honor_list);
	if (fr_honor_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_honor_list[TEXT("id")]);
		info.name = fr_honor_list[TEXT("name")];
		info.describe = fr_honor_list[TEXT("describe")];
		info.icon = fr_honor_list[TEXT("icon")];
		info.need_honor = FCString::Atoi(*fr_honor_list[TEXT("need_honor")]);
		info.money = FCString::Atoi(*fr_honor_list[TEXT("money")]);
		info.emoney = FCString::Atoi(*fr_honor_list[TEXT("emoney")]);
		info.generalexp = FCString::Atoi(*fr_honor_list[TEXT("generalexp")]);
		info.exploit = FCString::Atoi(*fr_honor_list[TEXT("exploit")]);
		info.itemid = FCString::Atoi(*fr_honor_list[TEXT("itemid")]);
		info.itemnum = FCString::Atoi(*fr_honor_list[TEXT("itemnum")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_jade_award(int id, OUT Frontend_txt_struct_fr_jade_award& info)
{
	info.id = 0;
	TMap<FString, FString> fr_jade_award_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_jade_award"), id, fr_jade_award_list);
	if (fr_jade_award_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_jade_award_list[TEXT("id")]);
		info.itemtypeid = FCString::Atoi(*fr_jade_award_list[TEXT("itemtypeid")]);
		info.num = FCString::Atoi(*fr_jade_award_list[TEXT("num")]);
		info.rank = FCString::Atoi(*fr_jade_award_list[TEXT("rank")]);
		info.islimit = FCString::Atoi(*fr_jade_award_list[TEXT("islimit")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_jade_award_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_jade_award info;
	if(!Get_Frontend_txt_struct_fr_jade_award(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("itemtypeid"), FString::FromInt(info.itemtypeid));
	out.Add(TEXT("num"), FString::FromInt(info.num));
	out.Add(TEXT("rank"), FString::FromInt(info.rank));
	out.Add(TEXT("islimit"), FString::FromInt(info.islimit));
	return true;
}

bool Get_Frontend_txt_struct_fr_market(int id, OUT Frontend_txt_struct_fr_market& info)
{
	info.id = 0;
	TMap<FString, FString> fr_market_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_market"), id, fr_market_list);
	if (fr_market_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_market_list[TEXT("id")]);
		info.gold = FCString::Atoi(*fr_market_list[TEXT("gold")]);
		info.price_USD = FCString::Atoi(*fr_market_list[TEXT("price_USD")]);
		info.desc = fr_market_list[TEXT("desc")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_market_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_market info;
	if(!Get_Frontend_txt_struct_fr_market(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("gold"), FString::FromInt(info.gold));
	out.Add(TEXT("price_USD"), FString::FromInt(info.price_USD));
	out.Add(TEXT("desc"), info.desc);
	return true;
}

bool Get_Frontend_txt_struct_fr_medal(int id, OUT Frontend_txt_struct_fr_medal& info)
{
	info.id = 0;
	TMap<FString, FString> fr_medal_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_medal"), id, fr_medal_list);
	if (fr_medal_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_medal_list[TEXT("id")]);
		info.type_name = fr_medal_list[TEXT("type_name")];
		info.qua_name = FCString::Atoi(*fr_medal_list[TEXT("qua_name")]);
		info.name = fr_medal_list[TEXT("name")];
		info.describe = fr_medal_list[TEXT("describe")];
		info.visible = FCString::Atoi(*fr_medal_list[TEXT("visible")]);
		info.visible_progress = FCString::Atoi(*fr_medal_list[TEXT("visible_progress")]);
		info.key = FCString::Atoi(*fr_medal_list[TEXT("key")]);
		info.value_1 = FCString::Atoi(*fr_medal_list[TEXT("value_1")]);
		info.value_2 = FCString::Atoi(*fr_medal_list[TEXT("value_2")]);
		info.value_3 = FCString::Atoi(*fr_medal_list[TEXT("value_3")]);
		info.value_4 = FCString::Atoi(*fr_medal_list[TEXT("value_4")]);
		info.value_5 = FCString::Atoi(*fr_medal_list[TEXT("value_5")]);
		info.case_desc_1 = fr_medal_list[TEXT("case_desc_1")];
		info.case_desc_2 = fr_medal_list[TEXT("case_desc_2")];
		info.case_desc_3 = fr_medal_list[TEXT("case_desc_3")];
		info.case_desc_4 = fr_medal_list[TEXT("case_desc_4")];
		info.case_desc_5 = fr_medal_list[TEXT("case_desc_5")];
		info.award_describe = fr_medal_list[TEXT("award_describe")];
		info.award_key_1 = fr_medal_list[TEXT("award_key_1")];
		info.award_value_1 = FCString::Atoi(*fr_medal_list[TEXT("award_value_1")]);
		info.award_key_2 = fr_medal_list[TEXT("award_key_2")];
		info.award_value_2 = fr_medal_list[TEXT("award_value_2")];
		info.award_key_3 = fr_medal_list[TEXT("award_key_3")];
		info.award_value_3 = fr_medal_list[TEXT("award_value_3")];
		info.award_key_4 = fr_medal_list[TEXT("award_key_4")];
		info.award_value_4 = fr_medal_list[TEXT("award_value_4")];
		info.award_key_5 = fr_medal_list[TEXT("award_key_5")];
		info.award_value_5 = fr_medal_list[TEXT("award_value_5")];
		info.award_key_6 = fr_medal_list[TEXT("award_key_6")];
		info.award_value_6 = fr_medal_list[TEXT("award_value_6")];
		info.award_key_7 = fr_medal_list[TEXT("award_key_7")];
		info.award_value_7 = fr_medal_list[TEXT("award_value_7")];
		info.icon = fr_medal_list[TEXT("icon")];
		info.is_get_again = FCString::Atoi(*fr_medal_list[TEXT("is_get_again")]);
		info.medal_id = FCString::Atoi(*fr_medal_list[TEXT("medal_id")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_medal_condition(int id, OUT Frontend_txt_struct_fr_medal_condition& info)
{
	info.id = 0;
	TMap<FString, FString> fr_medal_condition_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_medal_condition"), id, fr_medal_condition_list);
	if (fr_medal_condition_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_medal_condition_list[TEXT("id")]);
		info.name = fr_medal_condition_list[TEXT("name")];
		info.medal_id_1 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_1")]);
		info.medal_id_2 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_2")]);
		info.medal_id_3 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_3")]);
		info.medal_id_4 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_4")]);
		info.medal_id_5 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_5")]);
		info.medal_id_6 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_6")]);
		info.medal_id_7 = FCString::Atoi(*fr_medal_condition_list[TEXT("medal_id_7")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_onlinereward(int id, OUT Frontend_txt_struct_fr_onlinereward& info)
{
	info.time = 0;
	TMap<FString, FString> fr_onlinereward_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_onlinereward"), id, fr_onlinereward_list);
	if (fr_onlinereward_list.Num() > 0)
	{
		info.time = FCString::Atoi(*fr_onlinereward_list[TEXT("time")]);
		info.reward = FCString::Atoi(*fr_onlinereward_list[TEXT("reward")]);
		info.num = FCString::Atoi(*fr_onlinereward_list[TEXT("num")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_onlinereward_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_onlinereward info;
	if(!Get_Frontend_txt_struct_fr_onlinereward(id, info))
	{
		return false;
	}

	out.Add(TEXT("time"), FString::FromInt(info.time));
	out.Add(TEXT("reward"), FString::FromInt(info.reward));
	out.Add(TEXT("num"), FString::FromInt(info.num));
	return true;
}

bool Get_Frontend_txt_struct_fr_pve_limit(int id, OUT Frontend_txt_struct_fr_pve_limit& info)
{
	info.id = 0;
	TMap<FString, FString> fr_pve_limit_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_pve_limit"), id, fr_pve_limit_list);
	if (fr_pve_limit_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_pve_limit_list[TEXT("id")]);
		info.num1 = FCString::Atoi(*fr_pve_limit_list[TEXT("num1")]);
		info.num2 = FCString::Atoi(*fr_pve_limit_list[TEXT("num2")]);
		info.num3 = FCString::Atoi(*fr_pve_limit_list[TEXT("num3")]);
		info.describe = fr_pve_limit_list[TEXT("describe")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_pve_limit_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_pve_limit info;
	if(!Get_Frontend_txt_struct_fr_pve_limit(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("num1"), FString::FromInt(info.num1));
	out.Add(TEXT("num2"), FString::FromInt(info.num2));
	out.Add(TEXT("num3"), FString::FromInt(info.num3));
	out.Add(TEXT("describe"), info.describe);
	return true;
}

bool Get_Frontend_txt_struct_fr_resolution(int id, OUT Frontend_txt_struct_fr_resolution& info)
{
	info.id = 0;
	TMap<FString, FString> fr_resolution_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_resolution"), id, fr_resolution_list);
	if (fr_resolution_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_resolution_list[TEXT("id")]);
		info.length = FCString::Atoi(*fr_resolution_list[TEXT("length")]);
		info.width = FCString::Atoi(*fr_resolution_list[TEXT("width")]);
		info.Description = fr_resolution_list[TEXT("Description")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_sound(int id, OUT Frontend_txt_struct_fr_sound& info)
{
	info.id = 0;
	TMap<FString, FString> fr_sound_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_sound"), id, fr_sound_list);
	if (fr_sound_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_sound_list[TEXT("id")]);
		info.description = fr_sound_list[TEXT("description")];
		info.path = fr_sound_list[TEXT("path")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_task(int id, OUT Frontend_txt_struct_fr_task& info)
{
	info.id = 0;
	TMap<FString, FString> fr_task_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_task"), id, fr_task_list);
	if (fr_task_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_task_list[TEXT("id")]);
		info.type = FCString::Atoi(*fr_task_list[TEXT("type")]);
		info.quality = FCString::Atoi(*fr_task_list[TEXT("quality")]);
		info.pre_task = FCString::Atoi(*fr_task_list[TEXT("pre_task")]);
		info.title = fr_task_list[TEXT("title")];
		info.desc = fr_task_list[TEXT("desc")];
		info.date_begin = FCString::Atoi(*fr_task_list[TEXT("date_begin")]);
		info.date_end = FCString::Atoi(*fr_task_list[TEXT("date_end")]);
		info.txtcheck = fr_task_list[TEXT("txtcheck")];
		info.act1_desc = fr_task_list[TEXT("act1_desc")];
		info.act1_sche_achi = FCString::Atoi(*fr_task_list[TEXT("act1_sche_achi")]);
		info.act2_desc = FCString::Atoi(*fr_task_list[TEXT("act2_desc")]);
		info.act2_sche_achi = FCString::Atoi(*fr_task_list[TEXT("act2_sche_achi")]);
		info.act3_desc = FCString::Atoi(*fr_task_list[TEXT("act3_desc")]);
		info.act3_sche_achi = FCString::Atoi(*fr_task_list[TEXT("act3_sche_achi")]);
		info.lead_action = fr_task_list[TEXT("lead_action")];
		info.award_item1 = FCString::Atoi(*fr_task_list[TEXT("award_item1")]);
		info.award_item1_num = FCString::Atoi(*fr_task_list[TEXT("award_item1_num")]);
		info.award_item1_timeout = FCString::Atoi(*fr_task_list[TEXT("award_item1_timeout")]);
		info.award_item2 = FCString::Atoi(*fr_task_list[TEXT("award_item2")]);
		info.award_item2_num = FCString::Atoi(*fr_task_list[TEXT("award_item2_num")]);
		info.award_item2_timeout = FCString::Atoi(*fr_task_list[TEXT("award_item2_timeout")]);
		info.award_item3 = FCString::Atoi(*fr_task_list[TEXT("award_item3")]);
		info.award_item3_num = FCString::Atoi(*fr_task_list[TEXT("award_item3_num")]);
		info.award_item3_timeout = FCString::Atoi(*fr_task_list[TEXT("award_item3_timeout")]);
		info.award_item4 = FCString::Atoi(*fr_task_list[TEXT("award_item4")]);
		info.award_item4_num = FCString::Atoi(*fr_task_list[TEXT("award_item4_num")]);
		info.award_item4_timeout = FCString::Atoi(*fr_task_list[TEXT("award_item4_timeout")]);
		info.award_money = FCString::Atoi(*fr_task_list[TEXT("award_money")]);
		info.award_generalexp = FCString::Atoi(*fr_task_list[TEXT("award_generalexp")]);
		info.award_exploit = FCString::Atoi(*fr_task_list[TEXT("award_exploit")]);
		info.award_exp = FCString::Atoi(*fr_task_list[TEXT("award_exp")]);
		info.award_gold = FCString::Atoi(*fr_task_list[TEXT("award_gold")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_techmaterial(int id, OUT Frontend_txt_struct_fr_techmaterial& info)
{
	info.id = 0;
	TMap<FString, FString> fr_techmaterial_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_techmaterial"), id, fr_techmaterial_list);
	if (fr_techmaterial_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_techmaterial_list[TEXT("id")]);
		info.name = fr_techmaterial_list[TEXT("name")];
		info.soldier = FCString::Atoi(*fr_techmaterial_list[TEXT("soldier")]);
		info.soldier_name = fr_techmaterial_list[TEXT("soldier_name")];
		info.effect = fr_techmaterial_list[TEXT("effect")];
		info.desc = fr_techmaterial_list[TEXT("desc")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_version(int id, OUT Frontend_txt_struct_fr_version& info)
{
	info.id  = 0;
	TMap<FString, FString> fr_version_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_version"), id, fr_version_list);
	if (fr_version_list.Num() > 0)
	{
		info.id  = FCString::Atoi(*fr_version_list[TEXT("id ")]);
		info.entrance = fr_version_list[TEXT("entrance")];
		info.version = fr_version_list[TEXT("version")];
		info.CrusadeLevel = FCString::Atoi(*fr_version_list[TEXT("CrusadeLevel")]);
		info.CrusadeArmyLevel = FCString::Atoi(*fr_version_list[TEXT("CrusadeArmyLevel")]);
		info.HeroLevel = FCString::Atoi(*fr_version_list[TEXT("HeroLevel")]);
		info.HeroSiegeLevel = FCString::Atoi(*fr_version_list[TEXT("HeroSiegeLevel")]);
		info.HeroTurnLevel = FCString::Atoi(*fr_version_list[TEXT("HeroTurnLevel")]);
		info.PVEEasyLevel = FCString::Atoi(*fr_version_list[TEXT("PVEEasyLevel")]);
		info.PVEHardLevel = FCString::Atoi(*fr_version_list[TEXT("PVEHardLevel")]);
		info.PVECrazyLevel = FCString::Atoi(*fr_version_list[TEXT("PVECrazyLevel")]);
		info.CrusadeToRobotLevel = FCString::Atoi(*fr_version_list[TEXT("CrusadeToRobotLevel")]);
		info.frversion = fr_version_list[TEXT("frversion")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_version_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_version info;
	if(!Get_Frontend_txt_struct_fr_version(id, info))
	{
		return false;
	}

	out.Add(TEXT("id "), FString::FromInt(info.id ));
	out.Add(TEXT("entrance"), info.entrance);
	out.Add(TEXT("version"), info.version);
	out.Add(TEXT("CrusadeLevel"), FString::FromInt(info.CrusadeLevel));
	out.Add(TEXT("CrusadeArmyLevel"), FString::FromInt(info.CrusadeArmyLevel));
	out.Add(TEXT("HeroLevel"), FString::FromInt(info.HeroLevel));
	out.Add(TEXT("HeroSiegeLevel"), FString::FromInt(info.HeroSiegeLevel));
	out.Add(TEXT("HeroTurnLevel"), FString::FromInt(info.HeroTurnLevel));
	out.Add(TEXT("PVEEasyLevel"), FString::FromInt(info.PVEEasyLevel));
	out.Add(TEXT("PVEHardLevel"), FString::FromInt(info.PVEHardLevel));
	out.Add(TEXT("PVECrazyLevel"), FString::FromInt(info.PVECrazyLevel));
	out.Add(TEXT("CrusadeToRobotLevel"), FString::FromInt(info.CrusadeToRobotLevel));
	out.Add(TEXT("frversion"), info.frversion);
	return true;
}

bool Get_Frontend_txt_struct_fr_vip(int id, OUT Frontend_txt_struct_fr_vip& info)
{
	info.day = 0;
	TMap<FString, FString> fr_vip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_vip"), id, fr_vip_list);
	if (fr_vip_list.Num() > 0)
	{
		info.day = FCString::Atoi(*fr_vip_list[TEXT("day")]);
		info.price = FCString::Atoi(*fr_vip_list[TEXT("price")]);
		info.discount = FCString::Atof(*fr_vip_list[TEXT("discount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_vip_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fr_vip info;
	if(!Get_Frontend_txt_struct_fr_vip(id, info))
	{
		return false;
	}

	out.Add(TEXT("day"), FString::FromInt(info.day));
	out.Add(TEXT("price"), FString::FromInt(info.price));
	out.Add(TEXT("discount"), FString::SanitizeFloat(info.discount));
	return true;
}

bool Get_Frontend_txt_struct_fr_weekrank_reward(int id, OUT Frontend_txt_struct_fr_weekrank_reward& info)
{
	info.id = 0;
	TMap<FString, FString> fr_weekrank_reward_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fr_weekrank_reward"), id, fr_weekrank_reward_list);
	if (fr_weekrank_reward_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fr_weekrank_reward_list[TEXT("id")]);
		info.type = FCString::Atoi(*fr_weekrank_reward_list[TEXT("type")]);
		info.rank = FCString::Atoi(*fr_weekrank_reward_list[TEXT("rank")]);
		info.reward_desc = fr_weekrank_reward_list[TEXT("reward_desc")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fujiang(int id, OUT Frontend_txt_struct_fujiang& info)
{
	info.Id = 0;
	TMap<FString, FString> fujiang_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fujiang"), id, fujiang_list);
	if (fujiang_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fujiang_list[TEXT("Id")]);
		info.SoldierName = fujiang_list[TEXT("SoldierName")];
		info.SoldierDescription = fujiang_list[TEXT("SoldierDescription")];
		info.SoldierKind = FCString::Atoi(*fujiang_list[TEXT("SoldierKind")]);
		info.fPrice = FCString::Atoi(*fujiang_list[TEXT("fPrice")]);
		info.PayPrestige = FCString::Atoi(*fujiang_list[TEXT("PayPrestige")]);
		info.NeedPrestige = FCString::Atoi(*fujiang_list[TEXT("NeedPrestige")]);
		info.BumpMass = FCString::Atof(*fujiang_list[TEXT("BumpMass")]);
		info.BaseAggressive = FCString::Atoi(*fujiang_list[TEXT("BaseAggressive")]);
		info.SkeletalMesh = fujiang_list[TEXT("SkeletalMesh")];
		info.SkeletalMesh1 = fujiang_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = fujiang_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = fujiang_list[TEXT("SkeletalMesh3")];
		info.IconTexture = fujiang_list[TEXT("IconTexture")];
		info.Level = FCString::Atoi(*fujiang_list[TEXT("Level")]);
		info.fHealth = FCString::Atoi(*fujiang_list[TEXT("fHealth")]);
		info.MaxSpeed = FCString::Atof(*fujiang_list[TEXT("MaxSpeed")]);
		info.fAiHorseSpeedRate = FCString::Atof(*fujiang_list[TEXT("fAiHorseSpeedRate")]);
		info.fAiHorseAcceRate = FCString::Atof(*fujiang_list[TEXT("fAiHorseAcceRate")]);
		info.fAiHorseRotationRate = FCString::Atof(*fujiang_list[TEXT("fAiHorseRotationRate")]);
		info.fAiAttackSpeedRate = FCString::Atof(*fujiang_list[TEXT("fAiAttackSpeedRate")]);
		info.RotationRate = FCString::Atof(*fujiang_list[TEXT("RotationRate")]);
		info.SprintSpeed = FCString::Atof(*fujiang_list[TEXT("SprintSpeed")]);
		info.fAccelRate = FCString::Atof(*fujiang_list[TEXT("fAccelRate")]);
		info.SoldierDefenseValue = FCString::Atoi(*fujiang_list[TEXT("SoldierDefenseValue")]);
		info.SoldierDamage = FCString::Atoi(*fujiang_list[TEXT("SoldierDamage")]);
		info.fPlayerCauseAIShieldVal = FCString::Atof(*fujiang_list[TEXT("fPlayerCauseAIShieldVal")]);
		info.AlertRange1 = FCString::Atof(*fujiang_list[TEXT("AlertRange1")]);
		info.AlertRange2 = FCString::Atof(*fujiang_list[TEXT("AlertRange2")]);
		info.AlertRange3 = FCString::Atof(*fujiang_list[TEXT("AlertRange3")]);
		info.AlertRange4 = FCString::Atof(*fujiang_list[TEXT("AlertRange4")]);
		info.FollowRange = FCString::Atof(*fujiang_list[TEXT("FollowRange")]);
		info.DefendRange = FCString::Atof(*fujiang_list[TEXT("DefendRange")]);
		info.PushRange = FCString::Atof(*fujiang_list[TEXT("PushRange")]);
		info.fStartHoldMinTime = FCString::Atof(*fujiang_list[TEXT("fStartHoldMinTime")]);
		info.fStartHoldMaxTime = FCString::Atof(*fujiang_list[TEXT("fStartHoldMaxTime")]);
		info.fHoldToFireMinTime = FCString::Atof(*fujiang_list[TEXT("fHoldToFireMinTime")]);
		info.fHoldToFireMaxTime = FCString::Atof(*fujiang_list[TEXT("fHoldToFireMaxTime")]);
		info.WeaponID1 = FCString::Atoi(*fujiang_list[TEXT("WeaponID1")]);
		info.WeaponID2 = FCString::Atoi(*fujiang_list[TEXT("WeaponID2")]);
		info.WeaponID3 = FCString::Atoi(*fujiang_list[TEXT("WeaponID3")]);
		info.WeaponID4 = FCString::Atoi(*fujiang_list[TEXT("WeaponID4")]);
		info.HeadEquipID = FCString::Atoi(*fujiang_list[TEXT("HeadEquipID")]);
		info.ShoulderEquipID = FCString::Atoi(*fujiang_list[TEXT("ShoulderEquipID")]);
		info.UpBodyEquipID = FCString::Atoi(*fujiang_list[TEXT("UpBodyEquipID")]);
		info.DownBodyEquipID = FCString::Atoi(*fujiang_list[TEXT("DownBodyEquipID")]);
		info.HorseID = FCString::Atoi(*fujiang_list[TEXT("HorseID")]);
		info.HorseEquipID = FCString::Atoi(*fujiang_list[TEXT("HorseEquipID")]);
		info.fHorseLifeRate = FCString::Atof(*fujiang_list[TEXT("fHorseLifeRate")]);
		info.ArmorType = FCString::Atoi(*fujiang_list[TEXT("ArmorType")]);
		info.DetectRate = FCString::Atof(*fujiang_list[TEXT("DetectRate")]);
		info.BeDetectedRate = FCString::Atof(*fujiang_list[TEXT("BeDetectedRate")]);
		info.AlertHewupPercent = FCString::Atof(*fujiang_list[TEXT("AlertHewupPercent")]);
		info.AlertBlockPercent = FCString::Atof(*fujiang_list[TEXT("AlertBlockPercent")]);
		info.ShotOffsetRangeX = FCString::Atof(*fujiang_list[TEXT("ShotOffsetRangeX")]);
		info.ShotOffsetRangeY = FCString::Atof(*fujiang_list[TEXT("ShotOffsetRangeY")]);
		info.fAttackOrDefendProb_0 = FCString::Atof(*fujiang_list[TEXT("fAttackOrDefendProb_0")]);
		info.fAttackOrDefendProb_1 = FCString::Atof(*fujiang_list[TEXT("fAttackOrDefendProb_1")]);
		info.fAttackOrDefendProb_2 = FCString::Atof(*fujiang_list[TEXT("fAttackOrDefendProb_2")]);
		info.fAttackOrDefendProb_3 = FCString::Atof(*fujiang_list[TEXT("fAttackOrDefendProb_3")]);
		info.fMeleeAttackIntervalTime = FCString::Atof(*fujiang_list[TEXT("fMeleeAttackIntervalTime")]);
		info.fRangeAttackIntervalTime = FCString::Atof(*fujiang_list[TEXT("fRangeAttackIntervalTime")]);
		info.fFailFire = FCString::Atof(*fujiang_list[TEXT("fFailFire")]);
		info.CurGroundFireStyle = FCString::Atoi(*fujiang_list[TEXT("CurGroundFireStyle")]);
		info.CurGroundAimStyle_0 = FCString::Atoi(*fujiang_list[TEXT("CurGroundAimStyle_0")]);
		info.CurGroundAimStyle_1 = FCString::Atoi(*fujiang_list[TEXT("CurGroundAimStyle_1")]);
		info.CurHorseFireStyle = FCString::Atoi(*fujiang_list[TEXT("CurHorseFireStyle")]);
		info.CurHorseAimStyle_0 = FCString::Atoi(*fujiang_list[TEXT("CurHorseAimStyle_0")]);
		info.CurHorseAimStyle_1 = FCString::Atoi(*fujiang_list[TEXT("CurHorseAimStyle_1")]);
		info.CausePlayerDamage = FCString::Atof(*fujiang_list[TEXT("CausePlayerDamage")]);
		info.CauseAIDamage = FCString::Atof(*fujiang_list[TEXT("CauseAIDamage")]);
		info.fSprintTimeOnGround = FCString::Atof(*fujiang_list[TEXT("fSprintTimeOnGround")]);
		info.nAISRS = FCString::Atoi(*fujiang_list[TEXT("nAISRS")]);
		info.PenetrateCut = FCString::Atof(*fujiang_list[TEXT("PenetrateCut")]);
		info.PenetratePuncture = FCString::Atof(*fujiang_list[TEXT("PenetratePuncture")]);
		info.PenetrateBlunt = FCString::Atof(*fujiang_list[TEXT("PenetrateBlunt")]);
		info.nTacticalMovePercent = FCString::Atof(*fujiang_list[TEXT("nTacticalMovePercent")]);
		info.FailProDown = FCString::Atof(*fujiang_list[TEXT("FailProDown")]);
		info.LeadCharacter = FCString::Atoi(*fujiang_list[TEXT("LeadCharacter")]);
		info.SkillID_1 = fujiang_list[TEXT("SkillID_1")];
		info.SkillID_2 = fujiang_list[TEXT("SkillID_2")];
		info.SkillID_3 = fujiang_list[TEXT("SkillID_3")];
		info.SkillID_4 = fujiang_list[TEXT("SkillID_4")];
		info.PassiveSkill_1 = FCString::Atoi(*fujiang_list[TEXT("PassiveSkill_1")]);
		info.PassiveSkill_2 = FCString::Atoi(*fujiang_list[TEXT("PassiveSkill_2")]);
		info.PassiveSkill_3 = FCString::Atoi(*fujiang_list[TEXT("PassiveSkill_3")]);
		info.PassiveSkill_4 = FCString::Atoi(*fujiang_list[TEXT("PassiveSkill_4")]);
		info.Formation1 = FCString::Atoi(*fujiang_list[TEXT("Formation1")]);
		info.Formation2 = FCString::Atoi(*fujiang_list[TEXT("Formation2")]);
		info.Formation3 = FCString::Atoi(*fujiang_list[TEXT("Formation3")]);
		info.Formation4 = FCString::Atoi(*fujiang_list[TEXT("Formation4")]);
		info.ExpFactor = FCString::Atof(*fujiang_list[TEXT("ExpFactor")]);
		info.SkillUnlock_1 = FCString::Atoi(*fujiang_list[TEXT("SkillUnlock_1")]);
		info.SkillUnlock_2 = FCString::Atoi(*fujiang_list[TEXT("SkillUnlock_2")]);
		info.SkillUnlock_3 = FCString::Atoi(*fujiang_list[TEXT("SkillUnlock_3")]);
		info.SkillUnlock_4 = FCString::Atoi(*fujiang_list[TEXT("SkillUnlock_4")]);
		info.FormationUnlock_1 = FCString::Atoi(*fujiang_list[TEXT("FormationUnlock_1")]);
		info.FormationUnlock_2 = FCString::Atoi(*fujiang_list[TEXT("FormationUnlock_2")]);
		info.FormationUnlock_3 = FCString::Atoi(*fujiang_list[TEXT("FormationUnlock_3")]);
		info.FormationUnlock_4 = FCString::Atoi(*fujiang_list[TEXT("FormationUnlock_4")]);
		info.Sell = FCString::Atoi(*fujiang_list[TEXT("Sell")]);
		info.nTroopMoveId = FCString::Atoi(*fujiang_list[TEXT("nTroopMoveId")]);
		info.fRemoteAtkFactor = FCString::Atof(*fujiang_list[TEXT("fRemoteAtkFactor")]);
		info.fDefenseRemoteAtk = FCString::Atof(*fujiang_list[TEXT("fDefenseRemoteAtk")]);
		info.nFight = FCString::Atoi(*fujiang_list[TEXT("nFight")]);
		info.nStrategy = FCString::Atoi(*fujiang_list[TEXT("nStrategy")]);
		info.nBubing = FCString::Atoi(*fujiang_list[TEXT("nBubing")]);
		info.nGongnu = FCString::Atoi(*fujiang_list[TEXT("nGongnu")]);
		info.nQibing = FCString::Atoi(*fujiang_list[TEXT("nQibing")]);
		info.nQishe = FCString::Atoi(*fujiang_list[TEXT("nQishe")]);
		info.nKeepsakeId = FCString::Atoi(*fujiang_list[TEXT("nKeepsakeId")]);
		info.nKeepsakeNum = FCString::Atoi(*fujiang_list[TEXT("nKeepsakeNum")]);
		info.nTag = FCString::Atoi(*fujiang_list[TEXT("nTag")]);
		info.nNationType = FCString::Atoi(*fujiang_list[TEXT("nNationType")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_hero_levexp(int id, OUT Frontend_txt_struct_hero_levexp& info)
{
	info.id = 0;
	TMap<FString, FString> hero_levexp_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("hero_levexp"), id, hero_levexp_list);
	if (hero_levexp_list.Num() > 0)
	{
		info.id = FCString::Atoi(*hero_levexp_list[TEXT("id")]);
		info.grade = FCString::Atoi(*hero_levexp_list[TEXT("grade")]);
		info.level = FCString::Atoi(*hero_levexp_list[TEXT("level")]);
		info.exp = FCString::Atoi(*hero_levexp_list[TEXT("exp")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_hero_levexp_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_hero_levexp info;
	if(!Get_Frontend_txt_struct_hero_levexp(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("grade"), FString::FromInt(info.grade));
	out.Add(TEXT("level"), FString::FromInt(info.level));
	out.Add(TEXT("exp"), FString::FromInt(info.exp));
	return true;
}

bool Get_Frontend_txt_struct_hero_type(int id, OUT Frontend_txt_struct_hero_type& info)
{
	info.id = 0;
	TMap<FString, FString> hero_type_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("hero_type"), id, hero_type_list);
	if (hero_type_list.Num() > 0)
	{
		info.id = FCString::Atoi(*hero_type_list[TEXT("id")]);
		info.name = hero_type_list[TEXT("name")];
		info.lev = FCString::Atoi(*hero_type_list[TEXT("lev")]);
		info.require_lev = FCString::Atoi(*hero_type_list[TEXT("require_lev")]);
		info.require_prestige = FCString::Atoi(*hero_type_list[TEXT("require_prestige")]);
		info.require_moneytype = FCString::Atoi(*hero_type_list[TEXT("require_moneytype")]);
		info.require_price = FCString::Atoi(*hero_type_list[TEXT("require_price")]);
		info.require_item = FCString::Atoi(*hero_type_list[TEXT("require_item")]);
		info.require_itemnum = FCString::Atoi(*hero_type_list[TEXT("require_itemnum")]);
		info.employment_moneytype = FCString::Atoi(*hero_type_list[TEXT("employment_moneytype")]);
		info.employment_price = FCString::Atoi(*hero_type_list[TEXT("employment_price")]);
		info.coat1 = FCString::Atoi(*hero_type_list[TEXT("coat1")]);
		info.coat2 = FCString::Atoi(*hero_type_list[TEXT("coat2")]);
		info.coat2_moneytype = FCString::Atoi(*hero_type_list[TEXT("coat2_moneytype")]);
		info.coat2_price = FCString::Atoi(*hero_type_list[TEXT("coat2_price")]);
		info.coat3 = FCString::Atoi(*hero_type_list[TEXT("coat3")]);
		info.coat3_moneytype = FCString::Atoi(*hero_type_list[TEXT("coat3_moneytype")]);
		info.coat3_price = FCString::Atoi(*hero_type_list[TEXT("coat3_price")]);
		info.coat4 = FCString::Atoi(*hero_type_list[TEXT("coat4")]);
		info.coat4_moneytype = FCString::Atoi(*hero_type_list[TEXT("coat4_moneytype")]);
		info.coat4_price = FCString::Atoi(*hero_type_list[TEXT("coat4_price")]);
		info.exp_effect = FCString::Atoi(*hero_type_list[TEXT("exp_effect")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_itemtype(int id, OUT Frontend_txt_struct_itemtype& info)
{
	info.id = 0;
	TMap<FString, FString> itemtype_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("itemtype"), id, itemtype_list);
	if (itemtype_list.Num() > 0)
	{
		info.id = FCString::Atoi(*itemtype_list[TEXT("id")]);
		info.name = itemtype_list[TEXT("name")];
		info.level = FCString::Atoi(*itemtype_list[TEXT("level")]);
		info.pack = FCString::Atoi(*itemtype_list[TEXT("pack")]);
		info.money = FCString::Atoi(*itemtype_list[TEXT("money")]);
		info.emoney = FCString::Atoi(*itemtype_list[TEXT("emoney")]);
		info.exploit = FCString::Atoi(*itemtype_list[TEXT("exploit")]);
		info.sell_money = FCString::Atoi(*itemtype_list[TEXT("sell_money")]);
		info.type = FCString::Atoi(*itemtype_list[TEXT("type")]);
		info.award_ID = FCString::Atoi(*itemtype_list[TEXT("award_ID")]);
		info.text = itemtype_list[TEXT("text")];
		info.message = itemtype_list[TEXT("message")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_Rank_Property(int id, OUT Frontend_txt_struct_Rank_Property& info)
{
	info.id = 0;
	TMap<FString, FString> Rank_Property_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("Rank_Property"), id, Rank_Property_list);
	if (Rank_Property_list.Num() > 0)
	{
		info.id = FCString::Atoi(*Rank_Property_list[TEXT("id")]);
		info.propertytext = Rank_Property_list[TEXT("propertytext")];
		info.type = FCString::Atoi(*Rank_Property_list[TEXT("type")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_rank_tree(int id, OUT Frontend_txt_struct_rank_tree& info)
{
	info.rank_id = 0;
	TMap<FString, FString> rank_tree_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("rank_tree"), id, rank_tree_list);
	if (rank_tree_list.Num() > 0)
	{
		info.rank_id = FCString::Atoi(*rank_tree_list[TEXT("rank_id")]);
		info.army_type = FCString::Atoi(*rank_tree_list[TEXT("army_type")]);
		info.lev = FCString::Atoi(*rank_tree_list[TEXT("lev")]);
		info.name = rank_tree_list[TEXT("name")];
		info.country = FCString::Atoi(*rank_tree_list[TEXT("country")]);
		info.pre_rank1 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1")]);
		info.pre_rank1_exp = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_exp")]);
		info.pre_rank1_price = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_price")]);
		info.pre_rank1_con1 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_con1")]);
		info.pre_rank1_con2 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_con2")]);
		info.pre_rank1_con3 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_con3")]);
		info.pre_rank1_con4 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_con4")]);
		info.pre_rank1_con5 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank1_con5")]);
		info.pre_rank2 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2")]);
		info.pre_rank2_exp = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_exp")]);
		info.pre_rank2_price = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_price")]);
		info.pre_rank2_con1 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_con1")]);
		info.pre_rank2_con2 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_con2")]);
		info.pre_rank2_con3 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_con3")]);
		info.pre_rank2_con4 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_con4")]);
		info.pre_rank2_con5 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank2_con5")]);
		info.pre_rank3 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3")]);
		info.pre_rank3_exp = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_exp")]);
		info.pre_rank3_price = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_price")]);
		info.pre_rank3_con1 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con1")]);
		info.pre_rank3_con2 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con2")]);
		info.pre_rank3_con3 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con3")]);
		info.pre_rank3_con4 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con4")]);
		info.pre_rank3_con5 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con5")]);
		info.pre_rank3_con5 = FCString::Atoi(*rank_tree_list[TEXT("pre_rank3_con5")]);
		info.rank_property = rank_tree_list[TEXT("rank_property")];
		info.NearAttack = FCString::Atoi(*rank_tree_list[TEXT("NearAttack")]);
		info.FarAttack = FCString::Atoi(*rank_tree_list[TEXT("FarAttack")]);
		info.NearDefence = FCString::Atoi(*rank_tree_list[TEXT("NearDefence")]);
		info.FarDefence = FCString::Atoi(*rank_tree_list[TEXT("FarDefence")]);
		info.MoveSpeed = FCString::Atoi(*rank_tree_list[TEXT("MoveSpeed")]);
		info.rank_type = FCString::Atoi(*rank_tree_list[TEXT("rank_type")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_role_levexp(int id, OUT Frontend_txt_struct_role_levexp& info)
{
	info.level = 0;
	TMap<FString, FString> role_levexp_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("role_levexp"), id, role_levexp_list);
	if (role_levexp_list.Num() > 0)
	{
		info.level = FCString::Atoi(*role_levexp_list[TEXT("level")]);
		info.exp = FCString::Atoi(*role_levexp_list[TEXT("exp")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_role_levexp_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_role_levexp info;
	if(!Get_Frontend_txt_struct_role_levexp(id, info))
	{
		return false;
	}

	out.Add(TEXT("level"), FString::FromInt(info.level));
	out.Add(TEXT("exp"), FString::FromInt(info.exp));
	return true;
}

bool Get_Frontend_txt_struct_science_tree(int id, OUT Frontend_txt_struct_science_tree& info)
{
	info.id = 0;
	TMap<FString, FString> science_tree_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("science_tree"), id, science_tree_list);
	if (science_tree_list.Num() > 0)
	{
		info.id = FCString::Atoi(*science_tree_list[TEXT("id")]);
		info.rank_id = FCString::Atoi(*science_tree_list[TEXT("rank_id")]);
		info.lev = FCString::Atoi(*science_tree_list[TEXT("lev")]);
		info.type = FCString::Atoi(*science_tree_list[TEXT("type")]);
		info.pre_science1 = FCString::Atoi(*science_tree_list[TEXT("pre_science1")]);
		info.pre_science2 = FCString::Atoi(*science_tree_list[TEXT("pre_science2")]);
		info.pre_science3 = FCString::Atoi(*science_tree_list[TEXT("pre_science3")]);
		info.pre_science4 = FCString::Atoi(*science_tree_list[TEXT("pre_science4")]);
		info.pre_science5 = FCString::Atoi(*science_tree_list[TEXT("pre_science5")]);
		info.exp = FCString::Atoi(*science_tree_list[TEXT("exp")]);
		info.exploit = FCString::Atoi(*science_tree_list[TEXT("exploit")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_science_tree_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_science_tree info;
	if(!Get_Frontend_txt_struct_science_tree(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("rank_id"), FString::FromInt(info.rank_id));
	out.Add(TEXT("lev"), FString::FromInt(info.lev));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("pre_science1"), FString::FromInt(info.pre_science1));
	out.Add(TEXT("pre_science2"), FString::FromInt(info.pre_science2));
	out.Add(TEXT("pre_science3"), FString::FromInt(info.pre_science3));
	out.Add(TEXT("pre_science4"), FString::FromInt(info.pre_science4));
	out.Add(TEXT("pre_science5"), FString::FromInt(info.pre_science5));
	out.Add(TEXT("exp"), FString::FromInt(info.exp));
	out.Add(TEXT("exploit"), FString::FromInt(info.exploit));
	return true;
}

bool Get_Frontend_txt_struct_science_type(int id, OUT Frontend_txt_struct_science_type& info)
{
	info.id = 0;
	TMap<FString, FString> science_type_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("science_type"), id, science_type_list);
	if (science_type_list.Num() > 0)
	{
		info.id = FCString::Atoi(*science_type_list[TEXT("id")]);
		info.ident = FCString::Atoi(*science_type_list[TEXT("ident")]);
		info.name = science_type_list[TEXT("name")];
		info.sci_type = FCString::Atoi(*science_type_list[TEXT("sci_type")]);
		info.sci_id = FCString::Atoi(*science_type_list[TEXT("sci_id")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_sign_reward(int id, OUT Frontend_txt_struct_sign_reward& info)
{
	info.id = 0;
	TMap<FString, FString> sign_reward_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("sign_reward"), id, sign_reward_list);
	if (sign_reward_list.Num() > 0)
	{
		info.id = FCString::Atoi(*sign_reward_list[TEXT("id")]);
		info.user_lev = FCString::Atoi(*sign_reward_list[TEXT("user_lev")]);
		info.reward_type = FCString::Atoi(*sign_reward_list[TEXT("reward_type")]);
		info.day_num = FCString::Atoi(*sign_reward_list[TEXT("day_num")]);
		info.item_type = FCString::Atoi(*sign_reward_list[TEXT("item_type")]);
		info.item_num = FCString::Atoi(*sign_reward_list[TEXT("item_num")]);
		info.money = FCString::Atoi(*sign_reward_list[TEXT("money")]);
		info.emoney = FCString::Atoi(*sign_reward_list[TEXT("emoney")]);
		info.general_exp = FCString::Atoi(*sign_reward_list[TEXT("general_exp")]);
		info.lev_exp = FCString::Atoi(*sign_reward_list[TEXT("lev_exp")]);
		info.dataID = FCString::Atoi(*sign_reward_list[TEXT("dataID")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_sign_reward_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_sign_reward info;
	if(!Get_Frontend_txt_struct_sign_reward(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("user_lev"), FString::FromInt(info.user_lev));
	out.Add(TEXT("reward_type"), FString::FromInt(info.reward_type));
	out.Add(TEXT("day_num"), FString::FromInt(info.day_num));
	out.Add(TEXT("item_type"), FString::FromInt(info.item_type));
	out.Add(TEXT("item_num"), FString::FromInt(info.item_num));
	out.Add(TEXT("money"), FString::FromInt(info.money));
	out.Add(TEXT("emoney"), FString::FromInt(info.emoney));
	out.Add(TEXT("general_exp"), FString::FromInt(info.general_exp));
	out.Add(TEXT("lev_exp"), FString::FromInt(info.lev_exp));
	out.Add(TEXT("dataID"), FString::FromInt(info.dataID));
	return true;
}

bool Get_Frontend_txt_struct_unlawful(int id, OUT Frontend_txt_struct_unlawful& info)
{
	info.ID = 0;
	TMap<FString, FString> unlawful_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("unlawful"), id, unlawful_list);
	if (unlawful_list.Num() > 0)
	{
		info.ID = FCString::Atoi(*unlawful_list[TEXT("ID")]);
		info.WORD = unlawful_list[TEXT("WORD")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_achievement(int id, OUT Frontend_txt_struct_achievement& info)
{
	info.Id = 0;
	TMap<FString, FString> achievement_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("achievement"), id, achievement_list);
	if (achievement_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*achievement_list[TEXT("Id")]);
		info.MedalType = FCString::Atoi(*achievement_list[TEXT("MedalType")]);
		info.AchieveName = achievement_list[TEXT("AchieveName")];
		info.nCondition = FCString::Atoi(*achievement_list[TEXT("nCondition")]);
		info.nMapId = FCString::Atoi(*achievement_list[TEXT("nMapId")]);
		info.GameMode = achievement_list[TEXT("GameMode")];
		info.SubGameMode_Crusade = achievement_list[TEXT("SubGameMode_Crusade")];
		info.SubGameMode_Hero = achievement_list[TEXT("SubGameMode_Hero")];
		info.nDistance = FCString::Atoi(*achievement_list[TEXT("nDistance")]);
		info.nWeaponClass = FCString::Atoi(*achievement_list[TEXT("nWeaponClass")]);
		info.nWeaponKind = FCString::Atoi(*achievement_list[TEXT("nWeaponKind")]);
		info.nWeaponType = FCString::Atoi(*achievement_list[TEXT("nWeaponType")]);
		info.nEnemyType = FCString::Atoi(*achievement_list[TEXT("nEnemyType")]);
		info.nTime = FCString::Atoi(*achievement_list[TEXT("nTime")]);
		info.nHpPercent = FCString::Atoi(*achievement_list[TEXT("nHpPercent")]);
		info.nTeamDead = FCString::Atoi(*achievement_list[TEXT("nTeamDead")]);
		info.nOneLifeCycle = FCString::Atoi(*achievement_list[TEXT("nOneLifeCycle")]);
		info.nOneHitCycle = FCString::Atoi(*achievement_list[TEXT("nOneHitCycle")]);
		info.nHeadShot = FCString::Atoi(*achievement_list[TEXT("nHeadShot")]);
		info.nComboShot = FCString::Atoi(*achievement_list[TEXT("nComboShot")]);
		info.nEnemyHpPercent = FCString::Atoi(*achievement_list[TEXT("nEnemyHpPercent")]);
		info.nAchieveNum = FCString::Atoi(*achievement_list[TEXT("nAchieveNum")]);
		info.nEnemyAllAlive = FCString::Atoi(*achievement_list[TEXT("nEnemyAllAlive")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_agentparam(int id, OUT Frontend_txt_struct_agentparam& info)
{
	info.type = 0;
	TMap<FString, FString> agentparam_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("agentparam"), id, agentparam_list);
	if (agentparam_list.Num() > 0)
	{
		info.type = FCString::Atoi(*agentparam_list[TEXT("type")]);
		info.desc = agentparam_list[TEXT("desc")];
		info.radius = FCString::Atof(*agentparam_list[TEXT("radius")]);
		info.samecamp_radius = FCString::Atof(*agentparam_list[TEXT("samecamp_radius")]);
		info.enemy_radius = FCString::Atof(*agentparam_list[TEXT("enemy_radius")]);
		info.width = FCString::Atof(*agentparam_list[TEXT("width")]);
		info.height = FCString::Atoi(*agentparam_list[TEXT("height")]);
		info.collision_query_range = FCString::Atoi(*agentparam_list[TEXT("collision_query_range")]);
		info.path_optimization_range = FCString::Atoi(*agentparam_list[TEXT("path_optimization_range")]);
		info.separation_weight = FCString::Atoi(*agentparam_list[TEXT("separation_weight")]);
		info.update_flags = FCString::Atoi(*agentparam_list[TEXT("update_flags")]);
		info.obstacle_avoidance_type = FCString::Atoi(*agentparam_list[TEXT("obstacle_avoidance_type")]);
		info.max_nneis = FCString::Atoi(*agentparam_list[TEXT("max_nneis")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_agentparam_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_agentparam info;
	if(!Get_Frontend_txt_struct_agentparam(id, info))
	{
		return false;
	}

	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("radius"), FString::SanitizeFloat(info.radius));
	out.Add(TEXT("samecamp_radius"), FString::SanitizeFloat(info.samecamp_radius));
	out.Add(TEXT("enemy_radius"), FString::SanitizeFloat(info.enemy_radius));
	out.Add(TEXT("width"), FString::SanitizeFloat(info.width));
	out.Add(TEXT("height"), FString::FromInt(info.height));
	out.Add(TEXT("collision_query_range"), FString::FromInt(info.collision_query_range));
	out.Add(TEXT("path_optimization_range"), FString::FromInt(info.path_optimization_range));
	out.Add(TEXT("separation_weight"), FString::FromInt(info.separation_weight));
	out.Add(TEXT("update_flags"), FString::FromInt(info.update_flags));
	out.Add(TEXT("obstacle_avoidance_type"), FString::FromInt(info.obstacle_avoidance_type));
	out.Add(TEXT("max_nneis"), FString::FromInt(info.max_nneis));
	return true;
}

bool Get_Frontend_txt_struct_aiplayer(int id, OUT Frontend_txt_struct_aiplayer& info)
{
	info.ID = 0;
	TMap<FString, FString> aiplayer_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiplayer"), id, aiplayer_list);
	if (aiplayer_list.Num() > 0)
	{
		info.ID = FCString::Atoi(*aiplayer_list[TEXT("ID")]);
		info.Description = aiplayer_list[TEXT("Description")];
		info.ActionType = FCString::Atoi(*aiplayer_list[TEXT("ActionType")]);
		info.SoldierKind = FCString::Atoi(*aiplayer_list[TEXT("SoldierKind")]);
		info.Level = FCString::Atoi(*aiplayer_list[TEXT("Level")]);
		info.MaxSpeed = FCString::Atof(*aiplayer_list[TEXT("MaxSpeed")]);
		info.fAiHorseSpeedRate = FCString::Atof(*aiplayer_list[TEXT("fAiHorseSpeedRate")]);
		info.fAiHorseAcceRate = FCString::Atof(*aiplayer_list[TEXT("fAiHorseAcceRate")]);
		info.fAiHorseRotationRate = FCString::Atof(*aiplayer_list[TEXT("fAiHorseRotationRate")]);
		info.fAiAttackSpeedRate = FCString::Atof(*aiplayer_list[TEXT("fAiAttackSpeedRate")]);
		info.CausePlayerDamage = FCString::Atof(*aiplayer_list[TEXT("CausePlayerDamage")]);
		info.RotationRate = FCString::Atof(*aiplayer_list[TEXT("RotationRate")]);
		info.fAccelRate = FCString::Atof(*aiplayer_list[TEXT("fAccelRate")]);
		info.AlertRange1 = FCString::Atoi(*aiplayer_list[TEXT("AlertRange1")]);
		info.AlertRange2 = FCString::Atoi(*aiplayer_list[TEXT("AlertRange2")]);
		info.AlertRange3 = FCString::Atoi(*aiplayer_list[TEXT("AlertRange3")]);
		info.AlertRange4 = FCString::Atoi(*aiplayer_list[TEXT("AlertRange4")]);
		info.ArmorType = FCString::Atoi(*aiplayer_list[TEXT("ArmorType")]);
		info.AlertHewupPercent = FCString::Atoi(*aiplayer_list[TEXT("AlertHewupPercent")]);
		info.AlertBlockPercent = FCString::Atoi(*aiplayer_list[TEXT("AlertBlockPercent")]);
		info.ShotOffsetRangeX = FCString::Atof(*aiplayer_list[TEXT("ShotOffsetRangeX")]);
		info.ShotOffsetRangeY = FCString::Atof(*aiplayer_list[TEXT("ShotOffsetRangeY")]);
		info.fAttackOrDefendProb_0 = FCString::Atoi(*aiplayer_list[TEXT("fAttackOrDefendProb_0")]);
		info.fAttackOrDefendProb_1 = FCString::Atoi(*aiplayer_list[TEXT("fAttackOrDefendProb_1")]);
		info.fAttackOrDefendProb_2 = FCString::Atoi(*aiplayer_list[TEXT("fAttackOrDefendProb_2")]);
		info.fAttackOrDefendProb_3 = FCString::Atoi(*aiplayer_list[TEXT("fAttackOrDefendProb_3")]);
		info.fMeleeAttackIntervalTime = FCString::Atof(*aiplayer_list[TEXT("fMeleeAttackIntervalTime")]);
		info.fRangeAttackIntervalTime = FCString::Atof(*aiplayer_list[TEXT("fRangeAttackIntervalTime")]);
		info.PenetrateCut = FCString::Atof(*aiplayer_list[TEXT("PenetrateCut")]);
		info.PenetratePuncture = FCString::Atof(*aiplayer_list[TEXT("PenetratePuncture")]);
		info.PenetrateBlunt = FCString::Atof(*aiplayer_list[TEXT("PenetrateBlunt")]);
		info.nAttackRandMovePercent = FCString::Atoi(*aiplayer_list[TEXT("nAttackRandMovePercent")]);
		info.nTacticalMovePercent = FCString::Atoi(*aiplayer_list[TEXT("nTacticalMovePercent")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiplayer_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiplayer info;
	if(!Get_Frontend_txt_struct_aiplayer(id, info))
	{
		return false;
	}

	out.Add(TEXT("ID"), FString::FromInt(info.ID));
	out.Add(TEXT("Description"), info.Description);
	out.Add(TEXT("ActionType"), FString::FromInt(info.ActionType));
	out.Add(TEXT("SoldierKind"), FString::FromInt(info.SoldierKind));
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("MaxSpeed"), FString::SanitizeFloat(info.MaxSpeed));
	out.Add(TEXT("fAiHorseSpeedRate"), FString::SanitizeFloat(info.fAiHorseSpeedRate));
	out.Add(TEXT("fAiHorseAcceRate"), FString::SanitizeFloat(info.fAiHorseAcceRate));
	out.Add(TEXT("fAiHorseRotationRate"), FString::SanitizeFloat(info.fAiHorseRotationRate));
	out.Add(TEXT("fAiAttackSpeedRate"), FString::SanitizeFloat(info.fAiAttackSpeedRate));
	out.Add(TEXT("CausePlayerDamage"), FString::SanitizeFloat(info.CausePlayerDamage));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("AlertRange1"), FString::FromInt(info.AlertRange1));
	out.Add(TEXT("AlertRange2"), FString::FromInt(info.AlertRange2));
	out.Add(TEXT("AlertRange3"), FString::FromInt(info.AlertRange3));
	out.Add(TEXT("AlertRange4"), FString::FromInt(info.AlertRange4));
	out.Add(TEXT("ArmorType"), FString::FromInt(info.ArmorType));
	out.Add(TEXT("AlertHewupPercent"), FString::FromInt(info.AlertHewupPercent));
	out.Add(TEXT("AlertBlockPercent"), FString::FromInt(info.AlertBlockPercent));
	out.Add(TEXT("ShotOffsetRangeX"), FString::SanitizeFloat(info.ShotOffsetRangeX));
	out.Add(TEXT("ShotOffsetRangeY"), FString::SanitizeFloat(info.ShotOffsetRangeY));
	out.Add(TEXT("fAttackOrDefendProb_0"), FString::FromInt(info.fAttackOrDefendProb_0));
	out.Add(TEXT("fAttackOrDefendProb_1"), FString::FromInt(info.fAttackOrDefendProb_1));
	out.Add(TEXT("fAttackOrDefendProb_2"), FString::FromInt(info.fAttackOrDefendProb_2));
	out.Add(TEXT("fAttackOrDefendProb_3"), FString::FromInt(info.fAttackOrDefendProb_3));
	out.Add(TEXT("fMeleeAttackIntervalTime"), FString::SanitizeFloat(info.fMeleeAttackIntervalTime));
	out.Add(TEXT("fRangeAttackIntervalTime"), FString::SanitizeFloat(info.fRangeAttackIntervalTime));
	out.Add(TEXT("PenetrateCut"), FString::SanitizeFloat(info.PenetrateCut));
	out.Add(TEXT("PenetratePuncture"), FString::SanitizeFloat(info.PenetratePuncture));
	out.Add(TEXT("PenetrateBlunt"), FString::SanitizeFloat(info.PenetrateBlunt));
	out.Add(TEXT("nAttackRandMovePercent"), FString::FromInt(info.nAttackRandMovePercent));
	out.Add(TEXT("nTacticalMovePercent"), FString::FromInt(info.nTacticalMovePercent));
	return true;
}

bool Get_Frontend_txt_struct_aiskill10_attackinterval(int id, OUT Frontend_txt_struct_aiskill10_attackinterval& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill10_attackinterval_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill10_attackinterval"), id, aiskill10_attackinterval_list);
	if (aiskill10_attackinterval_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill10_attackinterval_list[TEXT("Id")]);
		info.desc = aiskill10_attackinterval_list[TEXT("desc")];
		info.fAttackIntervalRate = FCString::Atof(*aiskill10_attackinterval_list[TEXT("fAttackIntervalRate")]);
		info.nLastTime = FCString::Atoi(*aiskill10_attackinterval_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill10_attackinterval_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill10_attackinterval_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill10_attackinterval_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill10_attackinterval info;
	if(!Get_Frontend_txt_struct_aiskill10_attackinterval(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill11_continuouscut(int id, OUT Frontend_txt_struct_aiskill11_continuouscut& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill11_continuouscut_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill11_continuouscut"), id, aiskill11_continuouscut_list);
	if (aiskill11_continuouscut_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("Id")]);
		info.desc = aiskill11_continuouscut_list[TEXT("desc")];
		info.oneAttackCount = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("oneAttackCount")]);
		info.maxAttackCount = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("maxAttackCount")]);
		info.fSpeedFactor = FCString::Atof(*aiskill11_continuouscut_list[TEXT("fSpeedFactor")]);
		info.fAttackIntervalRate = FCString::Atof(*aiskill11_continuouscut_list[TEXT("fAttackIntervalRate")]);
		info.fDdamageFactor = FCString::Atof(*aiskill11_continuouscut_list[TEXT("fDdamageFactor")]);
		info.fPercent = FCString::Atof(*aiskill11_continuouscut_list[TEXT("fPercent")]);
		info.nLastTime = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill11_continuouscut_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill11_continuouscut_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill11_continuouscut info;
	if(!Get_Frontend_txt_struct_aiskill11_continuouscut(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("oneAttackCount"), FString::FromInt(info.oneAttackCount));
	out.Add(TEXT("maxAttackCount"), FString::FromInt(info.maxAttackCount));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fDdamageFactor"), FString::SanitizeFloat(info.fDdamageFactor));
	out.Add(TEXT("fPercent"), FString::SanitizeFloat(info.fPercent));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill12_firebow(int id, OUT Frontend_txt_struct_aiskill12_firebow& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill12_firebow_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill12_firebow"), id, aiskill12_firebow_list);
	if (aiskill12_firebow_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill12_firebow_list[TEXT("Id")]);
		info.desc = aiskill12_firebow_list[TEXT("desc")];
		info.nHorseLiftHoovesNeedHurt = FCString::Atoi(*aiskill12_firebow_list[TEXT("nHorseLiftHoovesNeedHurt")]);
		info.nLastTime = FCString::Atoi(*aiskill12_firebow_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill12_firebow_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill12_firebow_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill12_firebow_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill12_firebow info;
	if(!Get_Frontend_txt_struct_aiskill12_firebow(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nHorseLiftHoovesNeedHurt"), FString::FromInt(info.nHorseLiftHoovesNeedHurt));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill13_ambush(int id, OUT Frontend_txt_struct_aiskill13_ambush& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill13_ambush_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill13_ambush"), id, aiskill13_ambush_list);
	if (aiskill13_ambush_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill13_ambush_list[TEXT("Id")]);
		info.desc = aiskill13_ambush_list[TEXT("desc")];
		info.fbeDetectedRate = FCString::Atof(*aiskill13_ambush_list[TEXT("fbeDetectedRate")]);
		info.fSpeedRate = FCString::Atof(*aiskill13_ambush_list[TEXT("fSpeedRate")]);
		info.fAttackRate = FCString::Atof(*aiskill13_ambush_list[TEXT("fAttackRate")]);
		info.nBuffLastTime = FCString::Atoi(*aiskill13_ambush_list[TEXT("nBuffLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill13_ambush_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill13_ambush_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill13_ambush_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill13_ambush info;
	if(!Get_Frontend_txt_struct_aiskill13_ambush(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fbeDetectedRate"), FString::SanitizeFloat(info.fbeDetectedRate));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("nBuffLastTime"), FString::FromInt(info.nBuffLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill14_ctrlmccata(int id, OUT Frontend_txt_struct_aiskill14_ctrlmccata& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill14_ctrlmccata_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill14_ctrlmccata"), id, aiskill14_ctrlmccata_list);
	if (aiskill14_ctrlmccata_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill14_ctrlmccata_list[TEXT("Id")]);
		info.desc = aiskill14_ctrlmccata_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill14_ctrlmccata_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill14_ctrlmccata_list[TEXT("nUseEnergy")]);
		info.fFindMcRange = FCString::Atof(*aiskill14_ctrlmccata_list[TEXT("fFindMcRange")]);
		info.nBulletType = FCString::Atoi(*aiskill14_ctrlmccata_list[TEXT("nBulletType")]);
		info.nBulletCount = FCString::Atoi(*aiskill14_ctrlmccata_list[TEXT("nBulletCount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill14_ctrlmccata_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill14_ctrlmccata info;
	if(!Get_Frontend_txt_struct_aiskill14_ctrlmccata(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fFindMcRange"), FString::SanitizeFloat(info.fFindMcRange));
	out.Add(TEXT("nBulletType"), FString::FromInt(info.nBulletType));
	out.Add(TEXT("nBulletCount"), FString::FromInt(info.nBulletCount));
	return true;
}

bool Get_Frontend_txt_struct_aiskill15_formatcrossbowshield(int id, OUT Frontend_txt_struct_aiskill15_formatcrossbowshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill15_formatcrossbowshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill15_formatcrossbowshield"), id, aiskill15_formatcrossbowshield_list);
	if (aiskill15_formatcrossbowshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill15_formatcrossbowshield_list[TEXT("Id")]);
		info.desc = aiskill15_formatcrossbowshield_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill15_formatcrossbowshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill15_formatcrossbowshield_list[TEXT("nUseEnergy")]);
		info.fSpeedRate = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fSpeedRate")]);
		info.fRotateRate = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fRotateRate")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fShieldDamageRate")]);
		info.fMeleeDamageRate = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fMeleeDamageRate")]);
		info.fAttackRate = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fAttackRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fWeightFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill15_formatcrossbowshield_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill15_formatcrossbowshield_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill15_formatcrossbowshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill15_formatcrossbowshield info;
	if(!Get_Frontend_txt_struct_aiskill15_formatcrossbowshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fRotateRate"), FString::SanitizeFloat(info.fRotateRate));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fMeleeDamageRate"), FString::SanitizeFloat(info.fMeleeDamageRate));
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill16_smog(int id, OUT Frontend_txt_struct_aiskill16_smog& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill16_smog_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill16_smog"), id, aiskill16_smog_list);
	if (aiskill16_smog_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill16_smog_list[TEXT("Id")]);
		info.desc = aiskill16_smog_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill16_smog_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill16_smog_list[TEXT("nUseEnergy")]);
		info.fOneSoldierRange = FCString::Atof(*aiskill16_smog_list[TEXT("fOneSoldierRange")]);
		info.fMinRange = FCString::Atof(*aiskill16_smog_list[TEXT("fMinRange")]);
		info.fMaxRange = FCString::Atof(*aiskill16_smog_list[TEXT("fMaxRange")]);
		info.nSmogType = FCString::Atoi(*aiskill16_smog_list[TEXT("nSmogType")]);
		info.nSmogLastTime = FCString::Atoi(*aiskill16_smog_list[TEXT("nSmogLastTime")]);
		info.speed_rate = FCString::Atof(*aiskill16_smog_list[TEXT("speed_rate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill16_smog_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill16_smog info;
	if(!Get_Frontend_txt_struct_aiskill16_smog(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fOneSoldierRange"), FString::SanitizeFloat(info.fOneSoldierRange));
	out.Add(TEXT("fMinRange"), FString::SanitizeFloat(info.fMinRange));
	out.Add(TEXT("fMaxRange"), FString::SanitizeFloat(info.fMaxRange));
	out.Add(TEXT("nSmogType"), FString::FromInt(info.nSmogType));
	out.Add(TEXT("nSmogLastTime"), FString::FromInt(info.nSmogLastTime));
	out.Add(TEXT("speed_rate"), FString::SanitizeFloat(info.speed_rate));
	return true;
}

bool Get_Frontend_txt_struct_aiskill17_ctrlmcball(int id, OUT Frontend_txt_struct_aiskill17_ctrlmcball& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill17_ctrlmcball_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill17_ctrlmcball"), id, aiskill17_ctrlmcball_list);
	if (aiskill17_ctrlmcball_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill17_ctrlmcball_list[TEXT("Id")]);
		info.desc = aiskill17_ctrlmcball_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill17_ctrlmcball_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill17_ctrlmcball_list[TEXT("nUseEnergy")]);
		info.fRangeOut = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fRangeOut")]);
		info.fRangeIn = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fRangeIn")]);
		info.fSpeedSpread = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fSpeedSpread")]);
		info.fSpeedNarrow = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fSpeedNarrow")]);
		info.fSpeedRate = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fSpeedRate")]);
		info.fDamageFactor = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fDamageFactor")]);
		info.fFindMcRange = FCString::Atof(*aiskill17_ctrlmcball_list[TEXT("fFindMcRange")]);
		info.nBulletType = FCString::Atoi(*aiskill17_ctrlmcball_list[TEXT("nBulletType")]);
		info.nBulletCount = FCString::Atoi(*aiskill17_ctrlmcball_list[TEXT("nBulletCount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill17_ctrlmcball_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill17_ctrlmcball info;
	if(!Get_Frontend_txt_struct_aiskill17_ctrlmcball(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fRangeOut"), FString::SanitizeFloat(info.fRangeOut));
	out.Add(TEXT("fRangeIn"), FString::SanitizeFloat(info.fRangeIn));
	out.Add(TEXT("fSpeedSpread"), FString::SanitizeFloat(info.fSpeedSpread));
	out.Add(TEXT("fSpeedNarrow"), FString::SanitizeFloat(info.fSpeedNarrow));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fFindMcRange"), FString::SanitizeFloat(info.fFindMcRange));
	out.Add(TEXT("nBulletType"), FString::FromInt(info.nBulletType));
	out.Add(TEXT("nBulletCount"), FString::FromInt(info.nBulletCount));
	return true;
}

bool Get_Frontend_txt_struct_aiskill18_continueshot(int id, OUT Frontend_txt_struct_aiskill18_continueshot& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill18_continueshot_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill18_continueshot"), id, aiskill18_continueshot_list);
	if (aiskill18_continueshot_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill18_continueshot_list[TEXT("Id")]);
		info.desc = aiskill18_continueshot_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill18_continueshot_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill18_continueshot_list[TEXT("nUseEnergy")]);
		info.nLastTime = FCString::Atoi(*aiskill18_continueshot_list[TEXT("nLastTime")]);
		info.nShotCount = FCString::Atoi(*aiskill18_continueshot_list[TEXT("nShotCount")]);
		info.fTimeHewUp = FCString::Atof(*aiskill18_continueshot_list[TEXT("fTimeHewUp")]);
		info.fTimeOneShotInterval = FCString::Atof(*aiskill18_continueshot_list[TEXT("fTimeOneShotInterval")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill18_continueshot_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill18_continueshot info;
	if(!Get_Frontend_txt_struct_aiskill18_continueshot(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nShotCount"), FString::FromInt(info.nShotCount));
	out.Add(TEXT("fTimeHewUp"), FString::SanitizeFloat(info.fTimeHewUp));
	out.Add(TEXT("fTimeOneShotInterval"), FString::SanitizeFloat(info.fTimeOneShotInterval));
	return true;
}

bool Get_Frontend_txt_struct_aiskill19_force_change_weapon(int id, OUT Frontend_txt_struct_aiskill19_force_change_weapon& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill19_force_change_weapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill19_force_change_weapon"), id, aiskill19_force_change_weapon_list);
	if (aiskill19_force_change_weapon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("Id")]);
		info.desc = aiskill19_force_change_weapon_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("nUseEnergy")]);
		info.nForceWeaponType = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("nForceWeaponType")]);
		info.nLastTime = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("nLastTime")]);
		info.fAttackIntervalRate = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fAttackIntervalRate")]);
		info.fWeaponAttackSpeedRate = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fWeaponAttackSpeedRate")]);
		info.fAtkDamageFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fAtkDamageFactor")]);
		info.fRideSpeedFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fRideSpeedFactor")]);
		info.fGroundSpeedFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fGroundSpeedFactor")]);
		info.fAtkShieldDamageRate = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fAtkShieldDamageRate")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fHorseDamageFactor")]);
		info.nAddWeaponWeightLevel = FCString::Atoi(*aiskill19_force_change_weapon_list[TEXT("nAddWeaponWeightLevel")]);
		info.fBeAtkByMeleeDamageFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fBeAtkByMeleeDamageFactor")]);
		info.fBeAtkByRangeDamageFactor = FCString::Atof(*aiskill19_force_change_weapon_list[TEXT("fBeAtkByRangeDamageFactor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill19_force_change_weapon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill19_force_change_weapon info;
	if(!Get_Frontend_txt_struct_aiskill19_force_change_weapon(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nForceWeaponType"), FString::FromInt(info.nForceWeaponType));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fWeaponAttackSpeedRate"), FString::SanitizeFloat(info.fWeaponAttackSpeedRate));
	out.Add(TEXT("fAtkDamageFactor"), FString::SanitizeFloat(info.fAtkDamageFactor));
	out.Add(TEXT("fRideSpeedFactor"), FString::SanitizeFloat(info.fRideSpeedFactor));
	out.Add(TEXT("fGroundSpeedFactor"), FString::SanitizeFloat(info.fGroundSpeedFactor));
	out.Add(TEXT("fAtkShieldDamageRate"), FString::SanitizeFloat(info.fAtkShieldDamageRate));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("nAddWeaponWeightLevel"), FString::FromInt(info.nAddWeaponWeightLevel));
	out.Add(TEXT("fBeAtkByMeleeDamageFactor"), FString::SanitizeFloat(info.fBeAtkByMeleeDamageFactor));
	out.Add(TEXT("fBeAtkByRangeDamageFactor"), FString::SanitizeFloat(info.fBeAtkByRangeDamageFactor));
	return true;
}

bool Get_Frontend_txt_struct_aiskill1_volley(int id, OUT Frontend_txt_struct_aiskill1_volley& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill1_volley_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill1_volley"), id, aiskill1_volley_list);
	if (aiskill1_volley_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill1_volley_list[TEXT("Id")]);
		info.desc = aiskill1_volley_list[TEXT("desc")];
		info.fRangeOut = FCString::Atof(*aiskill1_volley_list[TEXT("fRangeOut")]);
		info.fRangeIn = FCString::Atof(*aiskill1_volley_list[TEXT("fRangeIn")]);
		info.fSpeedSpread = FCString::Atof(*aiskill1_volley_list[TEXT("fSpeedSpread")]);
		info.fSpeedNarrow = FCString::Atof(*aiskill1_volley_list[TEXT("fSpeedNarrow")]);
		info.fSpeedRate = FCString::Atof(*aiskill1_volley_list[TEXT("fSpeedRate")]);
		info.fDamageFactor = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactor")]);
		info.fDamageFactorBoss = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactorBoss")]);
		info.fDamageFactorInfantry = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactorInfantry")]);
		info.fDamageFactorArcher = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactorArcher")]);
		info.fDamageFactorKnight = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactorKnight")]);
		info.fDamageFactorKnightArcher = FCString::Atof(*aiskill1_volley_list[TEXT("fDamageFactorKnightArcher")]);
		info.fTimeDelayHewUpMin = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeDelayHewUpMin")]);
		info.fTimeDelayHewUpMax = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeDelayHewUpMax")]);
		info.fTimeDelayShotMin = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeDelayShotMin")]);
		info.fTimeDelayShotMax = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeDelayShotMax")]);
		info.fTimeHewUp = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeHewUp")]);
		info.fTimeLoadBullet = FCString::Atof(*aiskill1_volley_list[TEXT("fTimeLoadBullet")]);
		info.nCoolDown = FCString::Atoi(*aiskill1_volley_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill1_volley_list[TEXT("nUseEnergy")]);
		info.fMaxRadian = FCString::Atof(*aiskill1_volley_list[TEXT("fMaxRadian")]);
		info.uReduceEnergyPerShot = FCString::Atoi(*aiskill1_volley_list[TEXT("uReduceEnergyPerShot")]);
		info.uAddEnergyKillEachPerson = FCString::Atoi(*aiskill1_volley_list[TEXT("uAddEnergyKillEachPerson")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill1_volley_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill1_volley info;
	if(!Get_Frontend_txt_struct_aiskill1_volley(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fRangeOut"), FString::SanitizeFloat(info.fRangeOut));
	out.Add(TEXT("fRangeIn"), FString::SanitizeFloat(info.fRangeIn));
	out.Add(TEXT("fSpeedSpread"), FString::SanitizeFloat(info.fSpeedSpread));
	out.Add(TEXT("fSpeedNarrow"), FString::SanitizeFloat(info.fSpeedNarrow));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fDamageFactorBoss"), FString::SanitizeFloat(info.fDamageFactorBoss));
	out.Add(TEXT("fDamageFactorInfantry"), FString::SanitizeFloat(info.fDamageFactorInfantry));
	out.Add(TEXT("fDamageFactorArcher"), FString::SanitizeFloat(info.fDamageFactorArcher));
	out.Add(TEXT("fDamageFactorKnight"), FString::SanitizeFloat(info.fDamageFactorKnight));
	out.Add(TEXT("fDamageFactorKnightArcher"), FString::SanitizeFloat(info.fDamageFactorKnightArcher));
	out.Add(TEXT("fTimeDelayHewUpMin"), FString::SanitizeFloat(info.fTimeDelayHewUpMin));
	out.Add(TEXT("fTimeDelayHewUpMax"), FString::SanitizeFloat(info.fTimeDelayHewUpMax));
	out.Add(TEXT("fTimeDelayShotMin"), FString::SanitizeFloat(info.fTimeDelayShotMin));
	out.Add(TEXT("fTimeDelayShotMax"), FString::SanitizeFloat(info.fTimeDelayShotMax));
	out.Add(TEXT("fTimeHewUp"), FString::SanitizeFloat(info.fTimeHewUp));
	out.Add(TEXT("fTimeLoadBullet"), FString::SanitizeFloat(info.fTimeLoadBullet));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fMaxRadian"), FString::SanitizeFloat(info.fMaxRadian));
	out.Add(TEXT("uReduceEnergyPerShot"), FString::FromInt(info.uReduceEnergyPerShot));
	out.Add(TEXT("uAddEnergyKillEachPerson"), FString::FromInt(info.uAddEnergyKillEachPerson));
	return true;
}

bool Get_Frontend_txt_struct_aiskill20_formatshield_plus(int id, OUT Frontend_txt_struct_aiskill20_formatshield_plus& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill20_formatshield_plus_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill20_formatshield_plus"), id, aiskill20_formatshield_plus_list);
	if (aiskill20_formatshield_plus_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill20_formatshield_plus_list[TEXT("Id")]);
		info.desc = aiskill20_formatshield_plus_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill20_formatshield_plus_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill20_formatshield_plus_list[TEXT("nUseEnergy")]);
		info.fAttackIntervalRate = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fDamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fWeightFactor")]);
		info.nFormationId = FCString::Atoi(*aiskill20_formatshield_plus_list[TEXT("nFormationId")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill20_formatshield_plus_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill20_formatshield_plus_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill20_formatshield_plus_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill20_formatshield_plus info;
	if(!Get_Frontend_txt_struct_aiskill20_formatshield_plus(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill21_formatpole_plus(int id, OUT Frontend_txt_struct_aiskill21_formatpole_plus& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill21_formatpole_plus_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill21_formatpole_plus"), id, aiskill21_formatpole_plus_list);
	if (aiskill21_formatpole_plus_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill21_formatpole_plus_list[TEXT("Id")]);
		info.desc = aiskill21_formatpole_plus_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill21_formatpole_plus_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill21_formatpole_plus_list[TEXT("nUseEnergy")]);
		info.fAttackIntervalRate = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fDamageFactor")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fHorseDamageFactor")]);
		info.fWeightFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fWeightFactor")]);
		info.nFormationId = FCString::Atoi(*aiskill21_formatpole_plus_list[TEXT("nFormationId")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill21_formatpole_plus_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill21_formatpole_plus_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill21_formatpole_plus_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill21_formatpole_plus info;
	if(!Get_Frontend_txt_struct_aiskill21_formatpole_plus(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill22_formatpoleshield_plus(int id, OUT Frontend_txt_struct_aiskill22_formatpoleshield_plus& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill22_formatpoleshield_plus_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill22_formatpoleshield_plus"), id, aiskill22_formatpoleshield_plus_list);
	if (aiskill22_formatpoleshield_plus_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill22_formatpoleshield_plus_list[TEXT("Id")]);
		info.desc = aiskill22_formatpoleshield_plus_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill22_formatpoleshield_plus_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill22_formatpoleshield_plus_list[TEXT("nUseEnergy")]);
		info.fAttackIntervalRate = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fDamageFactor")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fHorseDamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fWeightFactor")]);
		info.nFormationId = FCString::Atoi(*aiskill22_formatpoleshield_plus_list[TEXT("nFormationId")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill22_formatpoleshield_plus_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill22_formatpoleshield_plus_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill22_formatpoleshield_plus_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill22_formatpoleshield_plus info;
	if(!Get_Frontend_txt_struct_aiskill22_formatpoleshield_plus(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill23_formatplus_crossbowshield(int id, OUT Frontend_txt_struct_aiskill23_formatplus_crossbowshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill23_formatplus_crossbowshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill23_formatplus_crossbowshield"), id, aiskill23_formatplus_crossbowshield_list);
	if (aiskill23_formatplus_crossbowshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill23_formatplus_crossbowshield_list[TEXT("Id")]);
		info.desc = aiskill23_formatplus_crossbowshield_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill23_formatplus_crossbowshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill23_formatplus_crossbowshield_list[TEXT("nUseEnergy")]);
		info.fSpeedRate = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fSpeedRate")]);
		info.fRotateRate = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fRotateRate")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fShieldDamageRate")]);
		info.fMeleeDamageRate = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fMeleeDamageRate")]);
		info.fAttackRate = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fAttackRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fWeightFactor")]);
		info.nFormationId = FCString::Atoi(*aiskill23_formatplus_crossbowshield_list[TEXT("nFormationId")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill23_formatplus_crossbowshield_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill23_formatplus_crossbowshield_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill23_formatplus_crossbowshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill23_formatplus_crossbowshield info;
	if(!Get_Frontend_txt_struct_aiskill23_formatplus_crossbowshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fRotateRate"), FString::SanitizeFloat(info.fRotateRate));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fMeleeDamageRate"), FString::SanitizeFloat(info.fMeleeDamageRate));
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill24_dismount(int id, OUT Frontend_txt_struct_aiskill24_dismount& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill24_dismount_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill24_dismount"), id, aiskill24_dismount_list);
	if (aiskill24_dismount_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill24_dismount_list[TEXT("Id")]);
		info.Desc = aiskill24_dismount_list[TEXT("Desc")];
		info.fAttackRate = FCString::Atof(*aiskill24_dismount_list[TEXT("fAttackRate")]);
		info.fDefendRate = FCString::Atof(*aiskill24_dismount_list[TEXT("fDefendRate")]);
		info.fSpeedRate = FCString::Atof(*aiskill24_dismount_list[TEXT("fSpeedRate")]);
		info.nLastTime = FCString::Atoi(*aiskill24_dismount_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill24_dismount_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill24_dismount_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill24_dismount_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill24_dismount info;
	if(!Get_Frontend_txt_struct_aiskill24_dismount(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("fDefendRate"), FString::SanitizeFloat(info.fDefendRate));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill25_obstacle(int id, OUT Frontend_txt_struct_aiskill25_obstacle& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill25_obstacle_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill25_obstacle"), id, aiskill25_obstacle_list);
	if (aiskill25_obstacle_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill25_obstacle_list[TEXT("Id")]);
		info.Desc = aiskill25_obstacle_list[TEXT("Desc")];
		info.nObstacleId = FCString::Atoi(*aiskill25_obstacle_list[TEXT("nObstacleId")]);
		info.fActionTime = FCString::Atof(*aiskill25_obstacle_list[TEXT("fActionTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill25_obstacle_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill25_obstacle_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill25_obstacle_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill25_obstacle info;
	if(!Get_Frontend_txt_struct_aiskill25_obstacle(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nObstacleId"), FString::FromInt(info.nObstacleId));
	out.Add(TEXT("fActionTime"), FString::SanitizeFloat(info.fActionTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill26_remoteattack(int id, OUT Frontend_txt_struct_aiskill26_remoteattack& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill26_remoteattack_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill26_remoteattack"), id, aiskill26_remoteattack_list);
	if (aiskill26_remoteattack_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill26_remoteattack_list[TEXT("Id")]);
		info.desc = aiskill26_remoteattack_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill26_remoteattack_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill26_remoteattack_list[TEXT("nUseEnergy")]);
		info.nLastTime = FCString::Atoi(*aiskill26_remoteattack_list[TEXT("nLastTime")]);
		info.fRadius = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fRadius")]);
		info.fSpeedRate = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fSpeedRate")]);
		info.fDamageFactor = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactor")]);
		info.fDamageFactorBoss = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactorBoss")]);
		info.fDamageFactorInfantry = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactorInfantry")]);
		info.fDamageFactorArcher = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactorArcher")]);
		info.fDamageFactorKnight = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactorKnight")]);
		info.fDamageFactorKnightArcher = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fDamageFactorKnightArcher")]);
		info.fTimeHewUp = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fTimeHewUp")]);
		info.fTimeLoadBullet = FCString::Atof(*aiskill26_remoteattack_list[TEXT("fTimeLoadBullet")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill26_remoteattack_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill26_remoteattack info;
	if(!Get_Frontend_txt_struct_aiskill26_remoteattack(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fDamageFactorBoss"), FString::SanitizeFloat(info.fDamageFactorBoss));
	out.Add(TEXT("fDamageFactorInfantry"), FString::SanitizeFloat(info.fDamageFactorInfantry));
	out.Add(TEXT("fDamageFactorArcher"), FString::SanitizeFloat(info.fDamageFactorArcher));
	out.Add(TEXT("fDamageFactorKnight"), FString::SanitizeFloat(info.fDamageFactorKnight));
	out.Add(TEXT("fDamageFactorKnightArcher"), FString::SanitizeFloat(info.fDamageFactorKnightArcher));
	out.Add(TEXT("fTimeHewUp"), FString::SanitizeFloat(info.fTimeHewUp));
	out.Add(TEXT("fTimeLoadBullet"), FString::SanitizeFloat(info.fTimeLoadBullet));
	return true;
}

bool Get_Frontend_txt_struct_aiskill27_powerfulthrow(int id, OUT Frontend_txt_struct_aiskill27_powerfulthrow& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill27_powerfulthrow_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill27_powerfulthrow"), id, aiskill27_powerfulthrow_list);
	if (aiskill27_powerfulthrow_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("Id")]);
		info.desc = aiskill27_powerfulthrow_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nUseEnergy")]);
		info.fPersist1CostTimeSec = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist1CostTimeSec")]);
		info.fPersist2CostTimeSec = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist2CostTimeSec")]);
		info.nPersist1AdditionWeaponWeightLevel = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nPersist1AdditionWeaponWeightLevel")]);
		info.nPersist2AdditionWeaponWeightLevel = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nPersist2AdditionWeaponWeightLevel")]);
		info.fPersist1AtkDamageFactor = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist1AtkDamageFactor")]);
		info.fPersist2AtkDamageFactor = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist2AtkDamageFactor")]);
		info.fPersist1AtkShieldDamageFactor = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist1AtkShieldDamageFactor")]);
		info.fPersist2AtkShieldDamageFactor = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fPersist2AtkShieldDamageFactor")]);
		info.nPersist1AdditionPenetrate = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nPersist1AdditionPenetrate")]);
		info.nPersist2AdditionPenetrate = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nPersist2AdditionPenetrate")]);
		info.fDamageFactorBoss = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fDamageFactorBoss")]);
		info.fDamageFactorInfantry = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fDamageFactorInfantry")]);
		info.fDamageFactorArcher = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fDamageFactorArcher")]);
		info.fDamageFactorKnight = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fDamageFactorKnight")]);
		info.fDamageFactorKnightArcher = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fDamageFactorKnightArcher")]);
		info.fCheckRadius = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fCheckRadius")]);
		info.fMinPersistTimePercent = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fMinPersistTimePercent")]);
		info.nForceUseHeavyJavelin = FCString::Atoi(*aiskill27_powerfulthrow_list[TEXT("nForceUseHeavyJavelin")]);
		info.fSpeedRate = FCString::Atof(*aiskill27_powerfulthrow_list[TEXT("fSpeedRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill27_powerfulthrow_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill27_powerfulthrow info;
	if(!Get_Frontend_txt_struct_aiskill27_powerfulthrow(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fPersist1CostTimeSec"), FString::SanitizeFloat(info.fPersist1CostTimeSec));
	out.Add(TEXT("fPersist2CostTimeSec"), FString::SanitizeFloat(info.fPersist2CostTimeSec));
	out.Add(TEXT("nPersist1AdditionWeaponWeightLevel"), FString::FromInt(info.nPersist1AdditionWeaponWeightLevel));
	out.Add(TEXT("nPersist2AdditionWeaponWeightLevel"), FString::FromInt(info.nPersist2AdditionWeaponWeightLevel));
	out.Add(TEXT("fPersist1AtkDamageFactor"), FString::SanitizeFloat(info.fPersist1AtkDamageFactor));
	out.Add(TEXT("fPersist2AtkDamageFactor"), FString::SanitizeFloat(info.fPersist2AtkDamageFactor));
	out.Add(TEXT("fPersist1AtkShieldDamageFactor"), FString::SanitizeFloat(info.fPersist1AtkShieldDamageFactor));
	out.Add(TEXT("fPersist2AtkShieldDamageFactor"), FString::SanitizeFloat(info.fPersist2AtkShieldDamageFactor));
	out.Add(TEXT("nPersist1AdditionPenetrate"), FString::FromInt(info.nPersist1AdditionPenetrate));
	out.Add(TEXT("nPersist2AdditionPenetrate"), FString::FromInt(info.nPersist2AdditionPenetrate));
	out.Add(TEXT("fDamageFactorBoss"), FString::SanitizeFloat(info.fDamageFactorBoss));
	out.Add(TEXT("fDamageFactorInfantry"), FString::SanitizeFloat(info.fDamageFactorInfantry));
	out.Add(TEXT("fDamageFactorArcher"), FString::SanitizeFloat(info.fDamageFactorArcher));
	out.Add(TEXT("fDamageFactorKnight"), FString::SanitizeFloat(info.fDamageFactorKnight));
	out.Add(TEXT("fDamageFactorKnightArcher"), FString::SanitizeFloat(info.fDamageFactorKnightArcher));
	out.Add(TEXT("fCheckRadius"), FString::SanitizeFloat(info.fCheckRadius));
	out.Add(TEXT("fMinPersistTimePercent"), FString::SanitizeFloat(info.fMinPersistTimePercent));
	out.Add(TEXT("nForceUseHeavyJavelin"), FString::FromInt(info.nForceUseHeavyJavelin));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	return true;
}

bool Get_Frontend_txt_struct_aiskill28_testudo(int id, OUT Frontend_txt_struct_aiskill28_testudo& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill28_testudo_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill28_testudo"), id, aiskill28_testudo_list);
	if (aiskill28_testudo_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill28_testudo_list[TEXT("Id")]);
		info.desc = aiskill28_testudo_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill28_testudo_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill28_testudo_list[TEXT("nUseEnergy")]);
		info.fSpeedFactor = FCString::Atof(*aiskill28_testudo_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill28_testudo_list[TEXT("fRotateFactor")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill28_testudo_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill28_testudo_list[TEXT("fRangeDamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill28_testudo_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill28_testudo_list[TEXT("fWeightFactor")]);
		info.nSarcasmInit = FCString::Atoi(*aiskill28_testudo_list[TEXT("nSarcasmInit")]);
		info.nSarcasmLastTime = FCString::Atoi(*aiskill28_testudo_list[TEXT("nSarcasmLastTime")]);
		info.nFormationId = FCString::Atoi(*aiskill28_testudo_list[TEXT("nFormationId")]);
		info.nLastTime = FCString::Atoi(*aiskill28_testudo_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill28_testudo_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill28_testudo info;
	if(!Get_Frontend_txt_struct_aiskill28_testudo(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nSarcasmInit"), FString::FromInt(info.nSarcasmInit));
	out.Add(TEXT("nSarcasmLastTime"), FString::FromInt(info.nSarcasmLastTime));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill29_shieldhit(int id, OUT Frontend_txt_struct_aiskill29_shieldhit& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill29_shieldhit_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill29_shieldhit"), id, aiskill29_shieldhit_list);
	if (aiskill29_shieldhit_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("Id")]);
		info.desc = aiskill29_shieldhit_list[TEXT("desc")];
		info.fDamageFactor = FCString::Atof(*aiskill29_shieldhit_list[TEXT("fDamageFactor")]);
		info.fPercent = FCString::Atof(*aiskill29_shieldhit_list[TEXT("fPercent")]);
		info.nCoolDown = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("nUseEnergy")]);
		info.fPushDistanceFactor = FCString::Atof(*aiskill29_shieldhit_list[TEXT("fPushDistanceFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("nLastTime")]);
		info.nOneAttackCount = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("nOneAttackCount")]);
		info.nMaxAttackCount = FCString::Atoi(*aiskill29_shieldhit_list[TEXT("nMaxAttackCount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill29_shieldhit_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill29_shieldhit info;
	if(!Get_Frontend_txt_struct_aiskill29_shieldhit(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fPercent"), FString::SanitizeFloat(info.fPercent));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fPushDistanceFactor"), FString::SanitizeFloat(info.fPushDistanceFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nOneAttackCount"), FString::FromInt(info.nOneAttackCount));
	out.Add(TEXT("nMaxAttackCount"), FString::FromInt(info.nMaxAttackCount));
	return true;
}

bool Get_Frontend_txt_struct_aiskill2_formatshield(int id, OUT Frontend_txt_struct_aiskill2_formatshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill2_formatshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill2_formatshield"), id, aiskill2_formatshield_list);
	if (aiskill2_formatshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill2_formatshield_list[TEXT("Id")]);
		info.desc = aiskill2_formatshield_list[TEXT("desc")];
		info.fAttackIntervalRate = FCString::Atof(*aiskill2_formatshield_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fRotateFactor")]);
		info.fDdamageFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fDdamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill2_formatshield_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fWeightFactor")]);
		info.nCoolDown = FCString::Atoi(*aiskill2_formatshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill2_formatshield_list[TEXT("nUseEnergy")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill2_formatshield_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill2_formatshield_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill2_formatshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill2_formatshield info;
	if(!Get_Frontend_txt_struct_aiskill2_formatshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDdamageFactor"), FString::SanitizeFloat(info.fDdamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill30_javelinshield(int id, OUT Frontend_txt_struct_aiskill30_javelinshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill30_javelinshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill30_javelinshield"), id, aiskill30_javelinshield_list);
	if (aiskill30_javelinshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill30_javelinshield_list[TEXT("Id")]);
		info.desc = aiskill30_javelinshield_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill30_javelinshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill30_javelinshield_list[TEXT("nUseEnergy")]);
		info.fSpeedNarrow = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fSpeedNarrow")]);
		info.fSpeedSpread = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fSpeedSpread")]);
		info.fDamageFactorBoss = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorBoss")]);
		info.fDamageFactorInfantry = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorInfantry")]);
		info.fDamageFactorArcher = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorArcher")]);
		info.fDamageFactorKnight = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorKnight")]);
		info.fDamageFactorKnightArcher = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorKnightArcher")]);
		info.fDamageFactorPlayer = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fDamageFactorPlayer")]);
		info.fShotSpeedFactor = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fShotSpeedFactor")]);
		info.fHewUpTimeFactor = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fHewUpTimeFactor")]);
		info.fMinDisToFormatCenterFactor = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fMinDisToFormatCenterFactor")]);
		info.fMaxDisToFormatCenterFactor = FCString::Atof(*aiskill30_javelinshield_list[TEXT("fMaxDisToFormatCenterFactor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill30_javelinshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill30_javelinshield info;
	if(!Get_Frontend_txt_struct_aiskill30_javelinshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fSpeedNarrow"), FString::SanitizeFloat(info.fSpeedNarrow));
	out.Add(TEXT("fSpeedSpread"), FString::SanitizeFloat(info.fSpeedSpread));
	out.Add(TEXT("fDamageFactorBoss"), FString::SanitizeFloat(info.fDamageFactorBoss));
	out.Add(TEXT("fDamageFactorInfantry"), FString::SanitizeFloat(info.fDamageFactorInfantry));
	out.Add(TEXT("fDamageFactorArcher"), FString::SanitizeFloat(info.fDamageFactorArcher));
	out.Add(TEXT("fDamageFactorKnight"), FString::SanitizeFloat(info.fDamageFactorKnight));
	out.Add(TEXT("fDamageFactorKnightArcher"), FString::SanitizeFloat(info.fDamageFactorKnightArcher));
	out.Add(TEXT("fDamageFactorPlayer"), FString::SanitizeFloat(info.fDamageFactorPlayer));
	out.Add(TEXT("fShotSpeedFactor"), FString::SanitizeFloat(info.fShotSpeedFactor));
	out.Add(TEXT("fHewUpTimeFactor"), FString::SanitizeFloat(info.fHewUpTimeFactor));
	out.Add(TEXT("fMinDisToFormatCenterFactor"), FString::SanitizeFloat(info.fMinDisToFormatCenterFactor));
	out.Add(TEXT("fMaxDisToFormatCenterFactor"), FString::SanitizeFloat(info.fMaxDisToFormatCenterFactor));
	return true;
}

bool Get_Frontend_txt_struct_aiskill31_designated_shot(int id, OUT Frontend_txt_struct_aiskill31_designated_shot& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill31_designated_shot_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill31_designated_shot"), id, aiskill31_designated_shot_list);
	if (aiskill31_designated_shot_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill31_designated_shot_list[TEXT("Id")]);
		info.desc = aiskill31_designated_shot_list[TEXT("desc")];
		info.nCoolDown = FCString::Atoi(*aiskill31_designated_shot_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill31_designated_shot_list[TEXT("nUseEnergy")]);
		info.fRadius = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fRadius")]);
		info.fSpeedRate = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fSpeedRate")]);
		info.fTimeHewUp = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fTimeHewUp")]);
		info.fTimeLoadBullet = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fTimeLoadBullet")]);
		info.fDamageFactor = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactor")]);
		info.fDamageFactorBoss = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactorBoss")]);
		info.fDamageFactorInfantry = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactorInfantry")]);
		info.fDamageFactorArcher = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactorArcher")]);
		info.fDamageFactorKnight = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactorKnight")]);
		info.fDamageFactorKnightArcher = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDamageFactorKnightArcher")]);
		info.uReduceEnergyPerShot = FCString::Atoi(*aiskill31_designated_shot_list[TEXT("uReduceEnergyPerShot")]);
		info.uAddEnergyKillEachPerson = FCString::Atoi(*aiskill31_designated_shot_list[TEXT("uAddEnergyKillEachPerson")]);
		info.fDoVolleyIntervalTime = FCString::Atof(*aiskill31_designated_shot_list[TEXT("fDoVolleyIntervalTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill31_designated_shot_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill31_designated_shot info;
	if(!Get_Frontend_txt_struct_aiskill31_designated_shot(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("fSpeedRate"), FString::SanitizeFloat(info.fSpeedRate));
	out.Add(TEXT("fTimeHewUp"), FString::SanitizeFloat(info.fTimeHewUp));
	out.Add(TEXT("fTimeLoadBullet"), FString::SanitizeFloat(info.fTimeLoadBullet));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fDamageFactorBoss"), FString::SanitizeFloat(info.fDamageFactorBoss));
	out.Add(TEXT("fDamageFactorInfantry"), FString::SanitizeFloat(info.fDamageFactorInfantry));
	out.Add(TEXT("fDamageFactorArcher"), FString::SanitizeFloat(info.fDamageFactorArcher));
	out.Add(TEXT("fDamageFactorKnight"), FString::SanitizeFloat(info.fDamageFactorKnight));
	out.Add(TEXT("fDamageFactorKnightArcher"), FString::SanitizeFloat(info.fDamageFactorKnightArcher));
	out.Add(TEXT("uReduceEnergyPerShot"), FString::FromInt(info.uReduceEnergyPerShot));
	out.Add(TEXT("uAddEnergyKillEachPerson"), FString::FromInt(info.uAddEnergyKillEachPerson));
	out.Add(TEXT("fDoVolleyIntervalTime"), FString::SanitizeFloat(info.fDoVolleyIntervalTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill32_formatromaJavelinshield(int id, OUT Frontend_txt_struct_aiskill32_formatromaJavelinshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill32_formatromaJavelinshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill32_formatromaJavelinshield"), id, aiskill32_formatromaJavelinshield_list);
	if (aiskill32_formatromaJavelinshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill32_formatromaJavelinshield_list[TEXT("Id")]);
		info.desc = aiskill32_formatromaJavelinshield_list[TEXT("desc")];
		info.fAttackIntervalRate = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fDamageFactor")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fHorseDamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fWeightFactor")]);
		info.nCoolDown = FCString::Atoi(*aiskill32_formatromaJavelinshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill32_formatromaJavelinshield_list[TEXT("nUseEnergy")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill32_formatromaJavelinshield_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill32_formatromaJavelinshield_list[TEXT("nLastTime")]);
		info.nFormationId = FCString::Atoi(*aiskill32_formatromaJavelinshield_list[TEXT("nFormationId")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill32_formatromaJavelinshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill32_formatromaJavelinshield info;
	if(!Get_Frontend_txt_struct_aiskill32_formatromaJavelinshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	return true;
}

bool Get_Frontend_txt_struct_aiskill33_BlockState(int id, OUT Frontend_txt_struct_aiskill33_BlockState& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill33_BlockState_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill33_BlockState"), id, aiskill33_BlockState_list);
	if (aiskill33_BlockState_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill33_BlockState_list[TEXT("Id")]);
		info.desc = aiskill33_BlockState_list[TEXT("desc")];
		info.fBlockRate = FCString::Atof(*aiskill33_BlockState_list[TEXT("fBlockRate")]);
		info.nBlockFightBackPercent = FCString::Atoi(*aiskill33_BlockState_list[TEXT("nBlockFightBackPercent")]);
		info.fBlockFightBackPercentFailInterval = FCString::Atof(*aiskill33_BlockState_list[TEXT("fBlockFightBackPercentFailInterval")]);
		info.nBlockFightBackStateSec = FCString::Atoi(*aiskill33_BlockState_list[TEXT("nBlockFightBackStateSec")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill33_BlockState_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill33_BlockState_list[TEXT("fRangeDamageFactor")]);
		info.nCoolDown = FCString::Atoi(*aiskill33_BlockState_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill33_BlockState_list[TEXT("nUseEnergy")]);
		info.nLastTime = FCString::Atoi(*aiskill33_BlockState_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill33_BlockState_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill33_BlockState info;
	if(!Get_Frontend_txt_struct_aiskill33_BlockState(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fBlockRate"), FString::SanitizeFloat(info.fBlockRate));
	out.Add(TEXT("nBlockFightBackPercent"), FString::FromInt(info.nBlockFightBackPercent));
	out.Add(TEXT("fBlockFightBackPercentFailInterval"), FString::SanitizeFloat(info.fBlockFightBackPercentFailInterval));
	out.Add(TEXT("nBlockFightBackStateSec"), FString::FromInt(info.nBlockFightBackStateSec));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill34_roadshield(int id, OUT Frontend_txt_struct_aiskill34_roadshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill34_roadshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill34_roadshield"), id, aiskill34_roadshield_list);
	if (aiskill34_roadshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill34_roadshield_list[TEXT("Id")]);
		info.Desc = aiskill34_roadshield_list[TEXT("Desc")];
		info.nRoadShieldId = FCString::Atoi(*aiskill34_roadshield_list[TEXT("nRoadShieldId")]);
		info.fActionTime = FCString::Atof(*aiskill34_roadshield_list[TEXT("fActionTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill34_roadshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill34_roadshield_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill34_roadshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill34_roadshield info;
	if(!Get_Frontend_txt_struct_aiskill34_roadshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nRoadShieldId"), FString::FromInt(info.nRoadShieldId));
	out.Add(TEXT("fActionTime"), FString::SanitizeFloat(info.fActionTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill35_ThrowAssault(int id, OUT Frontend_txt_struct_aiskill35_ThrowAssault& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill35_ThrowAssault_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill35_ThrowAssault"), id, aiskill35_ThrowAssault_list);
	if (aiskill35_ThrowAssault_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("Id")]);
		info.desc = aiskill35_ThrowAssault_list[TEXT("desc")];
		info.fRateSpeedOnHorse = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fRateSpeedOnHorse")]);
		info.fMaxSpeedOnHorse = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fMaxSpeedOnHorse")]);
		info.fRateWeight = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fRateWeight")]);
		info.fRateHorseWeight = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fRateHorseWeight")]);
		info.nCoolDown = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nUseEnergy")]);
		info.nLastTime = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nLastTime")]);
		info.nAddHurtOnGround = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nAddHurtOnGround")]);
		info.nAddHurtOnHorse = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nAddHurtOnHorse")]);
		info.fDistFrontCheck = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("fDistFrontCheck")]);
		info.nIfCollision = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nIfCollision")]);
		info.nFloorMomentum = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nFloorMomentum")]);
		info.fLoadBulletTimeRate = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fLoadBulletTimeRate")]);
		info.fRemoteDamageRate = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fRemoteDamageRate")]);
		info.fShotRadius = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fShotRadius")]);
		info.nForceUseHeavyJavelin = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nForceUseHeavyJavelin")]);
		info.fMoveSpeedRate = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fMoveSpeedRate")]);
		info.fBeAttackDamageFactor = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fBeAttackDamageFactor")]);
		info.uBuffLastTimeSec = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("uBuffLastTimeSec")]);
		info.fAttackRangeRate = FCString::Atof(*aiskill35_ThrowAssault_list[TEXT("fAttackRangeRate")]);
		info.nCollisionCnt = FCString::Atoi(*aiskill35_ThrowAssault_list[TEXT("nCollisionCnt")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill35_ThrowAssault_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill35_ThrowAssault info;
	if(!Get_Frontend_txt_struct_aiskill35_ThrowAssault(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fRateSpeedOnHorse"), FString::SanitizeFloat(info.fRateSpeedOnHorse));
	out.Add(TEXT("fMaxSpeedOnHorse"), FString::SanitizeFloat(info.fMaxSpeedOnHorse));
	out.Add(TEXT("fRateWeight"), FString::SanitizeFloat(info.fRateWeight));
	out.Add(TEXT("fRateHorseWeight"), FString::SanitizeFloat(info.fRateHorseWeight));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nAddHurtOnGround"), FString::FromInt(info.nAddHurtOnGround));
	out.Add(TEXT("nAddHurtOnHorse"), FString::FromInt(info.nAddHurtOnHorse));
	out.Add(TEXT("fDistFrontCheck"), FString::FromInt(info.fDistFrontCheck));
	out.Add(TEXT("nIfCollision"), FString::FromInt(info.nIfCollision));
	out.Add(TEXT("nFloorMomentum"), FString::FromInt(info.nFloorMomentum));
	out.Add(TEXT("fLoadBulletTimeRate"), FString::SanitizeFloat(info.fLoadBulletTimeRate));
	out.Add(TEXT("fRemoteDamageRate"), FString::SanitizeFloat(info.fRemoteDamageRate));
	out.Add(TEXT("fShotRadius"), FString::SanitizeFloat(info.fShotRadius));
	out.Add(TEXT("nForceUseHeavyJavelin"), FString::FromInt(info.nForceUseHeavyJavelin));
	out.Add(TEXT("fMoveSpeedRate"), FString::SanitizeFloat(info.fMoveSpeedRate));
	out.Add(TEXT("fBeAttackDamageFactor"), FString::SanitizeFloat(info.fBeAttackDamageFactor));
	out.Add(TEXT("uBuffLastTimeSec"), FString::FromInt(info.uBuffLastTimeSec));
	out.Add(TEXT("fAttackRangeRate"), FString::SanitizeFloat(info.fAttackRangeRate));
	out.Add(TEXT("nCollisionCnt"), FString::FromInt(info.nCollisionCnt));
	return true;
}

bool Get_Frontend_txt_struct_aiskill36_SupplyThing(int id, OUT Frontend_txt_struct_aiskill36_SupplyThing& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill36_SupplyThing_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill36_SupplyThing"), id, aiskill36_SupplyThing_list);
	if (aiskill36_SupplyThing_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("Id")]);
		info.Desc = aiskill36_SupplyThing_list[TEXT("Desc")];
		info.nSupplyThingId = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nSupplyThingId")]);
		info.fActionTime = FCString::Atof(*aiskill36_SupplyThing_list[TEXT("fActionTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nUseEnergy")]);
		info.nFormationId = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nFormationId")]);
		info.nFormationMass = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nFormationMass")]);
		info.nLimitMoveSec = FCString::Atoi(*aiskill36_SupplyThing_list[TEXT("nLimitMoveSec")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill36_SupplyThing_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill36_SupplyThing info;
	if(!Get_Frontend_txt_struct_aiskill36_SupplyThing(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nSupplyThingId"), FString::FromInt(info.nSupplyThingId));
	out.Add(TEXT("fActionTime"), FString::SanitizeFloat(info.fActionTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nFormationId"), FString::FromInt(info.nFormationId));
	out.Add(TEXT("nFormationMass"), FString::FromInt(info.nFormationMass));
	out.Add(TEXT("nLimitMoveSec"), FString::FromInt(info.nLimitMoveSec));
	return true;
}

bool Get_Frontend_txt_struct_aiskill37_FollowStrike(int id, OUT Frontend_txt_struct_aiskill37_FollowStrike& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill37_FollowStrike_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill37_FollowStrike"), id, aiskill37_FollowStrike_list);
	if (aiskill37_FollowStrike_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill37_FollowStrike_list[TEXT("Id")]);
		info.Desc = aiskill37_FollowStrike_list[TEXT("Desc")];
		info.nCoolDown = FCString::Atoi(*aiskill37_FollowStrike_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill37_FollowStrike_list[TEXT("nUseEnergy")]);
		info.nLastTime = FCString::Atoi(*aiskill37_FollowStrike_list[TEXT("nLastTime")]);
		info.fSoldierHorseWeightRate = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fSoldierHorseWeightRate")]);
		info.fSoldierHorseSpeedRate = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fSoldierHorseSpeedRate")]);
		info.fSoldierHorseCollisionDamageRate = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fSoldierHorseCollisionDamageRate")]);
		info.fPlayerHorseWeightRate = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fPlayerHorseWeightRate")]);
		info.fPlayerHorseCollisionDamageRate = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fPlayerHorseCollisionDamageRate")]);
		info.fPlayerHorseAssaultSpeed = FCString::Atof(*aiskill37_FollowStrike_list[TEXT("fPlayerHorseAssaultSpeed")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill37_FollowStrike_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill37_FollowStrike info;
	if(!Get_Frontend_txt_struct_aiskill37_FollowStrike(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("fSoldierHorseWeightRate"), FString::SanitizeFloat(info.fSoldierHorseWeightRate));
	out.Add(TEXT("fSoldierHorseSpeedRate"), FString::SanitizeFloat(info.fSoldierHorseSpeedRate));
	out.Add(TEXT("fSoldierHorseCollisionDamageRate"), FString::SanitizeFloat(info.fSoldierHorseCollisionDamageRate));
	out.Add(TEXT("fPlayerHorseWeightRate"), FString::SanitizeFloat(info.fPlayerHorseWeightRate));
	out.Add(TEXT("fPlayerHorseCollisionDamageRate"), FString::SanitizeFloat(info.fPlayerHorseCollisionDamageRate));
	out.Add(TEXT("fPlayerHorseAssaultSpeed"), FString::SanitizeFloat(info.fPlayerHorseAssaultSpeed));
	return true;
}

bool Get_Frontend_txt_struct_aiskill3_formatpole(int id, OUT Frontend_txt_struct_aiskill3_formatpole& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill3_formatpole_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill3_formatpole"), id, aiskill3_formatpole_list);
	if (aiskill3_formatpole_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill3_formatpole_list[TEXT("Id")]);
		info.desc = aiskill3_formatpole_list[TEXT("desc")];
		info.fAttackIntervalRate = FCString::Atof(*aiskill3_formatpole_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fDamageFactor")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fHorseDamageFactor")]);
		info.fWeightFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fWeightFactor")]);
		info.nCoolDown = FCString::Atoi(*aiskill3_formatpole_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill3_formatpole_list[TEXT("nUseEnergy")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill3_formatpole_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill3_formatpole_list[TEXT("nLastTime")]);
		info.nWeightLevel = FCString::Atoi(*aiskill3_formatpole_list[TEXT("nWeightLevel")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill3_formatpole_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill3_formatpole info;
	if(!Get_Frontend_txt_struct_aiskill3_formatpole(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nWeightLevel"), FString::FromInt(info.nWeightLevel));
	return true;
}

bool Get_Frontend_txt_struct_aiskill4_formatpoleshield(int id, OUT Frontend_txt_struct_aiskill4_formatpoleshield& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill4_formatpoleshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill4_formatpoleshield"), id, aiskill4_formatpoleshield_list);
	if (aiskill4_formatpoleshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill4_formatpoleshield_list[TEXT("Id")]);
		info.desc = aiskill4_formatpoleshield_list[TEXT("desc")];
		info.fAttackIntervalRate = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fAttackIntervalRate")]);
		info.fSpeedFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fSpeedFactor")]);
		info.fRotateFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fRotateFactor")]);
		info.fDamageFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fDamageFactor")]);
		info.fHorseDamageFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fHorseDamageFactor")]);
		info.fShieldDamageRate = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fShieldDamageRate")]);
		info.fWeightFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fWeightFactor")]);
		info.nCoolDown = FCString::Atoi(*aiskill4_formatpoleshield_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill4_formatpoleshield_list[TEXT("nUseEnergy")]);
		info.fMeleeDamageFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fMeleeDamageFactor")]);
		info.fRangeDamageFactor = FCString::Atof(*aiskill4_formatpoleshield_list[TEXT("fRangeDamageFactor")]);
		info.nLastTime = FCString::Atoi(*aiskill4_formatpoleshield_list[TEXT("nLastTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill4_formatpoleshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill4_formatpoleshield info;
	if(!Get_Frontend_txt_struct_aiskill4_formatpoleshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fAttackIntervalRate"), FString::SanitizeFloat(info.fAttackIntervalRate));
	out.Add(TEXT("fSpeedFactor"), FString::SanitizeFloat(info.fSpeedFactor));
	out.Add(TEXT("fRotateFactor"), FString::SanitizeFloat(info.fRotateFactor));
	out.Add(TEXT("fDamageFactor"), FString::SanitizeFloat(info.fDamageFactor));
	out.Add(TEXT("fHorseDamageFactor"), FString::SanitizeFloat(info.fHorseDamageFactor));
	out.Add(TEXT("fShieldDamageRate"), FString::SanitizeFloat(info.fShieldDamageRate));
	out.Add(TEXT("fWeightFactor"), FString::SanitizeFloat(info.fWeightFactor));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("fMeleeDamageFactor"), FString::SanitizeFloat(info.fMeleeDamageFactor));
	out.Add(TEXT("fRangeDamageFactor"), FString::SanitizeFloat(info.fRangeDamageFactor));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	return true;
}

bool Get_Frontend_txt_struct_aiskill5_assault(int id, OUT Frontend_txt_struct_aiskill5_assault& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill5_assault_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill5_assault"), id, aiskill5_assault_list);
	if (aiskill5_assault_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill5_assault_list[TEXT("Id")]);
		info.desc = aiskill5_assault_list[TEXT("desc")];
		info.fRateSpeedOnHorse = FCString::Atof(*aiskill5_assault_list[TEXT("fRateSpeedOnHorse")]);
		info.fMaxSpeedOnHorse = FCString::Atof(*aiskill5_assault_list[TEXT("fMaxSpeedOnHorse")]);
		info.fRateWeight = FCString::Atof(*aiskill5_assault_list[TEXT("fRateWeight")]);
		info.fRateHorseWeight = FCString::Atof(*aiskill5_assault_list[TEXT("fRateHorseWeight")]);
		info.nCoolDown = FCString::Atoi(*aiskill5_assault_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill5_assault_list[TEXT("nUseEnergy")]);
		info.nAddHurtOnGround = FCString::Atoi(*aiskill5_assault_list[TEXT("nAddHurtOnGround")]);
		info.nAddHurtOnHorse = FCString::Atoi(*aiskill5_assault_list[TEXT("nAddHurtOnHorse")]);
		info.fDistFrontCheck = FCString::Atoi(*aiskill5_assault_list[TEXT("fDistFrontCheck")]);
		info.nIfCollision = FCString::Atoi(*aiskill5_assault_list[TEXT("nIfCollision")]);
		info.nFloorMomentum = FCString::Atoi(*aiskill5_assault_list[TEXT("nFloorMomentum")]);
		info.nMaxAssaultDis = FCString::Atoi(*aiskill5_assault_list[TEXT("nMaxAssaultDis")]);
		info.nLastTime = FCString::Atoi(*aiskill5_assault_list[TEXT("nLastTime")]);
		info.fAttackRangeRate = FCString::Atof(*aiskill5_assault_list[TEXT("fAttackRangeRate")]);
		info.nCollisionCnt = FCString::Atoi(*aiskill5_assault_list[TEXT("nCollisionCnt")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill5_assault_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill5_assault info;
	if(!Get_Frontend_txt_struct_aiskill5_assault(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("fRateSpeedOnHorse"), FString::SanitizeFloat(info.fRateSpeedOnHorse));
	out.Add(TEXT("fMaxSpeedOnHorse"), FString::SanitizeFloat(info.fMaxSpeedOnHorse));
	out.Add(TEXT("fRateWeight"), FString::SanitizeFloat(info.fRateWeight));
	out.Add(TEXT("fRateHorseWeight"), FString::SanitizeFloat(info.fRateHorseWeight));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nAddHurtOnGround"), FString::FromInt(info.nAddHurtOnGround));
	out.Add(TEXT("nAddHurtOnHorse"), FString::FromInt(info.nAddHurtOnHorse));
	out.Add(TEXT("fDistFrontCheck"), FString::FromInt(info.fDistFrontCheck));
	out.Add(TEXT("nIfCollision"), FString::FromInt(info.nIfCollision));
	out.Add(TEXT("nFloorMomentum"), FString::FromInt(info.nFloorMomentum));
	out.Add(TEXT("nMaxAssaultDis"), FString::FromInt(info.nMaxAssaultDis));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("fAttackRangeRate"), FString::SanitizeFloat(info.fAttackRangeRate));
	out.Add(TEXT("nCollisionCnt"), FString::FromInt(info.nCollisionCnt));
	return true;
}

bool Get_Frontend_txt_struct_aiskill6_meleeweapon(int id, OUT Frontend_txt_struct_aiskill6_meleeweapon& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill6_meleeweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill6_meleeweapon"), id, aiskill6_meleeweapon_list);
	if (aiskill6_meleeweapon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill6_meleeweapon_list[TEXT("Id")]);
		info.desc = aiskill6_meleeweapon_list[TEXT("desc")];
		info.uCoolDown = FCString::Atoi(*aiskill6_meleeweapon_list[TEXT("uCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill6_meleeweapon_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill6_meleeweapon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill6_meleeweapon info;
	if(!Get_Frontend_txt_struct_aiskill6_meleeweapon(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("uCoolDown"), FString::FromInt(info.uCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill7_rangeweapon(int id, OUT Frontend_txt_struct_aiskill7_rangeweapon& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill7_rangeweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill7_rangeweapon"), id, aiskill7_rangeweapon_list);
	if (aiskill7_rangeweapon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill7_rangeweapon_list[TEXT("Id")]);
		info.desc = aiskill7_rangeweapon_list[TEXT("desc")];
		info.uCoolDown = FCString::Atoi(*aiskill7_rangeweapon_list[TEXT("uCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill7_rangeweapon_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill7_rangeweapon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill7_rangeweapon info;
	if(!Get_Frontend_txt_struct_aiskill7_rangeweapon(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("uCoolDown"), FString::FromInt(info.uCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill8_collective(int id, OUT Frontend_txt_struct_aiskill8_collective& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill8_collective_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill8_collective"), id, aiskill8_collective_list);
	if (aiskill8_collective_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill8_collective_list[TEXT("Id")]);
		info.desc = aiskill8_collective_list[TEXT("desc")];
		info.nCollectivPercent = FCString::Atoi(*aiskill8_collective_list[TEXT("nCollectivPercent")]);
		info.nLastTime = FCString::Atoi(*aiskill8_collective_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill8_collective_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill8_collective_list[TEXT("nUseEnergy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill8_collective_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill8_collective info;
	if(!Get_Frontend_txt_struct_aiskill8_collective(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nCollectivPercent"), FString::FromInt(info.nCollectivPercent));
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	return true;
}

bool Get_Frontend_txt_struct_aiskill9_tacticalmove(int id, OUT Frontend_txt_struct_aiskill9_tacticalmove& info)
{
	info.Id = 0;
	TMap<FString, FString> aiskill9_tacticalmove_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiskill9_tacticalmove"), id, aiskill9_tacticalmove_list);
	if (aiskill9_tacticalmove_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("Id")]);
		info.desc = aiskill9_tacticalmove_list[TEXT("desc")];
		info.nLastTime = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("nLastTime")]);
		info.nCoolDown = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("nCoolDown")]);
		info.nUseEnergy = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("nUseEnergy")]);
		info.nRoundRadius = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("nRoundRadius")]);
		info.nRoundDir = FCString::Atoi(*aiskill9_tacticalmove_list[TEXT("nRoundDir")]);
		info.fMoveSpeedRate = FCString::Atof(*aiskill9_tacticalmove_list[TEXT("fMoveSpeedRate")]);
		info.fBodyTurnRate = FCString::Atof(*aiskill9_tacticalmove_list[TEXT("fBodyTurnRate")]);
		info.fAccelRate = FCString::Atof(*aiskill9_tacticalmove_list[TEXT("fAccelRate")]);
		info.fAttackRate = FCString::Atof(*aiskill9_tacticalmove_list[TEXT("fAttackRate")]);
		info.fHewUpTimeRate = FCString::Atof(*aiskill9_tacticalmove_list[TEXT("fHewUpTimeRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiskill9_tacticalmove_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiskill9_tacticalmove info;
	if(!Get_Frontend_txt_struct_aiskill9_tacticalmove(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("nLastTime"), FString::FromInt(info.nLastTime));
	out.Add(TEXT("nCoolDown"), FString::FromInt(info.nCoolDown));
	out.Add(TEXT("nUseEnergy"), FString::FromInt(info.nUseEnergy));
	out.Add(TEXT("nRoundRadius"), FString::FromInt(info.nRoundRadius));
	out.Add(TEXT("nRoundDir"), FString::FromInt(info.nRoundDir));
	out.Add(TEXT("fMoveSpeedRate"), FString::SanitizeFloat(info.fMoveSpeedRate));
	out.Add(TEXT("fBodyTurnRate"), FString::SanitizeFloat(info.fBodyTurnRate));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("fHewUpTimeRate"), FString::SanitizeFloat(info.fHewUpTimeRate));
	return true;
}

bool Get_Frontend_txt_struct_armor(int id, OUT Frontend_txt_struct_armor& info)
{
	info.Id = 0;
	TMap<FString, FString> armor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("armor"), id, armor_list);
	if (armor_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*armor_list[TEXT("Id")]);
		info.ItemName = armor_list[TEXT("ItemName")];
		info.ItemDescription = armor_list[TEXT("ItemDescription")];
		info.SkeletalMesh_Male = armor_list[TEXT("SkeletalMesh_Male")];
		info.SkeletalMesh_Female = armor_list[TEXT("SkeletalMesh_Female")];
		info.Level = FCString::Atoi(*armor_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*armor_list[TEXT("WeaponWeight")]);
		info.VelocityExtraValue = FCString::Atof(*armor_list[TEXT("VelocityExtraValue")]);
		info.HealthExtraValue = FCString::Atof(*armor_list[TEXT("HealthExtraValue")]);
		info.MetalFailPro = FCString::Atof(*armor_list[TEXT("MetalFailPro")]);
		info.LeatherFailPro = FCString::Atof(*armor_list[TEXT("LeatherFailPro")]);
		info.ClothFailPro = FCString::Atof(*armor_list[TEXT("ClothFailPro")]);
		info.MetalDefenseValue = FCString::Atoi(*armor_list[TEXT("MetalDefenseValue")]);
		info.LeatherDefenseValue = FCString::Atoi(*armor_list[TEXT("LeatherDefenseValue")]);
		info.ClothDefenseValue = FCString::Atoi(*armor_list[TEXT("ClothDefenseValue")]);
		info.bIsUseOnHorse = FCString::Atoi(*armor_list[TEXT("bIsUseOnHorse")]);
		info.MetalMinusCutParam = FCString::Atof(*armor_list[TEXT("MetalMinusCutParam")]);
		info.LeatherMinusCutParam = FCString::Atof(*armor_list[TEXT("LeatherMinusCutParam")]);
		info.ClothMinusCutParam = FCString::Atof(*armor_list[TEXT("ClothMinusCutParam")]);
		info.MetalMinusStabParam = FCString::Atof(*armor_list[TEXT("MetalMinusStabParam")]);
		info.LeatherMinusStabParam = FCString::Atof(*armor_list[TEXT("LeatherMinusStabParam")]);
		info.ClothMinusStabParam = FCString::Atof(*armor_list[TEXT("ClothMinusStabParam")]);
		info.MetalMinusBluntParam = FCString::Atof(*armor_list[TEXT("MetalMinusBluntParam")]);
		info.LeatherMinusBluntParam = FCString::Atof(*armor_list[TEXT("LeatherMinusBluntParam")]);
		info.ClothMinusBluntParam = FCString::Atof(*armor_list[TEXT("ClothMinusBluntParam")]);
		info.Metal = armor_list[TEXT("Metal")];
		info.Leather = armor_list[TEXT("Leather")];
		info.Cloth = armor_list[TEXT("Cloth")];
		info.MetalDefenseDown = FCString::Atof(*armor_list[TEXT("MetalDefenseDown")]);
		info.LeatherDefenseDown = FCString::Atof(*armor_list[TEXT("LeatherDefenseDown")]);
		info.ClothDefenseDown = FCString::Atof(*armor_list[TEXT("ClothDefenseDown")]);
		info.FailProDown = FCString::Atof(*armor_list[TEXT("FailProDown")]);
		info.fight = FCString::Atoi(*armor_list[TEXT("fight")]);
		info.DefenseDownLv1 = FCString::Atof(*armor_list[TEXT("DefenseDownLv1")]);
		info.DefenseDownLv2 = FCString::Atof(*armor_list[TEXT("DefenseDownLv2")]);
		info.DefenseDownLv3 = FCString::Atof(*armor_list[TEXT("DefenseDownLv3")]);
		info.DefenseDownLv4 = FCString::Atof(*armor_list[TEXT("DefenseDownLv4")]);
		info.DefenseDownLv5 = FCString::Atof(*armor_list[TEXT("DefenseDownLv5")]);
		info.DefenseDownLv6 = FCString::Atof(*armor_list[TEXT("DefenseDownLv6")]);
		info.DefenseDownLv7 = FCString::Atof(*armor_list[TEXT("DefenseDownLv7")]);
		info.DefenseDownLv8 = FCString::Atof(*armor_list[TEXT("DefenseDownLv8")]);
		info.DefenseDownLv9 = FCString::Atof(*armor_list[TEXT("DefenseDownLv9")]);
		info.fDefenseRemoteAtk = FCString::Atof(*armor_list[TEXT("fDefenseRemoteAtk")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_boss(int id, OUT Frontend_txt_struct_boss& info)
{
	info.Id = 0;
	TMap<FString, FString> boss_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("boss"), id, boss_list);
	if (boss_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*boss_list[TEXT("Id")]);
		info.SoldierName = boss_list[TEXT("SoldierName")];
		info.SoldierDescription = boss_list[TEXT("SoldierDescription")];
		info.SoldierKind = FCString::Atoi(*boss_list[TEXT("SoldierKind")]);
		info.fPrice = FCString::Atoi(*boss_list[TEXT("fPrice")]);
		info.BumpMass = FCString::Atof(*boss_list[TEXT("BumpMass")]);
		info.BaseAggressive = FCString::Atoi(*boss_list[TEXT("BaseAggressive")]);
		info.SkeletalMesh = boss_list[TEXT("SkeletalMesh")];
		info.Level = FCString::Atoi(*boss_list[TEXT("Level")]);
		info.fHealth = FCString::Atoi(*boss_list[TEXT("fHealth")]);
		info.MaxSpeed = FCString::Atoi(*boss_list[TEXT("MaxSpeed")]);
		info.fAiHorseSpeedRate = FCString::Atof(*boss_list[TEXT("fAiHorseSpeedRate")]);
		info.fAiHorseAcceRate = FCString::Atof(*boss_list[TEXT("fAiHorseAcceRate")]);
		info.fAiHorseRotationRate = FCString::Atof(*boss_list[TEXT("fAiHorseRotationRate")]);
		info.fAiAttackSpeedRate = FCString::Atof(*boss_list[TEXT("fAiAttackSpeedRate")]);
		info.RotationRate = FCString::Atof(*boss_list[TEXT("RotationRate")]);
		info.SprintSpeed = FCString::Atof(*boss_list[TEXT("SprintSpeed")]);
		info.fAccelRate = FCString::Atof(*boss_list[TEXT("fAccelRate")]);
		info.SoldierDefenseValue = FCString::Atoi(*boss_list[TEXT("SoldierDefenseValue")]);
		info.SoldierDamage = FCString::Atoi(*boss_list[TEXT("SoldierDamage")]);
		info.fPlayerCauseAIShieldVal = FCString::Atof(*boss_list[TEXT("fPlayerCauseAIShieldVal")]);
		info.AlertRange1 = FCString::Atoi(*boss_list[TEXT("AlertRange1")]);
		info.AlertRange2 = FCString::Atoi(*boss_list[TEXT("AlertRange2")]);
		info.AlertRange3 = FCString::Atoi(*boss_list[TEXT("AlertRange3")]);
		info.AlertRange4 = FCString::Atoi(*boss_list[TEXT("AlertRange4")]);
		info.FollowRange = FCString::Atof(*boss_list[TEXT("FollowRange")]);
		info.DefendRange = FCString::Atof(*boss_list[TEXT("DefendRange")]);
		info.PushRange = FCString::Atof(*boss_list[TEXT("PushRange")]);
		info.fStartHoldMinTime = FCString::Atof(*boss_list[TEXT("fStartHoldMinTime")]);
		info.fStartHoldMaxTime = FCString::Atof(*boss_list[TEXT("fStartHoldMaxTime")]);
		info.fHoldToFireMinTime = FCString::Atof(*boss_list[TEXT("fHoldToFireMinTime")]);
		info.fHoldToFireMaxTime = FCString::Atof(*boss_list[TEXT("fHoldToFireMaxTime")]);
		info.WeaponID1 = FCString::Atoi(*boss_list[TEXT("WeaponID1")]);
		info.WeaponID2 = FCString::Atoi(*boss_list[TEXT("WeaponID2")]);
		info.WeaponID3 = FCString::Atoi(*boss_list[TEXT("WeaponID3")]);
		info.WeaponID4 = FCString::Atoi(*boss_list[TEXT("WeaponID4")]);
		info.HeadEquipID = FCString::Atoi(*boss_list[TEXT("HeadEquipID")]);
		info.ShoulderEquipID = FCString::Atoi(*boss_list[TEXT("ShoulderEquipID")]);
		info.UpBodyEquipID = FCString::Atoi(*boss_list[TEXT("UpBodyEquipID")]);
		info.DownBodyEquipID = FCString::Atoi(*boss_list[TEXT("DownBodyEquipID")]);
		info.HorseID = FCString::Atoi(*boss_list[TEXT("HorseID")]);
		info.HorseEquipID = FCString::Atoi(*boss_list[TEXT("HorseEquipID")]);
		info.fHorseLifeRate = FCString::Atof(*boss_list[TEXT("fHorseLifeRate")]);
		info.ArmorType = FCString::Atoi(*boss_list[TEXT("ArmorType")]);
		info.DetectRate = FCString::Atof(*boss_list[TEXT("DetectRate")]);
		info.BeDetectedRate = FCString::Atof(*boss_list[TEXT("BeDetectedRate")]);
		info.AlertHewupPercent = FCString::Atof(*boss_list[TEXT("AlertHewupPercent")]);
		info.AlertBlockPercent = FCString::Atof(*boss_list[TEXT("AlertBlockPercent")]);
		info.ShotOffsetRangeX = FCString::Atof(*boss_list[TEXT("ShotOffsetRangeX")]);
		info.ShotOffsetRangeY = FCString::Atof(*boss_list[TEXT("ShotOffsetRangeY")]);
		info.fAttackOrDefendProb_0 = FCString::Atoi(*boss_list[TEXT("fAttackOrDefendProb_0")]);
		info.fAttackOrDefendProb_1 = FCString::Atof(*boss_list[TEXT("fAttackOrDefendProb_1")]);
		info.fAttackOrDefendProb_2 = FCString::Atof(*boss_list[TEXT("fAttackOrDefendProb_2")]);
		info.fAttackOrDefendProb_3 = FCString::Atof(*boss_list[TEXT("fAttackOrDefendProb_3")]);
		info.fMeleeAttackIntervalTime = FCString::Atof(*boss_list[TEXT("fMeleeAttackIntervalTime")]);
		info.fRangeAttackIntervalTime = FCString::Atof(*boss_list[TEXT("fRangeAttackIntervalTime")]);
		info.fFailFire = FCString::Atof(*boss_list[TEXT("fFailFire")]);
		info.CurGroundFireStyle = FCString::Atoi(*boss_list[TEXT("CurGroundFireStyle")]);
		info.CurGroundAimStyle_0 = FCString::Atoi(*boss_list[TEXT("CurGroundAimStyle_0")]);
		info.CurGroundAimStyle_1 = FCString::Atoi(*boss_list[TEXT("CurGroundAimStyle_1")]);
		info.CurHorseFireStyle = FCString::Atoi(*boss_list[TEXT("CurHorseFireStyle")]);
		info.CurHorseAimStyle_0 = FCString::Atoi(*boss_list[TEXT("CurHorseAimStyle_0")]);
		info.CurHorseAimStyle_1 = FCString::Atoi(*boss_list[TEXT("CurHorseAimStyle_1")]);
		info.CausePlayerDamage = FCString::Atof(*boss_list[TEXT("CausePlayerDamage")]);
		info.CauseAIDamage = FCString::Atof(*boss_list[TEXT("CauseAIDamage")]);
		info.fSprintTimeOnGround = FCString::Atof(*boss_list[TEXT("fSprintTimeOnGround")]);
		info.nAISRS = FCString::Atoi(*boss_list[TEXT("nAISRS")]);
		info.PenetrateCut = FCString::Atof(*boss_list[TEXT("PenetrateCut")]);
		info.PenetratePuncture = FCString::Atof(*boss_list[TEXT("PenetratePuncture")]);
		info.PenetrateBlunt = FCString::Atof(*boss_list[TEXT("PenetrateBlunt")]);
		info.nTacticalMovePercent = FCString::Atof(*boss_list[TEXT("nTacticalMovePercent")]);
		info.GainFujiangID = FCString::Atoi(*boss_list[TEXT("GainFujiangID")]);
		info.nGuardType = FCString::Atoi(*boss_list[TEXT("nGuardType")]);
		info.nGuardCount = FCString::Atoi(*boss_list[TEXT("nGuardCount")]);
		info.nGuardFormation = FCString::Atoi(*boss_list[TEXT("nGuardFormation")]);
		info.scene = FCString::Atoi(*boss_list[TEXT("scene")]);
		info.fRemoteAtkFactor = FCString::Atof(*boss_list[TEXT("fRemoteAtkFactor")]);
		info.fDefenseRemoteAtk = FCString::Atof(*boss_list[TEXT("fDefenseRemoteAtk")]);
		info.nNationType = FCString::Atoi(*boss_list[TEXT("nNationType")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_bullet_clip(int id, OUT Frontend_txt_struct_bullet_clip& info)
{
	info.Id = 0;
	TMap<FString, FString> bullet_clip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("bullet_clip"), id, bullet_clip_list);
	if (bullet_clip_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*bullet_clip_list[TEXT("Id")]);
		info.ItemName = bullet_clip_list[TEXT("ItemName")];
		info.ItemDescription = bullet_clip_list[TEXT("ItemDescription")];
		info.SkeletalMesh = bullet_clip_list[TEXT("SkeletalMesh")];
		info.AmmoBagMesh = bullet_clip_list[TEXT("AmmoBagMesh")];
		info.EmptyAmmoBagMesh = bullet_clip_list[TEXT("EmptyAmmoBagMesh")];
		info.Level = FCString::Atoi(*bullet_clip_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*bullet_clip_list[TEXT("WeaponWeight")]);
		info.AIWeaponWeight = FCString::Atof(*bullet_clip_list[TEXT("AIWeaponWeight")]);
		info.ShootDamageFactor = FCString::Atof(*bullet_clip_list[TEXT("ShootDamageFactor")]);
		info.damageType = FCString::Atoi(*bullet_clip_list[TEXT("damageType")]);
		info.count = FCString::Atoi(*bullet_clip_list[TEXT("count")]);
		info.fHurtFactor_0 = FCString::Atof(*bullet_clip_list[TEXT("fHurtFactor_0")]);
		info.fAttenuationFactor_0 = FCString::Atof(*bullet_clip_list[TEXT("fAttenuationFactor_0")]);
		info.fHurtFactor_1 = FCString::Atof(*bullet_clip_list[TEXT("fHurtFactor_1")]);
		info.fAttenuationFactor_1 = FCString::Atof(*bullet_clip_list[TEXT("fAttenuationFactor_1")]);
		info.nBounceCount = FCString::Atoi(*bullet_clip_list[TEXT("nBounceCount")]);
		info.fBounceSpeedFactor = FCString::Atof(*bullet_clip_list[TEXT("fBounceSpeedFactor")]);
		info.nSceneEffectType  = bullet_clip_list[TEXT("nSceneEffectType ")];
		info.AmmoStaticMesh = bullet_clip_list[TEXT("AmmoStaticMesh")];
		info.FlyVoiceMesh = bullet_clip_list[TEXT("FlyVoiceMesh")];
		info.CrashVoiceMesh = bullet_clip_list[TEXT("CrashVoiceMesh")];
		info.MetalCutCamailValue = FCString::Atof(*bullet_clip_list[TEXT("MetalCutCamailValue")]);
		info.MetalStabCamailValue = FCString::Atof(*bullet_clip_list[TEXT("MetalStabCamailValue")]);
		info.MetalBluntCamailValue = FCString::Atof(*bullet_clip_list[TEXT("MetalBluntCamailValue")]);
		info.LeatherCutCamailValue = FCString::Atof(*bullet_clip_list[TEXT("LeatherCutCamailValue")]);
		info.LeatherStabCamailValue = FCString::Atof(*bullet_clip_list[TEXT("LeatherStabCamailValue")]);
		info.LeatherBluntCamailValue = FCString::Atof(*bullet_clip_list[TEXT("LeatherBluntCamailValue")]);
		info.ClothCutCamailValue = FCString::Atof(*bullet_clip_list[TEXT("ClothCutCamailValue")]);
		info.ClothStabCamailValue = FCString::Atof(*bullet_clip_list[TEXT("ClothStabCamailValue")]);
		info.ClothBluntCamailValue = FCString::Atof(*bullet_clip_list[TEXT("ClothBluntCamailValue")]);
		info.ShootDamageDown = FCString::Atof(*bullet_clip_list[TEXT("ShootDamageDown")]);
		info.CamailDown = FCString::Atof(*bullet_clip_list[TEXT("CamailDown")]);
		info.fight = FCString::Atoi(*bullet_clip_list[TEXT("fight")]);
		info.DamageDownLv1 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv1")]);
		info.DamageDownLv2 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv2")]);
		info.DamageDownLv3 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv3")]);
		info.DamageDownLv4 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv4")]);
		info.DamageDownLv5 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv5")]);
		info.DamageDownLv6 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv6")]);
		info.DamageDownLv7 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv7")]);
		info.DamageDownLv8 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv8")]);
		info.DamageDownLv9 = FCString::Atof(*bullet_clip_list[TEXT("DamageDownLv9")]);
		info.fPveDamageFactor = FCString::Atof(*bullet_clip_list[TEXT("fPveDamageFactor")]);
		info.nIsPveWeapon = FCString::Atoi(*bullet_clip_list[TEXT("nIsPveWeapon")]);
		info.costfield = FCString::Atoi(*bullet_clip_list[TEXT("costfield")]);
		info.fHorseDamageRate = FCString::Atof(*bullet_clip_list[TEXT("fHorseDamageRate")]);
		info.fAICauseAIDamageShieldFactor = FCString::Atof(*bullet_clip_list[TEXT("fAICauseAIDamageShieldFactor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_crash_detail(int id, OUT Frontend_txt_struct_crash_detail& info)
{
	info.crash_effect = 0;
	TMap<FString, FString> crash_detail_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("crash_detail"), id, crash_detail_list);
	if (crash_detail_list.Num() > 0)
	{
		info.crash_effect = FCString::Atoi(*crash_detail_list[TEXT("crash_effect")]);
		info.crash_dir = FCString::Atoi(*crash_detail_list[TEXT("crash_dir")]);
		info.crash_time1 = FCString::Atof(*crash_detail_list[TEXT("crash_time1")]);
		info.crash_dis1 = FCString::Atof(*crash_detail_list[TEXT("crash_dis1")]);
		info.crash_time2 = FCString::Atof(*crash_detail_list[TEXT("crash_time2")]);
		info.crash_dis2 = FCString::Atof(*crash_detail_list[TEXT("crash_dis2")]);
		info.crash_time3 = FCString::Atof(*crash_detail_list[TEXT("crash_time3")]);
		info.crash_dis3 = FCString::Atof(*crash_detail_list[TEXT("crash_dis3")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_crash_detail_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_crash_detail info;
	if(!Get_Frontend_txt_struct_crash_detail(id, info))
	{
		return false;
	}

	out.Add(TEXT("crash_effect"), FString::FromInt(info.crash_effect));
	out.Add(TEXT("crash_dir"), FString::FromInt(info.crash_dir));
	out.Add(TEXT("crash_time1"), FString::SanitizeFloat(info.crash_time1));
	out.Add(TEXT("crash_dis1"), FString::SanitizeFloat(info.crash_dis1));
	out.Add(TEXT("crash_time2"), FString::SanitizeFloat(info.crash_time2));
	out.Add(TEXT("crash_dis2"), FString::SanitizeFloat(info.crash_dis2));
	out.Add(TEXT("crash_time3"), FString::SanitizeFloat(info.crash_time3));
	out.Add(TEXT("crash_dis3"), FString::SanitizeFloat(info.crash_dis3));
	return true;
}

bool Get_Frontend_txt_struct_crash_effect(int id, OUT Frontend_txt_struct_crash_effect& info)
{
	info.atker_type = 0;
	TMap<FString, FString> crash_effect_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("crash_effect"), id, crash_effect_list);
	if (crash_effect_list.Num() > 0)
	{
		info.atker_type = FCString::Atoi(*crash_effect_list[TEXT("atker_type")]);
		info.underatker_type = FCString::Atoi(*crash_effect_list[TEXT("underatker_type")]);
		info.crash_effect = FCString::Atoi(*crash_effect_list[TEXT("crash_effect")]);
		info.crash_min = FCString::Atoi(*crash_effect_list[TEXT("crash_min")]);
		info.crash_max = FCString::Atoi(*crash_effect_list[TEXT("crash_max")]);
		info.crash_factor = FCString::Atoi(*crash_effect_list[TEXT("crash_factor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_crash_effect_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_crash_effect info;
	if(!Get_Frontend_txt_struct_crash_effect(id, info))
	{
		return false;
	}

	out.Add(TEXT("atker_type"), FString::FromInt(info.atker_type));
	out.Add(TEXT("underatker_type"), FString::FromInt(info.underatker_type));
	out.Add(TEXT("crash_effect"), FString::FromInt(info.crash_effect));
	out.Add(TEXT("crash_min"), FString::FromInt(info.crash_min));
	out.Add(TEXT("crash_max"), FString::FromInt(info.crash_max));
	out.Add(TEXT("crash_factor"), FString::FromInt(info.crash_factor));
	return true;
}

bool Get_Frontend_txt_struct_fallfromhorse(int id, OUT Frontend_txt_struct_fallfromhorse& info)
{
	info.fall_type = 0;
	TMap<FString, FString> fallfromhorse_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fallfromhorse"), id, fallfromhorse_list);
	if (fallfromhorse_list.Num() > 0)
	{
		info.fall_type = FCString::Atoi(*fallfromhorse_list[TEXT("fall_type")]);
		info.person_dis1 = FCString::Atof(*fallfromhorse_list[TEXT("person_dis1")]);
		info.person_time1 = FCString::Atof(*fallfromhorse_list[TEXT("person_time1")]);
		info.person_ang1 = FCString::Atof(*fallfromhorse_list[TEXT("person_ang1")]);
		info.person_dis2 = FCString::Atof(*fallfromhorse_list[TEXT("person_dis2")]);
		info.person_time2 = FCString::Atof(*fallfromhorse_list[TEXT("person_time2")]);
		info.person_ang2 = FCString::Atof(*fallfromhorse_list[TEXT("person_ang2")]);
		info.person_dis3 = FCString::Atof(*fallfromhorse_list[TEXT("person_dis3")]);
		info.person_time3 = FCString::Atof(*fallfromhorse_list[TEXT("person_time3")]);
		info.person_ang3 = FCString::Atof(*fallfromhorse_list[TEXT("person_ang3")]);
		info.horse_dis1 = FCString::Atof(*fallfromhorse_list[TEXT("horse_dis1")]);
		info.horse_time1 = FCString::Atof(*fallfromhorse_list[TEXT("horse_time1")]);
		info.horse_dis2 = FCString::Atof(*fallfromhorse_list[TEXT("horse_dis2")]);
		info.horse_time2 = FCString::Atof(*fallfromhorse_list[TEXT("horse_time2")]);
		info.rate = FCString::Atoi(*fallfromhorse_list[TEXT("rate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fallfromhorse_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fallfromhorse info;
	if(!Get_Frontend_txt_struct_fallfromhorse(id, info))
	{
		return false;
	}

	out.Add(TEXT("fall_type"), FString::FromInt(info.fall_type));
	out.Add(TEXT("person_dis1"), FString::SanitizeFloat(info.person_dis1));
	out.Add(TEXT("person_time1"), FString::SanitizeFloat(info.person_time1));
	out.Add(TEXT("person_ang1"), FString::SanitizeFloat(info.person_ang1));
	out.Add(TEXT("person_dis2"), FString::SanitizeFloat(info.person_dis2));
	out.Add(TEXT("person_time2"), FString::SanitizeFloat(info.person_time2));
	out.Add(TEXT("person_ang2"), FString::SanitizeFloat(info.person_ang2));
	out.Add(TEXT("person_dis3"), FString::SanitizeFloat(info.person_dis3));
	out.Add(TEXT("person_time3"), FString::SanitizeFloat(info.person_time3));
	out.Add(TEXT("person_ang3"), FString::SanitizeFloat(info.person_ang3));
	out.Add(TEXT("horse_dis1"), FString::SanitizeFloat(info.horse_dis1));
	out.Add(TEXT("horse_time1"), FString::SanitizeFloat(info.horse_time1));
	out.Add(TEXT("horse_dis2"), FString::SanitizeFloat(info.horse_dis2));
	out.Add(TEXT("horse_time2"), FString::SanitizeFloat(info.horse_time2));
	out.Add(TEXT("rate"), FString::FromInt(info.rate));
	return true;
}

bool Get_Frontend_txt_struct_fallfromhorse_idx(int id, OUT Frontend_txt_struct_fallfromhorse_idx& info)
{
	info.id = 0;
	TMap<FString, FString> fallfromhorse_idx_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fallfromhorse_idx"), id, fallfromhorse_idx_list);
	if (fallfromhorse_idx_list.Num() > 0)
	{
		info.id = FCString::Atoi(*fallfromhorse_idx_list[TEXT("id")]);
		info.min_speed = FCString::Atof(*fallfromhorse_idx_list[TEXT("min_speed")]);
		info.max_speed = FCString::Atof(*fallfromhorse_idx_list[TEXT("max_speed")]);
		info.fall_type = fallfromhorse_idx_list[TEXT("fall_type")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fallfromhorse_idx_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fallfromhorse_idx info;
	if(!Get_Frontend_txt_struct_fallfromhorse_idx(id, info))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("min_speed"), FString::SanitizeFloat(info.min_speed));
	out.Add(TEXT("max_speed"), FString::SanitizeFloat(info.max_speed));
	out.Add(TEXT("fall_type"), info.fall_type);
	return true;
}

bool Get_Frontend_txt_struct_formation(int id, OUT Frontend_txt_struct_formation& info)
{
	info.Id = 0;
	TMap<FString, FString> formation_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("formation"), id, formation_list);
	if (formation_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*formation_list[TEXT("Id")]);
		info.nMass = FCString::Atoi(*formation_list[TEXT("nMass")]);
		info.name = formation_list[TEXT("name")];
		info.SkeletalMesh = formation_list[TEXT("SkeletalMesh")];
		info.nTop = FCString::Atoi(*formation_list[TEXT("nTop")]);
		info.nLeft = FCString::Atoi(*formation_list[TEXT("nLeft")]);
		info.nWidth = FCString::Atoi(*formation_list[TEXT("nWidth")]);
		info.nHeight = FCString::Atoi(*formation_list[TEXT("nHeight")]);
		info.nMassValueInit = FCString::Atoi(*formation_list[TEXT("nMassValueInit")]);
		info.fEnemyKindCheckRange = FCString::Atof(*formation_list[TEXT("fEnemyKindCheckRange")]);
		info.fEnemyCountCheckRange = FCString::Atof(*formation_list[TEXT("fEnemyCountCheckRange")]);
		info.fCollisionRadiusSelfCamp = FCString::Atof(*formation_list[TEXT("fCollisionRadiusSelfCamp")]);
		info.fSameCampRadius = FCString::Atof(*formation_list[TEXT("fSameCampRadius")]);
		info.fCollisionRadiusEnemyCamp = FCString::Atof(*formation_list[TEXT("fCollisionRadiusEnemyCamp")]);
		info.SoundPath = formation_list[TEXT("SoundPath")];
		info.fujiang = formation_list[TEXT("fujiang")];
		info.szForbidSoldierKind = formation_list[TEXT("szForbidSoldierKind")];
		info.SquadAggressive = FCString::Atoi(*formation_list[TEXT("SquadAggressive")]);
		info.MeleeInjuredFactor = FCString::Atof(*formation_list[TEXT("MeleeInjuredFactor")]);
		info.RangedInjuredFactor = FCString::Atof(*formation_list[TEXT("RangedInjuredFactor")]);
		info.ProbeFactor = FCString::Atof(*formation_list[TEXT("ProbeFactor")]);
		info.BeDetectFactor = FCString::Atof(*formation_list[TEXT("BeDetectFactor")]);
		info.fSafeDistance = FCString::Atof(*formation_list[TEXT("fSafeDistance")]);
		info.MoraleFactor = FCString::Atoi(*formation_list[TEXT("MoraleFactor")]);
		info.BMFactor = FCString::Atof(*formation_list[TEXT("BMFactor")]);
		info.MeleeDamageFactor = FCString::Atof(*formation_list[TEXT("MeleeDamageFactor")]);
		info.RangedDamageFactor = FCString::Atof(*formation_list[TEXT("RangedDamageFactor")]);
		info.fAttackSpeedFactor = FCString::Atof(*formation_list[TEXT("fAttackSpeedFactor")]);
		info.fMaxSpeedFactor = FCString::Atof(*formation_list[TEXT("fMaxSpeedFactor")]);
		info.fAcceleationFactor = FCString::Atof(*formation_list[TEXT("fAcceleationFactor")]);
		info.fujiang0x = FCString::Atof(*formation_list[TEXT("fujiang0x")]);
		info.fujiang0y = FCString::Atof(*formation_list[TEXT("fujiang0y")]);
		info.fujiang1x = FCString::Atof(*formation_list[TEXT("fujiang1x")]);
		info.fujiang1y = FCString::Atof(*formation_list[TEXT("fujiang1y")]);
		info.soldier0x = FCString::Atof(*formation_list[TEXT("soldier0x")]);
		info.soldier0y = FCString::Atof(*formation_list[TEXT("soldier0y")]);
		info.soldier1x = FCString::Atof(*formation_list[TEXT("soldier1x")]);
		info.soldier1y = FCString::Atof(*formation_list[TEXT("soldier1y")]);
		info.soldier2x = FCString::Atof(*formation_list[TEXT("soldier2x")]);
		info.soldier2y = FCString::Atof(*formation_list[TEXT("soldier2y")]);
		info.soldier3x = FCString::Atof(*formation_list[TEXT("soldier3x")]);
		info.soldier3y = FCString::Atof(*formation_list[TEXT("soldier3y")]);
		info.soldier4x = FCString::Atof(*formation_list[TEXT("soldier4x")]);
		info.soldier4y = FCString::Atof(*formation_list[TEXT("soldier4y")]);
		info.soldier5x = FCString::Atof(*formation_list[TEXT("soldier5x")]);
		info.soldier5y = FCString::Atof(*formation_list[TEXT("soldier5y")]);
		info.soldier6x = FCString::Atof(*formation_list[TEXT("soldier6x")]);
		info.soldier6y = FCString::Atof(*formation_list[TEXT("soldier6y")]);
		info.soldier7x = FCString::Atof(*formation_list[TEXT("soldier7x")]);
		info.soldier7y = FCString::Atof(*formation_list[TEXT("soldier7y")]);
		info.soldier8x = FCString::Atof(*formation_list[TEXT("soldier8x")]);
		info.soldier8y = FCString::Atof(*formation_list[TEXT("soldier8y")]);
		info.soldier9x = FCString::Atof(*formation_list[TEXT("soldier9x")]);
		info.soldier9y = FCString::Atof(*formation_list[TEXT("soldier9y")]);
		info.soldier10x = FCString::Atof(*formation_list[TEXT("soldier10x")]);
		info.soldier10y = FCString::Atof(*formation_list[TEXT("soldier10y")]);
		info.soldier11x = FCString::Atof(*formation_list[TEXT("soldier11x")]);
		info.soldier11y = FCString::Atof(*formation_list[TEXT("soldier11y")]);
		info.soldier12x = FCString::Atof(*formation_list[TEXT("soldier12x")]);
		info.soldier12y = FCString::Atof(*formation_list[TEXT("soldier12y")]);
		info.soldier13x = FCString::Atof(*formation_list[TEXT("soldier13x")]);
		info.soldier13y = FCString::Atof(*formation_list[TEXT("soldier13y")]);
		info.soldier14x = FCString::Atof(*formation_list[TEXT("soldier14x")]);
		info.soldier14y = FCString::Atof(*formation_list[TEXT("soldier14y")]);
		info.soldier15x = FCString::Atof(*formation_list[TEXT("soldier15x")]);
		info.soldier15y = FCString::Atof(*formation_list[TEXT("soldier15y")]);
		info.soldier16x = FCString::Atof(*formation_list[TEXT("soldier16x")]);
		info.soldier16y = FCString::Atof(*formation_list[TEXT("soldier16y")]);
		info.soldier17x = FCString::Atof(*formation_list[TEXT("soldier17x")]);
		info.soldier17y = FCString::Atof(*formation_list[TEXT("soldier17y")]);
		info.soldier18x = FCString::Atof(*formation_list[TEXT("soldier18x")]);
		info.soldier18y = FCString::Atof(*formation_list[TEXT("soldier18y")]);
		info.soldier19x = FCString::Atof(*formation_list[TEXT("soldier19x")]);
		info.soldier19y = FCString::Atof(*formation_list[TEXT("soldier19y")]);
		info.soldier20x = FCString::Atof(*formation_list[TEXT("soldier20x")]);
		info.soldier20y = FCString::Atof(*formation_list[TEXT("soldier20y")]);
		info.soldier21x = FCString::Atof(*formation_list[TEXT("soldier21x")]);
		info.soldier21y = FCString::Atof(*formation_list[TEXT("soldier21y")]);
		info.soldier22x = FCString::Atof(*formation_list[TEXT("soldier22x")]);
		info.soldier22y = FCString::Atof(*formation_list[TEXT("soldier22y")]);
		info.soldier23x = FCString::Atof(*formation_list[TEXT("soldier23x")]);
		info.soldier23y = FCString::Atof(*formation_list[TEXT("soldier23y")]);
		info.soldier24x = FCString::Atof(*formation_list[TEXT("soldier24x")]);
		info.soldier24y = FCString::Atof(*formation_list[TEXT("soldier24y")]);
		info.soldier25x = FCString::Atof(*formation_list[TEXT("soldier25x")]);
		info.soldier25y = FCString::Atof(*formation_list[TEXT("soldier25y")]);
		info.soldier26x = FCString::Atof(*formation_list[TEXT("soldier26x")]);
		info.soldier26y = FCString::Atof(*formation_list[TEXT("soldier26y")]);
		info.soldier27x = FCString::Atof(*formation_list[TEXT("soldier27x")]);
		info.soldier27y = FCString::Atof(*formation_list[TEXT("soldier27y")]);
		info.soldier28x = FCString::Atof(*formation_list[TEXT("soldier28x")]);
		info.soldier28y = FCString::Atof(*formation_list[TEXT("soldier28y")]);
		info.soldier29x = FCString::Atof(*formation_list[TEXT("soldier29x")]);
		info.soldier29y = FCString::Atof(*formation_list[TEXT("soldier29y")]);
		info.soldier30x = FCString::Atof(*formation_list[TEXT("soldier30x")]);
		info.soldier30y = FCString::Atof(*formation_list[TEXT("soldier30y")]);
		info.soldier31x = FCString::Atof(*formation_list[TEXT("soldier31x")]);
		info.soldier31y = FCString::Atof(*formation_list[TEXT("soldier31y")]);
		info.soldier32x = FCString::Atof(*formation_list[TEXT("soldier32x")]);
		info.soldier32y = FCString::Atof(*formation_list[TEXT("soldier32y")]);
		info.soldier33x = FCString::Atof(*formation_list[TEXT("soldier33x")]);
		info.soldier33y = FCString::Atof(*formation_list[TEXT("soldier33y")]);
		info.soldier34x = FCString::Atof(*formation_list[TEXT("soldier34x")]);
		info.soldier34y = FCString::Atof(*formation_list[TEXT("soldier34y")]);
		info.soldier35x = FCString::Atof(*formation_list[TEXT("soldier35x")]);
		info.soldier35y = FCString::Atof(*formation_list[TEXT("soldier35y")]);
		info.soldier36x = FCString::Atof(*formation_list[TEXT("soldier36x")]);
		info.soldier36y = FCString::Atof(*formation_list[TEXT("soldier36y")]);
		info.soldier37x = FCString::Atof(*formation_list[TEXT("soldier37x")]);
		info.soldier37y = FCString::Atof(*formation_list[TEXT("soldier37y")]);
		info.soldier38x = FCString::Atof(*formation_list[TEXT("soldier38x")]);
		info.soldier38y = FCString::Atof(*formation_list[TEXT("soldier38y")]);
		info.soldier39x = FCString::Atof(*formation_list[TEXT("soldier39x")]);
		info.soldier39y = FCString::Atof(*formation_list[TEXT("soldier39y")]);
		info.soldier0angle = FCString::Atof(*formation_list[TEXT("soldier0angle")]);
		info.soldier1angle = FCString::Atof(*formation_list[TEXT("soldier1angle")]);
		info.soldier2angle = FCString::Atof(*formation_list[TEXT("soldier2angle")]);
		info.soldier3angle = FCString::Atof(*formation_list[TEXT("soldier3angle")]);
		info.soldier4angle = FCString::Atof(*formation_list[TEXT("soldier4angle")]);
		info.soldier5angle = FCString::Atof(*formation_list[TEXT("soldier5angle")]);
		info.soldier6angle = FCString::Atof(*formation_list[TEXT("soldier6angle")]);
		info.soldier7angle = FCString::Atof(*formation_list[TEXT("soldier7angle")]);
		info.soldier8angle = FCString::Atof(*formation_list[TEXT("soldier8angle")]);
		info.soldier9angle = FCString::Atof(*formation_list[TEXT("soldier9angle")]);
		info.soldier10angle = FCString::Atof(*formation_list[TEXT("soldier10angle")]);
		info.soldier11angle = FCString::Atof(*formation_list[TEXT("soldier11angle")]);
		info.soldier12angle = FCString::Atof(*formation_list[TEXT("soldier12angle")]);
		info.soldier13angle = FCString::Atof(*formation_list[TEXT("soldier13angle")]);
		info.soldier14angle = FCString::Atof(*formation_list[TEXT("soldier14angle")]);
		info.soldier15angle = FCString::Atof(*formation_list[TEXT("soldier15angle")]);
		info.soldier16angle = FCString::Atof(*formation_list[TEXT("soldier16angle")]);
		info.soldier17angle = FCString::Atof(*formation_list[TEXT("soldier17angle")]);
		info.soldier18angle = FCString::Atof(*formation_list[TEXT("soldier18angle")]);
		info.soldier19angle = FCString::Atof(*formation_list[TEXT("soldier19angle")]);
		info.soldier20angle = FCString::Atof(*formation_list[TEXT("soldier20angle")]);
		info.soldier21angle = FCString::Atof(*formation_list[TEXT("soldier21angle")]);
		info.soldier22angle = FCString::Atof(*formation_list[TEXT("soldier22angle")]);
		info.soldier23angle = FCString::Atof(*formation_list[TEXT("soldier23angle")]);
		info.soldier24angle = FCString::Atof(*formation_list[TEXT("soldier24angle")]);
		info.soldier25angle = FCString::Atof(*formation_list[TEXT("soldier25angle")]);
		info.soldier26angle = FCString::Atof(*formation_list[TEXT("soldier26angle")]);
		info.soldier27angle = FCString::Atof(*formation_list[TEXT("soldier27angle")]);
		info.soldier28angle = FCString::Atof(*formation_list[TEXT("soldier28angle")]);
		info.soldier29angle = FCString::Atof(*formation_list[TEXT("soldier29angle")]);
		info.soldier30angle = FCString::Atof(*formation_list[TEXT("soldier30angle")]);
		info.soldier31angle = FCString::Atof(*formation_list[TEXT("soldier31angle")]);
		info.soldier32angle = FCString::Atof(*formation_list[TEXT("soldier32angle")]);
		info.soldier33angle = FCString::Atof(*formation_list[TEXT("soldier33angle")]);
		info.soldier34angle = FCString::Atof(*formation_list[TEXT("soldier34angle")]);
		info.soldier35angle = FCString::Atof(*formation_list[TEXT("soldier35angle")]);
		info.soldier36angle = FCString::Atof(*formation_list[TEXT("soldier36angle")]);
		info.soldier37angle = FCString::Atof(*formation_list[TEXT("soldier37angle")]);
		info.soldier38angle = FCString::Atof(*formation_list[TEXT("soldier38angle")]);
		info.soldier39angle = FCString::Atof(*formation_list[TEXT("soldier39angle")]);
		info.soldier0amt = FCString::Atoi(*formation_list[TEXT("soldier0amt")]);
		info.soldier1amt = FCString::Atoi(*formation_list[TEXT("soldier1amt")]);
		info.soldier2amt = FCString::Atoi(*formation_list[TEXT("soldier2amt")]);
		info.soldier3amt = FCString::Atoi(*formation_list[TEXT("soldier3amt")]);
		info.soldier4amt = FCString::Atoi(*formation_list[TEXT("soldier4amt")]);
		info.soldier5amt = FCString::Atoi(*formation_list[TEXT("soldier5amt")]);
		info.soldier6amt = FCString::Atoi(*formation_list[TEXT("soldier6amt")]);
		info.soldier7amt = FCString::Atoi(*formation_list[TEXT("soldier7amt")]);
		info.soldier8amt = FCString::Atoi(*formation_list[TEXT("soldier8amt")]);
		info.soldier9amt = FCString::Atoi(*formation_list[TEXT("soldier9amt")]);
		info.soldier10amt = FCString::Atoi(*formation_list[TEXT("soldier10amt")]);
		info.soldier11amt = FCString::Atoi(*formation_list[TEXT("soldier11amt")]);
		info.soldier12amt = FCString::Atoi(*formation_list[TEXT("soldier12amt")]);
		info.soldier13amt = FCString::Atoi(*formation_list[TEXT("soldier13amt")]);
		info.soldier14amt = FCString::Atoi(*formation_list[TEXT("soldier14amt")]);
		info.soldier15amt = FCString::Atoi(*formation_list[TEXT("soldier15amt")]);
		info.soldier16amt = FCString::Atoi(*formation_list[TEXT("soldier16amt")]);
		info.soldier17amt = FCString::Atoi(*formation_list[TEXT("soldier17amt")]);
		info.soldier18amt = FCString::Atoi(*formation_list[TEXT("soldier18amt")]);
		info.soldier19amt = FCString::Atoi(*formation_list[TEXT("soldier19amt")]);
		info.soldier20amt = FCString::Atoi(*formation_list[TEXT("soldier20amt")]);
		info.soldier21amt = FCString::Atoi(*formation_list[TEXT("soldier21amt")]);
		info.soldier22amt = FCString::Atoi(*formation_list[TEXT("soldier22amt")]);
		info.soldier23amt = FCString::Atoi(*formation_list[TEXT("soldier23amt")]);
		info.soldier24amt = FCString::Atoi(*formation_list[TEXT("soldier24amt")]);
		info.soldier25amt = FCString::Atoi(*formation_list[TEXT("soldier25amt")]);
		info.soldier26amt = FCString::Atoi(*formation_list[TEXT("soldier26amt")]);
		info.soldier27amt = FCString::Atoi(*formation_list[TEXT("soldier27amt")]);
		info.soldier28amt = FCString::Atoi(*formation_list[TEXT("soldier28amt")]);
		info.soldier29amt = FCString::Atoi(*formation_list[TEXT("soldier29amt")]);
		info.soldier30amt = FCString::Atoi(*formation_list[TEXT("soldier30amt")]);
		info.soldier31amt = FCString::Atoi(*formation_list[TEXT("soldier31amt")]);
		info.soldier32amt = FCString::Atoi(*formation_list[TEXT("soldier32amt")]);
		info.soldier33amt = FCString::Atoi(*formation_list[TEXT("soldier33amt")]);
		info.soldier34amt = FCString::Atoi(*formation_list[TEXT("soldier34amt")]);
		info.soldier35amt = FCString::Atoi(*formation_list[TEXT("soldier35amt")]);
		info.soldier36amt = FCString::Atoi(*formation_list[TEXT("soldier36amt")]);
		info.soldier37amt = FCString::Atoi(*formation_list[TEXT("soldier37amt")]);
		info.soldier38amt = FCString::Atoi(*formation_list[TEXT("soldier38amt")]);
		info.soldier39amt = FCString::Atoi(*formation_list[TEXT("soldier39amt")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_gate(int id, OUT Frontend_txt_struct_fortress_gate& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_gate_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_gate"), id, fortress_gate_list);
	if (fortress_gate_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_gate_list[TEXT("Id")]);
		info.desc = fortress_gate_list[TEXT("desc")];
		info.SkeletalMesh = fortress_gate_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_gate_list[TEXT("MyMat")];
		info.EnemyMat = fortress_gate_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_gate_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_gate_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_gate_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_gate_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_gate_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_gate_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_gate_list[TEXT("fFound_range")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_gate_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_gate info;
	if(!Get_Frontend_txt_struct_fortress_gate(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	return true;
}

bool Get_Frontend_txt_struct_fortress_medical(int id, OUT Frontend_txt_struct_fortress_medical& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_medical_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_medical"), id, fortress_medical_list);
	if (fortress_medical_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_medical_list[TEXT("Id")]);
		info.desc = fortress_medical_list[TEXT("desc")];
		info.SkeletalMesh = fortress_medical_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_medical_list[TEXT("MyMat")];
		info.EnemyMat = fortress_medical_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_medical_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_medical_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_medical_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_medical_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_medical_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_medical_list[TEXT("fOccupy_time")]);
		info.nOccupy_self_add_morale = FCString::Atoi(*fortress_medical_list[TEXT("nOccupy_self_add_morale")]);
		info.nOccupy_enemy_reduce_morale = FCString::Atoi(*fortress_medical_list[TEXT("nOccupy_enemy_reduce_morale")]);
		info.fOccupy_boss_life_add_percent = FCString::Atof(*fortress_medical_list[TEXT("fOccupy_boss_life_add_percent")]);
		info.fFound_range = FCString::Atof(*fortress_medical_list[TEXT("fFound_range")]);
		info.nBuff_count = FCString::Atoi(*fortress_medical_list[TEXT("nBuff_count")]);
		info.nBuff_cover_type = FCString::Atoi(*fortress_medical_list[TEXT("nBuff_cover_type")]);
		info.nBuff_cd = FCString::Atoi(*fortress_medical_list[TEXT("nBuff_cd")]);
		info.nBuff1 = FCString::Atoi(*fortress_medical_list[TEXT("nBuff1")]);
		info.nBuff2 = FCString::Atoi(*fortress_medical_list[TEXT("nBuff2")]);
		info.nBbuff3 = FCString::Atoi(*fortress_medical_list[TEXT("nBbuff3")]);
		info.nBuff4 = FCString::Atoi(*fortress_medical_list[TEXT("nBuff4")]);
		info.nBuff5 = FCString::Atoi(*fortress_medical_list[TEXT("nBuff5")]);
		info.nDdelay_add_time = FCString::Atoi(*fortress_medical_list[TEXT("nDdelay_add_time")]);
		info.nDelay_add_show_cd_time = FCString::Atoi(*fortress_medical_list[TEXT("nDelay_add_show_cd_time")]);
		info.nDelay_add_warning_count = FCString::Atoi(*fortress_medical_list[TEXT("nDelay_add_warning_count")]);
		info.nDelay_add_warning_time1 = FCString::Atoi(*fortress_medical_list[TEXT("nDelay_add_warning_time1")]);
		info.nDelay_add_warning_time2 = FCString::Atoi(*fortress_medical_list[TEXT("nDelay_add_warning_time2")]);
		info.nDelay_add_warning_time3 = FCString::Atoi(*fortress_medical_list[TEXT("nDelay_add_warning_time3")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_medical_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_medical info;
	if(!Get_Frontend_txt_struct_fortress_medical(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("nOccupy_self_add_morale"), FString::FromInt(info.nOccupy_self_add_morale));
	out.Add(TEXT("nOccupy_enemy_reduce_morale"), FString::FromInt(info.nOccupy_enemy_reduce_morale));
	out.Add(TEXT("fOccupy_boss_life_add_percent"), FString::SanitizeFloat(info.fOccupy_boss_life_add_percent));
	out.Add(TEXT("fFound_range"), FString::SanitizeFloat(info.fFound_range));
	out.Add(TEXT("nBuff_count"), FString::FromInt(info.nBuff_count));
	out.Add(TEXT("nBuff_cover_type"), FString::FromInt(info.nBuff_cover_type));
	out.Add(TEXT("nBuff_cd"), FString::FromInt(info.nBuff_cd));
	out.Add(TEXT("nBuff1"), FString::FromInt(info.nBuff1));
	out.Add(TEXT("nBuff2"), FString::FromInt(info.nBuff2));
	out.Add(TEXT("nBbuff3"), FString::FromInt(info.nBbuff3));
	out.Add(TEXT("nBuff4"), FString::FromInt(info.nBuff4));
	out.Add(TEXT("nBuff5"), FString::FromInt(info.nBuff5));
	out.Add(TEXT("nDdelay_add_time"), FString::FromInt(info.nDdelay_add_time));
	out.Add(TEXT("nDelay_add_show_cd_time"), FString::FromInt(info.nDelay_add_show_cd_time));
	out.Add(TEXT("nDelay_add_warning_count"), FString::FromInt(info.nDelay_add_warning_count));
	out.Add(TEXT("nDelay_add_warning_time1"), FString::FromInt(info.nDelay_add_warning_time1));
	out.Add(TEXT("nDelay_add_warning_time2"), FString::FromInt(info.nDelay_add_warning_time2));
	out.Add(TEXT("nDelay_add_warning_time3"), FString::FromInt(info.nDelay_add_warning_time3));
	return true;
}

bool Get_Frontend_txt_struct_fortress_oneoccupy(int id, OUT Frontend_txt_struct_fortress_oneoccupy& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_oneoccupy_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_oneoccupy"), id, fortress_oneoccupy_list);
	if (fortress_oneoccupy_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_oneoccupy_list[TEXT("Id")]);
		info.desc = fortress_oneoccupy_list[TEXT("desc")];
		info.SkeletalMesh = fortress_oneoccupy_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_oneoccupy_list[TEXT("MyMat")];
		info.EnemyMat = fortress_oneoccupy_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_oneoccupy_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_oneoccupy_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_oneoccupy_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_oneoccupy_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_oneoccupy_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_oneoccupy_list[TEXT("fOccupy_time")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_oneoccupy_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_oneoccupy info;
	if(!Get_Frontend_txt_struct_fortress_oneoccupy(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	return true;
}

bool Get_Frontend_txt_struct_fortress_pve_medical(int id, OUT Frontend_txt_struct_fortress_pve_medical& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_pve_medical_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_pve_medical"), id, fortress_pve_medical_list);
	if (fortress_pve_medical_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_pve_medical_list[TEXT("Id")]);
		info.desc = fortress_pve_medical_list[TEXT("desc")];
		info.SkeletalMesh = fortress_pve_medical_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_pve_medical_list[TEXT("MyMat")];
		info.EnemyMat = fortress_pve_medical_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_pve_medical_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_pve_medical_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_pve_medical_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_pve_medical_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_pve_medical_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_pve_medical_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_pve_medical_list[TEXT("fFound_range")]);
		info.nBuff_count = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff_count")]);
		info.nBuff_cover_type = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff_cover_type")]);
		info.nBuff_cd = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff_cd")]);
		info.nBuff1 = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff1")]);
		info.nBuff2 = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff2")]);
		info.nBbuff3 = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBbuff3")]);
		info.nBuff4 = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff4")]);
		info.nBuff5 = FCString::Atoi(*fortress_pve_medical_list[TEXT("nBuff5")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_pve_medical_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_pve_medical info;
	if(!Get_Frontend_txt_struct_fortress_pve_medical(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nBuff_count"), FString::FromInt(info.nBuff_count));
	out.Add(TEXT("nBuff_cover_type"), FString::FromInt(info.nBuff_cover_type));
	out.Add(TEXT("nBuff_cd"), FString::FromInt(info.nBuff_cd));
	out.Add(TEXT("nBuff1"), FString::FromInt(info.nBuff1));
	out.Add(TEXT("nBuff2"), FString::FromInt(info.nBuff2));
	out.Add(TEXT("nBbuff3"), FString::FromInt(info.nBbuff3));
	out.Add(TEXT("nBuff4"), FString::FromInt(info.nBuff4));
	out.Add(TEXT("nBuff5"), FString::FromInt(info.nBuff5));
	return true;
}

bool Get_Frontend_txt_struct_fortress_pve_recruit(int id, OUT Frontend_txt_struct_fortress_pve_recruit& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_pve_recruit_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_pve_recruit"), id, fortress_pve_recruit_list);
	if (fortress_pve_recruit_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_pve_recruit_list[TEXT("Id")]);
		info.desc = fortress_pve_recruit_list[TEXT("desc")];
		info.SkeletalMesh = fortress_pve_recruit_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_pve_recruit_list[TEXT("MyMat")];
		info.EnemyMat = fortress_pve_recruit_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_pve_recruit_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_pve_recruit_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_pve_recruit_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_pve_recruit_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_pve_recruit_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_pve_recruit_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_pve_recruit_list[TEXT("fFound_range")]);
		info.nTimeCd = FCString::Atoi(*fortress_pve_recruit_list[TEXT("nTimeCd")]);
		info.fTotalTime = FCString::Atof(*fortress_pve_recruit_list[TEXT("fTotalTime")]);
		info.nSoldierType = FCString::Atoi(*fortress_pve_recruit_list[TEXT("nSoldierType")]);
		info.nMaxRecruitCount = FCString::Atoi(*fortress_pve_recruit_list[TEXT("nMaxRecruitCount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_pve_recruit_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_pve_recruit info;
	if(!Get_Frontend_txt_struct_fortress_pve_recruit(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nTimeCd"), FString::FromInt(info.nTimeCd));
	out.Add(TEXT("fTotalTime"), FString::SanitizeFloat(info.fTotalTime));
	out.Add(TEXT("nSoldierType"), FString::FromInt(info.nSoldierType));
	out.Add(TEXT("nMaxRecruitCount"), FString::FromInt(info.nMaxRecruitCount));
	return true;
}

bool Get_Frontend_txt_struct_fortress_pve_supply(int id, OUT Frontend_txt_struct_fortress_pve_supply& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_pve_supply_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_pve_supply"), id, fortress_pve_supply_list);
	if (fortress_pve_supply_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_pve_supply_list[TEXT("Id")]);
		info.desc = fortress_pve_supply_list[TEXT("desc")];
		info.SkeletalMesh = fortress_pve_supply_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_pve_supply_list[TEXT("MyMat")];
		info.EnemyMat = fortress_pve_supply_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_pve_supply_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_pve_supply_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_pve_supply_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_pve_supply_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_pve_supply_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_pve_supply_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_pve_supply_list[TEXT("fFound_range")]);
		info.nBuff_count = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff_count")]);
		info.nBuff_cover_type = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff_cover_type")]);
		info.nBuff_cd = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff_cd")]);
		info.nBuff1 = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff1")]);
		info.nBuff2 = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff2")]);
		info.nBbuff3 = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBbuff3")]);
		info.nBuff4 = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff4")]);
		info.nBuff5 = FCString::Atoi(*fortress_pve_supply_list[TEXT("nBuff5")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_pve_supply_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_pve_supply info;
	if(!Get_Frontend_txt_struct_fortress_pve_supply(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nBuff_count"), FString::FromInt(info.nBuff_count));
	out.Add(TEXT("nBuff_cover_type"), FString::FromInt(info.nBuff_cover_type));
	out.Add(TEXT("nBuff_cd"), FString::FromInt(info.nBuff_cd));
	out.Add(TEXT("nBuff1"), FString::FromInt(info.nBuff1));
	out.Add(TEXT("nBuff2"), FString::FromInt(info.nBuff2));
	out.Add(TEXT("nBbuff3"), FString::FromInt(info.nBbuff3));
	out.Add(TEXT("nBuff4"), FString::FromInt(info.nBuff4));
	out.Add(TEXT("nBuff5"), FString::FromInt(info.nBuff5));
	return true;
}

bool Get_Frontend_txt_struct_fortress_pve_troops(int id, OUT Frontend_txt_struct_fortress_pve_troops& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_pve_troops_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_pve_troops"), id, fortress_pve_troops_list);
	if (fortress_pve_troops_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_pve_troops_list[TEXT("Id")]);
		info.desc = fortress_pve_troops_list[TEXT("desc")];
		info.SkeletalMesh = fortress_pve_troops_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_pve_troops_list[TEXT("MyMat")];
		info.EnemyMat = fortress_pve_troops_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_pve_troops_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_pve_troops_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_pve_troops_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_pve_troops_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_pve_troops_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_pve_troops_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_pve_troops_list[TEXT("fFound_range")]);
		info.nSupply_MaxCount = FCString::Atoi(*fortress_pve_troops_list[TEXT("nSupply_MaxCount")]);
		info.fSupply_OneTime = FCString::Atof(*fortress_pve_troops_list[TEXT("fSupply_OneTime")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_pve_troops_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_pve_troops info;
	if(!Get_Frontend_txt_struct_fortress_pve_troops(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nSupply_MaxCount"), FString::FromInt(info.nSupply_MaxCount));
	out.Add(TEXT("fSupply_OneTime"), FString::SanitizeFloat(info.fSupply_OneTime));
	return true;
}

bool Get_Frontend_txt_struct_fortress_recruit(int id, OUT Frontend_txt_struct_fortress_recruit& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_recruit_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_recruit"), id, fortress_recruit_list);
	if (fortress_recruit_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_recruit_list[TEXT("Id")]);
		info.desc = fortress_recruit_list[TEXT("desc")];
		info.SkeletalMesh = fortress_recruit_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_recruit_list[TEXT("MyMat")];
		info.EnemyMat = fortress_recruit_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_recruit_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_recruit_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_recruit_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_recruit_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_recruit_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_recruit_list[TEXT("fOccupy_time")]);
		info.nOccupy_self_add_morale = FCString::Atoi(*fortress_recruit_list[TEXT("nOccupy_self_add_morale")]);
		info.nOccupy_enemy_reduce_morale = FCString::Atoi(*fortress_recruit_list[TEXT("nOccupy_enemy_reduce_morale")]);
		info.fOccupy_boss_life_add_percent = FCString::Atof(*fortress_recruit_list[TEXT("fOccupy_boss_life_add_percent")]);
		info.fFound_range = FCString::Atoi(*fortress_recruit_list[TEXT("fFound_range")]);
		info.nDdelay_add_time = FCString::Atoi(*fortress_recruit_list[TEXT("nDdelay_add_time")]);
		info.nDelay_add_show_cd_time = FCString::Atoi(*fortress_recruit_list[TEXT("nDelay_add_show_cd_time")]);
		info.nDelay_add_warning_count = FCString::Atoi(*fortress_recruit_list[TEXT("nDelay_add_warning_count")]);
		info.nDelay_add_warning_time1 = FCString::Atoi(*fortress_recruit_list[TEXT("nDelay_add_warning_time1")]);
		info.nDelay_add_warning_time2 = FCString::Atoi(*fortress_recruit_list[TEXT("nDelay_add_warning_time2")]);
		info.nDelay_add_warning_time3 = FCString::Atoi(*fortress_recruit_list[TEXT("nDelay_add_warning_time3")]);
		info.fTroops_generate_time = FCString::Atof(*fortress_recruit_list[TEXT("fTroops_generate_time")]);
		info.fTroops_add_time = FCString::Atof(*fortress_recruit_list[TEXT("fTroops_add_time")]);
		info.fTroops_add_rate = FCString::Atof(*fortress_recruit_list[TEXT("fTroops_add_rate")]);
		info.nVirtual_allplayerarmycount = FCString::Atoi(*fortress_recruit_list[TEXT("nVirtual_allplayerarmycount")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_recruit_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_recruit info;
	if(!Get_Frontend_txt_struct_fortress_recruit(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("nOccupy_self_add_morale"), FString::FromInt(info.nOccupy_self_add_morale));
	out.Add(TEXT("nOccupy_enemy_reduce_morale"), FString::FromInt(info.nOccupy_enemy_reduce_morale));
	out.Add(TEXT("fOccupy_boss_life_add_percent"), FString::SanitizeFloat(info.fOccupy_boss_life_add_percent));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nDdelay_add_time"), FString::FromInt(info.nDdelay_add_time));
	out.Add(TEXT("nDelay_add_show_cd_time"), FString::FromInt(info.nDelay_add_show_cd_time));
	out.Add(TEXT("nDelay_add_warning_count"), FString::FromInt(info.nDelay_add_warning_count));
	out.Add(TEXT("nDelay_add_warning_time1"), FString::FromInt(info.nDelay_add_warning_time1));
	out.Add(TEXT("nDelay_add_warning_time2"), FString::FromInt(info.nDelay_add_warning_time2));
	out.Add(TEXT("nDelay_add_warning_time3"), FString::FromInt(info.nDelay_add_warning_time3));
	out.Add(TEXT("fTroops_generate_time"), FString::SanitizeFloat(info.fTroops_generate_time));
	out.Add(TEXT("fTroops_add_time"), FString::SanitizeFloat(info.fTroops_add_time));
	out.Add(TEXT("fTroops_add_rate"), FString::SanitizeFloat(info.fTroops_add_rate));
	out.Add(TEXT("nVirtual_allplayerarmycount"), FString::FromInt(info.nVirtual_allplayerarmycount));
	return true;
}

bool Get_Frontend_txt_struct_fortress_resource(int id, OUT Frontend_txt_struct_fortress_resource& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_resource_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_resource"), id, fortress_resource_list);
	if (fortress_resource_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_resource_list[TEXT("Id")]);
		info.desc = fortress_resource_list[TEXT("desc")];
		info.SkeletalMesh = fortress_resource_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_resource_list[TEXT("MyMat")];
		info.EnemyMat = fortress_resource_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_resource_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_resource_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_resource_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_resource_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_resource_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_resource_list[TEXT("fOccupy_time")]);
		info.nOccupy_self_add_morale = FCString::Atoi(*fortress_resource_list[TEXT("nOccupy_self_add_morale")]);
		info.nOccupy_enemy_reduce_morale = FCString::Atoi(*fortress_resource_list[TEXT("nOccupy_enemy_reduce_morale")]);
		info.fOccupy_boss_life_add_percent = FCString::Atof(*fortress_resource_list[TEXT("fOccupy_boss_life_add_percent")]);
		info.fFound_range = FCString::Atoi(*fortress_resource_list[TEXT("fFound_range")]);
		info.nBuff_count = FCString::Atoi(*fortress_resource_list[TEXT("nBuff_count")]);
		info.nBuff_cover_type = FCString::Atoi(*fortress_resource_list[TEXT("nBuff_cover_type")]);
		info.nBuff_cd = FCString::Atoi(*fortress_resource_list[TEXT("nBuff_cd")]);
		info.nBuff1 = FCString::Atoi(*fortress_resource_list[TEXT("nBuff1")]);
		info.nBuff2 = FCString::Atoi(*fortress_resource_list[TEXT("nBuff2")]);
		info.nBuff3 = FCString::Atoi(*fortress_resource_list[TEXT("nBuff3")]);
		info.nBuff4 = FCString::Atoi(*fortress_resource_list[TEXT("nBuff4")]);
		info.nBuff5 = FCString::Atoi(*fortress_resource_list[TEXT("nBuff5")]);
		info.fTroops_supply_time = FCString::Atof(*fortress_resource_list[TEXT("fTroops_supply_time")]);
		info.fBuff_effective_range = FCString::Atof(*fortress_resource_list[TEXT("fBuff_effective_range")]);
		info.fBuff_effective_inteval = FCString::Atof(*fortress_resource_list[TEXT("fBuff_effective_inteval")]);
		info.nDdelay_add_time = FCString::Atoi(*fortress_resource_list[TEXT("nDdelay_add_time")]);
		info.nDelay_add_show_cd_time = FCString::Atoi(*fortress_resource_list[TEXT("nDelay_add_show_cd_time")]);
		info.nDelay_add_warning_count = FCString::Atoi(*fortress_resource_list[TEXT("nDelay_add_warning_count")]);
		info.nDelay_add_warning_time1 = FCString::Atoi(*fortress_resource_list[TEXT("nDelay_add_warning_time1")]);
		info.nDelay_add_warning_time2 = FCString::Atoi(*fortress_resource_list[TEXT("nDelay_add_warning_time2")]);
		info.nDelay_add_warning_time3 = FCString::Atoi(*fortress_resource_list[TEXT("nDelay_add_warning_time3")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_resource_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_resource info;
	if(!Get_Frontend_txt_struct_fortress_resource(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("nOccupy_self_add_morale"), FString::FromInt(info.nOccupy_self_add_morale));
	out.Add(TEXT("nOccupy_enemy_reduce_morale"), FString::FromInt(info.nOccupy_enemy_reduce_morale));
	out.Add(TEXT("fOccupy_boss_life_add_percent"), FString::SanitizeFloat(info.fOccupy_boss_life_add_percent));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nBuff_count"), FString::FromInt(info.nBuff_count));
	out.Add(TEXT("nBuff_cover_type"), FString::FromInt(info.nBuff_cover_type));
	out.Add(TEXT("nBuff_cd"), FString::FromInt(info.nBuff_cd));
	out.Add(TEXT("nBuff1"), FString::FromInt(info.nBuff1));
	out.Add(TEXT("nBuff2"), FString::FromInt(info.nBuff2));
	out.Add(TEXT("nBuff3"), FString::FromInt(info.nBuff3));
	out.Add(TEXT("nBuff4"), FString::FromInt(info.nBuff4));
	out.Add(TEXT("nBuff5"), FString::FromInt(info.nBuff5));
	out.Add(TEXT("fTroops_supply_time"), FString::SanitizeFloat(info.fTroops_supply_time));
	out.Add(TEXT("fBuff_effective_range"), FString::SanitizeFloat(info.fBuff_effective_range));
	out.Add(TEXT("fBuff_effective_inteval"), FString::SanitizeFloat(info.fBuff_effective_inteval));
	out.Add(TEXT("nDdelay_add_time"), FString::FromInt(info.nDdelay_add_time));
	out.Add(TEXT("nDelay_add_show_cd_time"), FString::FromInt(info.nDelay_add_show_cd_time));
	out.Add(TEXT("nDelay_add_warning_count"), FString::FromInt(info.nDelay_add_warning_count));
	out.Add(TEXT("nDelay_add_warning_time1"), FString::FromInt(info.nDelay_add_warning_time1));
	out.Add(TEXT("nDelay_add_warning_time2"), FString::FromInt(info.nDelay_add_warning_time2));
	out.Add(TEXT("nDelay_add_warning_time3"), FString::FromInt(info.nDelay_add_warning_time3));
	return true;
}

bool Get_Frontend_txt_struct_fortress_spawn(int id, OUT Frontend_txt_struct_fortress_spawn& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_spawn_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_spawn"), id, fortress_spawn_list);
	if (fortress_spawn_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_spawn_list[TEXT("Id")]);
		info.desc = fortress_spawn_list[TEXT("desc")];
		info.SkeletalMesh = fortress_spawn_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_spawn_list[TEXT("MyMat")];
		info.EnemyMat = fortress_spawn_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_spawn_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_spawn_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_spawn_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_spawn_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_spawn_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_spawn_list[TEXT("fOccupy_time")]);
		info.nOccupy_self_add_morale = FCString::Atoi(*fortress_spawn_list[TEXT("nOccupy_self_add_morale")]);
		info.nOccupy_enemy_reduce_morale = FCString::Atoi(*fortress_spawn_list[TEXT("nOccupy_enemy_reduce_morale")]);
		info.fOccupy_boss_life_add_percent = FCString::Atof(*fortress_spawn_list[TEXT("fOccupy_boss_life_add_percent")]);
		info.fFound_range = FCString::Atof(*fortress_spawn_list[TEXT("fFound_range")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_spawn_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_spawn info;
	if(!Get_Frontend_txt_struct_fortress_spawn(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("nOccupy_self_add_morale"), FString::FromInt(info.nOccupy_self_add_morale));
	out.Add(TEXT("nOccupy_enemy_reduce_morale"), FString::FromInt(info.nOccupy_enemy_reduce_morale));
	out.Add(TEXT("fOccupy_boss_life_add_percent"), FString::SanitizeFloat(info.fOccupy_boss_life_add_percent));
	out.Add(TEXT("fFound_range"), FString::SanitizeFloat(info.fFound_range));
	return true;
}

bool Get_Frontend_txt_struct_fortress_supply(int id, OUT Frontend_txt_struct_fortress_supply& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_supply_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_supply"), id, fortress_supply_list);
	if (fortress_supply_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_supply_list[TEXT("Id")]);
		info.desc = fortress_supply_list[TEXT("desc")];
		info.SkeletalMesh = fortress_supply_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_supply_list[TEXT("MyMat")];
		info.EnemyMat = fortress_supply_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_supply_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_supply_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_supply_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_supply_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_supply_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_supply_list[TEXT("fOccupy_time")]);
		info.nOccupy_self_add_morale = FCString::Atoi(*fortress_supply_list[TEXT("nOccupy_self_add_morale")]);
		info.nOccupy_enemy_reduce_morale = FCString::Atoi(*fortress_supply_list[TEXT("nOccupy_enemy_reduce_morale")]);
		info.fOccupy_boss_life_add_percent = FCString::Atof(*fortress_supply_list[TEXT("fOccupy_boss_life_add_percent")]);
		info.fFound_range = FCString::Atof(*fortress_supply_list[TEXT("fFound_range")]);
		info.nBuff_count = FCString::Atoi(*fortress_supply_list[TEXT("nBuff_count")]);
		info.nBuff_cover_type = FCString::Atoi(*fortress_supply_list[TEXT("nBuff_cover_type")]);
		info.nBuff_cd = FCString::Atoi(*fortress_supply_list[TEXT("nBuff_cd")]);
		info.nBuff1 = FCString::Atoi(*fortress_supply_list[TEXT("nBuff1")]);
		info.nBuff2 = FCString::Atoi(*fortress_supply_list[TEXT("nBuff2")]);
		info.nBbuff3 = FCString::Atoi(*fortress_supply_list[TEXT("nBbuff3")]);
		info.nBuff4 = FCString::Atoi(*fortress_supply_list[TEXT("nBuff4")]);
		info.nBuff5 = FCString::Atoi(*fortress_supply_list[TEXT("nBuff5")]);
		info.nDdelay_add_time = FCString::Atoi(*fortress_supply_list[TEXT("nDdelay_add_time")]);
		info.nDelay_add_show_cd_time = FCString::Atoi(*fortress_supply_list[TEXT("nDelay_add_show_cd_time")]);
		info.nDelay_add_warning_count = FCString::Atoi(*fortress_supply_list[TEXT("nDelay_add_warning_count")]);
		info.nDelay_add_warning_time1 = FCString::Atoi(*fortress_supply_list[TEXT("nDelay_add_warning_time1")]);
		info.nDelay_add_warning_time2 = FCString::Atoi(*fortress_supply_list[TEXT("nDelay_add_warning_time2")]);
		info.nDelay_add_warning_time3 = FCString::Atoi(*fortress_supply_list[TEXT("nDelay_add_warning_time3")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_supply_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_supply info;
	if(!Get_Frontend_txt_struct_fortress_supply(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("nOccupy_self_add_morale"), FString::FromInt(info.nOccupy_self_add_morale));
	out.Add(TEXT("nOccupy_enemy_reduce_morale"), FString::FromInt(info.nOccupy_enemy_reduce_morale));
	out.Add(TEXT("fOccupy_boss_life_add_percent"), FString::SanitizeFloat(info.fOccupy_boss_life_add_percent));
	out.Add(TEXT("fFound_range"), FString::SanitizeFloat(info.fFound_range));
	out.Add(TEXT("nBuff_count"), FString::FromInt(info.nBuff_count));
	out.Add(TEXT("nBuff_cover_type"), FString::FromInt(info.nBuff_cover_type));
	out.Add(TEXT("nBuff_cd"), FString::FromInt(info.nBuff_cd));
	out.Add(TEXT("nBuff1"), FString::FromInt(info.nBuff1));
	out.Add(TEXT("nBuff2"), FString::FromInt(info.nBuff2));
	out.Add(TEXT("nBbuff3"), FString::FromInt(info.nBbuff3));
	out.Add(TEXT("nBuff4"), FString::FromInt(info.nBuff4));
	out.Add(TEXT("nBuff5"), FString::FromInt(info.nBuff5));
	out.Add(TEXT("nDdelay_add_time"), FString::FromInt(info.nDdelay_add_time));
	out.Add(TEXT("nDelay_add_show_cd_time"), FString::FromInt(info.nDelay_add_show_cd_time));
	out.Add(TEXT("nDelay_add_warning_count"), FString::FromInt(info.nDelay_add_warning_count));
	out.Add(TEXT("nDelay_add_warning_time1"), FString::FromInt(info.nDelay_add_warning_time1));
	out.Add(TEXT("nDelay_add_warning_time2"), FString::FromInt(info.nDelay_add_warning_time2));
	out.Add(TEXT("nDelay_add_warning_time3"), FString::FromInt(info.nDelay_add_warning_time3));
	return true;
}

bool Get_Frontend_txt_struct_fortress_troops(int id, OUT Frontend_txt_struct_fortress_troops& info)
{
	info.Id = 0;
	TMap<FString, FString> fortress_troops_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fortress_troops"), id, fortress_troops_list);
	if (fortress_troops_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*fortress_troops_list[TEXT("Id")]);
		info.desc = fortress_troops_list[TEXT("desc")];
		info.SkeletalMesh = fortress_troops_list[TEXT("SkeletalMesh")];
		info.MyMat = fortress_troops_list[TEXT("MyMat")];
		info.EnemyMat = fortress_troops_list[TEXT("EnemyMat")];
		info.NeutralMat = fortress_troops_list[TEXT("NeutralMat")];
		info.PhysicsAssets = fortress_troops_list[TEXT("PhysicsAssets")];
		info.fRadius = FCString::Atof(*fortress_troops_list[TEXT("fRadius")]);
		info.nHealth = FCString::Atoi(*fortress_troops_list[TEXT("nHealth")]);
		info.nOccupy_range = FCString::Atoi(*fortress_troops_list[TEXT("nOccupy_range")]);
		info.fOccupy_time = FCString::Atof(*fortress_troops_list[TEXT("fOccupy_time")]);
		info.fFound_range = FCString::Atoi(*fortress_troops_list[TEXT("fFound_range")]);
		info.nTroops_generate_time = FCString::Atoi(*fortress_troops_list[TEXT("nTroops_generate_time")]);
		info.fTroops_supply_time = FCString::Atof(*fortress_troops_list[TEXT("fTroops_supply_time")]);
		info.fTroops_add_rate = FCString::Atof(*fortress_troops_list[TEXT("fTroops_add_rate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fortress_troops_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fortress_troops info;
	if(!Get_Frontend_txt_struct_fortress_troops(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("MyMat"), info.MyMat);
	out.Add(TEXT("EnemyMat"), info.EnemyMat);
	out.Add(TEXT("NeutralMat"), info.NeutralMat);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nOccupy_range"), FString::FromInt(info.nOccupy_range));
	out.Add(TEXT("fOccupy_time"), FString::SanitizeFloat(info.fOccupy_time));
	out.Add(TEXT("fFound_range"), FString::FromInt(info.fFound_range));
	out.Add(TEXT("nTroops_generate_time"), FString::FromInt(info.nTroops_generate_time));
	out.Add(TEXT("fTroops_supply_time"), FString::SanitizeFloat(info.fTroops_supply_time));
	out.Add(TEXT("fTroops_add_rate"), FString::SanitizeFloat(info.fTroops_add_rate));
	return true;
}

bool Get_Frontend_txt_struct_hit_effect(int id, OUT Frontend_txt_struct_hit_effect& info)
{
	info.hit_effect = 0;
	TMap<FString, FString> hit_effect_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("hit_effect"), id, hit_effect_list);
	if (hit_effect_list.Num() > 0)
	{
		info.hit_effect = FCString::Atoi(*hit_effect_list[TEXT("hit_effect")]);
		info.hit_min = FCString::Atoi(*hit_effect_list[TEXT("hit_min")]);
		info.hit_max = FCString::Atoi(*hit_effect_list[TEXT("hit_max")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_hit_effect_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_hit_effect info;
	if(!Get_Frontend_txt_struct_hit_effect(id, info))
	{
		return false;
	}

	out.Add(TEXT("hit_effect"), FString::FromInt(info.hit_effect));
	out.Add(TEXT("hit_min"), FString::FromInt(info.hit_min));
	out.Add(TEXT("hit_max"), FString::FromInt(info.hit_max));
	return true;
}

bool Get_Frontend_txt_struct_horse(int id, OUT Frontend_txt_struct_horse& info)
{
	info.HorseID = 0;
	TMap<FString, FString> horse_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("horse"), id, horse_list);
	if (horse_list.Num() > 0)
	{
		info.HorseID = FCString::Atoi(*horse_list[TEXT("HorseID")]);
		info.ItemName = horse_list[TEXT("ItemName")];
		info.ItemDescription = horse_list[TEXT("ItemDescription")];
		info.SkeletalMesh = horse_list[TEXT("SkeletalMesh")];
		info.PhysicsAsset = horse_list[TEXT("PhysicsAsset")];
		info.Level = FCString::Atoi(*horse_list[TEXT("Level")]);
		info.fHealth = FCString::Atoi(*horse_list[TEXT("fHealth")]);
		info.DefenseValue = FCString::Atoi(*horse_list[TEXT("DefenseValue")]);
		info.fJump = FCString::Atof(*horse_list[TEXT("fJump")]);
		info.Extraweight = FCString::Atof(*horse_list[TEXT("Extraweight")]);
		info.fAccelRate = FCString::Atof(*horse_list[TEXT("fAccelRate")]);
		info.MaxSpeed = FCString::Atof(*horse_list[TEXT("MaxSpeed")]);
		info.fTurnToParam = FCString::Atof(*horse_list[TEXT("fTurnToParam")]);
		info.RotationRate = FCString::Atof(*horse_list[TEXT("RotationRate")]);
		info.SprintTotalCount = FCString::Atoi(*horse_list[TEXT("SprintTotalCount")]);
		info.minCrashDamage = FCString::Atoi(*horse_list[TEXT("minCrashDamage")]);
		info.maxCrashDamage = FCString::Atoi(*horse_list[TEXT("maxCrashDamage")]);
		info.MountAnimTime = FCString::Atof(*horse_list[TEXT("MountAnimTime")]);
		info.DismountAnimTime = FCString::Atof(*horse_list[TEXT("DismountAnimTime")]);
		info.HorseLazyTime = FCString::Atof(*horse_list[TEXT("HorseLazyTime")]);
		info.CollisionStopTime = FCString::Atof(*horse_list[TEXT("CollisionStopTime")]);
		info.QuickStopTime = FCString::Atof(*horse_list[TEXT("QuickStopTime")]);
		info.SprintExtraValue = FCString::Atof(*horse_list[TEXT("SprintExtraValue")]);
		info.iCollisionStopVel = FCString::Atof(*horse_list[TEXT("iCollisionStopVel")]);
		info.iBumpStopVel = FCString::Atof(*horse_list[TEXT("iBumpStopVel")]);
		info.fSprintTime = FCString::Atof(*horse_list[TEXT("fSprintTime")]);
		info.BumpMass = FCString::Atof(*horse_list[TEXT("BumpMass")]);
		info.recoveryTimeInSprint = FCString::Atof(*horse_list[TEXT("recoveryTimeInSprint")]);
		info.fBlockSprintSpeed = FCString::Atof(*horse_list[TEXT("fBlockSprintSpeed")]);
		info.fHealthDown = FCString::Atof(*horse_list[TEXT("fHealthDown")]);
		info.fAccelRateDown = FCString::Atof(*horse_list[TEXT("fAccelRateDown")]);
		info.MaxSpeedDown = FCString::Atof(*horse_list[TEXT("MaxSpeedDown")]);
		info.fight = FCString::Atoi(*horse_list[TEXT("fight")]);
		info.nDifficuty = FCString::Atoi(*horse_list[TEXT("nDifficuty")]);
		info.nAssaultMomentum = FCString::Atoi(*horse_list[TEXT("nAssaultMomentum")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horsearmor(int id, OUT Frontend_txt_struct_horsearmor& info)
{
	info.Id = 0;
	TMap<FString, FString> horsearmor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("horsearmor"), id, horsearmor_list);
	if (horsearmor_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*horsearmor_list[TEXT("Id")]);
		info.ItemName = horsearmor_list[TEXT("ItemName")];
		info.ItemDescription = horsearmor_list[TEXT("ItemDescription")];
		info.SkeletalMesh = horsearmor_list[TEXT("SkeletalMesh")];
		info.Level = FCString::Atoi(*horsearmor_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*horsearmor_list[TEXT("WeaponWeight")]);
		info.fControlCoef = FCString::Atof(*horsearmor_list[TEXT("fControlCoef")]);
		info.VelocityExtraValue = FCString::Atof(*horsearmor_list[TEXT("VelocityExtraValue")]);
		info.HealthExtraValue = FCString::Atof(*horsearmor_list[TEXT("HealthExtraValue")]);
		info.MetalFailPro = FCString::Atof(*horsearmor_list[TEXT("MetalFailPro")]);
		info.LeatherFailPro = FCString::Atof(*horsearmor_list[TEXT("LeatherFailPro")]);
		info.ClothFailPro = FCString::Atof(*horsearmor_list[TEXT("ClothFailPro")]);
		info.MetalDefenseValue = FCString::Atoi(*horsearmor_list[TEXT("MetalDefenseValue")]);
		info.LeatherDefenseValue = FCString::Atoi(*horsearmor_list[TEXT("LeatherDefenseValue")]);
		info.ClothDefenseValue = FCString::Atoi(*horsearmor_list[TEXT("ClothDefenseValue")]);
		info.MetalMinusCutParam = FCString::Atof(*horsearmor_list[TEXT("MetalMinusCutParam")]);
		info.LeatherMinusCutParam = FCString::Atof(*horsearmor_list[TEXT("LeatherMinusCutParam")]);
		info.ClothMinusCutParam = FCString::Atof(*horsearmor_list[TEXT("ClothMinusCutParam")]);
		info.MetalMinusStabParam = FCString::Atof(*horsearmor_list[TEXT("MetalMinusStabParam")]);
		info.LeatherMinusStabParam = FCString::Atof(*horsearmor_list[TEXT("LeatherMinusStabParam")]);
		info.ClothMinusStabParam = FCString::Atof(*horsearmor_list[TEXT("ClothMinusStabParam")]);
		info.MetalMinusBluntParam = FCString::Atof(*horsearmor_list[TEXT("MetalMinusBluntParam")]);
		info.LeatherMinusBluntParam = FCString::Atof(*horsearmor_list[TEXT("LeatherMinusBluntParam")]);
		info.ClothMinusBluntParam = FCString::Atof(*horsearmor_list[TEXT("ClothMinusBluntParam")]);
		info.Metal = horsearmor_list[TEXT("Metal")];
		info.Leather = horsearmor_list[TEXT("Leather")];
		info.Cloth = horsearmor_list[TEXT("Cloth")];
		info.MetalDefenseDown = FCString::Atof(*horsearmor_list[TEXT("MetalDefenseDown")]);
		info.LeatherDefenseDown = FCString::Atof(*horsearmor_list[TEXT("LeatherDefenseDown")]);
		info.ClothDefenseDown = FCString::Atof(*horsearmor_list[TEXT("ClothDefenseDown")]);
		info.FailProDown = FCString::Atof(*horsearmor_list[TEXT("FailProDown")]);
		info.fight = FCString::Atoi(*horsearmor_list[TEXT("fight")]);
		info.DefenseDownLv1 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv1")]);
		info.DefenseDownLv2 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv2")]);
		info.DefenseDownLv3 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv3")]);
		info.DefenseDownLv4 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv4")]);
		info.DefenseDownLv5 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv5")]);
		info.DefenseDownLv6 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv6")]);
		info.DefenseDownLv7 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv7")]);
		info.DefenseDownLv8 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv8")]);
		info.DefenseDownLv9 = FCString::Atof(*horsearmor_list[TEXT("DefenseDownLv9")]);
		info.fDefenseRemoteAtk = FCString::Atof(*horsearmor_list[TEXT("fDefenseRemoteAtk")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horsehoof(int id, OUT Frontend_txt_struct_horsehoof& info)
{
	info.Id = 0;
	TMap<FString, FString> horsehoof_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("horsehoof"), id, horsehoof_list);
	if (horsehoof_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*horsehoof_list[TEXT("Id")]);
		info.ItemName = horsehoof_list[TEXT("ItemName")];
		info.ItemDescription = horsehoof_list[TEXT("ItemDescription")];
		info.SkeletalMesh = horsehoof_list[TEXT("SkeletalMesh")];
		info.IconTexture = horsehoof_list[TEXT("IconTexture")];
		info.Level = FCString::Atoi(*horsehoof_list[TEXT("Level")]);
		info.fMaxSpeed = FCString::Atof(*horsehoof_list[TEXT("fMaxSpeed")]);
		info.fClimbSpeedRate = FCString::Atof(*horsehoof_list[TEXT("fClimbSpeedRate")]);
		info.fJump = FCString::Atof(*horsehoof_list[TEXT("fJump")]);
		info.fAssaultSpeed = FCString::Atof(*horsehoof_list[TEXT("fAssaultSpeed")]);
		info.fAngleRate = FCString::Atof(*horsehoof_list[TEXT("fAngleRate")]);
		info.fAssaultCDRate = FCString::Atof(*horsehoof_list[TEXT("fAssaultCDRate")]);
		info.fAssaultTime = FCString::Atof(*horsehoof_list[TEXT("fAssaultTime")]);
		info.QuickStopTimeRate = FCString::Atof(*horsehoof_list[TEXT("QuickStopTimeRate")]);
		info.fBeDetectedRate = FCString::Atof(*horsehoof_list[TEXT("fBeDetectedRate")]);
		info.fAccelRate = FCString::Atof(*horsehoof_list[TEXT("fAccelRate")]);
		info.uFightPower = FCString::Atoi(*horsehoof_list[TEXT("uFightPower")]);
		info.uDurableness = FCString::Atoi(*horsehoof_list[TEXT("uDurableness")]);
		info.uReduceDurablenessPerSec = FCString::Atoi(*horsehoof_list[TEXT("uReduceDurablenessPerSec")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horsehoof_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_horsehoof info;
	if(!Get_Frontend_txt_struct_horsehoof(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("fMaxSpeed"), FString::SanitizeFloat(info.fMaxSpeed));
	out.Add(TEXT("fClimbSpeedRate"), FString::SanitizeFloat(info.fClimbSpeedRate));
	out.Add(TEXT("fJump"), FString::SanitizeFloat(info.fJump));
	out.Add(TEXT("fAssaultSpeed"), FString::SanitizeFloat(info.fAssaultSpeed));
	out.Add(TEXT("fAngleRate"), FString::SanitizeFloat(info.fAngleRate));
	out.Add(TEXT("fAssaultCDRate"), FString::SanitizeFloat(info.fAssaultCDRate));
	out.Add(TEXT("fAssaultTime"), FString::SanitizeFloat(info.fAssaultTime));
	out.Add(TEXT("QuickStopTimeRate"), FString::SanitizeFloat(info.QuickStopTimeRate));
	out.Add(TEXT("fBeDetectedRate"), FString::SanitizeFloat(info.fBeDetectedRate));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("uFightPower"), FString::FromInt(info.uFightPower));
	out.Add(TEXT("uDurableness"), FString::FromInt(info.uDurableness));
	out.Add(TEXT("uReduceDurablenessPerSec"), FString::FromInt(info.uReduceDurablenessPerSec));
	return true;
}

bool Get_Frontend_txt_struct_horsestrike(int id, OUT Frontend_txt_struct_horsestrike& info)
{
	info.Id = 0;
	TMap<FString, FString> horsestrike_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("horsestrike"), id, horsestrike_list);
	if (horsestrike_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*horsestrike_list[TEXT("Id")]);
		info.ItemName = horsestrike_list[TEXT("ItemName")];
		info.ItemDescription = horsestrike_list[TEXT("ItemDescription")];
		info.SkeletalMesh = horsestrike_list[TEXT("SkeletalMesh")];
		info.IconTexture = horsestrike_list[TEXT("IconTexture")];
		info.Level = FCString::Atoi(*horsestrike_list[TEXT("Level")]);
		info.nFront = FCString::Atoi(*horsestrike_list[TEXT("nFront")]);
		info.nBack = FCString::Atoi(*horsestrike_list[TEXT("nBack")]);
		info.nLeft = FCString::Atoi(*horsestrike_list[TEXT("nLeft")]);
		info.nRight = FCString::Atoi(*horsestrike_list[TEXT("nRight")]);
		info.fCollisionDamage = FCString::Atoi(*horsestrike_list[TEXT("fCollisionDamage")]);
		info.uDamageType = FCString::Atoi(*horsestrike_list[TEXT("uDamageType")]);
		info.fDamageSpeedRate = FCString::Atof(*horsestrike_list[TEXT("fDamageSpeedRate")]);
		info.uFightPower = FCString::Atoi(*horsestrike_list[TEXT("uFightPower")]);
		info.uDurableness = FCString::Atoi(*horsestrike_list[TEXT("uDurableness")]);
		info.uPlayerDurablenessPer = FCString::Atoi(*horsestrike_list[TEXT("uPlayerDurablenessPer")]);
		info.uAiDurablenessPer = FCString::Atoi(*horsestrike_list[TEXT("uAiDurablenessPer")]);
		info.fAiDamageRate = FCString::Atof(*horsestrike_list[TEXT("fAiDamageRate")]);
		info.fPlayerDamageRate = FCString::Atof(*horsestrike_list[TEXT("fPlayerDamageRate")]);
		info.fDamageCD = FCString::Atoi(*horsestrike_list[TEXT("fDamageCD")]);
		info.fAttackRange = FCString::Atof(*horsestrike_list[TEXT("fAttackRange")]);
		info.fMetalCutCamailValue = FCString::Atof(*horsestrike_list[TEXT("fMetalCutCamailValue")]);
		info.fMetalStabCamailValue = FCString::Atof(*horsestrike_list[TEXT("fMetalStabCamailValue")]);
		info.fMetalBluntCamailValue = FCString::Atof(*horsestrike_list[TEXT("fMetalBluntCamailValue")]);
		info.fLeatherCutCamailValue = FCString::Atof(*horsestrike_list[TEXT("fLeatherCutCamailValue")]);
		info.fLeatherStabCamailValue = FCString::Atof(*horsestrike_list[TEXT("fLeatherStabCamailValue")]);
		info.fLeatherBluntCamailValue = FCString::Atof(*horsestrike_list[TEXT("fLeatherBluntCamailValue")]);
		info.fClothCutCamailValue = FCString::Atof(*horsestrike_list[TEXT("fClothCutCamailValue")]);
		info.fClothStabCamailValue = FCString::Atof(*horsestrike_list[TEXT("fClothStabCamailValue")]);
		info.fClothBluntCamailValue = FCString::Atof(*horsestrike_list[TEXT("fClothBluntCamailValue")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horsestrike_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_horsestrike info;
	if(!Get_Frontend_txt_struct_horsestrike(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("nFront"), FString::FromInt(info.nFront));
	out.Add(TEXT("nBack"), FString::FromInt(info.nBack));
	out.Add(TEXT("nLeft"), FString::FromInt(info.nLeft));
	out.Add(TEXT("nRight"), FString::FromInt(info.nRight));
	out.Add(TEXT("fCollisionDamage"), FString::FromInt(info.fCollisionDamage));
	out.Add(TEXT("uDamageType"), FString::FromInt(info.uDamageType));
	out.Add(TEXT("fDamageSpeedRate"), FString::SanitizeFloat(info.fDamageSpeedRate));
	out.Add(TEXT("uFightPower"), FString::FromInt(info.uFightPower));
	out.Add(TEXT("uDurableness"), FString::FromInt(info.uDurableness));
	out.Add(TEXT("uPlayerDurablenessPer"), FString::FromInt(info.uPlayerDurablenessPer));
	out.Add(TEXT("uAiDurablenessPer"), FString::FromInt(info.uAiDurablenessPer));
	out.Add(TEXT("fAiDamageRate"), FString::SanitizeFloat(info.fAiDamageRate));
	out.Add(TEXT("fPlayerDamageRate"), FString::SanitizeFloat(info.fPlayerDamageRate));
	out.Add(TEXT("fDamageCD"), FString::FromInt(info.fDamageCD));
	out.Add(TEXT("fAttackRange"), FString::SanitizeFloat(info.fAttackRange));
	out.Add(TEXT("fMetalCutCamailValue"), FString::SanitizeFloat(info.fMetalCutCamailValue));
	out.Add(TEXT("fMetalStabCamailValue"), FString::SanitizeFloat(info.fMetalStabCamailValue));
	out.Add(TEXT("fMetalBluntCamailValue"), FString::SanitizeFloat(info.fMetalBluntCamailValue));
	out.Add(TEXT("fLeatherCutCamailValue"), FString::SanitizeFloat(info.fLeatherCutCamailValue));
	out.Add(TEXT("fLeatherStabCamailValue"), FString::SanitizeFloat(info.fLeatherStabCamailValue));
	out.Add(TEXT("fLeatherBluntCamailValue"), FString::SanitizeFloat(info.fLeatherBluntCamailValue));
	out.Add(TEXT("fClothCutCamailValue"), FString::SanitizeFloat(info.fClothCutCamailValue));
	out.Add(TEXT("fClothStabCamailValue"), FString::SanitizeFloat(info.fClothStabCamailValue));
	out.Add(TEXT("fClothBluntCamailValue"), FString::SanitizeFloat(info.fClothBluntCamailValue));
	return true;
}

bool Get_Frontend_txt_struct_mapindex(int id, OUT Frontend_txt_struct_mapindex& info)
{
	info.map_id = 0;
	TMap<FString, FString> mapindex_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mapindex"), id, mapindex_list);
	if (mapindex_list.Num() > 0)
	{
		info.map_id = FCString::Atoi(*mapindex_list[TEXT("map_id")]);
		info.map_name = mapindex_list[TEXT("map_name")];
		info.desc = mapindex_list[TEXT("desc")];
		info.terrian = mapindex_list[TEXT("terrian")];
		info.Camp1Pos = mapindex_list[TEXT("Camp1Pos")];
		info.Camp1Dir = mapindex_list[TEXT("Camp1Dir")];
		info.Camp2Pos = mapindex_list[TEXT("Camp2Pos")];
		info.Camp2Dir = mapindex_list[TEXT("Camp2Dir")];
		info.escape1Pos = mapindex_list[TEXT("escape1Pos")];
		info.escape2Pos = mapindex_list[TEXT("escape2Pos")];
		info.escape3Pos = mapindex_list[TEXT("escape3Pos")];
		info.escape4Pos = mapindex_list[TEXT("escape4Pos")];
		info.maxPathQueueNodes = mapindex_list[TEXT("maxPathQueueNodes")];
		info.camp1InitRegion = mapindex_list[TEXT("camp1InitRegion")];
		info.camp2InitRegion = mapindex_list[TEXT("camp2InitRegion")];
		info.nNationType = FCString::Atoi(*mapindex_list[TEXT("nNationType")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mapindex_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mapindex info;
	if(!Get_Frontend_txt_struct_mapindex(id, info))
	{
		return false;
	}

	out.Add(TEXT("map_id"), FString::FromInt(info.map_id));
	out.Add(TEXT("map_name"), info.map_name);
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("terrian"), info.terrian);
	out.Add(TEXT("Camp1Pos"), info.Camp1Pos);
	out.Add(TEXT("Camp1Dir"), info.Camp1Dir);
	out.Add(TEXT("Camp2Pos"), info.Camp2Pos);
	out.Add(TEXT("Camp2Dir"), info.Camp2Dir);
	out.Add(TEXT("escape1Pos"), info.escape1Pos);
	out.Add(TEXT("escape2Pos"), info.escape2Pos);
	out.Add(TEXT("escape3Pos"), info.escape3Pos);
	out.Add(TEXT("escape4Pos"), info.escape4Pos);
	out.Add(TEXT("maxPathQueueNodes"), info.maxPathQueueNodes);
	out.Add(TEXT("camp1InitRegion"), info.camp1InitRegion);
	out.Add(TEXT("camp2InitRegion"), info.camp2InitRegion);
	out.Add(TEXT("nNationType"), FString::FromInt(info.nNationType));
	return true;
}

bool Get_Frontend_txt_struct_mc_aerialladder(int id, OUT Frontend_txt_struct_mc_aerialladder& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_aerialladder_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_aerialladder"), id, mc_aerialladder_list);
	if (mc_aerialladder_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_aerialladder_list[TEXT("Id")]);
		info.ItemName = mc_aerialladder_list[TEXT("ItemName")];
		info.ItemDescription = mc_aerialladder_list[TEXT("ItemDescription")];
		info.SkeletalMesh1 = mc_aerialladder_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = mc_aerialladder_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = mc_aerialladder_list[TEXT("SkeletalMesh3")];
		info.SkeletalMesh4 = mc_aerialladder_list[TEXT("SkeletalMesh4")];
		info.AnimSet = mc_aerialladder_list[TEXT("AnimSet")];
		info.PhysicsAssets = mc_aerialladder_list[TEXT("PhysicsAssets")];
		info.MorphAssets = mc_aerialladder_list[TEXT("MorphAssets")];
		info.IconTexture = mc_aerialladder_list[TEXT("IconTexture")];
		info.BoneName = mc_aerialladder_list[TEXT("BoneName")];
		info.BrokenPointEffectPath = mc_aerialladder_list[TEXT("BrokenPointEffectPath")];
		info.BrokenEffectPath = mc_aerialladder_list[TEXT("BrokenEffectPath")];
		info.nHealth = FCString::Atoi(*mc_aerialladder_list[TEXT("nHealth")]);
		info.nDamageValue = FCString::Atoi(*mc_aerialladder_list[TEXT("nDamageValue")]);
		info.nPlayerPlusDamageValue = FCString::Atoi(*mc_aerialladder_list[TEXT("nPlayerPlusDamageValue")]);
		info.fAttackInterval = FCString::Atoi(*mc_aerialladder_list[TEXT("fAttackInterval")]);
		info.nAttackPointPercent = FCString::Atoi(*mc_aerialladder_list[TEXT("nAttackPointPercent")]);
		info.nDefenseValue = FCString::Atoi(*mc_aerialladder_list[TEXT("nDefenseValue")]);
		info.fWeaponWeight = FCString::Atoi(*mc_aerialladder_list[TEXT("fWeaponWeight")]);
		info.fAroundPlayerRange = FCString::Atof(*mc_aerialladder_list[TEXT("fAroundPlayerRange")]);
		info.fInitialSpeed = FCString::Atof(*mc_aerialladder_list[TEXT("fInitialSpeed")]);
		info.fOperatRange = FCString::Atoi(*mc_aerialladder_list[TEXT("fOperatRange")]);
		info.nRotationRate = FCString::Atof(*mc_aerialladder_list[TEXT("nRotationRate")]);
		info.fAtkPlayerPlusSpeed = FCString::Atof(*mc_aerialladder_list[TEXT("fAtkPlayerPlusSpeed")]);
		info.fDefendPlayerPlusSpeed = FCString::Atof(*mc_aerialladder_list[TEXT("fDefendPlayerPlusSpeed")]);
		info.fAtkSpeedMax = FCString::Atof(*mc_aerialladder_list[TEXT("fAtkSpeedMax")]);
		info.fDefendSpeedMax = FCString::Atof(*mc_aerialladder_list[TEXT("fDefendSpeedMax")]);
		info.nBreakLightPercent = FCString::Atof(*mc_aerialladder_list[TEXT("nBreakLightPercent")]);
		info.nBreakHeavyPercent = FCString::Atof(*mc_aerialladder_list[TEXT("nBreakHeavyPercent")]);
		info.fAccelRate = FCString::Atof(*mc_aerialladder_list[TEXT("fAccelRate")]);
		info.fTimeLadderDown = FCString::Atoi(*mc_aerialladder_list[TEXT("fTimeLadderDown")]);
		info.fTimeLadderUp = FCString::Atoi(*mc_aerialladder_list[TEXT("fTimeLadderUp")]);
		info.nRebornTimeSec = FCString::Atoi(*mc_aerialladder_list[TEXT("nRebornTimeSec")]);
		info.Radius = FCString::Atof(*mc_aerialladder_list[TEXT("Radius")]);
		info.nRepairTimeDT = FCString::Atoi(*mc_aerialladder_list[TEXT("nRepairTimeDT")]);
		info.nRepairRecoverHealth = FCString::Atoi(*mc_aerialladder_list[TEXT("nRepairRecoverHealth")]);
		info.putdownRadius = FCString::Atof(*mc_aerialladder_list[TEXT("putdownRadius")]);
		info.putdownHeight = FCString::Atof(*mc_aerialladder_list[TEXT("putdownHeight")]);
		info.fCollisionRadius = FCString::Atof(*mc_aerialladder_list[TEXT("fCollisionRadius")]);
		info.fWidth = FCString::Atof(*mc_aerialladder_list[TEXT("fWidth")]);
		info.nVehicle = FCString::Atoi(*mc_aerialladder_list[TEXT("nVehicle")]);
		info.nMax_nneis = FCString::Atoi(*mc_aerialladder_list[TEXT("nMax_nneis")]);
		info.fQueryRange = FCString::Atoi(*mc_aerialladder_list[TEXT("fQueryRange")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_aerialladder_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_aerialladder info;
	if(!Get_Frontend_txt_struct_mc_aerialladder(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("SkeletalMesh4"), info.SkeletalMesh4);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("MorphAssets"), info.MorphAssets);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("BoneName"), info.BoneName);
	out.Add(TEXT("BrokenPointEffectPath"), info.BrokenPointEffectPath);
	out.Add(TEXT("BrokenEffectPath"), info.BrokenEffectPath);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nDamageValue"), FString::FromInt(info.nDamageValue));
	out.Add(TEXT("nPlayerPlusDamageValue"), FString::FromInt(info.nPlayerPlusDamageValue));
	out.Add(TEXT("fAttackInterval"), FString::FromInt(info.fAttackInterval));
	out.Add(TEXT("nAttackPointPercent"), FString::FromInt(info.nAttackPointPercent));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeaponWeight"), FString::FromInt(info.fWeaponWeight));
	out.Add(TEXT("fAroundPlayerRange"), FString::SanitizeFloat(info.fAroundPlayerRange));
	out.Add(TEXT("fInitialSpeed"), FString::SanitizeFloat(info.fInitialSpeed));
	out.Add(TEXT("fOperatRange"), FString::FromInt(info.fOperatRange));
	out.Add(TEXT("nRotationRate"), FString::SanitizeFloat(info.nRotationRate));
	out.Add(TEXT("fAtkPlayerPlusSpeed"), FString::SanitizeFloat(info.fAtkPlayerPlusSpeed));
	out.Add(TEXT("fDefendPlayerPlusSpeed"), FString::SanitizeFloat(info.fDefendPlayerPlusSpeed));
	out.Add(TEXT("fAtkSpeedMax"), FString::SanitizeFloat(info.fAtkSpeedMax));
	out.Add(TEXT("fDefendSpeedMax"), FString::SanitizeFloat(info.fDefendSpeedMax));
	out.Add(TEXT("nBreakLightPercent"), FString::SanitizeFloat(info.nBreakLightPercent));
	out.Add(TEXT("nBreakHeavyPercent"), FString::SanitizeFloat(info.nBreakHeavyPercent));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("fTimeLadderDown"), FString::FromInt(info.fTimeLadderDown));
	out.Add(TEXT("fTimeLadderUp"), FString::FromInt(info.fTimeLadderUp));
	out.Add(TEXT("nRebornTimeSec"), FString::FromInt(info.nRebornTimeSec));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("nRepairTimeDT"), FString::FromInt(info.nRepairTimeDT));
	out.Add(TEXT("nRepairRecoverHealth"), FString::FromInt(info.nRepairRecoverHealth));
	out.Add(TEXT("putdownRadius"), FString::SanitizeFloat(info.putdownRadius));
	out.Add(TEXT("putdownHeight"), FString::SanitizeFloat(info.putdownHeight));
	out.Add(TEXT("fCollisionRadius"), FString::SanitizeFloat(info.fCollisionRadius));
	out.Add(TEXT("fWidth"), FString::SanitizeFloat(info.fWidth));
	out.Add(TEXT("nVehicle"), FString::FromInt(info.nVehicle));
	out.Add(TEXT("nMax_nneis"), FString::FromInt(info.nMax_nneis));
	out.Add(TEXT("fQueryRange"), FString::FromInt(info.fQueryRange));
	return true;
}

bool Get_Frontend_txt_struct_mc_arrowtower(int id, OUT Frontend_txt_struct_mc_arrowtower& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_arrowtower_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_arrowtower"), id, mc_arrowtower_list);
	if (mc_arrowtower_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_arrowtower_list[TEXT("Id")]);
		info.ItemName = mc_arrowtower_list[TEXT("ItemName")];
		info.ItemDescription = mc_arrowtower_list[TEXT("ItemDescription")];
		info.SkeletalMesh1 = mc_arrowtower_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = mc_arrowtower_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = mc_arrowtower_list[TEXT("SkeletalMesh3")];
		info.SkeletalMesh4 = mc_arrowtower_list[TEXT("SkeletalMesh4")];
		info.IconTexture = mc_arrowtower_list[TEXT("IconTexture")];
		info.AnimSet = mc_arrowtower_list[TEXT("AnimSet")];
		info.PhysicAsset = mc_arrowtower_list[TEXT("PhysicAsset")];
		info.BoneName = mc_arrowtower_list[TEXT("BoneName")];
		info.BrokenPointEffectPath = mc_arrowtower_list[TEXT("BrokenPointEffectPath")];
		info.BrokenEffectPath = mc_arrowtower_list[TEXT("BrokenEffectPath")];
		info.nHealth = FCString::Atoi(*mc_arrowtower_list[TEXT("nHealth")]);
		info.nDefenseValue = FCString::Atoi(*mc_arrowtower_list[TEXT("nDefenseValue")]);
		info.fWeight = FCString::Atof(*mc_arrowtower_list[TEXT("fWeight")]);
		info.Radius = FCString::Atof(*mc_arrowtower_list[TEXT("Radius")]);
		info.fAttackRate = FCString::Atof(*mc_arrowtower_list[TEXT("fAttackRate")]);
		info.fDamageRate = FCString::Atof(*mc_arrowtower_list[TEXT("fDamageRate")]);
		info.fDefenseRate = FCString::Atof(*mc_arrowtower_list[TEXT("fDefenseRate")]);
		info.fBulletSpeedRate = FCString::Atof(*mc_arrowtower_list[TEXT("fBulletSpeedRate")]);
		info.fDetectRate = FCString::Atof(*mc_arrowtower_list[TEXT("fDetectRate")]);
		info.fBeDetectRate = FCString::Atof(*mc_arrowtower_list[TEXT("fBeDetectRate")]);
		info.fOperateRange = FCString::Atof(*mc_arrowtower_list[TEXT("fOperateRange")]);
		info.nRepairSec = FCString::Atoi(*mc_arrowtower_list[TEXT("nRepairSec")]);
		info.nOccupySec = FCString::Atoi(*mc_arrowtower_list[TEXT("nOccupySec")]);
		info.nOccupySoliderCount = FCString::Atoi(*mc_arrowtower_list[TEXT("nOccupySoliderCount")]);
		info.nOccupySoliderRange = FCString::Atoi(*mc_arrowtower_list[TEXT("nOccupySoliderRange")]);
		info.nEndOccupySec = FCString::Atoi(*mc_arrowtower_list[TEXT("nEndOccupySec")]);
		info.fFoundRange = FCString::Atof(*mc_arrowtower_list[TEXT("fFoundRange")]);
		info.nOnMaxCount = FCString::Atoi(*mc_arrowtower_list[TEXT("nOnMaxCount")]);
		info.fPosRadius = FCString::Atof(*mc_arrowtower_list[TEXT("fPosRadius")]);
		info.Pos = mc_arrowtower_list[TEXT("Pos")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_arrowtower_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_arrowtower info;
	if(!Get_Frontend_txt_struct_mc_arrowtower(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("SkeletalMesh4"), info.SkeletalMesh4);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("BoneName"), info.BoneName);
	out.Add(TEXT("BrokenPointEffectPath"), info.BrokenPointEffectPath);
	out.Add(TEXT("BrokenEffectPath"), info.BrokenEffectPath);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeight"), FString::SanitizeFloat(info.fWeight));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("fAttackRate"), FString::SanitizeFloat(info.fAttackRate));
	out.Add(TEXT("fDamageRate"), FString::SanitizeFloat(info.fDamageRate));
	out.Add(TEXT("fDefenseRate"), FString::SanitizeFloat(info.fDefenseRate));
	out.Add(TEXT("fBulletSpeedRate"), FString::SanitizeFloat(info.fBulletSpeedRate));
	out.Add(TEXT("fDetectRate"), FString::SanitizeFloat(info.fDetectRate));
	out.Add(TEXT("fBeDetectRate"), FString::SanitizeFloat(info.fBeDetectRate));
	out.Add(TEXT("fOperateRange"), FString::SanitizeFloat(info.fOperateRange));
	out.Add(TEXT("nRepairSec"), FString::FromInt(info.nRepairSec));
	out.Add(TEXT("nOccupySec"), FString::FromInt(info.nOccupySec));
	out.Add(TEXT("nOccupySoliderCount"), FString::FromInt(info.nOccupySoliderCount));
	out.Add(TEXT("nOccupySoliderRange"), FString::FromInt(info.nOccupySoliderRange));
	out.Add(TEXT("nEndOccupySec"), FString::FromInt(info.nEndOccupySec));
	out.Add(TEXT("fFoundRange"), FString::SanitizeFloat(info.fFoundRange));
	out.Add(TEXT("nOnMaxCount"), FString::FromInt(info.nOnMaxCount));
	out.Add(TEXT("fPosRadius"), FString::SanitizeFloat(info.fPosRadius));
	out.Add(TEXT("Pos"), info.Pos);
	return true;
}

bool Get_Frontend_txt_struct_mc_ballista(int id, OUT Frontend_txt_struct_mc_ballista& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_ballista_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_ballista"), id, mc_ballista_list);
	if (mc_ballista_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_ballista_list[TEXT("Id")]);
		info.ItemName = mc_ballista_list[TEXT("ItemName")];
		info.ItemDescription = mc_ballista_list[TEXT("ItemDescription")];
		info.SkeletalMesh1 = mc_ballista_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = mc_ballista_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = mc_ballista_list[TEXT("SkeletalMesh3")];
		info.SkeletalMesh4 = mc_ballista_list[TEXT("SkeletalMesh4")];
		info.IconTexture = mc_ballista_list[TEXT("IconTexture")];
		info.BoneName = mc_ballista_list[TEXT("BoneName")];
		info.BrokenPointEffectPath = mc_ballista_list[TEXT("BrokenPointEffectPath")];
		info.BrokenEffectPath = mc_ballista_list[TEXT("BrokenEffectPath")];
		info.nHealth = FCString::Atoi(*mc_ballista_list[TEXT("nHealth")]);
		info.fShootDamageFactor = FCString::Atof(*mc_ballista_list[TEXT("fShootDamageFactor")]);
		info.nDefenseValue = FCString::Atoi(*mc_ballista_list[TEXT("nDefenseValue")]);
		info.fWeaponWeight = FCString::Atoi(*mc_ballista_list[TEXT("fWeaponWeight")]);
		info.RotationRate = FCString::Atof(*mc_ballista_list[TEXT("RotationRate")]);
		info.nMaxRotateAngleH = FCString::Atof(*mc_ballista_list[TEXT("nMaxRotateAngleH")]);
		info.nMaxRotateAngleV = FCString::Atof(*mc_ballista_list[TEXT("nMaxRotateAngleV")]);
		info.fLoadAmmoTime = FCString::Atoi(*mc_ballista_list[TEXT("fLoadAmmoTime")]);
		info.fFetchingTime = FCString::Atof(*mc_ballista_list[TEXT("fFetchingTime")]);
		info.fLoadAmmoCancelTime = FCString::Atoi(*mc_ballista_list[TEXT("fLoadAmmoCancelTime")]);
		info.fOriginalSpeed = FCString::Atof(*mc_ballista_list[TEXT("fOriginalSpeed")]);
		info.nMcBulletType = FCString::Atoi(*mc_ballista_list[TEXT("nMcBulletType")]);
		info.BulletCount = FCString::Atoi(*mc_ballista_list[TEXT("BulletCount")]);
		info.Radius = FCString::Atof(*mc_ballista_list[TEXT("Radius")]);
		info.nRepairTimeDT = FCString::Atoi(*mc_ballista_list[TEXT("nRepairTimeDT")]);
		info.nRepairRecoverHealth = FCString::Atoi(*mc_ballista_list[TEXT("nRepairRecoverHealth")]);
		info.fOwnerOffset_Angle = FCString::Atof(*mc_ballista_list[TEXT("fOwnerOffset_Angle")]);
		info.fOwnerOffset_Dis = FCString::Atof(*mc_ballista_list[TEXT("fOwnerOffset_Dis")]);
		info.fOperatRange = FCString::Atoi(*mc_ballista_list[TEXT("fOperatRange")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_ballista_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_ballista info;
	if(!Get_Frontend_txt_struct_mc_ballista(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("SkeletalMesh4"), info.SkeletalMesh4);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("BoneName"), info.BoneName);
	out.Add(TEXT("BrokenPointEffectPath"), info.BrokenPointEffectPath);
	out.Add(TEXT("BrokenEffectPath"), info.BrokenEffectPath);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("fShootDamageFactor"), FString::SanitizeFloat(info.fShootDamageFactor));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeaponWeight"), FString::FromInt(info.fWeaponWeight));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("nMaxRotateAngleH"), FString::SanitizeFloat(info.nMaxRotateAngleH));
	out.Add(TEXT("nMaxRotateAngleV"), FString::SanitizeFloat(info.nMaxRotateAngleV));
	out.Add(TEXT("fLoadAmmoTime"), FString::FromInt(info.fLoadAmmoTime));
	out.Add(TEXT("fFetchingTime"), FString::SanitizeFloat(info.fFetchingTime));
	out.Add(TEXT("fLoadAmmoCancelTime"), FString::FromInt(info.fLoadAmmoCancelTime));
	out.Add(TEXT("fOriginalSpeed"), FString::SanitizeFloat(info.fOriginalSpeed));
	out.Add(TEXT("nMcBulletType"), FString::FromInt(info.nMcBulletType));
	out.Add(TEXT("BulletCount"), FString::FromInt(info.BulletCount));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("nRepairTimeDT"), FString::FromInt(info.nRepairTimeDT));
	out.Add(TEXT("nRepairRecoverHealth"), FString::FromInt(info.nRepairRecoverHealth));
	out.Add(TEXT("fOwnerOffset_Angle"), FString::SanitizeFloat(info.fOwnerOffset_Angle));
	out.Add(TEXT("fOwnerOffset_Dis"), FString::SanitizeFloat(info.fOwnerOffset_Dis));
	out.Add(TEXT("fOperatRange"), FString::FromInt(info.fOperatRange));
	return true;
}

bool Get_Frontend_txt_struct_mc_bullet(int id, OUT Frontend_txt_struct_mc_bullet& info)
{
	info.BulletID = 0;
	TMap<FString, FString> mc_bullet_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_bullet"), id, mc_bullet_list);
	if (mc_bullet_list.Num() > 0)
	{
		info.BulletID = FCString::Atoi(*mc_bullet_list[TEXT("BulletID")]);
		info.ItemName = mc_bullet_list[TEXT("ItemName")];
		info.ItemDescription = mc_bullet_list[TEXT("ItemDescription")];
		info.BulletType = mc_bullet_list[TEXT("BulletType")];
		info.fBulletWeight = FCString::Atof(*mc_bullet_list[TEXT("fBulletWeight")]);
		info.nBulletWeightLevel = FCString::Atoi(*mc_bullet_list[TEXT("nBulletWeightLevel")]);
		info.nBulletDamageType = FCString::Atoi(*mc_bullet_list[TEXT("nBulletDamageType")]);
		info.fShootDamageFactor = FCString::Atof(*mc_bullet_list[TEXT("fShootDamageFactor")]);
		info.fDamageShieldFactor = FCString::Atof(*mc_bullet_list[TEXT("fDamageShieldFactor")]);
		info.fDamageBuildFactor = FCString::Atof(*mc_bullet_list[TEXT("fDamageBuildFactor")]);
		info.fDamageUnitFactor = FCString::Atof(*mc_bullet_list[TEXT("fDamageUnitFactor")]);
		info.fSplashDamageFactor = FCString::Atof(*mc_bullet_list[TEXT("fSplashDamageFactor")]);
		info.fSplashDamageRange = FCString::Atof(*mc_bullet_list[TEXT("fSplashDamageRange")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_bullet_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_bullet info;
	if(!Get_Frontend_txt_struct_mc_bullet(id, info))
	{
		return false;
	}

	out.Add(TEXT("BulletID"), FString::FromInt(info.BulletID));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("BulletType"), info.BulletType);
	out.Add(TEXT("fBulletWeight"), FString::SanitizeFloat(info.fBulletWeight));
	out.Add(TEXT("nBulletWeightLevel"), FString::FromInt(info.nBulletWeightLevel));
	out.Add(TEXT("nBulletDamageType"), FString::FromInt(info.nBulletDamageType));
	out.Add(TEXT("fShootDamageFactor"), FString::SanitizeFloat(info.fShootDamageFactor));
	out.Add(TEXT("fDamageShieldFactor"), FString::SanitizeFloat(info.fDamageShieldFactor));
	out.Add(TEXT("fDamageBuildFactor"), FString::SanitizeFloat(info.fDamageBuildFactor));
	out.Add(TEXT("fDamageUnitFactor"), FString::SanitizeFloat(info.fDamageUnitFactor));
	out.Add(TEXT("fSplashDamageFactor"), FString::SanitizeFloat(info.fSplashDamageFactor));
	out.Add(TEXT("fSplashDamageRange"), FString::SanitizeFloat(info.fSplashDamageRange));
	return true;
}

bool Get_Frontend_txt_struct_mc_catapults(int id, OUT Frontend_txt_struct_mc_catapults& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_catapults_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_catapults"), id, mc_catapults_list);
	if (mc_catapults_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_catapults_list[TEXT("Id")]);
		info.ItemName = mc_catapults_list[TEXT("ItemName")];
		info.ItemDescription = mc_catapults_list[TEXT("ItemDescription")];
		info.SkeletalMesh1 = mc_catapults_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = mc_catapults_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = mc_catapults_list[TEXT("SkeletalMesh3")];
		info.SkeletalMesh4 = mc_catapults_list[TEXT("SkeletalMesh4")];
		info.BoneName = mc_catapults_list[TEXT("BoneName")];
		info.BrokenPointEffectPath = mc_catapults_list[TEXT("BrokenPointEffectPath")];
		info.BrokenEffectPath = mc_catapults_list[TEXT("BrokenEffectPath")];
		info.nCataType = mc_catapults_list[TEXT("nCataType")];
		info.IconTexture = mc_catapults_list[TEXT("IconTexture")];
		info.nHealth = FCString::Atoi(*mc_catapults_list[TEXT("nHealth")]);
		info.fShootDamageFactor = FCString::Atof(*mc_catapults_list[TEXT("fShootDamageFactor")]);
		info.nDefenseValue = FCString::Atoi(*mc_catapults_list[TEXT("nDefenseValue")]);
		info.fWeaponWeight = FCString::Atoi(*mc_catapults_list[TEXT("fWeaponWeight")]);
		info.nRotationRate = FCString::Atof(*mc_catapults_list[TEXT("nRotationRate")]);
		info.nMaxRotateAngle = FCString::Atof(*mc_catapults_list[TEXT("nMaxRotateAngle")]);
		info.nWeaponCachedMinRange = FCString::Atof(*mc_catapults_list[TEXT("nWeaponCachedMinRange")]);
		info.nWeaponCachedMaxRange = FCString::Atof(*mc_catapults_list[TEXT("nWeaponCachedMaxRange")]);
		info.fLoadAmmoTime = FCString::Atoi(*mc_catapults_list[TEXT("fLoadAmmoTime")]);
		info.fFetchingTime = FCString::Atoi(*mc_catapults_list[TEXT("fFetchingTime")]);
		info.fLoadAmmoCancelTime = FCString::Atoi(*mc_catapults_list[TEXT("fLoadAmmoCancelTime")]);
		info.fOriginalSpeed = FCString::Atof(*mc_catapults_list[TEXT("fOriginalSpeed")]);
		info.nMcBulletType = FCString::Atoi(*mc_catapults_list[TEXT("nMcBulletType")]);
		info.BulletCount = FCString::Atoi(*mc_catapults_list[TEXT("BulletCount")]);
		info.fMaxOffsetRange = FCString::Atoi(*mc_catapults_list[TEXT("fMaxOffsetRange")]);
		info.Radius = FCString::Atof(*mc_catapults_list[TEXT("Radius")]);
		info.fCollisionRadius = FCString::Atof(*mc_catapults_list[TEXT("fCollisionRadius")]);
		info.fWidth = FCString::Atof(*mc_catapults_list[TEXT("fWidth")]);
		info.nRepairTimeDT = FCString::Atoi(*mc_catapults_list[TEXT("nRepairTimeDT")]);
		info.nRepairRecoverHealth = FCString::Atoi(*mc_catapults_list[TEXT("nRepairRecoverHealth")]);
		info.fOwnerOffset_Angle = FCString::Atof(*mc_catapults_list[TEXT("fOwnerOffset_Angle")]);
		info.fOwnerOffset_Dis = FCString::Atof(*mc_catapults_list[TEXT("fOwnerOffset_Dis")]);
		info.fOperatRange = FCString::Atof(*mc_catapults_list[TEXT("fOperatRange")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_catapults_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_catapults info;
	if(!Get_Frontend_txt_struct_mc_catapults(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("SkeletalMesh4"), info.SkeletalMesh4);
	out.Add(TEXT("BoneName"), info.BoneName);
	out.Add(TEXT("BrokenPointEffectPath"), info.BrokenPointEffectPath);
	out.Add(TEXT("BrokenEffectPath"), info.BrokenEffectPath);
	out.Add(TEXT("nCataType"), info.nCataType);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("fShootDamageFactor"), FString::SanitizeFloat(info.fShootDamageFactor));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeaponWeight"), FString::FromInt(info.fWeaponWeight));
	out.Add(TEXT("nRotationRate"), FString::SanitizeFloat(info.nRotationRate));
	out.Add(TEXT("nMaxRotateAngle"), FString::SanitizeFloat(info.nMaxRotateAngle));
	out.Add(TEXT("nWeaponCachedMinRange"), FString::SanitizeFloat(info.nWeaponCachedMinRange));
	out.Add(TEXT("nWeaponCachedMaxRange"), FString::SanitizeFloat(info.nWeaponCachedMaxRange));
	out.Add(TEXT("fLoadAmmoTime"), FString::FromInt(info.fLoadAmmoTime));
	out.Add(TEXT("fFetchingTime"), FString::FromInt(info.fFetchingTime));
	out.Add(TEXT("fLoadAmmoCancelTime"), FString::FromInt(info.fLoadAmmoCancelTime));
	out.Add(TEXT("fOriginalSpeed"), FString::SanitizeFloat(info.fOriginalSpeed));
	out.Add(TEXT("nMcBulletType"), FString::FromInt(info.nMcBulletType));
	out.Add(TEXT("BulletCount"), FString::FromInt(info.BulletCount));
	out.Add(TEXT("fMaxOffsetRange"), FString::FromInt(info.fMaxOffsetRange));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("fCollisionRadius"), FString::SanitizeFloat(info.fCollisionRadius));
	out.Add(TEXT("fWidth"), FString::SanitizeFloat(info.fWidth));
	out.Add(TEXT("nRepairTimeDT"), FString::FromInt(info.nRepairTimeDT));
	out.Add(TEXT("nRepairRecoverHealth"), FString::FromInt(info.nRepairRecoverHealth));
	out.Add(TEXT("fOwnerOffset_Angle"), FString::SanitizeFloat(info.fOwnerOffset_Angle));
	out.Add(TEXT("fOwnerOffset_Dis"), FString::SanitizeFloat(info.fOwnerOffset_Dis));
	out.Add(TEXT("fOperatRange"), FString::SanitizeFloat(info.fOperatRange));
	return true;
}

bool Get_Frontend_txt_struct_mc_gate(int id, OUT Frontend_txt_struct_mc_gate& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_gate_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_gate"), id, mc_gate_list);
	if (mc_gate_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_gate_list[TEXT("Id")]);
		info.ItemName = mc_gate_list[TEXT("ItemName")];
		info.ItemDescription = mc_gate_list[TEXT("ItemDescription")];
		info.SkeletalMesh = mc_gate_list[TEXT("SkeletalMesh")];
		info.IconTexture = mc_gate_list[TEXT("IconTexture")];
		info.AnimSet = mc_gate_list[TEXT("AnimSet")];
		info.PhysicAsset = mc_gate_list[TEXT("PhysicAsset")];
		info.nHealth = FCString::Atoi(*mc_gate_list[TEXT("nHealth")]);
		info.nDefenseValue = FCString::Atoi(*mc_gate_list[TEXT("nDefenseValue")]);
		info.fWeight = FCString::Atoi(*mc_gate_list[TEXT("fWeight")]);
		info.Radius = FCString::Atof(*mc_gate_list[TEXT("Radius")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_gate_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_gate info;
	if(!Get_Frontend_txt_struct_mc_gate(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	return true;
}

bool Get_Frontend_txt_struct_mc_roadblock(int id, OUT Frontend_txt_struct_mc_roadblock& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_roadblock_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_roadblock"), id, mc_roadblock_list);
	if (mc_roadblock_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_roadblock_list[TEXT("Id")]);
		info.ItemName = mc_roadblock_list[TEXT("ItemName")];
		info.ItemDescription = mc_roadblock_list[TEXT("ItemDescription")];
		info.SkeletalMesh = mc_roadblock_list[TEXT("SkeletalMesh")];
		info.IconTexture = mc_roadblock_list[TEXT("IconTexture")];
		info.AnimSet = mc_roadblock_list[TEXT("AnimSet")];
		info.PhysicAsset = mc_roadblock_list[TEXT("PhysicAsset")];
		info.nHealth = FCString::Atoi(*mc_roadblock_list[TEXT("nHealth")]);
		info.nDefenseValue = FCString::Atoi(*mc_roadblock_list[TEXT("nDefenseValue")]);
		info.fWeight = FCString::Atoi(*mc_roadblock_list[TEXT("fWeight")]);
		info.Radius = FCString::Atof(*mc_roadblock_list[TEXT("Radius")]);
		info.fScaleRate = FCString::Atof(*mc_roadblock_list[TEXT("fScaleRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_roadblock_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_roadblock info;
	if(!Get_Frontend_txt_struct_mc_roadblock(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("fScaleRate"), FString::SanitizeFloat(info.fScaleRate));
	return true;
}

bool Get_Frontend_txt_struct_mc_siege(int id, OUT Frontend_txt_struct_mc_siege& info)
{
	info.Id = 0;
	TMap<FString, FString> mc_siege_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("mc_siege"), id, mc_siege_list);
	if (mc_siege_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*mc_siege_list[TEXT("Id")]);
		info.ItemName = mc_siege_list[TEXT("ItemName")];
		info.ItemDescription = mc_siege_list[TEXT("ItemDescription")];
		info.SkeletalMesh1 = mc_siege_list[TEXT("SkeletalMesh1")];
		info.SkeletalMesh2 = mc_siege_list[TEXT("SkeletalMesh2")];
		info.SkeletalMesh3 = mc_siege_list[TEXT("SkeletalMesh3")];
		info.SkeletalMesh4 = mc_siege_list[TEXT("SkeletalMesh4")];
		info.AnimSet = mc_siege_list[TEXT("AnimSet")];
		info.PhysicsAssets = mc_siege_list[TEXT("PhysicsAssets")];
		info.MorphAssets = mc_siege_list[TEXT("MorphAssets")];
		info.IconTexture = mc_siege_list[TEXT("IconTexture")];
		info.BoneName = mc_siege_list[TEXT("BoneName")];
		info.BrokenPointEffectPath = mc_siege_list[TEXT("BrokenPointEffectPath")];
		info.BrokenEffectPath = mc_siege_list[TEXT("BrokenEffectPath")];
		info.nHealth = FCString::Atoi(*mc_siege_list[TEXT("nHealth")]);
		info.nDamageValue = FCString::Atoi(*mc_siege_list[TEXT("nDamageValue")]);
		info.nPlayerPlusDamageValue = FCString::Atoi(*mc_siege_list[TEXT("nPlayerPlusDamageValue")]);
		info.nDefenseValue = FCString::Atoi(*mc_siege_list[TEXT("nDefenseValue")]);
		info.fWeaponWeight = FCString::Atoi(*mc_siege_list[TEXT("fWeaponWeight")]);
		info.fAroundPlayerRange = FCString::Atof(*mc_siege_list[TEXT("fAroundPlayerRange")]);
		info.fOperatRange = FCString::Atof(*mc_siege_list[TEXT("fOperatRange")]);
		info.fInitialSpeed = FCString::Atof(*mc_siege_list[TEXT("fInitialSpeed")]);
		info.nRotationRate = FCString::Atof(*mc_siege_list[TEXT("nRotationRate")]);
		info.fAtkPlayerPlusSpeed = FCString::Atof(*mc_siege_list[TEXT("fAtkPlayerPlusSpeed")]);
		info.fDefendPlayerPlusSpeed = FCString::Atof(*mc_siege_list[TEXT("fDefendPlayerPlusSpeed")]);
		info.fAtkSpeedMax = FCString::Atof(*mc_siege_list[TEXT("fAtkSpeedMax")]);
		info.fDefendSpeedMax = FCString::Atof(*mc_siege_list[TEXT("fDefendSpeedMax")]);
		info.fAccelRate = FCString::Atof(*mc_siege_list[TEXT("fAccelRate")]);
		info.fAttackInterval = FCString::Atof(*mc_siege_list[TEXT("fAttackInterval")]);
		info.nAttackPointPercent = FCString::Atoi(*mc_siege_list[TEXT("nAttackPointPercent")]);
		info.nBreakLightPercent = FCString::Atoi(*mc_siege_list[TEXT("nBreakLightPercent")]);
		info.nBreakHeavyPercent = FCString::Atoi(*mc_siege_list[TEXT("nBreakHeavyPercent")]);
		info.nRebornTimeSec = FCString::Atoi(*mc_siege_list[TEXT("nRebornTimeSec")]);
		info.Radius = FCString::Atof(*mc_siege_list[TEXT("Radius")]);
		info.fCollisionRadius = FCString::Atof(*mc_siege_list[TEXT("fCollisionRadius")]);
		info.fWidth = FCString::Atof(*mc_siege_list[TEXT("fWidth")]);
		info.nRepairTimeDT = FCString::Atoi(*mc_siege_list[TEXT("nRepairTimeDT")]);
		info.nRepairRecoverHealth = FCString::Atoi(*mc_siege_list[TEXT("nRepairRecoverHealth")]);
		info.nVehicle = FCString::Atoi(*mc_siege_list[TEXT("nVehicle")]);
		info.fScaleRate = FCString::Atof(*mc_siege_list[TEXT("fScaleRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_mc_siege_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_mc_siege info;
	if(!Get_Frontend_txt_struct_mc_siege(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("SkeletalMesh4"), info.SkeletalMesh4);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicsAssets"), info.PhysicsAssets);
	out.Add(TEXT("MorphAssets"), info.MorphAssets);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("BoneName"), info.BoneName);
	out.Add(TEXT("BrokenPointEffectPath"), info.BrokenPointEffectPath);
	out.Add(TEXT("BrokenEffectPath"), info.BrokenEffectPath);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nDamageValue"), FString::FromInt(info.nDamageValue));
	out.Add(TEXT("nPlayerPlusDamageValue"), FString::FromInt(info.nPlayerPlusDamageValue));
	out.Add(TEXT("nDefenseValue"), FString::FromInt(info.nDefenseValue));
	out.Add(TEXT("fWeaponWeight"), FString::FromInt(info.fWeaponWeight));
	out.Add(TEXT("fAroundPlayerRange"), FString::SanitizeFloat(info.fAroundPlayerRange));
	out.Add(TEXT("fOperatRange"), FString::SanitizeFloat(info.fOperatRange));
	out.Add(TEXT("fInitialSpeed"), FString::SanitizeFloat(info.fInitialSpeed));
	out.Add(TEXT("nRotationRate"), FString::SanitizeFloat(info.nRotationRate));
	out.Add(TEXT("fAtkPlayerPlusSpeed"), FString::SanitizeFloat(info.fAtkPlayerPlusSpeed));
	out.Add(TEXT("fDefendPlayerPlusSpeed"), FString::SanitizeFloat(info.fDefendPlayerPlusSpeed));
	out.Add(TEXT("fAtkSpeedMax"), FString::SanitizeFloat(info.fAtkSpeedMax));
	out.Add(TEXT("fDefendSpeedMax"), FString::SanitizeFloat(info.fDefendSpeedMax));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("fAttackInterval"), FString::SanitizeFloat(info.fAttackInterval));
	out.Add(TEXT("nAttackPointPercent"), FString::FromInt(info.nAttackPointPercent));
	out.Add(TEXT("nBreakLightPercent"), FString::FromInt(info.nBreakLightPercent));
	out.Add(TEXT("nBreakHeavyPercent"), FString::FromInt(info.nBreakHeavyPercent));
	out.Add(TEXT("nRebornTimeSec"), FString::FromInt(info.nRebornTimeSec));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("fCollisionRadius"), FString::SanitizeFloat(info.fCollisionRadius));
	out.Add(TEXT("fWidth"), FString::SanitizeFloat(info.fWidth));
	out.Add(TEXT("nRepairTimeDT"), FString::FromInt(info.nRepairTimeDT));
	out.Add(TEXT("nRepairRecoverHealth"), FString::FromInt(info.nRepairRecoverHealth));
	out.Add(TEXT("nVehicle"), FString::FromInt(info.nVehicle));
	out.Add(TEXT("fScaleRate"), FString::SanitizeFloat(info.fScaleRate));
	return true;
}

bool Get_Frontend_txt_struct_meleeweapon(int id, OUT Frontend_txt_struct_meleeweapon& info)
{
	info.ItemId = 0;
	TMap<FString, FString> meleeweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("meleeweapon"), id, meleeweapon_list);
	if (meleeweapon_list.Num() > 0)
	{
		info.ItemId = FCString::Atoi(*meleeweapon_list[TEXT("ItemId")]);
		info.ItemName = meleeweapon_list[TEXT("ItemName")];
		info.ItemDescription = meleeweapon_list[TEXT("ItemDescription")];
		info.SkeletalMesh = meleeweapon_list[TEXT("SkeletalMesh")];
		info.ScabbardMesh = meleeweapon_list[TEXT("ScabbardMesh")];
		info.Level = FCString::Atoi(*meleeweapon_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*meleeweapon_list[TEXT("WeaponWeight")]);
		info.WeaponWeightLevel = FCString::Atoi(*meleeweapon_list[TEXT("WeaponWeightLevel")]);
		info.nUpAttackType = FCString::Atoi(*meleeweapon_list[TEXT("nUpAttackType")]);
		info.nDownAttackType = FCString::Atoi(*meleeweapon_list[TEXT("nDownAttackType")]);
		info.nLeftAttackType = FCString::Atoi(*meleeweapon_list[TEXT("nLeftAttackType")]);
		info.nRightAttackType = FCString::Atoi(*meleeweapon_list[TEXT("nRightAttackType")]);
		info.AssaultDamageType = FCString::Atoi(*meleeweapon_list[TEXT("AssaultDamageType")]);
		info.CutDamageFactor = FCString::Atof(*meleeweapon_list[TEXT("CutDamageFactor")]);
		info.PunctureDamageFactor = FCString::Atof(*meleeweapon_list[TEXT("PunctureDamageFactor")]);
		info.AssaultDamageFactor = FCString::Atof(*meleeweapon_list[TEXT("AssaultDamageFactor")]);
		info.McDamageFactor = FCString::Atof(*meleeweapon_list[TEXT("McDamageFactor")]);
		info.CutHurtMultiple = FCString::Atof(*meleeweapon_list[TEXT("CutHurtMultiple")]);
		info.PunctureHurtMultiple = FCString::Atof(*meleeweapon_list[TEXT("PunctureHurtMultiple")]);
		info.DamageShieldFactor = FCString::Atof(*meleeweapon_list[TEXT("DamageShieldFactor")]);
		info.Durableness = FCString::Atoi(*meleeweapon_list[TEXT("Durableness")]);
		info.bIsBeginCharge = FCString::Atoi(*meleeweapon_list[TEXT("bIsBeginCharge")]);
		info.bIsUseOnHorse = FCString::Atoi(*meleeweapon_list[TEXT("bIsUseOnHorse")]);
		info.fWeaponLength = FCString::Atof(*meleeweapon_list[TEXT("fWeaponLength")]);
		info.WeaponCachedMaxRange = FCString::Atof(*meleeweapon_list[TEXT("WeaponCachedMaxRange")]);
		info.fFrontWeaponPart = FCString::Atof(*meleeweapon_list[TEXT("fFrontWeaponPart")]);
		info.fBackWeaponPartDamage = FCString::Atof(*meleeweapon_list[TEXT("fBackWeaponPartDamage")]);
		info.FrontWeaponPartName = meleeweapon_list[TEXT("FrontWeaponPartName")];
		info.BackWeaponPartName = meleeweapon_list[TEXT("BackWeaponPartName")];
		info.FiringTime = FCString::Atof(*meleeweapon_list[TEXT("FiringTime")]);
		info.WeaponFetchingTime = FCString::Atof(*meleeweapon_list[TEXT("WeaponFetchingTime")]);
		info.BeginDefendTime = FCString::Atof(*meleeweapon_list[TEXT("BeginDefendTime")]);
		info.DoHurtAnimTime = FCString::Atof(*meleeweapon_list[TEXT("DoHurtAnimTime")]);
		info.FailFireTime = FCString::Atof(*meleeweapon_list[TEXT("FailFireTime")]);
		info.SucDefendTime = FCString::Atof(*meleeweapon_list[TEXT("SucDefendTime")]);
		info.FailDefendTime = FCString::Atof(*meleeweapon_list[TEXT("FailDefendTime")]);
		info.SprintAttackTime = FCString::Atof(*meleeweapon_list[TEXT("SprintAttackTime")]);
		info.DoubleHitTime = FCString::Atof(*meleeweapon_list[TEXT("DoubleHitTime")]);
		info.DoubleHitEndTime = FCString::Atof(*meleeweapon_list[TEXT("DoubleHitEndTime")]);
		info.ForbidBreakTime = FCString::Atof(*meleeweapon_list[TEXT("ForbidBreakTime")]);
		info.PersistFetching1Time = FCString::Atof(*meleeweapon_list[TEXT("PersistFetching1Time")]);
		info.PersistFetching2Time = FCString::Atof(*meleeweapon_list[TEXT("PersistFetching2Time")]);
		info.Persist1WeaponRange = FCString::Atof(*meleeweapon_list[TEXT("Persist1WeaponRange")]);
		info.Persist2WeaponRange = FCString::Atof(*meleeweapon_list[TEXT("Persist2WeaponRange")]);
		info.Persist1WeaponWeightLevel = FCString::Atof(*meleeweapon_list[TEXT("Persist1WeaponWeightLevel")]);
		info.Persist2WeaponWeightLevel = FCString::Atof(*meleeweapon_list[TEXT("Persist2WeaponWeightLevel")]);
		info.Persist1DamageFactor = FCString::Atof(*meleeweapon_list[TEXT("Persist1DamageFactor")]);
		info.Persist2DamageFactor = FCString::Atof(*meleeweapon_list[TEXT("Persist2DamageFactor")]);
		info.MetalCutCamailValue = FCString::Atof(*meleeweapon_list[TEXT("MetalCutCamailValue")]);
		info.MetalStabCamailValue = FCString::Atof(*meleeweapon_list[TEXT("MetalStabCamailValue")]);
		info.MetalBluntCamailValue = FCString::Atof(*meleeweapon_list[TEXT("MetalBluntCamailValue")]);
		info.LeatherCutCamailValue = FCString::Atof(*meleeweapon_list[TEXT("LeatherCutCamailValue")]);
		info.LeatherStabCamailValue = FCString::Atof(*meleeweapon_list[TEXT("LeatherStabCamailValue")]);
		info.LeatherBluntCamailValue = FCString::Atof(*meleeweapon_list[TEXT("LeatherBluntCamailValue")]);
		info.ClothCutCamailValue = FCString::Atof(*meleeweapon_list[TEXT("ClothCutCamailValue")]);
		info.ClothStabCamailValue = FCString::Atof(*meleeweapon_list[TEXT("ClothStabCamailValue")]);
		info.ClothBluntCamailValue = FCString::Atof(*meleeweapon_list[TEXT("ClothBluntCamailValue")]);
		info.CannotAttackRange = FCString::Atof(*meleeweapon_list[TEXT("CannotAttackRange")]);
		info.ReleasePercent = FCString::Atoi(*meleeweapon_list[TEXT("ReleasePercent")]);
		info.ReleaseParam = FCString::Atof(*meleeweapon_list[TEXT("ReleaseParam")]);
		info.ReleaseEndPercent = FCString::Atoi(*meleeweapon_list[TEXT("ReleaseEndPercent")]);
		info.ReleaseEndParam = FCString::Atof(*meleeweapon_list[TEXT("ReleaseEndParam")]);
		info.nUpDefendType = FCString::Atoi(*meleeweapon_list[TEXT("nUpDefendType")]);
		info.nDownDefendType = FCString::Atoi(*meleeweapon_list[TEXT("nDownDefendType")]);
		info.nLeftDefendType = FCString::Atoi(*meleeweapon_list[TEXT("nLeftDefendType")]);
		info.nRightDefendType = FCString::Atoi(*meleeweapon_list[TEXT("nRightDefendType")]);
		info.CutDamageDown = FCString::Atof(*meleeweapon_list[TEXT("CutDamageDown")]);
		info.PunctureDamageDown = FCString::Atof(*meleeweapon_list[TEXT("PunctureDamageDown")]);
		info.AssaultDamageDown = FCString::Atof(*meleeweapon_list[TEXT("AssaultDamageDown")]);
		info.CamailDown = FCString::Atof(*meleeweapon_list[TEXT("CamailDown")]);
		info.fight = FCString::Atoi(*meleeweapon_list[TEXT("fight")]);
		info.DamageDownLv1 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv1")]);
		info.DamageDownLv2 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv2")]);
		info.DamageDownLv3 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv3")]);
		info.DamageDownLv4 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv4")]);
		info.DamageDownLv5 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv5")]);
		info.DamageDownLv6 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv6")]);
		info.DamageDownLv7 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv7")]);
		info.DamageDownLv8 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv8")]);
		info.DamageDownLv9 = FCString::Atof(*meleeweapon_list[TEXT("DamageDownLv9")]);
		info.MeleeFeedbackSlomo = FCString::Atof(*meleeweapon_list[TEXT("MeleeFeedbackSlomo")]);
		info.MeleeFeedbackEndTime = FCString::Atof(*meleeweapon_list[TEXT("MeleeFeedbackEndTime")]);
		info.MeleeFeedbackEndPow = FCString::Atof(*meleeweapon_list[TEXT("MeleeFeedbackEndPow")]);
		info.nAnimPauseCount = FCString::Atoi(*meleeweapon_list[TEXT("nAnimPauseCount")]);
		info.fAttackBlendTimeU = FCString::Atoi(*meleeweapon_list[TEXT("fAttackBlendTimeU")]);
		info.nAttackBlendTypeU = FCString::Atoi(*meleeweapon_list[TEXT("nAttackBlendTypeU")]);
		info.fAttackBlendTimeD = FCString::Atoi(*meleeweapon_list[TEXT("fAttackBlendTimeD")]);
		info.nAttackBlendTypeD = FCString::Atoi(*meleeweapon_list[TEXT("nAttackBlendTypeD")]);
		info.fAttackBlendTimeL = FCString::Atoi(*meleeweapon_list[TEXT("fAttackBlendTimeL")]);
		info.nAttackBlendTypeL = FCString::Atoi(*meleeweapon_list[TEXT("nAttackBlendTypeL")]);
		info.fAttackBlendTimeR = FCString::Atoi(*meleeweapon_list[TEXT("fAttackBlendTimeR")]);
		info.nAttackBlendTypeR = FCString::Atoi(*meleeweapon_list[TEXT("nAttackBlendTypeR")]);
		info.PushInitSpeed = FCString::Atof(*meleeweapon_list[TEXT("PushInitSpeed")]);
		info.PushCdTime = FCString::Atof(*meleeweapon_list[TEXT("PushCdTime")]);
		info.PushDistance = FCString::Atof(*meleeweapon_list[TEXT("PushDistance")]);
		info.PushAngle = FCString::Atof(*meleeweapon_list[TEXT("PushAngle")]);
		info.PushType = FCString::Atoi(*meleeweapon_list[TEXT("PushType")]);
		info.BeginSprint = FCString::Atof(*meleeweapon_list[TEXT("BeginSprint")]);
		info.WaveVoice = meleeweapon_list[TEXT("WaveVoice")];
		info.fPlayerCauseAIDamageVal = FCString::Atof(*meleeweapon_list[TEXT("fPlayerCauseAIDamageVal")]);
		info.fPvPDamageRate = FCString::Atof(*meleeweapon_list[TEXT("fPvPDamageRate")]);
		info.fPveDamageFactor = FCString::Atof(*meleeweapon_list[TEXT("fPveDamageFactor")]);
		info.nIsPveWeapon = FCString::Atoi(*meleeweapon_list[TEXT("nIsPveWeapon")]);
		info.fContinusCut2ndTime = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut2ndTime")]);
		info.fContinusCut3rdTime = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut3rdTime")]);
		info.fContinusCut2ndAttackGround = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut2ndAttackGround")]);
		info.fContinusCut2ndAttackRide = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut2ndAttackRide")]);
		info.fContinusCut3rdAttackGround = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut3rdAttackGround")]);
		info.fContinusCut3rdAttackRide = FCString::Atof(*meleeweapon_list[TEXT("fContinusCut3rdAttackRide")]);
		info.nfContinusCut2ndWeight = FCString::Atoi(*meleeweapon_list[TEXT("nfContinusCut2ndWeight")]);
		info.nfContinusCut3rdWeight = FCString::Atoi(*meleeweapon_list[TEXT("nfContinusCut3rdWeight")]);
		info.fNewDoubleHitPos01 = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitPos01")]);
		info.fNewDoubleHitLens01 = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitLens01")]);
		info.fNewDoubleHitPos02 = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitPos02")]);
		info.fNewDoubleHitLens02 = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitLens02")]);
		info.fNewDoubleHitToNextPercent02 = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitToNextPercent02")]);
		info.fNewDoubleHitTime02_Up = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime02_Up")]);
		info.fNewDoubleHitTime02_Down = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime02_Down")]);
		info.fNewDoubleHitTime02_Left = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime02_Left")]);
		info.fNewDoubleHitTime02_Right = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime02_Right")]);
		info.fNewDoubleHitTime03_Up   = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime03_Up  ")]);
		info.fNewDoubleHitTime03_Down = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime03_Down")]);
		info.fNewDoubleHitTime03_Left = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime03_Left")]);
		info.fNewDoubleHitTime03_Right = FCString::Atof(*meleeweapon_list[TEXT("fNewDoubleHitTime03_Right")]);
		info.fWithShieldAtkSpeedRate = FCString::Atof(*meleeweapon_list[TEXT("fWithShieldAtkSpeedRate")]);
		info.fHead_hurt_factor = FCString::Atof(*meleeweapon_list[TEXT("fHead_hurt_factor")]);
		info.fShoulder_hurt_factor = FCString::Atof(*meleeweapon_list[TEXT("fShoulder_hurt_factor")]);
		info.fChest_hurt_factor = FCString::Atof(*meleeweapon_list[TEXT("fChest_hurt_factor")]);
		info.fLeg_hurt_factor = FCString::Atof(*meleeweapon_list[TEXT("fLeg_hurt_factor")]);
		info.nSwitchWeapon = FCString::Atoi(*meleeweapon_list[TEXT("nSwitchWeapon")]);
		info.nDifficuty = FCString::Atoi(*meleeweapon_list[TEXT("nDifficuty")]);
		info.nCanPushBlock = FCString::Atoi(*meleeweapon_list[TEXT("nCanPushBlock")]);
		info.fPushBlockPushTime = FCString::Atof(*meleeweapon_list[TEXT("fPushBlockPushTime")]);
		info.fPushBlockPullTime = FCString::Atof(*meleeweapon_list[TEXT("fPushBlockPullTime")]);
		info.nPushBlockWeight = FCString::Atoi(*meleeweapon_list[TEXT("nPushBlockWeight")]);
		info.costfield = FCString::Atoi(*meleeweapon_list[TEXT("costfield")]);
		info.Persist2AddCamailVal = FCString::Atof(*meleeweapon_list[TEXT("Persist2AddCamailVal")]);
		info.nFurySkillId = FCString::Atoi(*meleeweapon_list[TEXT("nFurySkillId")]);
		info.nFuryBaoQiSkillId = FCString::Atoi(*meleeweapon_list[TEXT("nFuryBaoQiSkillId")]);
		info.nAttackCount_Normal = FCString::Atoi(*meleeweapon_list[TEXT("nAttackCount_Normal")]);
		info.nAttackCount_Persist1 = FCString::Atoi(*meleeweapon_list[TEXT("nAttackCount_Persist1")]);
		info.nAttackCount_Persist2 = FCString::Atoi(*meleeweapon_list[TEXT("nAttackCount_Persist2")]);
		info.fRideAttackSpeedRate = FCString::Atof(*meleeweapon_list[TEXT("fRideAttackSpeedRate")]);
		info.nRideEruptSkillId = FCString::Atoi(*meleeweapon_list[TEXT("nRideEruptSkillId")]);
		info.nRideJumpEruptSkillId = FCString::Atoi(*meleeweapon_list[TEXT("nRideJumpEruptSkillId")]);
		info.nRidePushSkillId = FCString::Atoi(*meleeweapon_list[TEXT("nRidePushSkillId")]);
		info.fRideEruptCdTimeSec = FCString::Atof(*meleeweapon_list[TEXT("fRideEruptCdTimeSec")]);
		info.fSprintTimeSec = FCString::Atof(*meleeweapon_list[TEXT("fSprintTimeSec")]);
		info.fSprintTimeCdSec = FCString::Atof(*meleeweapon_list[TEXT("fSprintTimeCdSec")]);
		info.nSprintMaxYawAim = FCString::Atoi(*meleeweapon_list[TEXT("nSprintMaxYawAim")]);
		info.fSprintSpeed = FCString::Atof(*meleeweapon_list[TEXT("fSprintSpeed")]);
		info.fTakeOffTime = FCString::Atof(*meleeweapon_list[TEXT("fTakeOffTime")]);
		info.fTakeOutTime = FCString::Atof(*meleeweapon_list[TEXT("fTakeOutTime")]);
		info.fGroundRotationFactor = FCString::Atof(*meleeweapon_list[TEXT("fGroundRotationFactor")]);
		info.fHorseDamageRate = FCString::Atof(*meleeweapon_list[TEXT("fHorseDamageRate")]);
		info.fAICauseAIDamageShieldFactor = FCString::Atof(*meleeweapon_list[TEXT("fAICauseAIDamageShieldFactor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_message(int id, OUT Frontend_txt_struct_message& info)
{
	info.Id = 0;
	TMap<FString, FString> message_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("message"), id, message_list);
	if (message_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*message_list[TEXT("Id")]);
		info.nTimeLast = FCString::Atoi(*message_list[TEXT("nTimeLast")]);
		info.nTimeCD = FCString::Atoi(*message_list[TEXT("nTimeCD")]);
		info.nType = FCString::Atoi(*message_list[TEXT("nType")]);
		info.nColor = FCString::Atoi(*message_list[TEXT("nColor")]);
		info.sContent = message_list[TEXT("sContent")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_message_left_right(int id, OUT Frontend_txt_struct_message_left_right& info)
{
	info.Id = 0;
	TMap<FString, FString> message_left_right_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("message_left_right"), id, message_left_right_list);
	if (message_left_right_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*message_left_right_list[TEXT("Id")]);
		info.nTimeCD = FCString::Atoi(*message_left_right_list[TEXT("nTimeCD")]);
		info.nLeftRight = FCString::Atoi(*message_left_right_list[TEXT("nLeftRight")]);
		info.szMain = message_left_right_list[TEXT("szMain")];
		info.szBack = message_left_right_list[TEXT("szBack")];
		info.nFujiang = FCString::Atoi(*message_left_right_list[TEXT("nFujiang")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_obstacle(int id, OUT Frontend_txt_struct_obstacle& info)
{
	info.Id = 0;
	TMap<FString, FString> obstacle_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("obstacle"), id, obstacle_list);
	if (obstacle_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*obstacle_list[TEXT("Id")]);
		info.ItemName = obstacle_list[TEXT("ItemName")];
		info.ItemDescription = obstacle_list[TEXT("ItemDescription")];
		info.SkeletalMesh = obstacle_list[TEXT("SkeletalMesh")];
		info.EnemySkeletalMesh = obstacle_list[TEXT("EnemySkeletalMesh")];
		info.IconTexture = obstacle_list[TEXT("IconTexture")];
		info.AnimSet = obstacle_list[TEXT("AnimSet")];
		info.PhysicAsset = obstacle_list[TEXT("PhysicAsset")];
		info.nHealth = FCString::Atoi(*obstacle_list[TEXT("nHealth")]);
		info.nHitHealthDestroySelf = FCString::Atoi(*obstacle_list[TEXT("nHitHealthDestroySelf")]);
		info.nBaseHit = FCString::Atoi(*obstacle_list[TEXT("nBaseHit")]);
		info.nHorseBaseHit = FCString::Atoi(*obstacle_list[TEXT("nHorseBaseHit")]);
		info.nRaiseHoovesHit = FCString::Atoi(*obstacle_list[TEXT("nRaiseHoovesHit")]);
		info.fBeDetected = FCString::Atoi(*obstacle_list[TEXT("fBeDetected")]);
		info.nWeaponKind = FCString::Atoi(*obstacle_list[TEXT("nWeaponKind")]);
		info.fWeight = FCString::Atoi(*obstacle_list[TEXT("fWeight")]);
		info.Radius = FCString::Atof(*obstacle_list[TEXT("Radius")]);
		info.fSpeed1Val = FCString::Atoi(*obstacle_list[TEXT("fSpeed1Val")]);
		info.nSpeed1Hurt = FCString::Atoi(*obstacle_list[TEXT("nSpeed1Hurt")]);
		info.nSpeed2Hurt = FCString::Atoi(*obstacle_list[TEXT("nSpeed2Hurt")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_owneroffsetpos(int id, OUT Frontend_txt_struct_owneroffsetpos& info)
{
	info.unit_type = 0;
	TMap<FString, FString> owneroffsetpos_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("owneroffsetpos"), id, owneroffsetpos_list);
	if (owneroffsetpos_list.Num() > 0)
	{
		info.unit_type = FCString::Atoi(*owneroffsetpos_list[TEXT("unit_type")]);
		info.angle = FCString::Atof(*owneroffsetpos_list[TEXT("angle")]);
		info.distance = FCString::Atof(*owneroffsetpos_list[TEXT("distance")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_owneroffsetpos_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_owneroffsetpos info;
	if(!Get_Frontend_txt_struct_owneroffsetpos(id, info))
	{
		return false;
	}

	out.Add(TEXT("unit_type"), FString::FromInt(info.unit_type));
	out.Add(TEXT("angle"), FString::SanitizeFloat(info.angle));
	out.Add(TEXT("distance"), FString::SanitizeFloat(info.distance));
	return true;
}

bool Get_Frontend_txt_struct_playerposecard(int id, OUT Frontend_txt_struct_playerposecard& info)
{
	info.Id = 0;
	TMap<FString, FString> playerposecard_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("playerposecard"), id, playerposecard_list);
	if (playerposecard_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*playerposecard_list[TEXT("Id")]);
		info.PoseAsset = playerposecard_list[TEXT("PoseAsset")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_playerposecard_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_playerposecard info;
	if(!Get_Frontend_txt_struct_playerposecard(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("PoseAsset"), info.PoseAsset);
	return true;
}

bool Get_Frontend_txt_struct_pve_monster(int id, OUT Frontend_txt_struct_pve_monster& info)
{
	info.MonsterID = 0;
	TMap<FString, FString> pve_monster_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("pve_monster"), id, pve_monster_list);
	if (pve_monster_list.Num() > 0)
	{
		info.MonsterID = FCString::Atoi(*pve_monster_list[TEXT("MonsterID")]);
		info.MonsterName = pve_monster_list[TEXT("MonsterName")];
		info.MonsterDescription = pve_monster_list[TEXT("MonsterDescription")];
		info.MonsterModelType = FCString::Atoi(*pve_monster_list[TEXT("MonsterModelType")]);
		info.nMonsterKind = FCString::Atoi(*pve_monster_list[TEXT("nMonsterKind")]);
		info.ArmorType = FCString::Atoi(*pve_monster_list[TEXT("ArmorType")]);
		info.SpawnType = FCString::Atoi(*pve_monster_list[TEXT("SpawnType")]);
		info.nAwardPoint = FCString::Atoi(*pve_monster_list[TEXT("nAwardPoint")]);
		info.fBumpMass = FCString::Atof(*pve_monster_list[TEXT("fBumpMass")]);
		info.SkeletalMesh = pve_monster_list[TEXT("SkeletalMesh")];
		info.nFlagID = pve_monster_list[TEXT("nFlagID")];
		info.IconTexture = pve_monster_list[TEXT("IconTexture")];
		info.Level = FCString::Atoi(*pve_monster_list[TEXT("Level")]);
		info.nHealth = FCString::Atoi(*pve_monster_list[TEXT("nHealth")]);
		info.MaxSpeed = FCString::Atof(*pve_monster_list[TEXT("MaxSpeed")]);
		info.fAiHorseSpeedRate = FCString::Atof(*pve_monster_list[TEXT("fAiHorseSpeedRate")]);
		info.fAiHorseAcceRate = FCString::Atof(*pve_monster_list[TEXT("fAiHorseAcceRate")]);
		info.fAiHorseRotationRate = FCString::Atof(*pve_monster_list[TEXT("fAiHorseRotationRate")]);
		info.fAiAttackSpeedRate = FCString::Atof(*pve_monster_list[TEXT("fAiAttackSpeedRate")]);
		info.fRemoteAtkFactor = FCString::Atof(*pve_monster_list[TEXT("fRemoteAtkFactor")]);
		info.RotationRate = FCString::Atof(*pve_monster_list[TEXT("RotationRate")]);
		info.fAccelRate = FCString::Atof(*pve_monster_list[TEXT("fAccelRate")]);
		info.DefenseValue = FCString::Atof(*pve_monster_list[TEXT("DefenseValue")]);
		info.DamageValue = FCString::Atof(*pve_monster_list[TEXT("DamageValue")]);
		info.fPlayerCauseAIShieldVal = FCString::Atof(*pve_monster_list[TEXT("fPlayerCauseAIShieldVal")]);
		info.AlertRange1 = FCString::Atof(*pve_monster_list[TEXT("AlertRange1")]);
		info.AlertRange2 = FCString::Atof(*pve_monster_list[TEXT("AlertRange2")]);
		info.AlertRange3 = FCString::Atof(*pve_monster_list[TEXT("AlertRange3")]);
		info.AlertRange4 = FCString::Atof(*pve_monster_list[TEXT("AlertRange4")]);
		info.WeaponID1 = FCString::Atoi(*pve_monster_list[TEXT("WeaponID1")]);
		info.WeaponID2 = FCString::Atoi(*pve_monster_list[TEXT("WeaponID2")]);
		info.WeaponID3 = FCString::Atoi(*pve_monster_list[TEXT("WeaponID3")]);
		info.WeaponID4 = FCString::Atoi(*pve_monster_list[TEXT("WeaponID4")]);
		info.HeadEquipID = FCString::Atoi(*pve_monster_list[TEXT("HeadEquipID")]);
		info.ShoulderEquipID = FCString::Atoi(*pve_monster_list[TEXT("ShoulderEquipID")]);
		info.UpBodyEquipID = FCString::Atoi(*pve_monster_list[TEXT("UpBodyEquipID")]);
		info.DownBodyEquipID = FCString::Atoi(*pve_monster_list[TEXT("DownBodyEquipID")]);
		info.HorseID = FCString::Atoi(*pve_monster_list[TEXT("HorseID")]);
		info.HorseEquipID = FCString::Atoi(*pve_monster_list[TEXT("HorseEquipID")]);
		info.fHorseLifeRate = FCString::Atof(*pve_monster_list[TEXT("fHorseLifeRate")]);
		info.DetectRate = FCString::Atof(*pve_monster_list[TEXT("DetectRate")]);
		info.BeDetectedRate = FCString::Atof(*pve_monster_list[TEXT("BeDetectedRate")]);
		info.fDefendRange = FCString::Atof(*pve_monster_list[TEXT("fDefendRange")]);
		info.fSupportRange = FCString::Atof(*pve_monster_list[TEXT("fSupportRange")]);
		info.szForceMovePos = pve_monster_list[TEXT("szForceMovePos")];
		info.AlertHewupPercent = FCString::Atof(*pve_monster_list[TEXT("AlertHewupPercent")]);
		info.AlertBlockPercent = FCString::Atof(*pve_monster_list[TEXT("AlertBlockPercent")]);
		info.ShotOffsetRangeX = FCString::Atof(*pve_monster_list[TEXT("ShotOffsetRangeX")]);
		info.ShotOffsetRangeY = FCString::Atof(*pve_monster_list[TEXT("ShotOffsetRangeY")]);
		info.fAttackOrDefendProb_0 = FCString::Atof(*pve_monster_list[TEXT("fAttackOrDefendProb_0")]);
		info.fAttackOrDefendProb_1 = FCString::Atof(*pve_monster_list[TEXT("fAttackOrDefendProb_1")]);
		info.fAttackOrDefendProb_2 = FCString::Atof(*pve_monster_list[TEXT("fAttackOrDefendProb_2")]);
		info.fAttackOrDefendProb_3 = FCString::Atof(*pve_monster_list[TEXT("fAttackOrDefendProb_3")]);
		info.fMeleeAttackIntervalTime = FCString::Atof(*pve_monster_list[TEXT("fMeleeAttackIntervalTime")]);
		info.fRangeAttackIntervalTime = FCString::Atof(*pve_monster_list[TEXT("fRangeAttackIntervalTime")]);
		info.CausePlayerDamage = FCString::Atof(*pve_monster_list[TEXT("CausePlayerDamage")]);
		info.CauseAIDamage = FCString::Atof(*pve_monster_list[TEXT("CauseAIDamage")]);
		info.CauseHorseDamage = FCString::Atof(*pve_monster_list[TEXT("CauseHorseDamage")]);
		info.CauseBossDamage = FCString::Atof(*pve_monster_list[TEXT("CauseBossDamage")]);
		info.PenetrateCut = FCString::Atof(*pve_monster_list[TEXT("PenetrateCut")]);
		info.PenetratePuncture = FCString::Atof(*pve_monster_list[TEXT("PenetratePuncture")]);
		info.PenetrateBlunt = FCString::Atof(*pve_monster_list[TEXT("PenetrateBlunt")]);
		info.nTacticalMovePercent = FCString::Atof(*pve_monster_list[TEXT("nTacticalMovePercent")]);
		info.Skill1 = pve_monster_list[TEXT("Skill1")];
		info.Skill2 = pve_monster_list[TEXT("Skill2")];
		info.Skill3 = pve_monster_list[TEXT("Skill3")];
		info.Skill4 = pve_monster_list[TEXT("Skill4")];
		info.Skill5 = pve_monster_list[TEXT("Skill5")];
		info.Skill6 = pve_monster_list[TEXT("Skill6")];
		info.Skill7 = pve_monster_list[TEXT("Skill7")];
		info.Skill8 = pve_monster_list[TEXT("Skill8")];
		info.Skill9 = pve_monster_list[TEXT("Skill9")];
		info.Skill10 = pve_monster_list[TEXT("Skill10")];
		info.Skill11 = pve_monster_list[TEXT("Skill11")];
		info.Skill12 = pve_monster_list[TEXT("Skill12")];
		info.Skill13 = pve_monster_list[TEXT("Skill13")];
		info.Skill14 = pve_monster_list[TEXT("Skill14")];
		info.Skill15 = pve_monster_list[TEXT("Skill15")];
		info.fDefenseRemoteAtk = FCString::Atof(*pve_monster_list[TEXT("fDefenseRemoteAtk")]);
		info.nNationType = FCString::Atoi(*pve_monster_list[TEXT("nNationType")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_rangedweapon(int id, OUT Frontend_txt_struct_rangedweapon& info)
{
	info.ItemId = 0;
	TMap<FString, FString> rangedweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("rangedweapon"), id, rangedweapon_list);
	if (rangedweapon_list.Num() > 0)
	{
		info.ItemId = FCString::Atoi(*rangedweapon_list[TEXT("ItemId")]);
		info.ItemName = rangedweapon_list[TEXT("ItemName")];
		info.ItemDescription = rangedweapon_list[TEXT("ItemDescription")];
		info.SkeletalMesh = rangedweapon_list[TEXT("SkeletalMesh")];
		info.Level = FCString::Atoi(*rangedweapon_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*rangedweapon_list[TEXT("WeaponWeight")]);
		info.WeaponWeightLevel = FCString::Atoi(*rangedweapon_list[TEXT("WeaponWeightLevel")]);
		info.ShootDamageFactor = FCString::Atof(*rangedweapon_list[TEXT("ShootDamageFactor")]);
		info.RemoteHurtMultiple = FCString::Atof(*rangedweapon_list[TEXT("RemoteHurtMultiple")]);
		info.DamageShieldFactor = FCString::Atof(*rangedweapon_list[TEXT("DamageShieldFactor")]);
		info.FetchingTime = FCString::Atof(*rangedweapon_list[TEXT("FetchingTime")]);
		info.FiringTime = FCString::Atof(*rangedweapon_list[TEXT("FiringTime")]);
		info.HoldingTime = FCString::Atof(*rangedweapon_list[TEXT("HoldingTime")]);
		info.iFirstMinRadius = FCString::Atof(*rangedweapon_list[TEXT("iFirstMinRadius")]);
		info.iSecondMinRadius = FCString::Atof(*rangedweapon_list[TEXT("iSecondMinRadius")]);
		info.fPresistHoldingToSpreadTime = FCString::Atof(*rangedweapon_list[TEXT("fPresistHoldingToSpreadTime")]);
		info.iSpreadRadius = FCString::Atof(*rangedweapon_list[TEXT("iSpreadRadius")]);
		info.SpreadMoveFactorOnGround = FCString::Atof(*rangedweapon_list[TEXT("SpreadMoveFactorOnGround")]);
		info.SpreadMoveFactorOnHorse = FCString::Atof(*rangedweapon_list[TEXT("SpreadMoveFactorOnHorse")]);
		info.fSpeedFactorBase = FCString::Atof(*rangedweapon_list[TEXT("fSpeedFactorBase")]);
		info.bSpreadAble = FCString::Atoi(*rangedweapon_list[TEXT("bSpreadAble")]);
		info.nMaxFireRange = FCString::Atoi(*rangedweapon_list[TEXT("nMaxFireRange")]);
		info.DoHurtAnimTime = FCString::Atof(*rangedweapon_list[TEXT("DoHurtAnimTime")]);
		info.WeaponCachedMaxRange = FCString::Atoi(*rangedweapon_list[TEXT("WeaponCachedMaxRange")]);
		info.fHoldLvPerscent = FCString::Atof(*rangedweapon_list[TEXT("fHoldLvPerscent")]);
		info.fOriginalSpeed = FCString::Atof(*rangedweapon_list[TEXT("fOriginalSpeed")]);
		info.fSecondSpeed = FCString::Atof(*rangedweapon_list[TEXT("fSecondSpeed")]);
		info.Persist1WeaponWeightLevel = FCString::Atoi(*rangedweapon_list[TEXT("Persist1WeaponWeightLevel")]);
		info.Persist2WeaponWeightLevel = FCString::Atoi(*rangedweapon_list[TEXT("Persist2WeaponWeightLevel")]);
		info.AmmoID = FCString::Atoi(*rangedweapon_list[TEXT("AmmoID")]);
		info.vecHitOffsetX = FCString::Atof(*rangedweapon_list[TEXT("vecHitOffsetX")]);
		info.vecHitOffsetY = FCString::Atof(*rangedweapon_list[TEXT("vecHitOffsetY")]);
		info.kind = FCString::Atoi(*rangedweapon_list[TEXT("kind")]);
		info.CannotAttackRange = FCString::Atoi(*rangedweapon_list[TEXT("CannotAttackRange")]);
		info.bIsUseOnHorse = FCString::Atoi(*rangedweapon_list[TEXT("bIsUseOnHorse")]);
		info.LoadAmmoCount = FCString::Atoi(*rangedweapon_list[TEXT("LoadAmmoCount")]);
		info.LoadAmmoTime = FCString::Atof(*rangedweapon_list[TEXT("LoadAmmoTime")]);
		info.ShootDamageDown = FCString::Atof(*rangedweapon_list[TEXT("ShootDamageDown")]);
		info.fight = FCString::Atoi(*rangedweapon_list[TEXT("fight")]);
		info.DamageDownLv1 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv1")]);
		info.DamageDownLv2 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv2")]);
		info.DamageDownLv3 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv3")]);
		info.DamageDownLv4 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv4")]);
		info.DamageDownLv5 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv5")]);
		info.DamageDownLv6 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv6")]);
		info.DamageDownLv7 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv7")]);
		info.DamageDownLv8 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv8")]);
		info.DamageDownLv9 = FCString::Atof(*rangedweapon_list[TEXT("DamageDownLv9")]);
		info.ShortRange = FCString::Atoi(*rangedweapon_list[TEXT("ShortRange")]);
		info.LongRange = FCString::Atoi(*rangedweapon_list[TEXT("LongRange")]);
		info.ShortRangeDamage = FCString::Atof(*rangedweapon_list[TEXT("ShortRangeDamage")]);
		info.LongRangeDamage = FCString::Atof(*rangedweapon_list[TEXT("LongRangeDamage")]);
		info.HighLowDamage = FCString::Atof(*rangedweapon_list[TEXT("HighLowDamage")]);
		info.PushInitSpeed = FCString::Atof(*rangedweapon_list[TEXT("PushInitSpeed")]);
		info.PushCdTime = FCString::Atoi(*rangedweapon_list[TEXT("PushCdTime")]);
		info.PushDistance = FCString::Atof(*rangedweapon_list[TEXT("PushDistance")]);
		info.PushAngle = FCString::Atoi(*rangedweapon_list[TEXT("PushAngle")]);
		info.PushType = FCString::Atoi(*rangedweapon_list[TEXT("PushType")]);
		info.WaveVoice = rangedweapon_list[TEXT("WaveVoice")];
		info.fPlayerCauseAIDamageVal = FCString::Atof(*rangedweapon_list[TEXT("fPlayerCauseAIDamageVal")]);
		info.fPvPDamageRate = FCString::Atof(*rangedweapon_list[TEXT("fPvPDamageRate")]);
		info.fPveDamageFactor = FCString::Atoi(*rangedweapon_list[TEXT("fPveDamageFactor")]);
		info.nIsPveWeapon = FCString::Atoi(*rangedweapon_list[TEXT("nIsPveWeapon")]);
		info.fWithShieldAtkSpeedRate = FCString::Atof(*rangedweapon_list[TEXT("fWithShieldAtkSpeedRate")]);
		info.fHead_hurt_factor = FCString::Atof(*rangedweapon_list[TEXT("fHead_hurt_factor")]);
		info.fShoulder_hurt_factor = FCString::Atoi(*rangedweapon_list[TEXT("fShoulder_hurt_factor")]);
		info.fChest_hurt_factor = FCString::Atof(*rangedweapon_list[TEXT("fChest_hurt_factor")]);
		info.fLeg_hurt_factor = FCString::Atof(*rangedweapon_list[TEXT("fLeg_hurt_factor")]);
		info.nSingleComboNum = FCString::Atoi(*rangedweapon_list[TEXT("nSingleComboNum")]);
		info.fSingleComboShootTime = FCString::Atof(*rangedweapon_list[TEXT("fSingleComboShootTime")]);
		info.nSwitchWeapon = FCString::Atoi(*rangedweapon_list[TEXT("nSwitchWeapon")]);
		info.nDifficuty = FCString::Atoi(*rangedweapon_list[TEXT("nDifficuty")]);
		info.fComboShotAtkDmgFactor = FCString::Atof(*rangedweapon_list[TEXT("fComboShotAtkDmgFactor")]);
		info.costfield = FCString::Atoi(*rangedweapon_list[TEXT("costfield")]);
		info.fCamailValue = FCString::Atoi(*rangedweapon_list[TEXT("fCamailValue")]);
		info.Persist2AddCamailVal = FCString::Atoi(*rangedweapon_list[TEXT("Persist2AddCamailVal")]);
		info.nFurySkillId = FCString::Atoi(*rangedweapon_list[TEXT("nFurySkillId")]);
		info.nFuryBaoQiSkillId = FCString::Atoi(*rangedweapon_list[TEXT("nFuryBaoQiSkillId")]);
		info.fRideAttackSpeedRate = FCString::Atof(*rangedweapon_list[TEXT("fRideAttackSpeedRate")]);
		info.nQSkillId = FCString::Atoi(*rangedweapon_list[TEXT("nQSkillId")]);
		info.fRideShotCdTimeSec = FCString::Atof(*rangedweapon_list[TEXT("fRideShotCdTimeSec")]);
		info.fTakeOffTime = FCString::Atof(*rangedweapon_list[TEXT("fTakeOffTime")]);
		info.fTakeOutTime = FCString::Atof(*rangedweapon_list[TEXT("fTakeOutTime")]);
		info.fGroundRotationFactor = FCString::Atof(*rangedweapon_list[TEXT("fGroundRotationFactor")]);
		info.fHorseDamageRate = FCString::Atof(*rangedweapon_list[TEXT("fHorseDamageRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_roadshield(int id, OUT Frontend_txt_struct_roadshield& info)
{
	info.Id = 0;
	TMap<FString, FString> roadshield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("roadshield"), id, roadshield_list);
	if (roadshield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*roadshield_list[TEXT("Id")]);
		info.ItemName = roadshield_list[TEXT("ItemName")];
		info.ItemDescription = roadshield_list[TEXT("ItemDescription")];
		info.SkeletalMesh = roadshield_list[TEXT("SkeletalMesh")];
		info.EnemySkeletalMesh = roadshield_list[TEXT("EnemySkeletalMesh")];
		info.AnimSet = roadshield_list[TEXT("AnimSet")];
		info.PhysicAsset = roadshield_list[TEXT("PhysicAsset")];
		info.nHealth = FCString::Atoi(*roadshield_list[TEXT("nHealth")]);
		info.fBeDetected = FCString::Atoi(*roadshield_list[TEXT("fBeDetected")]);
		info.fWeight = FCString::Atoi(*roadshield_list[TEXT("fWeight")]);
		info.fRadius = FCString::Atof(*roadshield_list[TEXT("fRadius")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_roadshield_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_roadshield info;
	if(!Get_Frontend_txt_struct_roadshield(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("EnemySkeletalMesh"), info.EnemySkeletalMesh);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("fBeDetected"), FString::FromInt(info.fBeDetected));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	return true;
}

bool Get_Frontend_txt_struct_rolling_wood(int id, OUT Frontend_txt_struct_rolling_wood& info)
{
	info.Id = 0;
	TMap<FString, FString> rolling_wood_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("rolling_wood"), id, rolling_wood_list);
	if (rolling_wood_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*rolling_wood_list[TEXT("Id")]);
		info.ItemName = rolling_wood_list[TEXT("ItemName")];
		info.ItemDescription = rolling_wood_list[TEXT("ItemDescription")];
		info.SkeletalMesh = rolling_wood_list[TEXT("SkeletalMesh")];
		info.IconTexture = rolling_wood_list[TEXT("IconTexture")];
		info.AnimSet = rolling_wood_list[TEXT("AnimSet")];
		info.PhysicAsset = rolling_wood_list[TEXT("PhysicAsset")];
		info.nHitHealth = FCString::Atoi(*rolling_wood_list[TEXT("nHitHealth")]);
		info.nPrepareTime = FCString::Atoi(*rolling_wood_list[TEXT("nPrepareTime")]);
		info.fMaxSpeed = FCString::Atoi(*rolling_wood_list[TEXT("fMaxSpeed")]);
		info.fAcceleration = FCString::Atoi(*rolling_wood_list[TEXT("fAcceleration")]);
		info.fRotationRate = FCString::Atoi(*rolling_wood_list[TEXT("fRotationRate")]);
		info.fWeight = FCString::Atoi(*rolling_wood_list[TEXT("fWeight")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_rolling_wood_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_rolling_wood info;
	if(!Get_Frontend_txt_struct_rolling_wood(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHitHealth"), FString::FromInt(info.nHitHealth));
	out.Add(TEXT("nPrepareTime"), FString::FromInt(info.nPrepareTime));
	out.Add(TEXT("fMaxSpeed"), FString::FromInt(info.fMaxSpeed));
	out.Add(TEXT("fAcceleration"), FString::FromInt(info.fAcceleration));
	out.Add(TEXT("fRotationRate"), FString::FromInt(info.fRotationRate));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	return true;
}

bool Get_Frontend_txt_struct_science(int id, OUT Frontend_txt_struct_science& info)
{
	info.Id = 0;
	TMap<FString, FString> science_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("science"), id, science_list);
	if (science_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*science_list[TEXT("Id")]);
		info.Name = science_list[TEXT("Name")];
		info.PersonId = FCString::Atoi(*science_list[TEXT("PersonId")]);
		info.SoldierName = science_list[TEXT("SoldierName")];
		info.AttributeId = science_list[TEXT("AttributeId")];
		info.Desc = science_list[TEXT("Desc")];
		info.fAttributeValue = FCString::Atof(*science_list[TEXT("fAttributeValue")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_science_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_science info;
	if(!Get_Frontend_txt_struct_science(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Name"), info.Name);
	out.Add(TEXT("PersonId"), FString::FromInt(info.PersonId));
	out.Add(TEXT("SoldierName"), info.SoldierName);
	out.Add(TEXT("AttributeId"), info.AttributeId);
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("fAttributeValue"), FString::SanitizeFloat(info.fAttributeValue));
	return true;
}

bool Get_Frontend_txt_struct_shield(int id, OUT Frontend_txt_struct_shield& info)
{
	info.ItemID = 0;
	TMap<FString, FString> shield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("shield"), id, shield_list);
	if (shield_list.Num() > 0)
	{
		info.ItemID = FCString::Atoi(*shield_list[TEXT("ItemID")]);
		info.ItemName = shield_list[TEXT("ItemName")];
		info.ItemDescription = shield_list[TEXT("ItemDescription")];
		info.SkeletalMesh = shield_list[TEXT("SkeletalMesh")];
		info.Level = FCString::Atoi(*shield_list[TEXT("Level")]);
		info.WeaponWeight = FCString::Atof(*shield_list[TEXT("WeaponWeight")]);
		info.WeaponWeightLevel = FCString::Atoi(*shield_list[TEXT("WeaponWeightLevel")]);
		info.ResistHit = FCString::Atoi(*shield_list[TEXT("ResistHit")]);
		info.Durableness = FCString::Atoi(*shield_list[TEXT("Durableness")]);
		info.bIsUseOnHorse = FCString::Atoi(*shield_list[TEXT("bIsUseOnHorse")]);
		info.UpDefendShieldRange = FCString::Atof(*shield_list[TEXT("UpDefendShieldRange")]);
		info.DownDefendShieldRange = FCString::Atof(*shield_list[TEXT("DownDefendShieldRange")]);
		info.LeftDefendShieldRange = FCString::Atof(*shield_list[TEXT("LeftDefendShieldRange")]);
		info.RightDefendShieldRange = FCString::Atof(*shield_list[TEXT("RightDefendShieldRange")]);
		info.UpRealShieldRange = FCString::Atof(*shield_list[TEXT("UpRealShieldRange")]);
		info.DownRealShieldRange = FCString::Atof(*shield_list[TEXT("DownRealShieldRange")]);
		info.LeftRealShieldRange = FCString::Atof(*shield_list[TEXT("LeftRealShieldRange")]);
		info.RightRealShieldRange = FCString::Atof(*shield_list[TEXT("RightRealShieldRange")]);
		info.BeginDefendTime = FCString::Atof(*shield_list[TEXT("BeginDefendTime")]);
		info.SucDefendTime = FCString::Atof(*shield_list[TEXT("SucDefendTime")]);
		info.FailDefendTime = FCString::Atof(*shield_list[TEXT("FailDefendTime")]);
		info.ShieldStyleName = shield_list[TEXT("ShieldStyleName")];
		info.ResistHitDown = FCString::Atof(*shield_list[TEXT("ResistHitDown")]);
		info.DurablenessDown = FCString::Atoi(*shield_list[TEXT("DurablenessDown")]);
		info.fight = FCString::Atoi(*shield_list[TEXT("fight")]);
		info.ResistHitDownLv1 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv1")]);
		info.ResistHitDownLv2 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv2")]);
		info.ResistHitDownLv3 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv3")]);
		info.ResistHitDownLv4 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv4")]);
		info.ResistHitDownLv5 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv5")]);
		info.ResistHitDownLv6 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv6")]);
		info.ResistHitDownLv7 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv7")]);
		info.ResistHitDownLv8 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv8")]);
		info.ResistHitDownLv9 = FCString::Atoi(*shield_list[TEXT("ResistHitDownLv9")]);
		info.PushInitSpeed = FCString::Atof(*shield_list[TEXT("PushInitSpeed")]);
		info.PushCdTime = FCString::Atof(*shield_list[TEXT("PushCdTime")]);
		info.PushDistance = FCString::Atof(*shield_list[TEXT("PushDistance")]);
		info.PushAngle = FCString::Atof(*shield_list[TEXT("PushAngle")]);
		info.PushType = FCString::Atoi(*shield_list[TEXT("PushType")]);
		info.BeginSprint = FCString::Atof(*shield_list[TEXT("BeginSprint")]);
		info.fPveDurableness = FCString::Atoi(*shield_list[TEXT("fPveDurableness")]);
		info.nIsPveWeapon = FCString::Atoi(*shield_list[TEXT("nIsPveWeapon")]);
		info.nDifficuty = FCString::Atoi(*shield_list[TEXT("nDifficuty")]);
		info.costfield = FCString::Atoi(*shield_list[TEXT("costfield")]);
		info.fRideDefenseSpeedRate = FCString::Atof(*shield_list[TEXT("fRideDefenseSpeedRate")]);
		info.fSprintTimeSec = FCString::Atof(*shield_list[TEXT("fSprintTimeSec")]);
		info.fSprintTimeCdSec = FCString::Atof(*shield_list[TEXT("fSprintTimeCdSec")]);
		info.nSprintMaxYawAim = FCString::Atoi(*shield_list[TEXT("nSprintMaxYawAim")]);
		info.fSprintSpeed = FCString::Atof(*shield_list[TEXT("fSprintSpeed")]);
		info.fTakeOffTime = FCString::Atof(*shield_list[TEXT("fTakeOffTime")]);
		info.fTakeOutTime = FCString::Atof(*shield_list[TEXT("fTakeOutTime")]);
		info.fGroundRotationFactor = FCString::Atof(*shield_list[TEXT("fGroundRotationFactor")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_soldiers(int id, OUT Frontend_txt_struct_soldiers& info)
{
	info.Id = 0;
	TMap<FString, FString> soldiers_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("soldiers"), id, soldiers_list);
	if (soldiers_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*soldiers_list[TEXT("Id")]);
		info.SoldierName = soldiers_list[TEXT("SoldierName")];
		info.SoldierDescription = soldiers_list[TEXT("SoldierDescription")];
		info.SoldierKind = FCString::Atoi(*soldiers_list[TEXT("SoldierKind")]);
		info.SoldierSubKind = FCString::Atoi(*soldiers_list[TEXT("SoldierSubKind")]);
		info.fPrice = FCString::Atoi(*soldiers_list[TEXT("fPrice")]);
		info.BumpMass = FCString::Atof(*soldiers_list[TEXT("BumpMass")]);
		info.BaseAggressive = FCString::Atoi(*soldiers_list[TEXT("BaseAggressive")]);
		info.SkeletalMesh = soldiers_list[TEXT("SkeletalMesh")];
		info.Level = FCString::Atoi(*soldiers_list[TEXT("Level")]);
		info.fHealth = FCString::Atoi(*soldiers_list[TEXT("fHealth")]);
		info.MaxSpeed = FCString::Atof(*soldiers_list[TEXT("MaxSpeed")]);
		info.fAiHorseSpeedRate = FCString::Atof(*soldiers_list[TEXT("fAiHorseSpeedRate")]);
		info.fAiHorseAcceRate = FCString::Atof(*soldiers_list[TEXT("fAiHorseAcceRate")]);
		info.fAiHorseRotationRate = FCString::Atof(*soldiers_list[TEXT("fAiHorseRotationRate")]);
		info.fAiAttackSpeedRate = FCString::Atof(*soldiers_list[TEXT("fAiAttackSpeedRate")]);
		info.RotationRate = FCString::Atof(*soldiers_list[TEXT("RotationRate")]);
		info.SprintSpeed = FCString::Atof(*soldiers_list[TEXT("SprintSpeed")]);
		info.fAccelRate = FCString::Atof(*soldiers_list[TEXT("fAccelRate")]);
		info.SoldierDefenseValue = FCString::Atoi(*soldiers_list[TEXT("SoldierDefenseValue")]);
		info.SoldierDamage = FCString::Atoi(*soldiers_list[TEXT("SoldierDamage")]);
		info.fPlayerCauseAIShieldVal = FCString::Atof(*soldiers_list[TEXT("fPlayerCauseAIShieldVal")]);
		info.AlertRange1 = FCString::Atof(*soldiers_list[TEXT("AlertRange1")]);
		info.AlertRange2 = FCString::Atof(*soldiers_list[TEXT("AlertRange2")]);
		info.AlertRange3 = FCString::Atof(*soldiers_list[TEXT("AlertRange3")]);
		info.AlertRange4 = FCString::Atof(*soldiers_list[TEXT("AlertRange4")]);
		info.FollowRange = FCString::Atof(*soldiers_list[TEXT("FollowRange")]);
		info.DefendRange = FCString::Atof(*soldiers_list[TEXT("DefendRange")]);
		info.PushRange = FCString::Atof(*soldiers_list[TEXT("PushRange")]);
		info.fStartHoldMinTime = FCString::Atof(*soldiers_list[TEXT("fStartHoldMinTime")]);
		info.fStartHoldMaxTime = FCString::Atof(*soldiers_list[TEXT("fStartHoldMaxTime")]);
		info.fHoldToFireMinTime = FCString::Atof(*soldiers_list[TEXT("fHoldToFireMinTime")]);
		info.fHoldToFireMaxTime = FCString::Atof(*soldiers_list[TEXT("fHoldToFireMaxTime")]);
		info.WeaponID1 = FCString::Atoi(*soldiers_list[TEXT("WeaponID1")]);
		info.WeaponID2 = FCString::Atoi(*soldiers_list[TEXT("WeaponID2")]);
		info.WeaponID3 = FCString::Atoi(*soldiers_list[TEXT("WeaponID3")]);
		info.WeaponID4 = FCString::Atoi(*soldiers_list[TEXT("WeaponID4")]);
		info.HeadEquipID = FCString::Atoi(*soldiers_list[TEXT("HeadEquipID")]);
		info.ShoulderEquipID = FCString::Atoi(*soldiers_list[TEXT("ShoulderEquipID")]);
		info.UpBodyEquipID = FCString::Atoi(*soldiers_list[TEXT("UpBodyEquipID")]);
		info.DownBodyEquipID = FCString::Atoi(*soldiers_list[TEXT("DownBodyEquipID")]);
		info.HorseID = FCString::Atoi(*soldiers_list[TEXT("HorseID")]);
		info.HorseEquipID = FCString::Atoi(*soldiers_list[TEXT("HorseEquipID")]);
		info.fHorseLifeRate = FCString::Atof(*soldiers_list[TEXT("fHorseLifeRate")]);
		info.AmmoCountFactor = FCString::Atof(*soldiers_list[TEXT("AmmoCountFactor")]);
		info.ArmorType = FCString::Atoi(*soldiers_list[TEXT("ArmorType")]);
		info.DetectRate = FCString::Atof(*soldiers_list[TEXT("DetectRate")]);
		info.BeDetectedRate = FCString::Atof(*soldiers_list[TEXT("BeDetectedRate")]);
		info.AlertHewupPercent = FCString::Atof(*soldiers_list[TEXT("AlertHewupPercent")]);
		info.AlertBlockPercent = FCString::Atof(*soldiers_list[TEXT("AlertBlockPercent")]);
		info.ShotOffsetRangeX = FCString::Atof(*soldiers_list[TEXT("ShotOffsetRangeX")]);
		info.ShotOffsetRangeY = FCString::Atof(*soldiers_list[TEXT("ShotOffsetRangeY")]);
		info.fAttackOrDefendProb_0 = FCString::Atof(*soldiers_list[TEXT("fAttackOrDefendProb_0")]);
		info.fAttackOrDefendProb_1 = FCString::Atof(*soldiers_list[TEXT("fAttackOrDefendProb_1")]);
		info.fAttackOrDefendProb_2 = FCString::Atof(*soldiers_list[TEXT("fAttackOrDefendProb_2")]);
		info.fAttackOrDefendProb_3 = FCString::Atof(*soldiers_list[TEXT("fAttackOrDefendProb_3")]);
		info.fMeleeAttackIntervalTime = FCString::Atof(*soldiers_list[TEXT("fMeleeAttackIntervalTime")]);
		info.fRangeAttackIntervalTime = FCString::Atof(*soldiers_list[TEXT("fRangeAttackIntervalTime")]);
		info.fFailFire = FCString::Atof(*soldiers_list[TEXT("fFailFire")]);
		info.CurGroundFireStyle = FCString::Atoi(*soldiers_list[TEXT("CurGroundFireStyle")]);
		info.CurGroundAimStyle_0 = FCString::Atoi(*soldiers_list[TEXT("CurGroundAimStyle_0")]);
		info.CurGroundAimStyle_1 = FCString::Atoi(*soldiers_list[TEXT("CurGroundAimStyle_1")]);
		info.CurHorseFireStyle = FCString::Atoi(*soldiers_list[TEXT("CurHorseFireStyle")]);
		info.CurHorseAimStyle_0 = FCString::Atoi(*soldiers_list[TEXT("CurHorseAimStyle_0")]);
		info.CurHorseAimStyle_1 = FCString::Atoi(*soldiers_list[TEXT("CurHorseAimStyle_1")]);
		info.CausePlayerDamage = FCString::Atof(*soldiers_list[TEXT("CausePlayerDamage")]);
		info.CauseAIDamage = FCString::Atof(*soldiers_list[TEXT("CauseAIDamage")]);
		info.CauseHorseDamage = FCString::Atof(*soldiers_list[TEXT("CauseHorseDamage")]);
		info.CauseBossDamage = FCString::Atof(*soldiers_list[TEXT("CauseBossDamage")]);
		info.fSprintTimeOnGround = FCString::Atof(*soldiers_list[TEXT("fSprintTimeOnGround")]);
		info.nAISRS = FCString::Atoi(*soldiers_list[TEXT("nAISRS")]);
		info.PenetrateCut = FCString::Atof(*soldiers_list[TEXT("PenetrateCut")]);
		info.PenetratePuncture = FCString::Atof(*soldiers_list[TEXT("PenetratePuncture")]);
		info.PenetrateBlunt = FCString::Atof(*soldiers_list[TEXT("PenetrateBlunt")]);
		info.nTacticalMovePercent = FCString::Atof(*soldiers_list[TEXT("nTacticalMovePercent")]);
		info.nMorale = FCString::Atoi(*soldiers_list[TEXT("nMorale")]);
		info.nMoraleBehavior1 = FCString::Atoi(*soldiers_list[TEXT("nMoraleBehavior1")]);
		info.nMoraleBehavior2 = FCString::Atoi(*soldiers_list[TEXT("nMoraleBehavior2")]);
		info.nMoraleBehavior3 = FCString::Atoi(*soldiers_list[TEXT("nMoraleBehavior3")]);
		info.nMoraleBehavior4 = FCString::Atoi(*soldiers_list[TEXT("nMoraleBehavior4")]);
		info.nMoraleBehavior5 = FCString::Atoi(*soldiers_list[TEXT("nMoraleBehavior5")]);
		info.SkillID_1 = FCString::Atoi(*soldiers_list[TEXT("SkillID_1")]);
		info.SkillID_2 = FCString::Atoi(*soldiers_list[TEXT("SkillID_2")]);
		info.SkillID_3 = FCString::Atoi(*soldiers_list[TEXT("SkillID_3")]);
		info.SkillID_4 = FCString::Atoi(*soldiers_list[TEXT("SkillID_4")]);
		info.SkillID_5 = FCString::Atoi(*soldiers_list[TEXT("SkillID_5")]);
		info.CollectivPercent = FCString::Atoi(*soldiers_list[TEXT("CollectivPercent")]);
		info.Energy = FCString::Atoi(*soldiers_list[TEXT("Energy")]);
		info.MatchValue = FCString::Atoi(*soldiers_list[TEXT("MatchValue")]);
		info.ExpFactor = FCString::Atof(*soldiers_list[TEXT("ExpFactor")]);
		info.CoinFactor = FCString::Atof(*soldiers_list[TEXT("CoinFactor")]);
		info.fRemoteAtkFactor = FCString::Atof(*soldiers_list[TEXT("fRemoteAtkFactor")]);
		info.nFlagId = FCString::Atoi(*soldiers_list[TEXT("nFlagId")]);
		info.nFlagIdElite = FCString::Atoi(*soldiers_list[TEXT("nFlagIdElite")]);
		info.fScoreFactor = FCString::Atof(*soldiers_list[TEXT("fScoreFactor")]);
		info.fDefenseRemoteAtk = FCString::Atof(*soldiers_list[TEXT("fDefenseRemoteAtk")]);
		info.fHorseWeightRate = FCString::Atof(*soldiers_list[TEXT("fHorseWeightRate")]);
		info.fPveDamageRate = FCString::Atof(*soldiers_list[TEXT("fPveDamageRate")]);
		info.nDefaultFormation = FCString::Atoi(*soldiers_list[TEXT("nDefaultFormation")]);
		info.nNationType = FCString::Atoi(*soldiers_list[TEXT("nNationType")]);
		info.fTeamMoveSpeed = FCString::Atof(*soldiers_list[TEXT("fTeamMoveSpeed")]);
		info.fTeamAngleSpeed = FCString::Atof(*soldiers_list[TEXT("fTeamAngleSpeed")]);
		info.fTeamAccel = FCString::Atof(*soldiers_list[TEXT("fTeamAccel")]);
		info.fFallBehindSpeedRate = FCString::Atof(*soldiers_list[TEXT("fFallBehindSpeedRate")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_soldiers_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_soldiers info;
	if(!Get_Frontend_txt_struct_soldiers(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("SoldierName"), info.SoldierName);
	out.Add(TEXT("SoldierDescription"), info.SoldierDescription);
	out.Add(TEXT("SoldierKind"), FString::FromInt(info.SoldierKind));
	out.Add(TEXT("SoldierSubKind"), FString::FromInt(info.SoldierSubKind));
	out.Add(TEXT("fPrice"), FString::FromInt(info.fPrice));
	out.Add(TEXT("BumpMass"), FString::SanitizeFloat(info.BumpMass));
	out.Add(TEXT("BaseAggressive"), FString::FromInt(info.BaseAggressive));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("fHealth"), FString::FromInt(info.fHealth));
	out.Add(TEXT("MaxSpeed"), FString::SanitizeFloat(info.MaxSpeed));
	out.Add(TEXT("fAiHorseSpeedRate"), FString::SanitizeFloat(info.fAiHorseSpeedRate));
	out.Add(TEXT("fAiHorseAcceRate"), FString::SanitizeFloat(info.fAiHorseAcceRate));
	out.Add(TEXT("fAiHorseRotationRate"), FString::SanitizeFloat(info.fAiHorseRotationRate));
	out.Add(TEXT("fAiAttackSpeedRate"), FString::SanitizeFloat(info.fAiAttackSpeedRate));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("SprintSpeed"), FString::SanitizeFloat(info.SprintSpeed));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("SoldierDefenseValue"), FString::FromInt(info.SoldierDefenseValue));
	out.Add(TEXT("SoldierDamage"), FString::FromInt(info.SoldierDamage));
	out.Add(TEXT("fPlayerCauseAIShieldVal"), FString::SanitizeFloat(info.fPlayerCauseAIShieldVal));
	out.Add(TEXT("AlertRange1"), FString::SanitizeFloat(info.AlertRange1));
	out.Add(TEXT("AlertRange2"), FString::SanitizeFloat(info.AlertRange2));
	out.Add(TEXT("AlertRange3"), FString::SanitizeFloat(info.AlertRange3));
	out.Add(TEXT("AlertRange4"), FString::SanitizeFloat(info.AlertRange4));
	out.Add(TEXT("FollowRange"), FString::SanitizeFloat(info.FollowRange));
	out.Add(TEXT("DefendRange"), FString::SanitizeFloat(info.DefendRange));
	out.Add(TEXT("PushRange"), FString::SanitizeFloat(info.PushRange));
	out.Add(TEXT("fStartHoldMinTime"), FString::SanitizeFloat(info.fStartHoldMinTime));
	out.Add(TEXT("fStartHoldMaxTime"), FString::SanitizeFloat(info.fStartHoldMaxTime));
	out.Add(TEXT("fHoldToFireMinTime"), FString::SanitizeFloat(info.fHoldToFireMinTime));
	out.Add(TEXT("fHoldToFireMaxTime"), FString::SanitizeFloat(info.fHoldToFireMaxTime));
	out.Add(TEXT("WeaponID1"), FString::FromInt(info.WeaponID1));
	out.Add(TEXT("WeaponID2"), FString::FromInt(info.WeaponID2));
	out.Add(TEXT("WeaponID3"), FString::FromInt(info.WeaponID3));
	out.Add(TEXT("WeaponID4"), FString::FromInt(info.WeaponID4));
	out.Add(TEXT("HeadEquipID"), FString::FromInt(info.HeadEquipID));
	out.Add(TEXT("ShoulderEquipID"), FString::FromInt(info.ShoulderEquipID));
	out.Add(TEXT("UpBodyEquipID"), FString::FromInt(info.UpBodyEquipID));
	out.Add(TEXT("DownBodyEquipID"), FString::FromInt(info.DownBodyEquipID));
	out.Add(TEXT("HorseID"), FString::FromInt(info.HorseID));
	out.Add(TEXT("HorseEquipID"), FString::FromInt(info.HorseEquipID));
	out.Add(TEXT("fHorseLifeRate"), FString::SanitizeFloat(info.fHorseLifeRate));
	out.Add(TEXT("AmmoCountFactor"), FString::SanitizeFloat(info.AmmoCountFactor));
	out.Add(TEXT("ArmorType"), FString::FromInt(info.ArmorType));
	out.Add(TEXT("DetectRate"), FString::SanitizeFloat(info.DetectRate));
	out.Add(TEXT("BeDetectedRate"), FString::SanitizeFloat(info.BeDetectedRate));
	out.Add(TEXT("AlertHewupPercent"), FString::SanitizeFloat(info.AlertHewupPercent));
	out.Add(TEXT("AlertBlockPercent"), FString::SanitizeFloat(info.AlertBlockPercent));
	out.Add(TEXT("ShotOffsetRangeX"), FString::SanitizeFloat(info.ShotOffsetRangeX));
	out.Add(TEXT("ShotOffsetRangeY"), FString::SanitizeFloat(info.ShotOffsetRangeY));
	out.Add(TEXT("fAttackOrDefendProb_0"), FString::SanitizeFloat(info.fAttackOrDefendProb_0));
	out.Add(TEXT("fAttackOrDefendProb_1"), FString::SanitizeFloat(info.fAttackOrDefendProb_1));
	out.Add(TEXT("fAttackOrDefendProb_2"), FString::SanitizeFloat(info.fAttackOrDefendProb_2));
	out.Add(TEXT("fAttackOrDefendProb_3"), FString::SanitizeFloat(info.fAttackOrDefendProb_3));
	out.Add(TEXT("fMeleeAttackIntervalTime"), FString::SanitizeFloat(info.fMeleeAttackIntervalTime));
	out.Add(TEXT("fRangeAttackIntervalTime"), FString::SanitizeFloat(info.fRangeAttackIntervalTime));
	out.Add(TEXT("fFailFire"), FString::SanitizeFloat(info.fFailFire));
	out.Add(TEXT("CurGroundFireStyle"), FString::FromInt(info.CurGroundFireStyle));
	out.Add(TEXT("CurGroundAimStyle_0"), FString::FromInt(info.CurGroundAimStyle_0));
	out.Add(TEXT("CurGroundAimStyle_1"), FString::FromInt(info.CurGroundAimStyle_1));
	out.Add(TEXT("CurHorseFireStyle"), FString::FromInt(info.CurHorseFireStyle));
	out.Add(TEXT("CurHorseAimStyle_0"), FString::FromInt(info.CurHorseAimStyle_0));
	out.Add(TEXT("CurHorseAimStyle_1"), FString::FromInt(info.CurHorseAimStyle_1));
	out.Add(TEXT("CausePlayerDamage"), FString::SanitizeFloat(info.CausePlayerDamage));
	out.Add(TEXT("CauseAIDamage"), FString::SanitizeFloat(info.CauseAIDamage));
	out.Add(TEXT("CauseHorseDamage"), FString::SanitizeFloat(info.CauseHorseDamage));
	out.Add(TEXT("CauseBossDamage"), FString::SanitizeFloat(info.CauseBossDamage));
	out.Add(TEXT("fSprintTimeOnGround"), FString::SanitizeFloat(info.fSprintTimeOnGround));
	out.Add(TEXT("nAISRS"), FString::FromInt(info.nAISRS));
	out.Add(TEXT("PenetrateCut"), FString::SanitizeFloat(info.PenetrateCut));
	out.Add(TEXT("PenetratePuncture"), FString::SanitizeFloat(info.PenetratePuncture));
	out.Add(TEXT("PenetrateBlunt"), FString::SanitizeFloat(info.PenetrateBlunt));
	out.Add(TEXT("nTacticalMovePercent"), FString::SanitizeFloat(info.nTacticalMovePercent));
	out.Add(TEXT("nMorale"), FString::FromInt(info.nMorale));
	out.Add(TEXT("nMoraleBehavior1"), FString::FromInt(info.nMoraleBehavior1));
	out.Add(TEXT("nMoraleBehavior2"), FString::FromInt(info.nMoraleBehavior2));
	out.Add(TEXT("nMoraleBehavior3"), FString::FromInt(info.nMoraleBehavior3));
	out.Add(TEXT("nMoraleBehavior4"), FString::FromInt(info.nMoraleBehavior4));
	out.Add(TEXT("nMoraleBehavior5"), FString::FromInt(info.nMoraleBehavior5));
	out.Add(TEXT("SkillID_1"), FString::FromInt(info.SkillID_1));
	out.Add(TEXT("SkillID_2"), FString::FromInt(info.SkillID_2));
	out.Add(TEXT("SkillID_3"), FString::FromInt(info.SkillID_3));
	out.Add(TEXT("SkillID_4"), FString::FromInt(info.SkillID_4));
	out.Add(TEXT("SkillID_5"), FString::FromInt(info.SkillID_5));
	out.Add(TEXT("CollectivPercent"), FString::FromInt(info.CollectivPercent));
	out.Add(TEXT("Energy"), FString::FromInt(info.Energy));
	out.Add(TEXT("MatchValue"), FString::FromInt(info.MatchValue));
	out.Add(TEXT("ExpFactor"), FString::SanitizeFloat(info.ExpFactor));
	out.Add(TEXT("CoinFactor"), FString::SanitizeFloat(info.CoinFactor));
	out.Add(TEXT("fRemoteAtkFactor"), FString::SanitizeFloat(info.fRemoteAtkFactor));
	out.Add(TEXT("nFlagId"), FString::FromInt(info.nFlagId));
	out.Add(TEXT("nFlagIdElite"), FString::FromInt(info.nFlagIdElite));
	out.Add(TEXT("fScoreFactor"), FString::SanitizeFloat(info.fScoreFactor));
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	out.Add(TEXT("fHorseWeightRate"), FString::SanitizeFloat(info.fHorseWeightRate));
	out.Add(TEXT("fPveDamageRate"), FString::SanitizeFloat(info.fPveDamageRate));
	out.Add(TEXT("nDefaultFormation"), FString::FromInt(info.nDefaultFormation));
	out.Add(TEXT("nNationType"), FString::FromInt(info.nNationType));
	out.Add(TEXT("fTeamMoveSpeed"), FString::SanitizeFloat(info.fTeamMoveSpeed));
	out.Add(TEXT("fTeamAngleSpeed"), FString::SanitizeFloat(info.fTeamAngleSpeed));
	out.Add(TEXT("fTeamAccel"), FString::SanitizeFloat(info.fTeamAccel));
	out.Add(TEXT("fFallBehindSpeedRate"), FString::SanitizeFloat(info.fFallBehindSpeedRate));
	return true;
}

bool Get_Frontend_txt_struct_specificflag(int id, OUT Frontend_txt_struct_specificflag& info)
{
	info.SpecificFlagType = 0;
	TMap<FString, FString> specificflag_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("specificflag"), id, specificflag_list);
	if (specificflag_list.Num() > 0)
	{
		info.SpecificFlagType = FCString::Atoi(*specificflag_list[TEXT("SpecificFlagType")]);
		info.SkeletalMesh = specificflag_list[TEXT("SkeletalMesh")];
		info.Name = specificflag_list[TEXT("Name")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_specificflag_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_specificflag info;
	if(!Get_Frontend_txt_struct_specificflag(id, info))
	{
		return false;
	}

	out.Add(TEXT("SpecificFlagType"), FString::FromInt(info.SpecificFlagType));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Name"), info.Name);
	return true;
}

bool Get_Frontend_txt_struct_splitfromhorse(int id, OUT Frontend_txt_struct_splitfromhorse& info)
{
	info.split_type = 0;
	TMap<FString, FString> splitfromhorse_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("splitfromhorse"), id, splitfromhorse_list);
	if (splitfromhorse_list.Num() > 0)
	{
		info.split_type = FCString::Atoi(*splitfromhorse_list[TEXT("split_type")]);
		info.time = FCString::Atoi(*splitfromhorse_list[TEXT("time")]);
		info.dist = FCString::Atof(*splitfromhorse_list[TEXT("dist")]);
		info.min_speed = FCString::Atoi(*splitfromhorse_list[TEXT("min_speed")]);
		info.max_speed = FCString::Atoi(*splitfromhorse_list[TEXT("max_speed")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_splitfromhorse_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_splitfromhorse info;
	if(!Get_Frontend_txt_struct_splitfromhorse(id, info))
	{
		return false;
	}

	out.Add(TEXT("split_type"), FString::FromInt(info.split_type));
	out.Add(TEXT("time"), FString::FromInt(info.time));
	out.Add(TEXT("dist"), FString::SanitizeFloat(info.dist));
	out.Add(TEXT("min_speed"), FString::FromInt(info.min_speed));
	out.Add(TEXT("max_speed"), FString::FromInt(info.max_speed));
	return true;
}

bool Get_Frontend_txt_struct_sprintact(int id, OUT Frontend_txt_struct_sprintact& info)
{
	info.act_type = 0;
	TMap<FString, FString> sprintact_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("sprintact"), id, sprintact_list);
	if (sprintact_list.Num() > 0)
	{
		info.act_type = FCString::Atoi(*sprintact_list[TEXT("act_type")]);
		info.time1 = FCString::Atof(*sprintact_list[TEXT("time1")]);
		info.dis1 = FCString::Atof(*sprintact_list[TEXT("dis1")]);
		info.time2 = FCString::Atof(*sprintact_list[TEXT("time2")]);
		info.dis2 = FCString::Atof(*sprintact_list[TEXT("dis2")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_sprintact_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_sprintact info;
	if(!Get_Frontend_txt_struct_sprintact(id, info))
	{
		return false;
	}

	out.Add(TEXT("act_type"), FString::FromInt(info.act_type));
	out.Add(TEXT("time1"), FString::SanitizeFloat(info.time1));
	out.Add(TEXT("dis1"), FString::SanitizeFloat(info.dis1));
	out.Add(TEXT("time2"), FString::SanitizeFloat(info.time2));
	out.Add(TEXT("dis2"), FString::SanitizeFloat(info.dis2));
	return true;
}

bool Get_Frontend_txt_struct_supplything(int id, OUT Frontend_txt_struct_supplything& info)
{
	info.Id = 0;
	TMap<FString, FString> supplything_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("supplything"), id, supplything_list);
	if (supplything_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*supplything_list[TEXT("Id")]);
		info.ItemName = supplything_list[TEXT("ItemName")];
		info.ItemDescription = supplything_list[TEXT("ItemDescription")];
		info.SkeletalMesh = supplything_list[TEXT("SkeletalMesh")];
		info.EnemySkeletalMesh = supplything_list[TEXT("EnemySkeletalMesh")];
		info.AnimSet = supplything_list[TEXT("AnimSet")];
		info.PhysicAsset = supplything_list[TEXT("PhysicAsset")];
		info.nHealth = FCString::Atoi(*supplything_list[TEXT("nHealth")]);
		info.fBeDetected = FCString::Atoi(*supplything_list[TEXT("fBeDetected")]);
		info.fWeight = FCString::Atoi(*supplything_list[TEXT("fWeight")]);
		info.fRadius = FCString::Atof(*supplything_list[TEXT("fRadius")]);
		info.fSupplyRange = FCString::Atof(*supplything_list[TEXT("fSupplyRange")]);
		info.nLifeTime = FCString::Atoi(*supplything_list[TEXT("nLifeTime")]);
		info.nSuppyType = FCString::Atoi(*supplything_list[TEXT("nSuppyType")]);
		info.nSupplyBuffID1 = FCString::Atoi(*supplything_list[TEXT("nSupplyBuffID1")]);
		info.nSupplyBuffID2 = FCString::Atoi(*supplything_list[TEXT("nSupplyBuffID2")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_supplything_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_supplything info;
	if(!Get_Frontend_txt_struct_supplything(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("EnemySkeletalMesh"), info.EnemySkeletalMesh);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("fBeDetected"), FString::FromInt(info.fBeDetected));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	out.Add(TEXT("fRadius"), FString::SanitizeFloat(info.fRadius));
	out.Add(TEXT("fSupplyRange"), FString::SanitizeFloat(info.fSupplyRange));
	out.Add(TEXT("nLifeTime"), FString::FromInt(info.nLifeTime));
	out.Add(TEXT("nSuppyType"), FString::FromInt(info.nSuppyType));
	out.Add(TEXT("nSupplyBuffID1"), FString::FromInt(info.nSupplyBuffID1));
	out.Add(TEXT("nSupplyBuffID2"), FString::FromInt(info.nSupplyBuffID2));
	return true;
}

bool Get_Frontend_txt_struct_survival_bufflist(int id, OUT Frontend_txt_struct_survival_bufflist& info)
{
	info.Type = 0;
	TMap<FString, FString> survival_bufflist_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("survival_bufflist"), id, survival_bufflist_list);
	if (survival_bufflist_list.Num() > 0)
	{
		info.Type = FCString::Atoi(*survival_bufflist_list[TEXT("Type")]);
		info.Name = survival_bufflist_list[TEXT("Name")];
		info.Desc = survival_bufflist_list[TEXT("Desc")];
		info.Percent = FCString::Atoi(*survival_bufflist_list[TEXT("Percent")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_survival_bufflist_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_survival_bufflist info;
	if(!Get_Frontend_txt_struct_survival_bufflist(id, info))
	{
		return false;
	}

	out.Add(TEXT("Type"), FString::FromInt(info.Type));
	out.Add(TEXT("Name"), info.Name);
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("Percent"), FString::FromInt(info.Percent));
	return true;
}

bool Get_Frontend_txt_struct_team_attack(int id, OUT Frontend_txt_struct_team_attack& info)
{
	info.nSoldierKind = 0;
	TMap<FString, FString> team_attack_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("team_attack"), id, team_attack_list);
	if (team_attack_list.Num() > 0)
	{
		info.nSoldierKind = FCString::Atoi(*team_attack_list[TEXT("nSoldierKind")]);
		info.nEnemyTeam_FootMan = FCString::Atoi(*team_attack_list[TEXT("nEnemyTeam_FootMan")]);
		info.nEnemyTeam_Archer = FCString::Atoi(*team_attack_list[TEXT("nEnemyTeam_Archer")]);
		info.nEnemyTeam_Cavalry = FCString::Atoi(*team_attack_list[TEXT("nEnemyTeam_Cavalry")]);
		info.nEnemyTeam_HorseArcher = FCString::Atoi(*team_attack_list[TEXT("nEnemyTeam_HorseArcher")]);
		info.nEnemyPlayer_Ride = FCString::Atoi(*team_attack_list[TEXT("nEnemyPlayer_Ride")]);
		info.nEnemyPlayer_Ground = FCString::Atoi(*team_attack_list[TEXT("nEnemyPlayer_Ground")]);
		info.fCalcValueParam = FCString::Atof(*team_attack_list[TEXT("fCalcValueParam")]);
		info.fFindTargetRange = FCString::Atof(*team_attack_list[TEXT("fFindTargetRange")]);
		info.fStopMoveDistance = FCString::Atof(*team_attack_list[TEXT("fStopMoveDistance")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_team_attack_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_team_attack info;
	if(!Get_Frontend_txt_struct_team_attack(id, info))
	{
		return false;
	}

	out.Add(TEXT("nSoldierKind"), FString::FromInt(info.nSoldierKind));
	out.Add(TEXT("nEnemyTeam_FootMan"), FString::FromInt(info.nEnemyTeam_FootMan));
	out.Add(TEXT("nEnemyTeam_Archer"), FString::FromInt(info.nEnemyTeam_Archer));
	out.Add(TEXT("nEnemyTeam_Cavalry"), FString::FromInt(info.nEnemyTeam_Cavalry));
	out.Add(TEXT("nEnemyTeam_HorseArcher"), FString::FromInt(info.nEnemyTeam_HorseArcher));
	out.Add(TEXT("nEnemyPlayer_Ride"), FString::FromInt(info.nEnemyPlayer_Ride));
	out.Add(TEXT("nEnemyPlayer_Ground"), FString::FromInt(info.nEnemyPlayer_Ground));
	out.Add(TEXT("fCalcValueParam"), FString::SanitizeFloat(info.fCalcValueParam));
	out.Add(TEXT("fFindTargetRange"), FString::SanitizeFloat(info.fFindTargetRange));
	out.Add(TEXT("fStopMoveDistance"), FString::SanitizeFloat(info.fStopMoveDistance));
	return true;
}

bool Get_Frontend_txt_struct_terrain_type(int id, OUT Frontend_txt_struct_terrain_type& info)
{
	info.terrain_type = 0;
	TMap<FString, FString> terrain_type_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("terrain_type"), id, terrain_type_list);
	if (terrain_type_list.Num() > 0)
	{
		info.terrain_type = FCString::Atoi(*terrain_type_list[TEXT("terrain_type")]);
		info.desc = terrain_type_list[TEXT("desc")];
		info.detect_range = FCString::Atoi(*terrain_type_list[TEXT("detect_range")]);
		info.bedetected_range = FCString::Atoi(*terrain_type_list[TEXT("bedetected_range")]);
		info.map = FCString::Atoi(*terrain_type_list[TEXT("map")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_terrain_type_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_terrain_type info;
	if(!Get_Frontend_txt_struct_terrain_type(id, info))
	{
		return false;
	}

	out.Add(TEXT("terrain_type"), FString::FromInt(info.terrain_type));
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("detect_range"), FString::FromInt(info.detect_range));
	out.Add(TEXT("bedetected_range"), FString::FromInt(info.bedetected_range));
	out.Add(TEXT("map"), FString::FromInt(info.map));
	return true;
}

bool Get_Frontend_txt_struct_aiplayeraction(int id, OUT Frontend_txt_struct_aiplayeraction& info)
{
	info.ActionType = 0;
	TMap<FString, FString> aiplayeraction_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aiplayeraction"), id, aiplayeraction_list);
	if (aiplayeraction_list.Num() > 0)
	{
		info.ActionType = FCString::Atoi(*aiplayeraction_list[TEXT("ActionType")]);
		info.Desc = aiplayeraction_list[TEXT("Desc")];
		info.nUpdateTimeSec = FCString::Atoi(*aiplayeraction_list[TEXT("nUpdateTimeSec")]);
		info.fAdditionDamping = FCString::Atof(*aiplayeraction_list[TEXT("fAdditionDamping")]);
		info.nValueBase_EnemyTeam = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_EnemyTeam")]);
		info.nValueBase_EnemyBoss = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_EnemyBoss")]);
		info.nValueBase_FortressMedical = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_FortressMedical")]);
		info.nValueBase_FortressSupply = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_FortressSupply")]);
		info.nValueBase_FortressTroop = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_FortressTroop")]);
		info.nValueBase_FortressResource = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_FortressResource")]);
		info.nValueBase_FinalHit = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_FinalHit")]);
		info.nValueBase_Rescue = FCString::Atoi(*aiplayeraction_list[TEXT("nValueBase_Rescue")]);
		info.nValueAddition_PlayerHitByPlayer = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_PlayerHitByPlayer")]);
		info.nValueAddition_PlayerHitByAI = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_PlayerHitByAI")]);
		info.nValueAddition_AIHitByPlayer = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_AIHitByPlayer")]);
		info.nValueAddition_AIHitByAI = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_AIHitByAI")]);
		info.nValueAddition_BossBeHit = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_BossBeHit")]);
		info.nValueAddition_FortressBeOccupy = FCString::Atoi(*aiplayeraction_list[TEXT("nValueAddition_FortressBeOccupy")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aiplayeraction_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aiplayeraction info;
	if(!Get_Frontend_txt_struct_aiplayeraction(id, info))
	{
		return false;
	}

	out.Add(TEXT("ActionType"), FString::FromInt(info.ActionType));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nUpdateTimeSec"), FString::FromInt(info.nUpdateTimeSec));
	out.Add(TEXT("fAdditionDamping"), FString::SanitizeFloat(info.fAdditionDamping));
	out.Add(TEXT("nValueBase_EnemyTeam"), FString::FromInt(info.nValueBase_EnemyTeam));
	out.Add(TEXT("nValueBase_EnemyBoss"), FString::FromInt(info.nValueBase_EnemyBoss));
	out.Add(TEXT("nValueBase_FortressMedical"), FString::FromInt(info.nValueBase_FortressMedical));
	out.Add(TEXT("nValueBase_FortressSupply"), FString::FromInt(info.nValueBase_FortressSupply));
	out.Add(TEXT("nValueBase_FortressTroop"), FString::FromInt(info.nValueBase_FortressTroop));
	out.Add(TEXT("nValueBase_FortressResource"), FString::FromInt(info.nValueBase_FortressResource));
	out.Add(TEXT("nValueBase_FinalHit"), FString::FromInt(info.nValueBase_FinalHit));
	out.Add(TEXT("nValueBase_Rescue"), FString::FromInt(info.nValueBase_Rescue));
	out.Add(TEXT("nValueAddition_PlayerHitByPlayer"), FString::FromInt(info.nValueAddition_PlayerHitByPlayer));
	out.Add(TEXT("nValueAddition_PlayerHitByAI"), FString::FromInt(info.nValueAddition_PlayerHitByAI));
	out.Add(TEXT("nValueAddition_AIHitByPlayer"), FString::FromInt(info.nValueAddition_AIHitByPlayer));
	out.Add(TEXT("nValueAddition_AIHitByAI"), FString::FromInt(info.nValueAddition_AIHitByAI));
	out.Add(TEXT("nValueAddition_BossBeHit"), FString::FromInt(info.nValueAddition_BossBeHit));
	out.Add(TEXT("nValueAddition_FortressBeOccupy"), FString::FromInt(info.nValueAddition_FortressBeOccupy));
	return true;
}

bool Get_Frontend_txt_struct_aisoldiericon(int id, OUT Frontend_txt_struct_aisoldiericon& info)
{
	info.idSkill = 0;
	TMap<FString, FString> aisoldiericon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("aisoldiericon"), id, aisoldiericon_list);
	if (aisoldiericon_list.Num() > 0)
	{
		info.idSkill = FCString::Atoi(*aisoldiericon_list[TEXT("idSkill")]);
		info.SkeletalMesh = aisoldiericon_list[TEXT("SkeletalMesh")];
		info.TLWH = aisoldiericon_list[TEXT("TLWH")];
		info.SoundPath = aisoldiericon_list[TEXT("SoundPath")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_aisoldiericon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_aisoldiericon info;
	if(!Get_Frontend_txt_struct_aisoldiericon(id, info))
	{
		return false;
	}

	out.Add(TEXT("idSkill"), FString::FromInt(info.idSkill));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("TLWH"), info.TLWH);
	out.Add(TEXT("SoundPath"), info.SoundPath);
	return true;
}

bool Get_Frontend_txt_struct_fashion(int id, OUT Frontend_txt_struct_fashion& info)
{
	info.ItemID = 0;
	TMap<FString, FString> fashion_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fashion"), id, fashion_list);
	if (fashion_list.Num() > 0)
	{
		info.ItemID = FCString::Atoi(*fashion_list[TEXT("ItemID")]);
		info.ItemName = fashion_list[TEXT("ItemName")];
		info.MaleHelmetSkeletalMesh = fashion_list[TEXT("MaleHelmetSkeletalMesh")];
		info.MaleShoulderSkeletalMesh = fashion_list[TEXT("MaleShoulderSkeletalMesh")];
		info.MaleUpBodySkeletalMesh = fashion_list[TEXT("MaleUpBodySkeletalMesh")];
		info.MaleDownBodySkeletalMesh = fashion_list[TEXT("MaleDownBodySkeletalMesh")];
		info.FemaleHelmetSkeletalMesh = fashion_list[TEXT("FemaleHelmetSkeletalMesh")];
		info.FemaleShoulderSkeletalMesh = fashion_list[TEXT("FemaleShoulderSkeletalMesh")];
		info.FemaleUpBodySkeletalMesh = fashion_list[TEXT("FemaleUpBodySkeletalMesh")];
		info.FemaleDownBodySkeletalMesh = fashion_list[TEXT("FemaleDownBodySkeletalMesh")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fashion_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fashion info;
	if(!Get_Frontend_txt_struct_fashion(id, info))
	{
		return false;
	}

	out.Add(TEXT("ItemID"), FString::FromInt(info.ItemID));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("MaleHelmetSkeletalMesh"), info.MaleHelmetSkeletalMesh);
	out.Add(TEXT("MaleShoulderSkeletalMesh"), info.MaleShoulderSkeletalMesh);
	out.Add(TEXT("MaleUpBodySkeletalMesh"), info.MaleUpBodySkeletalMesh);
	out.Add(TEXT("MaleDownBodySkeletalMesh"), info.MaleDownBodySkeletalMesh);
	out.Add(TEXT("FemaleHelmetSkeletalMesh"), info.FemaleHelmetSkeletalMesh);
	out.Add(TEXT("FemaleShoulderSkeletalMesh"), info.FemaleShoulderSkeletalMesh);
	out.Add(TEXT("FemaleUpBodySkeletalMesh"), info.FemaleUpBodySkeletalMesh);
	out.Add(TEXT("FemaleDownBodySkeletalMesh"), info.FemaleDownBodySkeletalMesh);
	return true;
}

bool Get_Frontend_txt_struct_flag(int id, OUT Frontend_txt_struct_flag& info)
{
	info.Id = 0;
	TMap<FString, FString> flag_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("flag"), id, flag_list);
	if (flag_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*flag_list[TEXT("Id")]);
		info.ItemName = flag_list[TEXT("ItemName")];
		info.ItemDescription = flag_list[TEXT("ItemDescription")];
		info.SkeletalMesh = flag_list[TEXT("SkeletalMesh")];
		info.SkeletalMesh1 = flag_list[TEXT("SkeletalMesh1")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fuiang_notify_voice(int id, OUT Frontend_txt_struct_fuiang_notify_voice& info)
{
	info.nFujiangId = 0;
	TMap<FString, FString> fuiang_notify_voice_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fuiang_notify_voice"), id, fuiang_notify_voice_list);
	if (fuiang_notify_voice_list.Num() > 0)
	{
		info.nFujiangId = FCString::Atoi(*fuiang_notify_voice_list[TEXT("nFujiangId")]);
		info.szFormation = fuiang_notify_voice_list[TEXT("szFormation")];
		info.szAtkShort = fuiang_notify_voice_list[TEXT("szAtkShort")];
		info.szDeath = fuiang_notify_voice_list[TEXT("szDeath")];
		info.szHurt = fuiang_notify_voice_list[TEXT("szHurt")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fuiang_notify_voice_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fuiang_notify_voice info;
	if(!Get_Frontend_txt_struct_fuiang_notify_voice(id, info))
	{
		return false;
	}

	out.Add(TEXT("nFujiangId"), FString::FromInt(info.nFujiangId));
	out.Add(TEXT("szFormation"), info.szFormation);
	out.Add(TEXT("szAtkShort"), info.szAtkShort);
	out.Add(TEXT("szDeath"), info.szDeath);
	out.Add(TEXT("szHurt"), info.szHurt);
	return true;
}

bool Get_Frontend_txt_struct_fujiangPersonalSkillVoice(int id, OUT Frontend_txt_struct_fujiangPersonalSkillVoice& info)
{
	info.nFujiangId = 0;
	TMap<FString, FString> fujiangPersonalSkillVoice_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("fujiangPersonalSkillVoice"), id, fujiangPersonalSkillVoice_list);
	if (fujiangPersonalSkillVoice_list.Num() > 0)
	{
		info.nFujiangId = FCString::Atoi(*fujiangPersonalSkillVoice_list[TEXT("nFujiangId")]);
		info.nSkillType = FCString::Atoi(*fujiangPersonalSkillVoice_list[TEXT("nSkillType")]);
		info.szVoisePath = fujiangPersonalSkillVoice_list[TEXT("szVoisePath")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fujiangPersonalSkillVoice_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_fujiangPersonalSkillVoice info;
	if(!Get_Frontend_txt_struct_fujiangPersonalSkillVoice(id, info))
	{
		return false;
	}

	out.Add(TEXT("nFujiangId"), FString::FromInt(info.nFujiangId));
	out.Add(TEXT("nSkillType"), FString::FromInt(info.nSkillType));
	out.Add(TEXT("szVoisePath"), info.szVoisePath);
	return true;
}

bool Get_Frontend_txt_struct_horse_fashion(int id, OUT Frontend_txt_struct_horse_fashion& info)
{
	info.ItemID = 0;
	TMap<FString, FString> horse_fashion_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("horse_fashion"), id, horse_fashion_list);
	if (horse_fashion_list.Num() > 0)
	{
		info.ItemID = FCString::Atoi(*horse_fashion_list[TEXT("ItemID")]);
		info.ItemName = horse_fashion_list[TEXT("ItemName")];
		info.HorseSkeletalMesh = horse_fashion_list[TEXT("HorseSkeletalMesh")];
		info.HorseArmorSkeletalMesh = horse_fashion_list[TEXT("HorseArmorSkeletalMesh")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horse_fashion_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_horse_fashion info;
	if(!Get_Frontend_txt_struct_horse_fashion(id, info))
	{
		return false;
	}

	out.Add(TEXT("ItemID"), FString::FromInt(info.ItemID));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("HorseSkeletalMesh"), info.HorseSkeletalMesh);
	out.Add(TEXT("HorseArmorSkeletalMesh"), info.HorseArmorSkeletalMesh);
	return true;
}

bool Get_Frontend_txt_struct_itemicon(int id, OUT Frontend_txt_struct_itemicon& info)
{
	info.Id = 0;
	TMap<FString, FString> itemicon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("itemicon"), id, itemicon_list);
	if (itemicon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*itemicon_list[TEXT("Id")]);
		info.Desc = itemicon_list[TEXT("Desc")];
		info.ItemTexPath = itemicon_list[TEXT("ItemTexPath")];
		info.TLWH = itemicon_list[TEXT("TLWH")];
		info.ItemTexUsePath = itemicon_list[TEXT("ItemTexUsePath")];
		info.ItemTexOtherUsePath = itemicon_list[TEXT("ItemTexOtherUsePath")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_itemicon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_itemicon info;
	if(!Get_Frontend_txt_struct_itemicon(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("ItemTexPath"), info.ItemTexPath);
	out.Add(TEXT("TLWH"), info.TLWH);
	out.Add(TEXT("ItemTexUsePath"), info.ItemTexUsePath);
	out.Add(TEXT("ItemTexOtherUsePath"), info.ItemTexOtherUsePath);
	return true;
}

bool Get_Frontend_txt_struct_restrain(int id, OUT Frontend_txt_struct_restrain& info)
{
	info.self_soldier_kind = 0;
	TMap<FString, FString> restrain_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("restrain"), id, restrain_list);
	if (restrain_list.Num() > 0)
	{
		info.self_soldier_kind = FCString::Atoi(*restrain_list[TEXT("self_soldier_kind")]);
		info.self_horse_state = FCString::Atoi(*restrain_list[TEXT("self_horse_state")]);
		info.enemy_dist_type = FCString::Atoi(*restrain_list[TEXT("enemy_dist_type")]);
		info.enemy_soldier_kind = FCString::Atoi(*restrain_list[TEXT("enemy_soldier_kind")]);
		info.enemy_horse_state = FCString::Atoi(*restrain_list[TEXT("enemy_horse_state")]);
		info.enemy_armor_type = FCString::Atoi(*restrain_list[TEXT("enemy_armor_type")]);
		info.restrain_class = FCString::Atoi(*restrain_list[TEXT("restrain_class")]);
		info.restrain_type1 = FCString::Atoi(*restrain_list[TEXT("restrain_type1")]);
		info.restrain_type2 = FCString::Atoi(*restrain_list[TEXT("restrain_type2")]);
		info.restrain_type3 = FCString::Atoi(*restrain_list[TEXT("restrain_type3")]);
		info.restrain_type4 = FCString::Atoi(*restrain_list[TEXT("restrain_type4")]);
		info.restrain_type5 = FCString::Atoi(*restrain_list[TEXT("restrain_type5")]);
		info.restrain_type6 = FCString::Atoi(*restrain_list[TEXT("restrain_type6")]);
		info.restrain_type7 = FCString::Atoi(*restrain_list[TEXT("restrain_type7")]);
		info.restrain_type8 = FCString::Atoi(*restrain_list[TEXT("restrain_type8")]);
		info.restrain_type9 = FCString::Atoi(*restrain_list[TEXT("restrain_type9")]);
		info.restrain_type10 = FCString::Atoi(*restrain_list[TEXT("restrain_type10")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_restrain_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_restrain info;
	if(!Get_Frontend_txt_struct_restrain(id, info))
	{
		return false;
	}

	out.Add(TEXT("self_soldier_kind"), FString::FromInt(info.self_soldier_kind));
	out.Add(TEXT("self_horse_state"), FString::FromInt(info.self_horse_state));
	out.Add(TEXT("enemy_dist_type"), FString::FromInt(info.enemy_dist_type));
	out.Add(TEXT("enemy_soldier_kind"), FString::FromInt(info.enemy_soldier_kind));
	out.Add(TEXT("enemy_horse_state"), FString::FromInt(info.enemy_horse_state));
	out.Add(TEXT("enemy_armor_type"), FString::FromInt(info.enemy_armor_type));
	out.Add(TEXT("restrain_class"), FString::FromInt(info.restrain_class));
	out.Add(TEXT("restrain_type1"), FString::FromInt(info.restrain_type1));
	out.Add(TEXT("restrain_type2"), FString::FromInt(info.restrain_type2));
	out.Add(TEXT("restrain_type3"), FString::FromInt(info.restrain_type3));
	out.Add(TEXT("restrain_type4"), FString::FromInt(info.restrain_type4));
	out.Add(TEXT("restrain_type5"), FString::FromInt(info.restrain_type5));
	out.Add(TEXT("restrain_type6"), FString::FromInt(info.restrain_type6));
	out.Add(TEXT("restrain_type7"), FString::FromInt(info.restrain_type7));
	out.Add(TEXT("restrain_type8"), FString::FromInt(info.restrain_type8));
	out.Add(TEXT("restrain_type9"), FString::FromInt(info.restrain_type9));
	out.Add(TEXT("restrain_type10"), FString::FromInt(info.restrain_type10));
	return true;
}

bool Get_Frontend_txt_struct_state_display(int id, OUT Frontend_txt_struct_state_display& info)
{
	info.Id = 0;
	TMap<FString, FString> state_display_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("state_display"), id, state_display_list);
	if (state_display_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*state_display_list[TEXT("Id")]);
		info.Desc = state_display_list[TEXT("Desc")];
		info.nIconX = FCString::Atoi(*state_display_list[TEXT("nIconX")]);
		info.nIconY = FCString::Atoi(*state_display_list[TEXT("nIconY")]);
		info.nbShowSelfPlayer = FCString::Atoi(*state_display_list[TEXT("nbShowSelfPlayer")]);
		info.nbShowSelfTroops = FCString::Atoi(*state_display_list[TEXT("nbShowSelfTroops")]);
		info.nbShowTeamPlayer = FCString::Atoi(*state_display_list[TEXT("nbShowTeamPlayer")]);
		info.nbShowTeamTroops = FCString::Atoi(*state_display_list[TEXT("nbShowTeamTroops")]);
		info.nbShowEnemyPlayer = FCString::Atoi(*state_display_list[TEXT("nbShowEnemyPlayer")]);
		info.nbShowEnemyTroops = FCString::Atoi(*state_display_list[TEXT("nbShowEnemyTroops")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_state_display_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_state_display info;
	if(!Get_Frontend_txt_struct_state_display(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("nIconX"), FString::FromInt(info.nIconX));
	out.Add(TEXT("nIconY"), FString::FromInt(info.nIconY));
	out.Add(TEXT("nbShowSelfPlayer"), FString::FromInt(info.nbShowSelfPlayer));
	out.Add(TEXT("nbShowSelfTroops"), FString::FromInt(info.nbShowSelfTroops));
	out.Add(TEXT("nbShowTeamPlayer"), FString::FromInt(info.nbShowTeamPlayer));
	out.Add(TEXT("nbShowTeamTroops"), FString::FromInt(info.nbShowTeamTroops));
	out.Add(TEXT("nbShowEnemyPlayer"), FString::FromInt(info.nbShowEnemyPlayer));
	out.Add(TEXT("nbShowEnemyTroops"), FString::FromInt(info.nbShowEnemyTroops));
	return true;
}

bool Get_Frontend_txt_struct_weaponicon(int id, OUT Frontend_txt_struct_weaponicon& info)
{
	info.Id = 0;
	TMap<FString, FString> weaponicon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("weaponicon"), id, weaponicon_list);
	if (weaponicon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*weaponicon_list[TEXT("Id")]);
		info.Desc = weaponicon_list[TEXT("Desc")];
		info.ItemTexPath = weaponicon_list[TEXT("ItemTexPath")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_weaponicon_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_weaponicon info;
	if(!Get_Frontend_txt_struct_weaponicon(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("ItemTexPath"), info.ItemTexPath);
	return true;
}

bool Get_Frontend_txt_struct_weapon_alert_range(int id, OUT Frontend_txt_struct_weapon_alert_range& info)
{
	info.WeaponKind = 0;
	TMap<FString, FString> weapon_alert_range_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("weapon_alert_range"), id, weapon_alert_range_list);
	if (weapon_alert_range_list.Num() > 0)
	{
		info.WeaponKind = FCString::Atoi(*weapon_alert_range_list[TEXT("WeaponKind")]);
		info.Desc = weapon_alert_range_list[TEXT("Desc")];
		info.Range_SelfGroundTargetGround = FCString::Atoi(*weapon_alert_range_list[TEXT("Range_SelfGroundTargetGround")]);
		info.Range_SelfGroundTargetRide = FCString::Atoi(*weapon_alert_range_list[TEXT("Range_SelfGroundTargetRide")]);
		info.Range_SelfRideTargetGround = FCString::Atoi(*weapon_alert_range_list[TEXT("Range_SelfRideTargetGround")]);
		info.Range_SelfRideTargetRide = FCString::Atoi(*weapon_alert_range_list[TEXT("Range_SelfRideTargetRide")]);
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_weapon_alert_range_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_weapon_alert_range info;
	if(!Get_Frontend_txt_struct_weapon_alert_range(id, info))
	{
		return false;
	}

	out.Add(TEXT("WeaponKind"), FString::FromInt(info.WeaponKind));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("Range_SelfGroundTargetGround"), FString::FromInt(info.Range_SelfGroundTargetGround));
	out.Add(TEXT("Range_SelfGroundTargetRide"), FString::FromInt(info.Range_SelfGroundTargetRide));
	out.Add(TEXT("Range_SelfRideTargetGround"), FString::FromInt(info.Range_SelfRideTargetGround));
	out.Add(TEXT("Range_SelfRideTargetRide"), FString::FromInt(info.Range_SelfRideTargetRide));
	return true;
}

bool Get_Frontend_txt_struct_language_armytype(int id, OUT Frontend_txt_struct_language_armytype& info)
{
	info.id = 0;
	TMap<FString, FString> language_armytype_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_armytype"), id, language_armytype_list);
	if (language_armytype_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_armytype_list[TEXT("id")]);
		info.name0 = language_armytype_list[TEXT("name0")];
		info.name1 = language_armytype_list[TEXT("name1")];
		info.name2 = language_armytype_list[TEXT("name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_armytype_ByLanguage(int id, OUT Frontend_txt_struct_armytype& info, int language)
{
	Frontend_txt_struct_language_armytype language_info;
	if(!Get_Frontend_txt_struct_language_armytype(id, language_info) || !Get_Frontend_txt_struct_armytype(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_armytype_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_armytype info;
	if(!Get_Frontend_txt_struct_armytype_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("price"), FString::FromInt(info.price));
	out.Add(TEXT("establish_price"), FString::FromInt(info.establish_price));
	out.Add(TEXT("helmet"), FString::FromInt(info.helmet));
	out.Add(TEXT("shawl"), FString::FromInt(info.shawl));
	out.Add(TEXT("armor"), FString::FromInt(info.armor));
	out.Add(TEXT("shoes"), FString::FromInt(info.shoes));
	out.Add(TEXT("horse"), FString::FromInt(info.horse));
	out.Add(TEXT("saddle"), FString::FromInt(info.saddle));
	out.Add(TEXT("weapon1"), FString::FromInt(info.weapon1));
	out.Add(TEXT("weapon2"), FString::FromInt(info.weapon2));
	out.Add(TEXT("weapon3"), FString::FromInt(info.weapon3));
	out.Add(TEXT("weapon4"), FString::FromInt(info.weapon4));
	out.Add(TEXT("skilltype1"), FString::FromInt(info.skilltype1));
	out.Add(TEXT("skilltype2"), FString::FromInt(info.skilltype2));
	out.Add(TEXT("skilltype3"), FString::FromInt(info.skilltype3));
	out.Add(TEXT("skilltype4"), FString::FromInt(info.skilltype4));
	out.Add(TEXT("skilltype5"), FString::FromInt(info.skilltype5));
	out.Add(TEXT("skilltype6"), FString::FromInt(info.skilltype6));
	out.Add(TEXT("skilltype7"), FString::FromInt(info.skilltype7));
	out.Add(TEXT("skilltype8"), FString::FromInt(info.skilltype8));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("exp_effect"), FString::SanitizeFloat(info.exp_effect));
	out.Add(TEXT("glod"), FString::SanitizeFloat(info.glod));
	out.Add(TEXT("recruit_limit"), FString::SanitizeFloat(info.recruit_limit));
	out.Add(TEXT("remove_price"), FString::FromInt(info.remove_price));
	out.Add(TEXT("recruitprice_adjust"), FString::FromInt(info.recruitprice_adjust));
	return true;
}

bool Get_Frontend_txt_struct_language_battle_conditions(int id, OUT Frontend_txt_struct_language_battle_conditions& info)
{
	info.ID = 0;
	TMap<FString, FString> language_battle_conditions_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_battle_conditions"), id, language_battle_conditions_list);
	if (language_battle_conditions_list.Num() > 0)
	{
		info.ID = FCString::Atoi(*language_battle_conditions_list[TEXT("ID")]);
		info.condition0 = language_battle_conditions_list[TEXT("condition0")];
		info.condition1 = language_battle_conditions_list[TEXT("condition1")];
		info.condition2 = language_battle_conditions_list[TEXT("condition2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_battle_conditions_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_battle_conditions info;
	if(!Get_Frontend_txt_struct_language_battle_conditions(id, info))
	{
		return false;
	}

	out.Add(TEXT("ID"), FString::FromInt(info.ID));
	out.Add(TEXT("condition0"), info.condition0);
	out.Add(TEXT("condition1"), info.condition1);
	out.Add(TEXT("condition2"), info.condition2);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_aisoldierskill(int id, OUT Frontend_txt_struct_language_fr_aisoldierskill& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_aisoldierskill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_aisoldierskill"), id, language_fr_aisoldierskill_list);
	if (language_fr_aisoldierskill_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_aisoldierskill_list[TEXT("id")]);
		info.name0 = language_fr_aisoldierskill_list[TEXT("name0")];
		info.Text0 = language_fr_aisoldierskill_list[TEXT("Text0")];
		info.name1 = language_fr_aisoldierskill_list[TEXT("name1")];
		info.Text1 = language_fr_aisoldierskill_list[TEXT("Text1")];
		info.name2 = language_fr_aisoldierskill_list[TEXT("name2")];
		info.Text2 = language_fr_aisoldierskill_list[TEXT("Text2")];
		info.Icontexture0 = language_fr_aisoldierskill_list[TEXT("Icontexture0")];
		info.Icontexture1 = language_fr_aisoldierskill_list[TEXT("Icontexture1")];
		info.Icontexture2 = language_fr_aisoldierskill_list[TEXT("Icontexture2")];
		info.NeedText0 = language_fr_aisoldierskill_list[TEXT("NeedText0")];
		info.NeedText1 = language_fr_aisoldierskill_list[TEXT("NeedText1")];
		info.NeedText2 = language_fr_aisoldierskill_list[TEXT("NeedText2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_aisoldierskill_ByLanguage(int id, OUT Frontend_txt_struct_fr_aisoldierskill& info, int language)
{
	Frontend_txt_struct_language_fr_aisoldierskill language_info;
	if(!Get_Frontend_txt_struct_language_fr_aisoldierskill(id, language_info) || !Get_Frontend_txt_struct_fr_aisoldierskill(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* Text_ptr[]=
	{
		&language_info.Text0,
		&language_info.Text1,
		&language_info.Text2,
	};
	info.Text = language < 3 ? *Text_ptr[language] : TEXT("");

	const FString* Icontexture_ptr[]=
	{
		&language_info.Icontexture0,
		&language_info.Icontexture1,
		&language_info.Icontexture2,
	};
	info.Icontexture = language < 3 ? *Icontexture_ptr[language] : TEXT("");

	const FString* NeedText_ptr[]=
	{
		&language_info.NeedText0,
		&language_info.NeedText1,
		&language_info.NeedText2,
	};
	info.NeedText = language < 3 ? *NeedText_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_aisoldierskill_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_aisoldierskill info;
	if(!Get_Frontend_txt_struct_fr_aisoldierskill_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("Text"), info.Text);
	out.Add(TEXT("Icontexture"), info.Icontexture);
	out.Add(TEXT("Needweapon1"), info.Needweapon1);
	out.Add(TEXT("Needweapon2"), info.Needweapon2);
	out.Add(TEXT("Needweapon3"), info.Needweapon3);
	out.Add(TEXT("NeedText"), info.NeedText);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_background(int id, OUT Frontend_txt_struct_language_fr_background& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_background_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_background"), id, language_fr_background_list);
	if (language_fr_background_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_background_list[TEXT("id")]);
		info.Name0 = language_fr_background_list[TEXT("Name0")];
		info.Name1 = language_fr_background_list[TEXT("Name1")];
		info.Name2 = language_fr_background_list[TEXT("Name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_background_ByLanguage(int id, OUT Frontend_txt_struct_fr_background& info, int language)
{
	Frontend_txt_struct_language_fr_background language_info;
	if(!Get_Frontend_txt_struct_language_fr_background(id, language_info) || !Get_Frontend_txt_struct_fr_background(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* Name_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.Name = language < 3 ? *Name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_background_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_background info;
	if(!Get_Frontend_txt_struct_fr_background_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("Name"), info.Name);
	out.Add(TEXT("pricetype"), FString::FromInt(info.pricetype));
	out.Add(TEXT("price"), FString::FromInt(info.price));
	out.Add(TEXT("TimeOut"), FString::FromInt(info.TimeOut));
	out.Add(TEXT("ImageMini"), info.ImageMini);
	out.Add(TEXT("ImageBackground"), info.ImageBackground);
	out.Add(TEXT("ImagePreview"), info.ImagePreview);
	out.Add(TEXT("EffectsID"), info.EffectsID);
	out.Add(TEXT("EffectsParam"), info.EffectsParam);
	out.Add(TEXT("BeginTime"), info.BeginTime);
	out.Add(TEXT("EndTime"), info.EndTime);
	out.Add(TEXT("ImageBackground_2"), info.ImageBackground_2);
	out.Add(TEXT("ImageObscure"), info.ImageObscure);
	out.Add(TEXT("ImageObscure_2"), info.ImageObscure_2);
	out.Add(TEXT("ImageMsgWin"), info.ImageMsgWin);
	out.Add(TEXT("ImageMsgWin_2"), info.ImageMsgWin_2);
	out.Add(TEXT("ImageNormal"), info.ImageNormal);
	out.Add(TEXT("ImageNormal_2"), info.ImageNormal_2);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_bsserver(int id, OUT Frontend_txt_struct_language_fr_bsserver& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_bsserver_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_bsserver"), id, language_fr_bsserver_list);
	if (language_fr_bsserver_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_bsserver_list[TEXT("id")]);
		info.name0 = language_fr_bsserver_list[TEXT("name0")];
		info.name1 = language_fr_bsserver_list[TEXT("name1")];
		info.name2 = language_fr_bsserver_list[TEXT("name2")];
		info.line_name0 = language_fr_bsserver_list[TEXT("line_name0")];
		info.line_name1 = language_fr_bsserver_list[TEXT("line_name1")];
		info.line_name2 = language_fr_bsserver_list[TEXT("line_name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_bsserver_ByLanguage(int id, OUT Frontend_txt_struct_fr_bsserver& info, int language)
{
	Frontend_txt_struct_language_fr_bsserver language_info;
	if(!Get_Frontend_txt_struct_language_fr_bsserver(id, language_info) || !Get_Frontend_txt_struct_fr_bsserver(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* line_name_ptr[]=
	{
		&language_info.line_name0,
		&language_info.line_name1,
		&language_info.line_name2,
	};
	info.line_name = language < 3 ? *line_name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_bsserver_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_bsserver info;
	if(!Get_Frontend_txt_struct_fr_bsserver_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("area_id"), FString::FromInt(info.area_id));
	out.Add(TEXT("net_line"), FString::FromInt(info.net_line));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("zone"), FString::FromInt(info.zone));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("line_name"), info.line_name);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_buffinfo(int id, OUT Frontend_txt_struct_language_fr_buffinfo& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_buffinfo_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_buffinfo"), id, language_fr_buffinfo_list);
	if (language_fr_buffinfo_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_buffinfo_list[TEXT("id")]);
		info.buffid = language_fr_buffinfo_list[TEXT("buffid")];
		info.Name0 = language_fr_buffinfo_list[TEXT("Name0")];
		info.Name1 = language_fr_buffinfo_list[TEXT("Name1")];
		info.Name2 = language_fr_buffinfo_list[TEXT("Name2")];
		info.explain0 = language_fr_buffinfo_list[TEXT("explain0")];
		info.explain1 = language_fr_buffinfo_list[TEXT("explain1")];
		info.explain2 = language_fr_buffinfo_list[TEXT("explain2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_buffinfo_ByLanguage(int id, OUT Frontend_txt_struct_fr_buffinfo& info, int language)
{
	Frontend_txt_struct_language_fr_buffinfo language_info;
	if(!Get_Frontend_txt_struct_language_fr_buffinfo(id, language_info) || !Get_Frontend_txt_struct_fr_buffinfo(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* Name_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.Name = language < 3 ? *Name_ptr[language] : TEXT("");

	const FString* explain_ptr[]=
	{
		&language_info.explain0,
		&language_info.explain1,
		&language_info.explain2,
	};
	info.explain = language < 3 ? *explain_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_buffinfo_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_buffinfo info;
	if(!Get_Frontend_txt_struct_fr_buffinfo_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("buffid"), info.buffid);
	out.Add(TEXT("Name"), info.Name);
	out.Add(TEXT("explain"), info.explain);
	out.Add(TEXT("moneymulti"), FString::FromInt(info.moneymulti));
	out.Add(TEXT("expmulti"), FString::FromInt(info.expmulti));
	out.Add(TEXT("armyexpmulti"), FString::FromInt(info.armyexpmulti));
	out.Add(TEXT("heroexpmulti"), FString::FromInt(info.heroexpmulti));
	out.Add(TEXT("genernalexpmulti"), FString::FromInt(info.genernalexpmulti));
	out.Add(TEXT("exploitmulti"), FString::FromInt(info.exploitmulti));
	return true;
}

bool Get_Frontend_txt_struct_language_fr_city(int id, OUT Frontend_txt_struct_language_fr_city& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_city_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_city"), id, language_fr_city_list);
	if (language_fr_city_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_city_list[TEXT("id")]);
		info.city_name0 = language_fr_city_list[TEXT("city_name0")];
		info.city_name1 = language_fr_city_list[TEXT("city_name1")];
		info.city_name2 = language_fr_city_list[TEXT("city_name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_city_ByLanguage(int id, OUT Frontend_txt_struct_fr_city& info, int language)
{
	Frontend_txt_struct_language_fr_city language_info;
	if(!Get_Frontend_txt_struct_language_fr_city(id, language_info) || !Get_Frontend_txt_struct_fr_city(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* city_name_ptr[]=
	{
		&language_info.city_name0,
		&language_info.city_name1,
		&language_info.city_name2,
	};
	info.city_name = language < 3 ? *city_name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_city_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_city info;
	if(!Get_Frontend_txt_struct_fr_city_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("city_name"), info.city_name);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_customroom_map(int id, OUT Frontend_txt_struct_language_fr_customroom_map& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_customroom_map_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_customroom_map"), id, language_fr_customroom_map_list);
	if (language_fr_customroom_map_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_customroom_map_list[TEXT("id")]);
		info.mapName0 = language_fr_customroom_map_list[TEXT("mapName0")];
		info.mapNorms0 = language_fr_customroom_map_list[TEXT("mapNorms0")];
		info.mapAddress0 = language_fr_customroom_map_list[TEXT("mapAddress0")];
		info.mapName1 = language_fr_customroom_map_list[TEXT("mapName1")];
		info.mapNorms1 = language_fr_customroom_map_list[TEXT("mapNorms1")];
		info.mapAddress1 = language_fr_customroom_map_list[TEXT("mapAddress1")];
		info.mapName2 = language_fr_customroom_map_list[TEXT("mapName2")];
		info.mapNorms2 = language_fr_customroom_map_list[TEXT("mapNorms2")];
		info.mapAddress2 = language_fr_customroom_map_list[TEXT("mapAddress2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_customroom_map_ByLanguage(int id, OUT Frontend_txt_struct_fr_customroom_map& info, int language)
{
	Frontend_txt_struct_language_fr_customroom_map language_info;
	if(!Get_Frontend_txt_struct_language_fr_customroom_map(id, language_info) || !Get_Frontend_txt_struct_fr_customroom_map(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* mapName_ptr[]=
	{
		&language_info.mapName0,
		&language_info.mapName1,
		&language_info.mapName2,
	};
	info.mapName = language < 3 ? *mapName_ptr[language] : TEXT("");

	const FString* mapNorms_ptr[]=
	{
		&language_info.mapNorms0,
		&language_info.mapNorms1,
		&language_info.mapNorms2,
	};
	info.mapNorms = language < 3 ? *mapNorms_ptr[language] : TEXT("");

	const FString* mapAddress_ptr[]=
	{
		&language_info.mapAddress0,
		&language_info.mapAddress1,
		&language_info.mapAddress2,
	};
	info.mapAddress = language < 3 ? *mapAddress_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_customroom_map_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_customroom_map info;
	if(!Get_Frontend_txt_struct_fr_customroom_map_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("mainmode"), FString::FromInt(info.mainmode));
	out.Add(TEXT("submode"), FString::FromInt(info.submode));
	out.Add(TEXT("mapId"), FString::FromInt(info.mapId));
	out.Add(TEXT("mapName"), info.mapName);
	out.Add(TEXT("mapNorms"), info.mapNorms);
	out.Add(TEXT("mapAddress"), info.mapAddress);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_customroom_mode(int id, OUT Frontend_txt_struct_language_fr_customroom_mode& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_customroom_mode_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_customroom_mode"), id, language_fr_customroom_mode_list);
	if (language_fr_customroom_mode_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_customroom_mode_list[TEXT("id")]);
		info.mainname0 = language_fr_customroom_mode_list[TEXT("mainname0")];
		info.subname0 = language_fr_customroom_mode_list[TEXT("subname0")];
		info.winDesc0 = language_fr_customroom_mode_list[TEXT("winDesc0")];
		info.winNum0 = language_fr_customroom_mode_list[TEXT("winNum0")];
		info.mainname1 = language_fr_customroom_mode_list[TEXT("mainname1")];
		info.subname1 = language_fr_customroom_mode_list[TEXT("subname1")];
		info.winDesc1 = language_fr_customroom_mode_list[TEXT("winDesc1")];
		info.winNum1 = language_fr_customroom_mode_list[TEXT("winNum1")];
		info.mainname2 = language_fr_customroom_mode_list[TEXT("mainname2")];
		info.subname2 = language_fr_customroom_mode_list[TEXT("subname2")];
		info.winDesc2 = language_fr_customroom_mode_list[TEXT("winDesc2")];
		info.winNum2 = language_fr_customroom_mode_list[TEXT("winNum2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_customroom_mode_ByLanguage(int id, OUT Frontend_txt_struct_fr_customroom_mode& info, int language)
{
	Frontend_txt_struct_language_fr_customroom_mode language_info;
	if(!Get_Frontend_txt_struct_language_fr_customroom_mode(id, language_info) || !Get_Frontend_txt_struct_fr_customroom_mode(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* mainname_ptr[]=
	{
		&language_info.mainname0,
		&language_info.mainname1,
		&language_info.mainname2,
	};
	info.mainname = language < 3 ? *mainname_ptr[language] : TEXT("");

	const FString* subname_ptr[]=
	{
		&language_info.subname0,
		&language_info.subname1,
		&language_info.subname2,
	};
	info.subname = language < 3 ? *subname_ptr[language] : TEXT("");

	const FString* winDesc_ptr[]=
	{
		&language_info.winDesc0,
		&language_info.winDesc1,
		&language_info.winDesc2,
	};
	info.winDesc = language < 3 ? *winDesc_ptr[language] : TEXT("");

	const FString* winNum_ptr[]=
	{
		&language_info.winNum0,
		&language_info.winNum1,
		&language_info.winNum2,
	};
	info.winNum = language < 3 ? *winNum_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_customroom_mode_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_customroom_mode info;
	if(!Get_Frontend_txt_struct_fr_customroom_mode_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("mainmode"), FString::FromInt(info.mainmode));
	out.Add(TEXT("mainname"), info.mainname);
	out.Add(TEXT("submode"), FString::FromInt(info.submode));
	out.Add(TEXT("subname"), info.subname);
	out.Add(TEXT("subdefault"), FString::FromInt(info.subdefault));
	out.Add(TEXT("mapdefault"), FString::FromInt(info.mapdefault));
	out.Add(TEXT("numdefault"), FString::FromInt(info.numdefault));
	out.Add(TEXT("minnum"), FString::FromInt(info.minnum));
	out.Add(TEXT("maxnum"), FString::FromInt(info.maxnum));
	out.Add(TEXT("halfenter"), FString::FromInt(info.halfenter));
	out.Add(TEXT("winDesc"), info.winDesc);
	out.Add(TEXT("winNum"), info.winNum);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_faceicon(int id, OUT Frontend_txt_struct_language_fr_faceicon& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_faceicon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_faceicon"), id, language_fr_faceicon_list);
	if (language_fr_faceicon_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_faceicon_list[TEXT("id")]);
		info.name0 = language_fr_faceicon_list[TEXT("name0")];
		info.name1 = language_fr_faceicon_list[TEXT("name1")];
		info.name2 = language_fr_faceicon_list[TEXT("name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faceicon_ByLanguage(int id, OUT Frontend_txt_struct_fr_faceicon& info, int language)
{
	Frontend_txt_struct_language_fr_faceicon language_info;
	if(!Get_Frontend_txt_struct_language_fr_faceicon(id, language_info) || !Get_Frontend_txt_struct_fr_faceicon(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_faceicon_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_faceicon info;
	if(!Get_Frontend_txt_struct_fr_faceicon_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_faction_award(int id, OUT Frontend_txt_struct_language_fr_faction_award& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_faction_award_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_faction_award"), id, language_fr_faction_award_list);
	if (language_fr_faction_award_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_faction_award_list[TEXT("id")]);
		info.desc0 = language_fr_faction_award_list[TEXT("desc0")];
		info.desc1 = language_fr_faction_award_list[TEXT("desc1")];
		info.desc2 = language_fr_faction_award_list[TEXT("desc2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_faction_award_ByLanguage(int id, OUT Frontend_txt_struct_fr_faction_award& info, int language)
{
	Frontend_txt_struct_language_fr_faction_award language_info;
	if(!Get_Frontend_txt_struct_language_fr_faction_award(id, language_info) || !Get_Frontend_txt_struct_fr_faction_award(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* desc_ptr[]=
	{
		&language_info.desc0,
		&language_info.desc1,
		&language_info.desc2,
	};
	info.desc = language < 3 ? *desc_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_faction_award_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_faction_award info;
	if(!Get_Frontend_txt_struct_fr_faction_award_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("award"), FString::SanitizeFloat(info.award));
	out.Add(TEXT("exp"), FString::FromInt(info.exp));
	out.Add(TEXT("feats"), FString::FromInt(info.feats));
	out.Add(TEXT("desc"), info.desc);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_formation(int id, OUT Frontend_txt_struct_language_fr_formation& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_formation_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_formation"), id, language_fr_formation_list);
	if (language_fr_formation_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_formation_list[TEXT("id")]);
		info.name0 = language_fr_formation_list[TEXT("name0")];
		info.Text0 = language_fr_formation_list[TEXT("Text0")];
		info.name1 = language_fr_formation_list[TEXT("name1")];
		info.Text1 = language_fr_formation_list[TEXT("Text1")];
		info.name2 = language_fr_formation_list[TEXT("name2")];
		info.Text2 = language_fr_formation_list[TEXT("Text2")];
		info.Icontexture0 = language_fr_formation_list[TEXT("Icontexture0")];
		info.Icontexture1 = language_fr_formation_list[TEXT("Icontexture1")];
		info.Icontexture2 = language_fr_formation_list[TEXT("Icontexture2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_formation_ByLanguage(int id, OUT Frontend_txt_struct_fr_formation& info, int language)
{
	Frontend_txt_struct_language_fr_formation language_info;
	if(!Get_Frontend_txt_struct_language_fr_formation(id, language_info) || !Get_Frontend_txt_struct_fr_formation(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* Text_ptr[]=
	{
		&language_info.Text0,
		&language_info.Text1,
		&language_info.Text2,
	};
	info.Text = language < 3 ? *Text_ptr[language] : TEXT("");

	const FString* Icontexture_ptr[]=
	{
		&language_info.Icontexture0,
		&language_info.Icontexture1,
		&language_info.Icontexture2,
	};
	info.Icontexture = language < 3 ? *Icontexture_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_formation_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_formation info;
	if(!Get_Frontend_txt_struct_fr_formation_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("Text"), info.Text);
	out.Add(TEXT("Icontexture"), info.Icontexture);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_fujiang_skill(int id, OUT Frontend_txt_struct_language_fr_fujiang_skill& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_fujiang_skill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_fujiang_skill"), id, language_fr_fujiang_skill_list);
	if (language_fr_fujiang_skill_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_fujiang_skill_list[TEXT("id")]);
		info.name0 = language_fr_fujiang_skill_list[TEXT("name0")];
		info.Text0 = language_fr_fujiang_skill_list[TEXT("Text0")];
		info.Icontexture0 = language_fr_fujiang_skill_list[TEXT("Icontexture0")];
		info.name1 = language_fr_fujiang_skill_list[TEXT("name1")];
		info.Text1 = language_fr_fujiang_skill_list[TEXT("Text1")];
		info.Icontexture1 = language_fr_fujiang_skill_list[TEXT("Icontexture1")];
		info.name2 = language_fr_fujiang_skill_list[TEXT("name2")];
		info.Text2 = language_fr_fujiang_skill_list[TEXT("Text2")];
		info.Icontexture2 = language_fr_fujiang_skill_list[TEXT("Icontexture2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_fujiang_skill_ByLanguage(int id, OUT Frontend_txt_struct_fr_fujiang_skill& info, int language)
{
	Frontend_txt_struct_language_fr_fujiang_skill language_info;
	if(!Get_Frontend_txt_struct_language_fr_fujiang_skill(id, language_info) || !Get_Frontend_txt_struct_fr_fujiang_skill(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* Text_ptr[]=
	{
		&language_info.Text0,
		&language_info.Text1,
		&language_info.Text2,
	};
	info.Text = language < 3 ? *Text_ptr[language] : TEXT("");

	const FString* Icontexture_ptr[]=
	{
		&language_info.Icontexture0,
		&language_info.Icontexture1,
		&language_info.Icontexture2,
	};
	info.Icontexture = language < 3 ? *Icontexture_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_fujiang_skill_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_fujiang_skill info;
	if(!Get_Frontend_txt_struct_fr_fujiang_skill_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("Text"), info.Text);
	out.Add(TEXT("Icontexture"), info.Icontexture);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_fujiang_skillBuff(int id, OUT Frontend_txt_struct_language_fr_fujiang_skillBuff& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_fujiang_skillBuff_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_fujiang_skillBuff"), id, language_fr_fujiang_skillBuff_list);
	if (language_fr_fujiang_skillBuff_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_fujiang_skillBuff_list[TEXT("id")]);
		info.name0 = language_fr_fujiang_skillBuff_list[TEXT("name0")];
		info.Text0 = language_fr_fujiang_skillBuff_list[TEXT("Text0")];
		info.name1 = language_fr_fujiang_skillBuff_list[TEXT("name1")];
		info.Text1 = language_fr_fujiang_skillBuff_list[TEXT("Text1")];
		info.name2 = language_fr_fujiang_skillBuff_list[TEXT("name2")];
		info.Text2 = language_fr_fujiang_skillBuff_list[TEXT("Text2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_fujiang_skillBuff_ByLanguage(int id, OUT Frontend_txt_struct_fr_fujiang_skillBuff& info, int language)
{
	Frontend_txt_struct_language_fr_fujiang_skillBuff language_info;
	if(!Get_Frontend_txt_struct_language_fr_fujiang_skillBuff(id, language_info) || !Get_Frontend_txt_struct_fr_fujiang_skillBuff(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* Text_ptr[]=
	{
		&language_info.Text0,
		&language_info.Text1,
		&language_info.Text2,
	};
	info.Text = language < 3 ? *Text_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_fujiang_skillBuff_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_fujiang_skillBuff info;
	if(!Get_Frontend_txt_struct_fr_fujiang_skillBuff_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("Text"), info.Text);
	out.Add(TEXT("Icontexture"), info.Icontexture);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_helptip(int id, OUT Frontend_txt_struct_language_fr_helptip& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_helptip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_helptip"), id, language_fr_helptip_list);
	if (language_fr_helptip_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_helptip_list[TEXT("id")]);
		info.Description0 = language_fr_helptip_list[TEXT("Description0")];
		info.Description1 = language_fr_helptip_list[TEXT("Description1")];
		info.Description2 = language_fr_helptip_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_helptip_ByLanguage(int id, OUT Frontend_txt_struct_fr_helptip& info, int language)
{
	Frontend_txt_struct_language_fr_helptip language_info;
	if(!Get_Frontend_txt_struct_language_fr_helptip(id, language_info) || !Get_Frontend_txt_struct_fr_helptip(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* Description_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.Description = language < 3 ? *Description_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_helptip_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_helptip info;
	if(!Get_Frontend_txt_struct_fr_helptip_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("typeinfo"), info.typeinfo);
	out.Add(TEXT("Description"), info.Description);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_hightmorale_level_rate(int id, OUT Frontend_txt_struct_language_fr_hightmorale_level_rate& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_hightmorale_level_rate_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_hightmorale_level_rate"), id, language_fr_hightmorale_level_rate_list);
	if (language_fr_hightmorale_level_rate_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_hightmorale_level_rate_list[TEXT("id")]);
		info.name0 = language_fr_hightmorale_level_rate_list[TEXT("name0")];
		info.Text0 = language_fr_hightmorale_level_rate_list[TEXT("Text0")];
		info.Icontexture0 = language_fr_hightmorale_level_rate_list[TEXT("Icontexture0")];
		info.name1 = language_fr_hightmorale_level_rate_list[TEXT("name1")];
		info.Text1 = language_fr_hightmorale_level_rate_list[TEXT("Text1")];
		info.Icontexture1 = language_fr_hightmorale_level_rate_list[TEXT("Icontexture1")];
		info.name2 = language_fr_hightmorale_level_rate_list[TEXT("name2")];
		info.Text2 = language_fr_hightmorale_level_rate_list[TEXT("Text2")];
		info.Icontexture2 = language_fr_hightmorale_level_rate_list[TEXT("Icontexture2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_hightmorale_level_rate_ByLanguage(int id, OUT Frontend_txt_struct_fr_hightmorale_level_rate& info, int language)
{
	Frontend_txt_struct_language_fr_hightmorale_level_rate language_info;
	if(!Get_Frontend_txt_struct_language_fr_hightmorale_level_rate(id, language_info) || !Get_Frontend_txt_struct_fr_hightmorale_level_rate(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* Text_ptr[]=
	{
		&language_info.Text0,
		&language_info.Text1,
		&language_info.Text2,
	};
	info.Text = language < 3 ? *Text_ptr[language] : TEXT("");

	const FString* Icontexture_ptr[]=
	{
		&language_info.Icontexture0,
		&language_info.Icontexture1,
		&language_info.Icontexture2,
	};
	info.Icontexture = language < 3 ? *Icontexture_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_hightmorale_level_rate_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_hightmorale_level_rate info;
	if(!Get_Frontend_txt_struct_fr_hightmorale_level_rate_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("Text"), info.Text);
	out.Add(TEXT("Icontexture"), info.Icontexture);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_honor(int id, OUT Frontend_txt_struct_language_fr_honor& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_honor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_honor"), id, language_fr_honor_list);
	if (language_fr_honor_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_honor_list[TEXT("id")]);
		info.name0 = language_fr_honor_list[TEXT("name0")];
		info.describe0 = language_fr_honor_list[TEXT("describe0")];
		info.icon0 = language_fr_honor_list[TEXT("icon0")];
		info.name1 = language_fr_honor_list[TEXT("name1")];
		info.describe1 = language_fr_honor_list[TEXT("describe1")];
		info.icon1 = language_fr_honor_list[TEXT("icon1")];
		info.name2 = language_fr_honor_list[TEXT("name2")];
		info.describe2 = language_fr_honor_list[TEXT("describe2")];
		info.icon2 = language_fr_honor_list[TEXT("icon2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_honor_ByLanguage(int id, OUT Frontend_txt_struct_fr_honor& info, int language)
{
	Frontend_txt_struct_language_fr_honor language_info;
	if(!Get_Frontend_txt_struct_language_fr_honor(id, language_info) || !Get_Frontend_txt_struct_fr_honor(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* describe_ptr[]=
	{
		&language_info.describe0,
		&language_info.describe1,
		&language_info.describe2,
	};
	info.describe = language < 3 ? *describe_ptr[language] : TEXT("");

	const FString* icon_ptr[]=
	{
		&language_info.icon0,
		&language_info.icon1,
		&language_info.icon2,
	};
	info.icon = language < 3 ? *icon_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_honor_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_honor info;
	if(!Get_Frontend_txt_struct_fr_honor_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("describe"), info.describe);
	out.Add(TEXT("icon"), info.icon);
	out.Add(TEXT("need_honor"), FString::FromInt(info.need_honor));
	out.Add(TEXT("money"), FString::FromInt(info.money));
	out.Add(TEXT("emoney"), FString::FromInt(info.emoney));
	out.Add(TEXT("generalexp"), FString::FromInt(info.generalexp));
	out.Add(TEXT("exploit"), FString::FromInt(info.exploit));
	out.Add(TEXT("itemid"), FString::FromInt(info.itemid));
	out.Add(TEXT("itemnum"), FString::FromInt(info.itemnum));
	return true;
}

bool Get_Frontend_txt_struct_language_fr_medal(int id, OUT Frontend_txt_struct_language_fr_medal& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_medal_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_medal"), id, language_fr_medal_list);
	if (language_fr_medal_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_medal_list[TEXT("id")]);
		info.type_name0 = language_fr_medal_list[TEXT("type_name0")];
		info.name0 = language_fr_medal_list[TEXT("name0")];
		info.describe0 = language_fr_medal_list[TEXT("describe0")];
		info.case_desc_1_0 = language_fr_medal_list[TEXT("case_desc_1_0")];
		info.case_desc_2_0 = language_fr_medal_list[TEXT("case_desc_2_0")];
		info.case_desc_3_0 = language_fr_medal_list[TEXT("case_desc_3_0")];
		info.case_desc_4_0 = language_fr_medal_list[TEXT("case_desc_4_0")];
		info.case_desc_5_0 = language_fr_medal_list[TEXT("case_desc_5_0")];
		info.award_describe0 = language_fr_medal_list[TEXT("award_describe0")];
		info.type_name1 = language_fr_medal_list[TEXT("type_name1")];
		info.name1 = language_fr_medal_list[TEXT("name1")];
		info.describe1 = language_fr_medal_list[TEXT("describe1")];
		info.case_desc_1_1 = language_fr_medal_list[TEXT("case_desc_1_1")];
		info.case_desc_2_1 = language_fr_medal_list[TEXT("case_desc_2_1")];
		info.case_desc_3_1 = language_fr_medal_list[TEXT("case_desc_3_1")];
		info.case_desc_4_1 = language_fr_medal_list[TEXT("case_desc_4_1")];
		info.case_desc_5_1 = language_fr_medal_list[TEXT("case_desc_5_1")];
		info.award_describe1 = language_fr_medal_list[TEXT("award_describe1")];
		info.type_name2 = language_fr_medal_list[TEXT("type_name2")];
		info.name2 = language_fr_medal_list[TEXT("name2")];
		info.describe2 = language_fr_medal_list[TEXT("describe2")];
		info.case_desc_1_2 = language_fr_medal_list[TEXT("case_desc_1_2")];
		info.case_desc_2_2 = language_fr_medal_list[TEXT("case_desc_2_2")];
		info.case_desc_3_2 = language_fr_medal_list[TEXT("case_desc_3_2")];
		info.case_desc_4_2 = language_fr_medal_list[TEXT("case_desc_4_2")];
		info.case_desc_5_2 = language_fr_medal_list[TEXT("case_desc_5_2")];
		info.award_describe2 = language_fr_medal_list[TEXT("award_describe2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_medal_ByLanguage(int id, OUT Frontend_txt_struct_fr_medal& info, int language)
{
	Frontend_txt_struct_language_fr_medal language_info;
	if(!Get_Frontend_txt_struct_language_fr_medal(id, language_info) || !Get_Frontend_txt_struct_fr_medal(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* type_name_ptr[]=
	{
		&language_info.type_name0,
		&language_info.type_name1,
		&language_info.type_name2,
	};
	info.type_name = language < 3 ? *type_name_ptr[language] : TEXT("");

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* describe_ptr[]=
	{
		&language_info.describe0,
		&language_info.describe1,
		&language_info.describe2,
	};
	info.describe = language < 3 ? *describe_ptr[language] : TEXT("");

	const FString* case_desc_1_ptr[]=
	{
		&language_info.case_desc_1_0,
		&language_info.case_desc_1_1,
		&language_info.case_desc_1_2,
	};
	info.case_desc_1 = language < 3 ? *case_desc_1_ptr[language] : TEXT("");

	const FString* case_desc_2_ptr[]=
	{
		&language_info.case_desc_2_0,
		&language_info.case_desc_2_1,
		&language_info.case_desc_2_2,
	};
	info.case_desc_2 = language < 3 ? *case_desc_2_ptr[language] : TEXT("");

	const FString* case_desc_3_ptr[]=
	{
		&language_info.case_desc_3_0,
		&language_info.case_desc_3_1,
		&language_info.case_desc_3_2,
	};
	info.case_desc_3 = language < 3 ? *case_desc_3_ptr[language] : TEXT("");

	const FString* case_desc_4_ptr[]=
	{
		&language_info.case_desc_4_0,
		&language_info.case_desc_4_1,
		&language_info.case_desc_4_2,
	};
	info.case_desc_4 = language < 3 ? *case_desc_4_ptr[language] : TEXT("");

	const FString* case_desc_5_ptr[]=
	{
		&language_info.case_desc_5_0,
		&language_info.case_desc_5_1,
		&language_info.case_desc_5_2,
	};
	info.case_desc_5 = language < 3 ? *case_desc_5_ptr[language] : TEXT("");

	const FString* award_describe_ptr[]=
	{
		&language_info.award_describe0,
		&language_info.award_describe1,
		&language_info.award_describe2,
	};
	info.award_describe = language < 3 ? *award_describe_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_medal_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_medal info;
	if(!Get_Frontend_txt_struct_fr_medal_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("type_name"), info.type_name);
	out.Add(TEXT("qua_name"), FString::FromInt(info.qua_name));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("describe"), info.describe);
	out.Add(TEXT("visible"), FString::FromInt(info.visible));
	out.Add(TEXT("visible_progress"), FString::FromInt(info.visible_progress));
	out.Add(TEXT("key"), FString::FromInt(info.key));
	out.Add(TEXT("value_1"), FString::FromInt(info.value_1));
	out.Add(TEXT("value_2"), FString::FromInt(info.value_2));
	out.Add(TEXT("value_3"), FString::FromInt(info.value_3));
	out.Add(TEXT("value_4"), FString::FromInt(info.value_4));
	out.Add(TEXT("value_5"), FString::FromInt(info.value_5));
	out.Add(TEXT("case_desc_1"), info.case_desc_1);
	out.Add(TEXT("case_desc_2"), info.case_desc_2);
	out.Add(TEXT("case_desc_3"), info.case_desc_3);
	out.Add(TEXT("case_desc_4"), info.case_desc_4);
	out.Add(TEXT("case_desc_5"), info.case_desc_5);
	out.Add(TEXT("award_describe"), info.award_describe);
	out.Add(TEXT("award_key_1"), info.award_key_1);
	out.Add(TEXT("award_value_1"), FString::FromInt(info.award_value_1));
	out.Add(TEXT("award_key_2"), info.award_key_2);
	out.Add(TEXT("award_value_2"), info.award_value_2);
	out.Add(TEXT("award_key_3"), info.award_key_3);
	out.Add(TEXT("award_value_3"), info.award_value_3);
	out.Add(TEXT("award_key_4"), info.award_key_4);
	out.Add(TEXT("award_value_4"), info.award_value_4);
	out.Add(TEXT("award_key_5"), info.award_key_5);
	out.Add(TEXT("award_value_5"), info.award_value_5);
	out.Add(TEXT("award_key_6"), info.award_key_6);
	out.Add(TEXT("award_value_6"), info.award_value_6);
	out.Add(TEXT("award_key_7"), info.award_key_7);
	out.Add(TEXT("award_value_7"), info.award_value_7);
	out.Add(TEXT("icon"), info.icon);
	out.Add(TEXT("is_get_again"), FString::FromInt(info.is_get_again));
	out.Add(TEXT("medal_id"), FString::FromInt(info.medal_id));
	return true;
}

bool Get_Frontend_txt_struct_language_fr_medal_condition(int id, OUT Frontend_txt_struct_language_fr_medal_condition& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_medal_condition_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_medal_condition"), id, language_fr_medal_condition_list);
	if (language_fr_medal_condition_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_medal_condition_list[TEXT("id")]);
		info.condition0 = language_fr_medal_condition_list[TEXT("condition0")];
		info.condition_dis0 = language_fr_medal_condition_list[TEXT("condition_dis0")];
		info.condition1 = language_fr_medal_condition_list[TEXT("condition1")];
		info.condition_dis1 = language_fr_medal_condition_list[TEXT("condition_dis1")];
		info.condition2 = language_fr_medal_condition_list[TEXT("condition2")];
		info.condition_dis2 = language_fr_medal_condition_list[TEXT("condition_dis2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_medal_condition_ByLanguage(int id, OUT Frontend_txt_struct_fr_medal_condition& info, int language)
{
	Frontend_txt_struct_language_fr_medal_condition language_info;
	if(!Get_Frontend_txt_struct_language_fr_medal_condition(id, language_info) || !Get_Frontend_txt_struct_fr_medal_condition(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	return true;
}

bool Get_Frontend_txt_struct_fr_medal_condition_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_medal_condition info;
	if(!Get_Frontend_txt_struct_fr_medal_condition_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("medal_id_1"), FString::FromInt(info.medal_id_1));
	out.Add(TEXT("medal_id_2"), FString::FromInt(info.medal_id_2));
	out.Add(TEXT("medal_id_3"), FString::FromInt(info.medal_id_3));
	out.Add(TEXT("medal_id_4"), FString::FromInt(info.medal_id_4));
	out.Add(TEXT("medal_id_5"), FString::FromInt(info.medal_id_5));
	out.Add(TEXT("medal_id_6"), FString::FromInt(info.medal_id_6));
	out.Add(TEXT("medal_id_7"), FString::FromInt(info.medal_id_7));
	return true;
}

bool Get_Frontend_txt_struct_language_fr_resolution(int id, OUT Frontend_txt_struct_language_fr_resolution& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_resolution_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_resolution"), id, language_fr_resolution_list);
	if (language_fr_resolution_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_resolution_list[TEXT("id")]);
		info.Description0 = language_fr_resolution_list[TEXT("Description0")];
		info.Description1 = language_fr_resolution_list[TEXT("Description1")];
		info.Description2 = language_fr_resolution_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_resolution_ByLanguage(int id, OUT Frontend_txt_struct_fr_resolution& info, int language)
{
	Frontend_txt_struct_language_fr_resolution language_info;
	if(!Get_Frontend_txt_struct_language_fr_resolution(id, language_info) || !Get_Frontend_txt_struct_fr_resolution(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* Description_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.Description = language < 3 ? *Description_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_resolution_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_resolution info;
	if(!Get_Frontend_txt_struct_fr_resolution_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("length"), FString::FromInt(info.length));
	out.Add(TEXT("width"), FString::FromInt(info.width));
	out.Add(TEXT("Description"), info.Description);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_sound(int id, OUT Frontend_txt_struct_language_fr_sound& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_sound_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_sound"), id, language_fr_sound_list);
	if (language_fr_sound_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_sound_list[TEXT("id")]);
		info.description0 = language_fr_sound_list[TEXT("description0")];
		info.path0 = language_fr_sound_list[TEXT("path0")];
		info.description1 = language_fr_sound_list[TEXT("description1")];
		info.path1 = language_fr_sound_list[TEXT("path1")];
		info.description2 = language_fr_sound_list[TEXT("description2")];
		info.path2 = language_fr_sound_list[TEXT("path2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_sound_ByLanguage(int id, OUT Frontend_txt_struct_fr_sound& info, int language)
{
	Frontend_txt_struct_language_fr_sound language_info;
	if(!Get_Frontend_txt_struct_language_fr_sound(id, language_info) || !Get_Frontend_txt_struct_fr_sound(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* description_ptr[]=
	{
		&language_info.description0,
		&language_info.description1,
		&language_info.description2,
	};
	info.description = language < 3 ? *description_ptr[language] : TEXT("");

	const FString* path_ptr[]=
	{
		&language_info.path0,
		&language_info.path1,
		&language_info.path2,
	};
	info.path = language < 3 ? *path_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_sound_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_sound info;
	if(!Get_Frontend_txt_struct_fr_sound_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("description"), info.description);
	out.Add(TEXT("path"), info.path);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_task(int id, OUT Frontend_txt_struct_language_fr_task& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_task_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_task"), id, language_fr_task_list);
	if (language_fr_task_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_task_list[TEXT("id")]);
		info.title0 = language_fr_task_list[TEXT("title0")];
		info.desc0 = language_fr_task_list[TEXT("desc0")];
		info.act1_desc0 = language_fr_task_list[TEXT("act1_desc0")];
		info.act2_desc0 = language_fr_task_list[TEXT("act2_desc0")];
		info.act3_desc0 = language_fr_task_list[TEXT("act3_desc0")];
		info.lead_action0 = language_fr_task_list[TEXT("lead_action0")];
		info.title1 = language_fr_task_list[TEXT("title1")];
		info.desc1 = language_fr_task_list[TEXT("desc1")];
		info.act1_desc1 = language_fr_task_list[TEXT("act1_desc1")];
		info.act2_desc1 = language_fr_task_list[TEXT("act2_desc1")];
		info.act3_desc1 = language_fr_task_list[TEXT("act3_desc1")];
		info.lead_action1 = language_fr_task_list[TEXT("lead_action1")];
		info.title2 = language_fr_task_list[TEXT("title2")];
		info.desc2 = language_fr_task_list[TEXT("desc2")];
		info.act1_desc2 = language_fr_task_list[TEXT("act1_desc2")];
		info.act2_desc2 = language_fr_task_list[TEXT("act2_desc2")];
		info.act3_desc2 = language_fr_task_list[TEXT("act3_desc2")];
		info.lead_action2 = language_fr_task_list[TEXT("lead_action2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_task_ByLanguage(int id, OUT Frontend_txt_struct_fr_task& info, int language)
{
	Frontend_txt_struct_language_fr_task language_info;
	if(!Get_Frontend_txt_struct_language_fr_task(id, language_info) || !Get_Frontend_txt_struct_fr_task(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* title_ptr[]=
	{
		&language_info.title0,
		&language_info.title1,
		&language_info.title2,
	};
	info.title = language < 3 ? *title_ptr[language] : TEXT("");

	const FString* desc_ptr[]=
	{
		&language_info.desc0,
		&language_info.desc1,
		&language_info.desc2,
	};
	info.desc = language < 3 ? *desc_ptr[language] : TEXT("");

	const FString* act1_desc_ptr[]=
	{
		&language_info.act1_desc0,
		&language_info.act1_desc1,
		&language_info.act1_desc2,
	};
	info.act1_desc = language < 3 ? *act1_desc_ptr[language] : TEXT("");

	const FString* lead_action_ptr[]=
	{
		&language_info.lead_action0,
		&language_info.lead_action1,
		&language_info.lead_action2,
	};
	info.lead_action = language < 3 ? *lead_action_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_task_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_task info;
	if(!Get_Frontend_txt_struct_fr_task_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("quality"), FString::FromInt(info.quality));
	out.Add(TEXT("pre_task"), FString::FromInt(info.pre_task));
	out.Add(TEXT("title"), info.title);
	out.Add(TEXT("desc"), info.desc);
	out.Add(TEXT("date_begin"), FString::FromInt(info.date_begin));
	out.Add(TEXT("date_end"), FString::FromInt(info.date_end));
	out.Add(TEXT("txtcheck"), info.txtcheck);
	out.Add(TEXT("act1_desc"), info.act1_desc);
	out.Add(TEXT("act1_sche_achi"), FString::FromInt(info.act1_sche_achi));
	out.Add(TEXT("act2_desc"), FString::FromInt(info.act2_desc));
	out.Add(TEXT("act2_sche_achi"), FString::FromInt(info.act2_sche_achi));
	out.Add(TEXT("act3_desc"), FString::FromInt(info.act3_desc));
	out.Add(TEXT("act3_sche_achi"), FString::FromInt(info.act3_sche_achi));
	out.Add(TEXT("lead_action"), info.lead_action);
	out.Add(TEXT("award_item1"), FString::FromInt(info.award_item1));
	out.Add(TEXT("award_item1_num"), FString::FromInt(info.award_item1_num));
	out.Add(TEXT("award_item1_timeout"), FString::FromInt(info.award_item1_timeout));
	out.Add(TEXT("award_item2"), FString::FromInt(info.award_item2));
	out.Add(TEXT("award_item2_num"), FString::FromInt(info.award_item2_num));
	out.Add(TEXT("award_item2_timeout"), FString::FromInt(info.award_item2_timeout));
	out.Add(TEXT("award_item3"), FString::FromInt(info.award_item3));
	out.Add(TEXT("award_item3_num"), FString::FromInt(info.award_item3_num));
	out.Add(TEXT("award_item3_timeout"), FString::FromInt(info.award_item3_timeout));
	out.Add(TEXT("award_item4"), FString::FromInt(info.award_item4));
	out.Add(TEXT("award_item4_num"), FString::FromInt(info.award_item4_num));
	out.Add(TEXT("award_item4_timeout"), FString::FromInt(info.award_item4_timeout));
	out.Add(TEXT("award_money"), FString::FromInt(info.award_money));
	out.Add(TEXT("award_generalexp"), FString::FromInt(info.award_generalexp));
	out.Add(TEXT("award_exploit"), FString::FromInt(info.award_exploit));
	out.Add(TEXT("award_exp"), FString::FromInt(info.award_exp));
	out.Add(TEXT("award_gold"), FString::FromInt(info.award_gold));
	return true;
}

bool Get_Frontend_txt_struct_language_fr_techmaterial(int id, OUT Frontend_txt_struct_language_fr_techmaterial& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_techmaterial_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_techmaterial"), id, language_fr_techmaterial_list);
	if (language_fr_techmaterial_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_techmaterial_list[TEXT("id")]);
		info.name0 = language_fr_techmaterial_list[TEXT("name0")];
		info.soldier_name0 = language_fr_techmaterial_list[TEXT("soldier_name0")];
		info.effect0 = language_fr_techmaterial_list[TEXT("effect0")];
		info.desc0 = language_fr_techmaterial_list[TEXT("desc0")];
		info.name1 = language_fr_techmaterial_list[TEXT("name1")];
		info.soldier_name1 = language_fr_techmaterial_list[TEXT("soldier_name1")];
		info.effect1 = language_fr_techmaterial_list[TEXT("effect1")];
		info.desc1 = language_fr_techmaterial_list[TEXT("desc1")];
		info.name2 = language_fr_techmaterial_list[TEXT("name2")];
		info.soldier_name2 = language_fr_techmaterial_list[TEXT("soldier_name2")];
		info.effect2 = language_fr_techmaterial_list[TEXT("effect2")];
		info.desc2 = language_fr_techmaterial_list[TEXT("desc2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_techmaterial_ByLanguage(int id, OUT Frontend_txt_struct_fr_techmaterial& info, int language)
{
	Frontend_txt_struct_language_fr_techmaterial language_info;
	if(!Get_Frontend_txt_struct_language_fr_techmaterial(id, language_info) || !Get_Frontend_txt_struct_fr_techmaterial(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* soldier_name_ptr[]=
	{
		&language_info.soldier_name0,
		&language_info.soldier_name1,
		&language_info.soldier_name2,
	};
	info.soldier_name = language < 3 ? *soldier_name_ptr[language] : TEXT("");

	const FString* effect_ptr[]=
	{
		&language_info.effect0,
		&language_info.effect1,
		&language_info.effect2,
	};
	info.effect = language < 3 ? *effect_ptr[language] : TEXT("");

	const FString* desc_ptr[]=
	{
		&language_info.desc0,
		&language_info.desc1,
		&language_info.desc2,
	};
	info.desc = language < 3 ? *desc_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_techmaterial_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_techmaterial info;
	if(!Get_Frontend_txt_struct_fr_techmaterial_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("soldier"), FString::FromInt(info.soldier));
	out.Add(TEXT("soldier_name"), info.soldier_name);
	out.Add(TEXT("effect"), info.effect);
	out.Add(TEXT("desc"), info.desc);
	return true;
}

bool Get_Frontend_txt_struct_language_fr_weekrank_reward(int id, OUT Frontend_txt_struct_language_fr_weekrank_reward& info)
{
	info.id = 0;
	TMap<FString, FString> language_fr_weekrank_reward_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fr_weekrank_reward"), id, language_fr_weekrank_reward_list);
	if (language_fr_weekrank_reward_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_fr_weekrank_reward_list[TEXT("id")]);
		info.reward_desc0 = language_fr_weekrank_reward_list[TEXT("reward_desc0")];
		info.reward_desc1 = language_fr_weekrank_reward_list[TEXT("reward_desc1")];
		info.reward_desc2 = language_fr_weekrank_reward_list[TEXT("reward_desc2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fr_weekrank_reward_ByLanguage(int id, OUT Frontend_txt_struct_fr_weekrank_reward& info, int language)
{
	Frontend_txt_struct_language_fr_weekrank_reward language_info;
	if(!Get_Frontend_txt_struct_language_fr_weekrank_reward(id, language_info) || !Get_Frontend_txt_struct_fr_weekrank_reward(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* reward_desc_ptr[]=
	{
		&language_info.reward_desc0,
		&language_info.reward_desc1,
		&language_info.reward_desc2,
	};
	info.reward_desc = language < 3 ? *reward_desc_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_fr_weekrank_reward_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fr_weekrank_reward info;
	if(!Get_Frontend_txt_struct_fr_weekrank_reward_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("rank"), FString::FromInt(info.rank));
	out.Add(TEXT("reward_desc"), info.reward_desc);
	return true;
}

bool Get_Frontend_txt_struct_language_fujiang(int id, OUT Frontend_txt_struct_language_fujiang& info)
{
	info.Id = 0;
	TMap<FString, FString> language_fujiang_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fujiang"), id, language_fujiang_list);
	if (language_fujiang_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_fujiang_list[TEXT("Id")]);
		info.Name0 = language_fujiang_list[TEXT("Name0")];
		info.Description0 = language_fujiang_list[TEXT("Description0")];
		info.Name1 = language_fujiang_list[TEXT("Name1")];
		info.Description1 = language_fujiang_list[TEXT("Description1")];
		info.Name2 = language_fujiang_list[TEXT("Name2")];
		info.Description2 = language_fujiang_list[TEXT("Description2")];
		info.Strength0 = language_fujiang_list[TEXT("Strength0")];
		info.Strength1 = language_fujiang_list[TEXT("Strength1")];
		info.Strength2 = language_fujiang_list[TEXT("Strength2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_fujiang_ByLanguage(int id, OUT Frontend_txt_struct_fujiang& info, int language)
{
	Frontend_txt_struct_language_fujiang language_info;
	if(!Get_Frontend_txt_struct_language_fujiang(id, language_info) || !Get_Frontend_txt_struct_fujiang(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	return true;
}

bool Get_Frontend_txt_struct_fujiang_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_fujiang info;
	if(!Get_Frontend_txt_struct_fujiang_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("SoldierName"), info.SoldierName);
	out.Add(TEXT("SoldierDescription"), info.SoldierDescription);
	out.Add(TEXT("SoldierKind"), FString::FromInt(info.SoldierKind));
	out.Add(TEXT("fPrice"), FString::FromInt(info.fPrice));
	out.Add(TEXT("PayPrestige"), FString::FromInt(info.PayPrestige));
	out.Add(TEXT("NeedPrestige"), FString::FromInt(info.NeedPrestige));
	out.Add(TEXT("BumpMass"), FString::SanitizeFloat(info.BumpMass));
	out.Add(TEXT("BaseAggressive"), FString::FromInt(info.BaseAggressive));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	out.Add(TEXT("SkeletalMesh2"), info.SkeletalMesh2);
	out.Add(TEXT("SkeletalMesh3"), info.SkeletalMesh3);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("fHealth"), FString::FromInt(info.fHealth));
	out.Add(TEXT("MaxSpeed"), FString::SanitizeFloat(info.MaxSpeed));
	out.Add(TEXT("fAiHorseSpeedRate"), FString::SanitizeFloat(info.fAiHorseSpeedRate));
	out.Add(TEXT("fAiHorseAcceRate"), FString::SanitizeFloat(info.fAiHorseAcceRate));
	out.Add(TEXT("fAiHorseRotationRate"), FString::SanitizeFloat(info.fAiHorseRotationRate));
	out.Add(TEXT("fAiAttackSpeedRate"), FString::SanitizeFloat(info.fAiAttackSpeedRate));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("SprintSpeed"), FString::SanitizeFloat(info.SprintSpeed));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("SoldierDefenseValue"), FString::FromInt(info.SoldierDefenseValue));
	out.Add(TEXT("SoldierDamage"), FString::FromInt(info.SoldierDamage));
	out.Add(TEXT("fPlayerCauseAIShieldVal"), FString::SanitizeFloat(info.fPlayerCauseAIShieldVal));
	out.Add(TEXT("AlertRange1"), FString::SanitizeFloat(info.AlertRange1));
	out.Add(TEXT("AlertRange2"), FString::SanitizeFloat(info.AlertRange2));
	out.Add(TEXT("AlertRange3"), FString::SanitizeFloat(info.AlertRange3));
	out.Add(TEXT("AlertRange4"), FString::SanitizeFloat(info.AlertRange4));
	out.Add(TEXT("FollowRange"), FString::SanitizeFloat(info.FollowRange));
	out.Add(TEXT("DefendRange"), FString::SanitizeFloat(info.DefendRange));
	out.Add(TEXT("PushRange"), FString::SanitizeFloat(info.PushRange));
	out.Add(TEXT("fStartHoldMinTime"), FString::SanitizeFloat(info.fStartHoldMinTime));
	out.Add(TEXT("fStartHoldMaxTime"), FString::SanitizeFloat(info.fStartHoldMaxTime));
	out.Add(TEXT("fHoldToFireMinTime"), FString::SanitizeFloat(info.fHoldToFireMinTime));
	out.Add(TEXT("fHoldToFireMaxTime"), FString::SanitizeFloat(info.fHoldToFireMaxTime));
	out.Add(TEXT("WeaponID1"), FString::FromInt(info.WeaponID1));
	out.Add(TEXT("WeaponID2"), FString::FromInt(info.WeaponID2));
	out.Add(TEXT("WeaponID3"), FString::FromInt(info.WeaponID3));
	out.Add(TEXT("WeaponID4"), FString::FromInt(info.WeaponID4));
	out.Add(TEXT("HeadEquipID"), FString::FromInt(info.HeadEquipID));
	out.Add(TEXT("ShoulderEquipID"), FString::FromInt(info.ShoulderEquipID));
	out.Add(TEXT("UpBodyEquipID"), FString::FromInt(info.UpBodyEquipID));
	out.Add(TEXT("DownBodyEquipID"), FString::FromInt(info.DownBodyEquipID));
	out.Add(TEXT("HorseID"), FString::FromInt(info.HorseID));
	out.Add(TEXT("HorseEquipID"), FString::FromInt(info.HorseEquipID));
	out.Add(TEXT("fHorseLifeRate"), FString::SanitizeFloat(info.fHorseLifeRate));
	out.Add(TEXT("ArmorType"), FString::FromInt(info.ArmorType));
	out.Add(TEXT("DetectRate"), FString::SanitizeFloat(info.DetectRate));
	out.Add(TEXT("BeDetectedRate"), FString::SanitizeFloat(info.BeDetectedRate));
	out.Add(TEXT("AlertHewupPercent"), FString::SanitizeFloat(info.AlertHewupPercent));
	out.Add(TEXT("AlertBlockPercent"), FString::SanitizeFloat(info.AlertBlockPercent));
	out.Add(TEXT("ShotOffsetRangeX"), FString::SanitizeFloat(info.ShotOffsetRangeX));
	out.Add(TEXT("ShotOffsetRangeY"), FString::SanitizeFloat(info.ShotOffsetRangeY));
	out.Add(TEXT("fAttackOrDefendProb_0"), FString::SanitizeFloat(info.fAttackOrDefendProb_0));
	out.Add(TEXT("fAttackOrDefendProb_1"), FString::SanitizeFloat(info.fAttackOrDefendProb_1));
	out.Add(TEXT("fAttackOrDefendProb_2"), FString::SanitizeFloat(info.fAttackOrDefendProb_2));
	out.Add(TEXT("fAttackOrDefendProb_3"), FString::SanitizeFloat(info.fAttackOrDefendProb_3));
	out.Add(TEXT("fMeleeAttackIntervalTime"), FString::SanitizeFloat(info.fMeleeAttackIntervalTime));
	out.Add(TEXT("fRangeAttackIntervalTime"), FString::SanitizeFloat(info.fRangeAttackIntervalTime));
	out.Add(TEXT("fFailFire"), FString::SanitizeFloat(info.fFailFire));
	out.Add(TEXT("CurGroundFireStyle"), FString::FromInt(info.CurGroundFireStyle));
	out.Add(TEXT("CurGroundAimStyle_0"), FString::FromInt(info.CurGroundAimStyle_0));
	out.Add(TEXT("CurGroundAimStyle_1"), FString::FromInt(info.CurGroundAimStyle_1));
	out.Add(TEXT("CurHorseFireStyle"), FString::FromInt(info.CurHorseFireStyle));
	out.Add(TEXT("CurHorseAimStyle_0"), FString::FromInt(info.CurHorseAimStyle_0));
	out.Add(TEXT("CurHorseAimStyle_1"), FString::FromInt(info.CurHorseAimStyle_1));
	out.Add(TEXT("CausePlayerDamage"), FString::SanitizeFloat(info.CausePlayerDamage));
	out.Add(TEXT("CauseAIDamage"), FString::SanitizeFloat(info.CauseAIDamage));
	out.Add(TEXT("fSprintTimeOnGround"), FString::SanitizeFloat(info.fSprintTimeOnGround));
	out.Add(TEXT("nAISRS"), FString::FromInt(info.nAISRS));
	out.Add(TEXT("PenetrateCut"), FString::SanitizeFloat(info.PenetrateCut));
	out.Add(TEXT("PenetratePuncture"), FString::SanitizeFloat(info.PenetratePuncture));
	out.Add(TEXT("PenetrateBlunt"), FString::SanitizeFloat(info.PenetrateBlunt));
	out.Add(TEXT("nTacticalMovePercent"), FString::SanitizeFloat(info.nTacticalMovePercent));
	out.Add(TEXT("FailProDown"), FString::SanitizeFloat(info.FailProDown));
	out.Add(TEXT("LeadCharacter"), FString::FromInt(info.LeadCharacter));
	out.Add(TEXT("SkillID_1"), info.SkillID_1);
	out.Add(TEXT("SkillID_2"), info.SkillID_2);
	out.Add(TEXT("SkillID_3"), info.SkillID_3);
	out.Add(TEXT("SkillID_4"), info.SkillID_4);
	out.Add(TEXT("PassiveSkill_1"), FString::FromInt(info.PassiveSkill_1));
	out.Add(TEXT("PassiveSkill_2"), FString::FromInt(info.PassiveSkill_2));
	out.Add(TEXT("PassiveSkill_3"), FString::FromInt(info.PassiveSkill_3));
	out.Add(TEXT("PassiveSkill_4"), FString::FromInt(info.PassiveSkill_4));
	out.Add(TEXT("Formation1"), FString::FromInt(info.Formation1));
	out.Add(TEXT("Formation2"), FString::FromInt(info.Formation2));
	out.Add(TEXT("Formation3"), FString::FromInt(info.Formation3));
	out.Add(TEXT("Formation4"), FString::FromInt(info.Formation4));
	out.Add(TEXT("ExpFactor"), FString::SanitizeFloat(info.ExpFactor));
	out.Add(TEXT("SkillUnlock_1"), FString::FromInt(info.SkillUnlock_1));
	out.Add(TEXT("SkillUnlock_2"), FString::FromInt(info.SkillUnlock_2));
	out.Add(TEXT("SkillUnlock_3"), FString::FromInt(info.SkillUnlock_3));
	out.Add(TEXT("SkillUnlock_4"), FString::FromInt(info.SkillUnlock_4));
	out.Add(TEXT("FormationUnlock_1"), FString::FromInt(info.FormationUnlock_1));
	out.Add(TEXT("FormationUnlock_2"), FString::FromInt(info.FormationUnlock_2));
	out.Add(TEXT("FormationUnlock_3"), FString::FromInt(info.FormationUnlock_3));
	out.Add(TEXT("FormationUnlock_4"), FString::FromInt(info.FormationUnlock_4));
	out.Add(TEXT("Sell"), FString::FromInt(info.Sell));
	out.Add(TEXT("nTroopMoveId"), FString::FromInt(info.nTroopMoveId));
	out.Add(TEXT("fRemoteAtkFactor"), FString::SanitizeFloat(info.fRemoteAtkFactor));
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	out.Add(TEXT("nFight"), FString::FromInt(info.nFight));
	out.Add(TEXT("nStrategy"), FString::FromInt(info.nStrategy));
	out.Add(TEXT("nBubing"), FString::FromInt(info.nBubing));
	out.Add(TEXT("nGongnu"), FString::FromInt(info.nGongnu));
	out.Add(TEXT("nQibing"), FString::FromInt(info.nQibing));
	out.Add(TEXT("nQishe"), FString::FromInt(info.nQishe));
	out.Add(TEXT("nKeepsakeId"), FString::FromInt(info.nKeepsakeId));
	out.Add(TEXT("nKeepsakeNum"), FString::FromInt(info.nKeepsakeNum));
	out.Add(TEXT("nTag"), FString::FromInt(info.nTag));
	out.Add(TEXT("nNationType"), FString::FromInt(info.nNationType));
	return true;
}

bool Get_Frontend_txt_struct_language_hero_type(int id, OUT Frontend_txt_struct_language_hero_type& info)
{
	info.id = 0;
	TMap<FString, FString> language_hero_type_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_hero_type"), id, language_hero_type_list);
	if (language_hero_type_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_hero_type_list[TEXT("id")]);
		info.name0 = language_hero_type_list[TEXT("name0")];
		info.name1 = language_hero_type_list[TEXT("name1")];
		info.name2 = language_hero_type_list[TEXT("name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_hero_type_ByLanguage(int id, OUT Frontend_txt_struct_hero_type& info, int language)
{
	Frontend_txt_struct_language_hero_type language_info;
	if(!Get_Frontend_txt_struct_language_hero_type(id, language_info) || !Get_Frontend_txt_struct_hero_type(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_hero_type_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_hero_type info;
	if(!Get_Frontend_txt_struct_hero_type_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("lev"), FString::FromInt(info.lev));
	out.Add(TEXT("require_lev"), FString::FromInt(info.require_lev));
	out.Add(TEXT("require_prestige"), FString::FromInt(info.require_prestige));
	out.Add(TEXT("require_moneytype"), FString::FromInt(info.require_moneytype));
	out.Add(TEXT("require_price"), FString::FromInt(info.require_price));
	out.Add(TEXT("require_item"), FString::FromInt(info.require_item));
	out.Add(TEXT("require_itemnum"), FString::FromInt(info.require_itemnum));
	out.Add(TEXT("employment_moneytype"), FString::FromInt(info.employment_moneytype));
	out.Add(TEXT("employment_price"), FString::FromInt(info.employment_price));
	out.Add(TEXT("coat1"), FString::FromInt(info.coat1));
	out.Add(TEXT("coat2"), FString::FromInt(info.coat2));
	out.Add(TEXT("coat2_moneytype"), FString::FromInt(info.coat2_moneytype));
	out.Add(TEXT("coat2_price"), FString::FromInt(info.coat2_price));
	out.Add(TEXT("coat3"), FString::FromInt(info.coat3));
	out.Add(TEXT("coat3_moneytype"), FString::FromInt(info.coat3_moneytype));
	out.Add(TEXT("coat3_price"), FString::FromInt(info.coat3_price));
	out.Add(TEXT("coat4"), FString::FromInt(info.coat4));
	out.Add(TEXT("coat4_moneytype"), FString::FromInt(info.coat4_moneytype));
	out.Add(TEXT("coat4_price"), FString::FromInt(info.coat4_price));
	out.Add(TEXT("exp_effect"), FString::FromInt(info.exp_effect));
	return true;
}

bool Get_Frontend_txt_struct_language_itemtype(int id, OUT Frontend_txt_struct_language_itemtype& info)
{
	info.id = 0;
	TMap<FString, FString> language_itemtype_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_itemtype"), id, language_itemtype_list);
	if (language_itemtype_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_itemtype_list[TEXT("id")]);
		info.name0 = language_itemtype_list[TEXT("name0")];
		info.text0 = language_itemtype_list[TEXT("text0")];
		info.message0 = language_itemtype_list[TEXT("message0")];
		info.aliastype0 = language_itemtype_list[TEXT("aliastype0")];
		info.name1 = language_itemtype_list[TEXT("name1")];
		info.text1 = language_itemtype_list[TEXT("text1")];
		info.message1 = language_itemtype_list[TEXT("message1")];
		info.aliastype1 = language_itemtype_list[TEXT("aliastype1")];
		info.name2 = language_itemtype_list[TEXT("name2")];
		info.text2 = language_itemtype_list[TEXT("text2")];
		info.message2 = language_itemtype_list[TEXT("message2")];
		info.aliastype2 = language_itemtype_list[TEXT("aliastype2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_itemtype_ByLanguage(int id, OUT Frontend_txt_struct_itemtype& info, int language)
{
	Frontend_txt_struct_language_itemtype language_info;
	if(!Get_Frontend_txt_struct_language_itemtype(id, language_info) || !Get_Frontend_txt_struct_itemtype(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	const FString* text_ptr[]=
	{
		&language_info.text0,
		&language_info.text1,
		&language_info.text2,
	};
	info.text = language < 3 ? *text_ptr[language] : TEXT("");

	const FString* message_ptr[]=
	{
		&language_info.message0,
		&language_info.message1,
		&language_info.message2,
	};
	info.message = language < 3 ? *message_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_itemtype_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_itemtype info;
	if(!Get_Frontend_txt_struct_itemtype_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("level"), FString::FromInt(info.level));
	out.Add(TEXT("pack"), FString::FromInt(info.pack));
	out.Add(TEXT("money"), FString::FromInt(info.money));
	out.Add(TEXT("emoney"), FString::FromInt(info.emoney));
	out.Add(TEXT("exploit"), FString::FromInt(info.exploit));
	out.Add(TEXT("sell_money"), FString::FromInt(info.sell_money));
	out.Add(TEXT("type"), FString::FromInt(info.type));
	out.Add(TEXT("award_ID"), FString::FromInt(info.award_ID));
	out.Add(TEXT("text"), info.text);
	out.Add(TEXT("message"), info.message);
	return true;
}

bool Get_Frontend_txt_struct_language_Rank_Property(int id, OUT Frontend_txt_struct_language_Rank_Property& info)
{
	info.id = 0;
	TMap<FString, FString> language_Rank_Property_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_Rank_Property"), id, language_Rank_Property_list);
	if (language_Rank_Property_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_Rank_Property_list[TEXT("id")]);
		info.propertytext0 = language_Rank_Property_list[TEXT("propertytext0")];
		info.propertytext1 = language_Rank_Property_list[TEXT("propertytext1")];
		info.propertytext2 = language_Rank_Property_list[TEXT("propertytext2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_Rank_Property_ByLanguage(int id, OUT Frontend_txt_struct_Rank_Property& info, int language)
{
	Frontend_txt_struct_language_Rank_Property language_info;
	if(!Get_Frontend_txt_struct_language_Rank_Property(id, language_info) || !Get_Frontend_txt_struct_Rank_Property(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* propertytext_ptr[]=
	{
		&language_info.propertytext0,
		&language_info.propertytext1,
		&language_info.propertytext2,
	};
	info.propertytext = language < 3 ? *propertytext_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_Rank_Property_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_Rank_Property info;
	if(!Get_Frontend_txt_struct_Rank_Property_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("propertytext"), info.propertytext);
	out.Add(TEXT("type"), FString::FromInt(info.type));
	return true;
}

bool Get_Frontend_txt_struct_language_rank_tree(int id, OUT Frontend_txt_struct_language_rank_tree& info)
{
	info.rank_id = 0;
	TMap<FString, FString> language_rank_tree_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_rank_tree"), id, language_rank_tree_list);
	if (language_rank_tree_list.Num() > 0)
	{
		info.rank_id = FCString::Atoi(*language_rank_tree_list[TEXT("rank_id")]);
		info.name0 = language_rank_tree_list[TEXT("name0")];
		info.name1 = language_rank_tree_list[TEXT("name1")];
		info.name2 = language_rank_tree_list[TEXT("name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_rank_tree_ByLanguage(int id, OUT Frontend_txt_struct_rank_tree& info, int language)
{
	Frontend_txt_struct_language_rank_tree language_info;
	if(!Get_Frontend_txt_struct_language_rank_tree(id, language_info) || !Get_Frontend_txt_struct_rank_tree(id, info))
	{
		return false;
	}

	info.rank_id = language_info.rank_id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_rank_tree_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_rank_tree info;
	if(!Get_Frontend_txt_struct_rank_tree_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("rank_id"), FString::FromInt(info.rank_id));
	out.Add(TEXT("army_type"), FString::FromInt(info.army_type));
	out.Add(TEXT("lev"), FString::FromInt(info.lev));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("country"), FString::FromInt(info.country));
	out.Add(TEXT("pre_rank1"), FString::FromInt(info.pre_rank1));
	out.Add(TEXT("pre_rank1_exp"), FString::FromInt(info.pre_rank1_exp));
	out.Add(TEXT("pre_rank1_price"), FString::FromInt(info.pre_rank1_price));
	out.Add(TEXT("pre_rank1_con1"), FString::FromInt(info.pre_rank1_con1));
	out.Add(TEXT("pre_rank1_con2"), FString::FromInt(info.pre_rank1_con2));
	out.Add(TEXT("pre_rank1_con3"), FString::FromInt(info.pre_rank1_con3));
	out.Add(TEXT("pre_rank1_con4"), FString::FromInt(info.pre_rank1_con4));
	out.Add(TEXT("pre_rank1_con5"), FString::FromInt(info.pre_rank1_con5));
	out.Add(TEXT("pre_rank2"), FString::FromInt(info.pre_rank2));
	out.Add(TEXT("pre_rank2_exp"), FString::FromInt(info.pre_rank2_exp));
	out.Add(TEXT("pre_rank2_price"), FString::FromInt(info.pre_rank2_price));
	out.Add(TEXT("pre_rank2_con1"), FString::FromInt(info.pre_rank2_con1));
	out.Add(TEXT("pre_rank2_con2"), FString::FromInt(info.pre_rank2_con2));
	out.Add(TEXT("pre_rank2_con3"), FString::FromInt(info.pre_rank2_con3));
	out.Add(TEXT("pre_rank2_con4"), FString::FromInt(info.pre_rank2_con4));
	out.Add(TEXT("pre_rank2_con5"), FString::FromInt(info.pre_rank2_con5));
	out.Add(TEXT("pre_rank3"), FString::FromInt(info.pre_rank3));
	out.Add(TEXT("pre_rank3_exp"), FString::FromInt(info.pre_rank3_exp));
	out.Add(TEXT("pre_rank3_price"), FString::FromInt(info.pre_rank3_price));
	out.Add(TEXT("pre_rank3_con1"), FString::FromInt(info.pre_rank3_con1));
	out.Add(TEXT("pre_rank3_con2"), FString::FromInt(info.pre_rank3_con2));
	out.Add(TEXT("pre_rank3_con3"), FString::FromInt(info.pre_rank3_con3));
	out.Add(TEXT("pre_rank3_con4"), FString::FromInt(info.pre_rank3_con4));
	out.Add(TEXT("pre_rank3_con5"), FString::FromInt(info.pre_rank3_con5));
	out.Add(TEXT("rank_property"), info.rank_property);
	out.Add(TEXT("NearAttack"), FString::FromInt(info.NearAttack));
	out.Add(TEXT("FarAttack"), FString::FromInt(info.FarAttack));
	out.Add(TEXT("NearDefence"), FString::FromInt(info.NearDefence));
	out.Add(TEXT("FarDefence"), FString::FromInt(info.FarDefence));
	out.Add(TEXT("MoveSpeed"), FString::FromInt(info.MoveSpeed));
	out.Add(TEXT("rank_type"), FString::FromInt(info.rank_type));
	return true;
}

bool Get_Frontend_txt_struct_language_science_type(int id, OUT Frontend_txt_struct_language_science_type& info)
{
	info.id = 0;
	TMap<FString, FString> language_science_type_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_science_type"), id, language_science_type_list);
	if (language_science_type_list.Num() > 0)
	{
		info.id = FCString::Atoi(*language_science_type_list[TEXT("id")]);
		info.name0 = language_science_type_list[TEXT("name0")];
		info.name1 = language_science_type_list[TEXT("name1")];
		info.name2 = language_science_type_list[TEXT("name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_science_type_ByLanguage(int id, OUT Frontend_txt_struct_science_type& info, int language)
{
	Frontend_txt_struct_language_science_type language_info;
	if(!Get_Frontend_txt_struct_language_science_type(id, language_info) || !Get_Frontend_txt_struct_science_type(id, info))
	{
		return false;
	}

	info.id = language_info.id;

	const FString* name_ptr[]=
	{
		&language_info.name0,
		&language_info.name1,
		&language_info.name2,
	};
	info.name = language < 3 ? *name_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_science_type_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_science_type info;
	if(!Get_Frontend_txt_struct_science_type_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("id"), FString::FromInt(info.id));
	out.Add(TEXT("ident"), FString::FromInt(info.ident));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("sci_type"), FString::FromInt(info.sci_type));
	out.Add(TEXT("sci_id"), FString::FromInt(info.sci_id));
	return true;
}

bool Get_Frontend_txt_struct_language_unlawful(int id, OUT Frontend_txt_struct_language_unlawful& info)
{
	info.ID = 0;
	TMap<FString, FString> language_unlawful_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_unlawful"), id, language_unlawful_list);
	if (language_unlawful_list.Num() > 0)
	{
		info.ID = FCString::Atoi(*language_unlawful_list[TEXT("ID")]);
		info.WORD0 = language_unlawful_list[TEXT("WORD0")];
		info.WORD1 = language_unlawful_list[TEXT("WORD1")];
		info.WORD2 = language_unlawful_list[TEXT("WORD2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_unlawful_ByLanguage(int id, OUT Frontend_txt_struct_unlawful& info, int language)
{
	Frontend_txt_struct_language_unlawful language_info;
	if(!Get_Frontend_txt_struct_language_unlawful(id, language_info) || !Get_Frontend_txt_struct_unlawful(id, info))
	{
		return false;
	}

	info.ID = language_info.ID;

	const FString* WORD_ptr[]=
	{
		&language_info.WORD0,
		&language_info.WORD1,
		&language_info.WORD2,
	};
	info.WORD = language < 3 ? *WORD_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_unlawful_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_unlawful info;
	if(!Get_Frontend_txt_struct_unlawful_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("ID"), FString::FromInt(info.ID));
	out.Add(TEXT("WORD"), info.WORD);
	return true;
}

bool Get_Frontend_txt_struct_language_achievement(int id, OUT Frontend_txt_struct_language_achievement& info)
{
	info.Id = 0;
	TMap<FString, FString> language_achievement_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_achievement"), id, language_achievement_list);
	if (language_achievement_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_achievement_list[TEXT("Id")]);
		info.Name0 = language_achievement_list[TEXT("Name0")];
		info.Name1 = language_achievement_list[TEXT("Name1")];
		info.Name2 = language_achievement_list[TEXT("Name2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_achievement_ByLanguage(int id, OUT Frontend_txt_struct_achievement& info, int language)
{
	Frontend_txt_struct_language_achievement language_info;
	if(!Get_Frontend_txt_struct_language_achievement(id, language_info) || !Get_Frontend_txt_struct_achievement(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* AchieveName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.AchieveName = language < 3 ? *AchieveName_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_achievement_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_achievement info;
	if(!Get_Frontend_txt_struct_achievement_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("MedalType"), FString::FromInt(info.MedalType));
	out.Add(TEXT("AchieveName"), info.AchieveName);
	out.Add(TEXT("nCondition"), FString::FromInt(info.nCondition));
	out.Add(TEXT("nMapId"), FString::FromInt(info.nMapId));
	out.Add(TEXT("GameMode"), info.GameMode);
	out.Add(TEXT("SubGameMode_Crusade"), info.SubGameMode_Crusade);
	out.Add(TEXT("SubGameMode_Hero"), info.SubGameMode_Hero);
	out.Add(TEXT("nDistance"), FString::FromInt(info.nDistance));
	out.Add(TEXT("nWeaponClass"), FString::FromInt(info.nWeaponClass));
	out.Add(TEXT("nWeaponKind"), FString::FromInt(info.nWeaponKind));
	out.Add(TEXT("nWeaponType"), FString::FromInt(info.nWeaponType));
	out.Add(TEXT("nEnemyType"), FString::FromInt(info.nEnemyType));
	out.Add(TEXT("nTime"), FString::FromInt(info.nTime));
	out.Add(TEXT("nHpPercent"), FString::FromInt(info.nHpPercent));
	out.Add(TEXT("nTeamDead"), FString::FromInt(info.nTeamDead));
	out.Add(TEXT("nOneLifeCycle"), FString::FromInt(info.nOneLifeCycle));
	out.Add(TEXT("nOneHitCycle"), FString::FromInt(info.nOneHitCycle));
	out.Add(TEXT("nHeadShot"), FString::FromInt(info.nHeadShot));
	out.Add(TEXT("nComboShot"), FString::FromInt(info.nComboShot));
	out.Add(TEXT("nEnemyHpPercent"), FString::FromInt(info.nEnemyHpPercent));
	out.Add(TEXT("nAchieveNum"), FString::FromInt(info.nAchieveNum));
	out.Add(TEXT("nEnemyAllAlive"), FString::FromInt(info.nEnemyAllAlive));
	return true;
}

bool Get_Frontend_txt_struct_language_aipersonalskill(int id, OUT Frontend_txt_struct_language_aipersonalskill& info)
{
	info.Id = 0;
	TMap<FString, FString> language_aipersonalskill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_aipersonalskill"), id, language_aipersonalskill_list);
	if (language_aipersonalskill_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_aipersonalskill_list[TEXT("Id")]);
		info.Desc = language_aipersonalskill_list[TEXT("Desc")];
		info.ShoutContent0 = language_aipersonalskill_list[TEXT("ShoutContent0")];
		info.ShoutContent1 = language_aipersonalskill_list[TEXT("ShoutContent1")];
		info.ShoutContent2 = language_aipersonalskill_list[TEXT("ShoutContent2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_aipersonalskill_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_aipersonalskill info;
	if(!Get_Frontend_txt_struct_language_aipersonalskill(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Desc"), info.Desc);
	out.Add(TEXT("ShoutContent0"), info.ShoutContent0);
	out.Add(TEXT("ShoutContent1"), info.ShoutContent1);
	out.Add(TEXT("ShoutContent2"), info.ShoutContent2);
	return true;
}

bool Get_Frontend_txt_struct_language_aisoldierskill(int id, OUT Frontend_txt_struct_language_aisoldierskill& info)
{
	info.idSkill = 0;
	TMap<FString, FString> language_aisoldierskill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_aisoldierskill"), id, language_aisoldierskill_list);
	if (language_aisoldierskill_list.Num() > 0)
	{
		info.idSkill = FCString::Atoi(*language_aisoldierskill_list[TEXT("idSkill")]);
		info.SkillName0 = language_aisoldierskill_list[TEXT("SkillName0")];
		info.SkillDesc0 = language_aisoldierskill_list[TEXT("SkillDesc0")];
		info.SkillName1 = language_aisoldierskill_list[TEXT("SkillName1")];
		info.SkillDesc1 = language_aisoldierskill_list[TEXT("SkillDesc1")];
		info.SkillName2 = language_aisoldierskill_list[TEXT("SkillName2")];
		info.SkillDesc2 = language_aisoldierskill_list[TEXT("SkillDesc2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_aisoldierskill_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_aisoldierskill info;
	if(!Get_Frontend_txt_struct_language_aisoldierskill(id, info))
	{
		return false;
	}

	out.Add(TEXT("idSkill"), FString::FromInt(info.idSkill));
	out.Add(TEXT("SkillName0"), info.SkillName0);
	out.Add(TEXT("SkillDesc0"), info.SkillDesc0);
	out.Add(TEXT("SkillName1"), info.SkillName1);
	out.Add(TEXT("SkillDesc1"), info.SkillDesc1);
	out.Add(TEXT("SkillName2"), info.SkillName2);
	out.Add(TEXT("SkillDesc2"), info.SkillDesc2);
	return true;
}

bool Get_Frontend_txt_struct_language_armor(int id, OUT Frontend_txt_struct_language_armor& info)
{
	info.Id = 0;
	TMap<FString, FString> language_armor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_armor"), id, language_armor_list);
	if (language_armor_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_armor_list[TEXT("Id")]);
		info.Name0 = language_armor_list[TEXT("Name0")];
		info.Description0 = language_armor_list[TEXT("Description0")];
		info.Name1 = language_armor_list[TEXT("Name1")];
		info.Description1 = language_armor_list[TEXT("Description1")];
		info.Name2 = language_armor_list[TEXT("Name2")];
		info.Description2 = language_armor_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_armor_ByLanguage(int id, OUT Frontend_txt_struct_armor& info, int language)
{
	Frontend_txt_struct_language_armor language_info;
	if(!Get_Frontend_txt_struct_language_armor(id, language_info) || !Get_Frontend_txt_struct_armor(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_armor_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_armor info;
	if(!Get_Frontend_txt_struct_armor_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh_Male"), info.SkeletalMesh_Male);
	out.Add(TEXT("SkeletalMesh_Female"), info.SkeletalMesh_Female);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("VelocityExtraValue"), FString::SanitizeFloat(info.VelocityExtraValue));
	out.Add(TEXT("HealthExtraValue"), FString::SanitizeFloat(info.HealthExtraValue));
	out.Add(TEXT("MetalFailPro"), FString::SanitizeFloat(info.MetalFailPro));
	out.Add(TEXT("LeatherFailPro"), FString::SanitizeFloat(info.LeatherFailPro));
	out.Add(TEXT("ClothFailPro"), FString::SanitizeFloat(info.ClothFailPro));
	out.Add(TEXT("MetalDefenseValue"), FString::FromInt(info.MetalDefenseValue));
	out.Add(TEXT("LeatherDefenseValue"), FString::FromInt(info.LeatherDefenseValue));
	out.Add(TEXT("ClothDefenseValue"), FString::FromInt(info.ClothDefenseValue));
	out.Add(TEXT("bIsUseOnHorse"), FString::FromInt(info.bIsUseOnHorse));
	out.Add(TEXT("MetalMinusCutParam"), FString::SanitizeFloat(info.MetalMinusCutParam));
	out.Add(TEXT("LeatherMinusCutParam"), FString::SanitizeFloat(info.LeatherMinusCutParam));
	out.Add(TEXT("ClothMinusCutParam"), FString::SanitizeFloat(info.ClothMinusCutParam));
	out.Add(TEXT("MetalMinusStabParam"), FString::SanitizeFloat(info.MetalMinusStabParam));
	out.Add(TEXT("LeatherMinusStabParam"), FString::SanitizeFloat(info.LeatherMinusStabParam));
	out.Add(TEXT("ClothMinusStabParam"), FString::SanitizeFloat(info.ClothMinusStabParam));
	out.Add(TEXT("MetalMinusBluntParam"), FString::SanitizeFloat(info.MetalMinusBluntParam));
	out.Add(TEXT("LeatherMinusBluntParam"), FString::SanitizeFloat(info.LeatherMinusBluntParam));
	out.Add(TEXT("ClothMinusBluntParam"), FString::SanitizeFloat(info.ClothMinusBluntParam));
	out.Add(TEXT("Metal"), info.Metal);
	out.Add(TEXT("Leather"), info.Leather);
	out.Add(TEXT("Cloth"), info.Cloth);
	out.Add(TEXT("MetalDefenseDown"), FString::SanitizeFloat(info.MetalDefenseDown));
	out.Add(TEXT("LeatherDefenseDown"), FString::SanitizeFloat(info.LeatherDefenseDown));
	out.Add(TEXT("ClothDefenseDown"), FString::SanitizeFloat(info.ClothDefenseDown));
	out.Add(TEXT("FailProDown"), FString::SanitizeFloat(info.FailProDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("DefenseDownLv1"), FString::SanitizeFloat(info.DefenseDownLv1));
	out.Add(TEXT("DefenseDownLv2"), FString::SanitizeFloat(info.DefenseDownLv2));
	out.Add(TEXT("DefenseDownLv3"), FString::SanitizeFloat(info.DefenseDownLv3));
	out.Add(TEXT("DefenseDownLv4"), FString::SanitizeFloat(info.DefenseDownLv4));
	out.Add(TEXT("DefenseDownLv5"), FString::SanitizeFloat(info.DefenseDownLv5));
	out.Add(TEXT("DefenseDownLv6"), FString::SanitizeFloat(info.DefenseDownLv6));
	out.Add(TEXT("DefenseDownLv7"), FString::SanitizeFloat(info.DefenseDownLv7));
	out.Add(TEXT("DefenseDownLv8"), FString::SanitizeFloat(info.DefenseDownLv8));
	out.Add(TEXT("DefenseDownLv9"), FString::SanitizeFloat(info.DefenseDownLv9));
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	return true;
}

bool Get_Frontend_txt_struct_language_boss(int id, OUT Frontend_txt_struct_language_boss& info)
{
	info.Id = 0;
	TMap<FString, FString> language_boss_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_boss"), id, language_boss_list);
	if (language_boss_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_boss_list[TEXT("Id")]);
		info.Name0 = language_boss_list[TEXT("Name0")];
		info.Description0 = language_boss_list[TEXT("Description0")];
		info.Name1 = language_boss_list[TEXT("Name1")];
		info.Description1 = language_boss_list[TEXT("Description1")];
		info.Name2 = language_boss_list[TEXT("Name2")];
		info.Description2 = language_boss_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_boss_ByLanguage(int id, OUT Frontend_txt_struct_boss& info, int language)
{
	Frontend_txt_struct_language_boss language_info;
	if(!Get_Frontend_txt_struct_language_boss(id, language_info) || !Get_Frontend_txt_struct_boss(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* SoldierName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.SoldierName = language < 3 ? *SoldierName_ptr[language] : TEXT("");

	const FString* SoldierDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.SoldierDescription = language < 3 ? *SoldierDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_boss_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_boss info;
	if(!Get_Frontend_txt_struct_boss_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("SoldierName"), info.SoldierName);
	out.Add(TEXT("SoldierDescription"), info.SoldierDescription);
	out.Add(TEXT("SoldierKind"), FString::FromInt(info.SoldierKind));
	out.Add(TEXT("fPrice"), FString::FromInt(info.fPrice));
	out.Add(TEXT("BumpMass"), FString::SanitizeFloat(info.BumpMass));
	out.Add(TEXT("BaseAggressive"), FString::FromInt(info.BaseAggressive));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("fHealth"), FString::FromInt(info.fHealth));
	out.Add(TEXT("MaxSpeed"), FString::FromInt(info.MaxSpeed));
	out.Add(TEXT("fAiHorseSpeedRate"), FString::SanitizeFloat(info.fAiHorseSpeedRate));
	out.Add(TEXT("fAiHorseAcceRate"), FString::SanitizeFloat(info.fAiHorseAcceRate));
	out.Add(TEXT("fAiHorseRotationRate"), FString::SanitizeFloat(info.fAiHorseRotationRate));
	out.Add(TEXT("fAiAttackSpeedRate"), FString::SanitizeFloat(info.fAiAttackSpeedRate));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("SprintSpeed"), FString::SanitizeFloat(info.SprintSpeed));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("SoldierDefenseValue"), FString::FromInt(info.SoldierDefenseValue));
	out.Add(TEXT("SoldierDamage"), FString::FromInt(info.SoldierDamage));
	out.Add(TEXT("fPlayerCauseAIShieldVal"), FString::SanitizeFloat(info.fPlayerCauseAIShieldVal));
	out.Add(TEXT("AlertRange1"), FString::FromInt(info.AlertRange1));
	out.Add(TEXT("AlertRange2"), FString::FromInt(info.AlertRange2));
	out.Add(TEXT("AlertRange3"), FString::FromInt(info.AlertRange3));
	out.Add(TEXT("AlertRange4"), FString::FromInt(info.AlertRange4));
	out.Add(TEXT("FollowRange"), FString::SanitizeFloat(info.FollowRange));
	out.Add(TEXT("DefendRange"), FString::SanitizeFloat(info.DefendRange));
	out.Add(TEXT("PushRange"), FString::SanitizeFloat(info.PushRange));
	out.Add(TEXT("fStartHoldMinTime"), FString::SanitizeFloat(info.fStartHoldMinTime));
	out.Add(TEXT("fStartHoldMaxTime"), FString::SanitizeFloat(info.fStartHoldMaxTime));
	out.Add(TEXT("fHoldToFireMinTime"), FString::SanitizeFloat(info.fHoldToFireMinTime));
	out.Add(TEXT("fHoldToFireMaxTime"), FString::SanitizeFloat(info.fHoldToFireMaxTime));
	out.Add(TEXT("WeaponID1"), FString::FromInt(info.WeaponID1));
	out.Add(TEXT("WeaponID2"), FString::FromInt(info.WeaponID2));
	out.Add(TEXT("WeaponID3"), FString::FromInt(info.WeaponID3));
	out.Add(TEXT("WeaponID4"), FString::FromInt(info.WeaponID4));
	out.Add(TEXT("HeadEquipID"), FString::FromInt(info.HeadEquipID));
	out.Add(TEXT("ShoulderEquipID"), FString::FromInt(info.ShoulderEquipID));
	out.Add(TEXT("UpBodyEquipID"), FString::FromInt(info.UpBodyEquipID));
	out.Add(TEXT("DownBodyEquipID"), FString::FromInt(info.DownBodyEquipID));
	out.Add(TEXT("HorseID"), FString::FromInt(info.HorseID));
	out.Add(TEXT("HorseEquipID"), FString::FromInt(info.HorseEquipID));
	out.Add(TEXT("fHorseLifeRate"), FString::SanitizeFloat(info.fHorseLifeRate));
	out.Add(TEXT("ArmorType"), FString::FromInt(info.ArmorType));
	out.Add(TEXT("DetectRate"), FString::SanitizeFloat(info.DetectRate));
	out.Add(TEXT("BeDetectedRate"), FString::SanitizeFloat(info.BeDetectedRate));
	out.Add(TEXT("AlertHewupPercent"), FString::SanitizeFloat(info.AlertHewupPercent));
	out.Add(TEXT("AlertBlockPercent"), FString::SanitizeFloat(info.AlertBlockPercent));
	out.Add(TEXT("ShotOffsetRangeX"), FString::SanitizeFloat(info.ShotOffsetRangeX));
	out.Add(TEXT("ShotOffsetRangeY"), FString::SanitizeFloat(info.ShotOffsetRangeY));
	out.Add(TEXT("fAttackOrDefendProb_0"), FString::FromInt(info.fAttackOrDefendProb_0));
	out.Add(TEXT("fAttackOrDefendProb_1"), FString::SanitizeFloat(info.fAttackOrDefendProb_1));
	out.Add(TEXT("fAttackOrDefendProb_2"), FString::SanitizeFloat(info.fAttackOrDefendProb_2));
	out.Add(TEXT("fAttackOrDefendProb_3"), FString::SanitizeFloat(info.fAttackOrDefendProb_3));
	out.Add(TEXT("fMeleeAttackIntervalTime"), FString::SanitizeFloat(info.fMeleeAttackIntervalTime));
	out.Add(TEXT("fRangeAttackIntervalTime"), FString::SanitizeFloat(info.fRangeAttackIntervalTime));
	out.Add(TEXT("fFailFire"), FString::SanitizeFloat(info.fFailFire));
	out.Add(TEXT("CurGroundFireStyle"), FString::FromInt(info.CurGroundFireStyle));
	out.Add(TEXT("CurGroundAimStyle_0"), FString::FromInt(info.CurGroundAimStyle_0));
	out.Add(TEXT("CurGroundAimStyle_1"), FString::FromInt(info.CurGroundAimStyle_1));
	out.Add(TEXT("CurHorseFireStyle"), FString::FromInt(info.CurHorseFireStyle));
	out.Add(TEXT("CurHorseAimStyle_0"), FString::FromInt(info.CurHorseAimStyle_0));
	out.Add(TEXT("CurHorseAimStyle_1"), FString::FromInt(info.CurHorseAimStyle_1));
	out.Add(TEXT("CausePlayerDamage"), FString::SanitizeFloat(info.CausePlayerDamage));
	out.Add(TEXT("CauseAIDamage"), FString::SanitizeFloat(info.CauseAIDamage));
	out.Add(TEXT("fSprintTimeOnGround"), FString::SanitizeFloat(info.fSprintTimeOnGround));
	out.Add(TEXT("nAISRS"), FString::FromInt(info.nAISRS));
	out.Add(TEXT("PenetrateCut"), FString::SanitizeFloat(info.PenetrateCut));
	out.Add(TEXT("PenetratePuncture"), FString::SanitizeFloat(info.PenetratePuncture));
	out.Add(TEXT("PenetrateBlunt"), FString::SanitizeFloat(info.PenetrateBlunt));
	out.Add(TEXT("nTacticalMovePercent"), FString::SanitizeFloat(info.nTacticalMovePercent));
	out.Add(TEXT("GainFujiangID"), FString::FromInt(info.GainFujiangID));
	out.Add(TEXT("nGuardType"), FString::FromInt(info.nGuardType));
	out.Add(TEXT("nGuardCount"), FString::FromInt(info.nGuardCount));
	out.Add(TEXT("nGuardFormation"), FString::FromInt(info.nGuardFormation));
	out.Add(TEXT("scene"), FString::FromInt(info.scene));
	out.Add(TEXT("fRemoteAtkFactor"), FString::SanitizeFloat(info.fRemoteAtkFactor));
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	out.Add(TEXT("nNationType"), FString::FromInt(info.nNationType));
	return true;
}

bool Get_Frontend_txt_struct_language_bullet_clip(int id, OUT Frontend_txt_struct_language_bullet_clip& info)
{
	info.Id = 0;
	TMap<FString, FString> language_bullet_clip_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_bullet_clip"), id, language_bullet_clip_list);
	if (language_bullet_clip_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_bullet_clip_list[TEXT("Id")]);
		info.Name0 = language_bullet_clip_list[TEXT("Name0")];
		info.Description0 = language_bullet_clip_list[TEXT("Description0")];
		info.Name1 = language_bullet_clip_list[TEXT("Name1")];
		info.Description1 = language_bullet_clip_list[TEXT("Description1")];
		info.Name2 = language_bullet_clip_list[TEXT("Name2")];
		info.Description2 = language_bullet_clip_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_bullet_clip_ByLanguage(int id, OUT Frontend_txt_struct_bullet_clip& info, int language)
{
	Frontend_txt_struct_language_bullet_clip language_info;
	if(!Get_Frontend_txt_struct_language_bullet_clip(id, language_info) || !Get_Frontend_txt_struct_bullet_clip(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_bullet_clip_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_bullet_clip info;
	if(!Get_Frontend_txt_struct_bullet_clip_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("AmmoBagMesh"), info.AmmoBagMesh);
	out.Add(TEXT("EmptyAmmoBagMesh"), info.EmptyAmmoBagMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("AIWeaponWeight"), FString::SanitizeFloat(info.AIWeaponWeight));
	out.Add(TEXT("ShootDamageFactor"), FString::SanitizeFloat(info.ShootDamageFactor));
	out.Add(TEXT("damageType"), FString::FromInt(info.damageType));
	out.Add(TEXT("count"), FString::FromInt(info.count));
	out.Add(TEXT("fHurtFactor_0"), FString::SanitizeFloat(info.fHurtFactor_0));
	out.Add(TEXT("fAttenuationFactor_0"), FString::SanitizeFloat(info.fAttenuationFactor_0));
	out.Add(TEXT("fHurtFactor_1"), FString::SanitizeFloat(info.fHurtFactor_1));
	out.Add(TEXT("fAttenuationFactor_1"), FString::SanitizeFloat(info.fAttenuationFactor_1));
	out.Add(TEXT("nBounceCount"), FString::FromInt(info.nBounceCount));
	out.Add(TEXT("fBounceSpeedFactor"), FString::SanitizeFloat(info.fBounceSpeedFactor));
	out.Add(TEXT("nSceneEffectType "), info.nSceneEffectType );
	out.Add(TEXT("AmmoStaticMesh"), info.AmmoStaticMesh);
	out.Add(TEXT("FlyVoiceMesh"), info.FlyVoiceMesh);
	out.Add(TEXT("CrashVoiceMesh"), info.CrashVoiceMesh);
	out.Add(TEXT("MetalCutCamailValue"), FString::SanitizeFloat(info.MetalCutCamailValue));
	out.Add(TEXT("MetalStabCamailValue"), FString::SanitizeFloat(info.MetalStabCamailValue));
	out.Add(TEXT("MetalBluntCamailValue"), FString::SanitizeFloat(info.MetalBluntCamailValue));
	out.Add(TEXT("LeatherCutCamailValue"), FString::SanitizeFloat(info.LeatherCutCamailValue));
	out.Add(TEXT("LeatherStabCamailValue"), FString::SanitizeFloat(info.LeatherStabCamailValue));
	out.Add(TEXT("LeatherBluntCamailValue"), FString::SanitizeFloat(info.LeatherBluntCamailValue));
	out.Add(TEXT("ClothCutCamailValue"), FString::SanitizeFloat(info.ClothCutCamailValue));
	out.Add(TEXT("ClothStabCamailValue"), FString::SanitizeFloat(info.ClothStabCamailValue));
	out.Add(TEXT("ClothBluntCamailValue"), FString::SanitizeFloat(info.ClothBluntCamailValue));
	out.Add(TEXT("ShootDamageDown"), FString::SanitizeFloat(info.ShootDamageDown));
	out.Add(TEXT("CamailDown"), FString::SanitizeFloat(info.CamailDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("DamageDownLv1"), FString::SanitizeFloat(info.DamageDownLv1));
	out.Add(TEXT("DamageDownLv2"), FString::SanitizeFloat(info.DamageDownLv2));
	out.Add(TEXT("DamageDownLv3"), FString::SanitizeFloat(info.DamageDownLv3));
	out.Add(TEXT("DamageDownLv4"), FString::SanitizeFloat(info.DamageDownLv4));
	out.Add(TEXT("DamageDownLv5"), FString::SanitizeFloat(info.DamageDownLv5));
	out.Add(TEXT("DamageDownLv6"), FString::SanitizeFloat(info.DamageDownLv6));
	out.Add(TEXT("DamageDownLv7"), FString::SanitizeFloat(info.DamageDownLv7));
	out.Add(TEXT("DamageDownLv8"), FString::SanitizeFloat(info.DamageDownLv8));
	out.Add(TEXT("DamageDownLv9"), FString::SanitizeFloat(info.DamageDownLv9));
	out.Add(TEXT("fPveDamageFactor"), FString::SanitizeFloat(info.fPveDamageFactor));
	out.Add(TEXT("nIsPveWeapon"), FString::FromInt(info.nIsPveWeapon));
	out.Add(TEXT("costfield"), FString::FromInt(info.costfield));
	out.Add(TEXT("fHorseDamageRate"), FString::SanitizeFloat(info.fHorseDamageRate));
	out.Add(TEXT("fAICauseAIDamageShieldFactor"), FString::SanitizeFloat(info.fAICauseAIDamageShieldFactor));
	return true;
}

bool Get_Frontend_txt_struct_language_flag(int id, OUT Frontend_txt_struct_language_flag& info)
{
	info.Id = 0;
	TMap<FString, FString> language_flag_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_flag"), id, language_flag_list);
	if (language_flag_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_flag_list[TEXT("Id")]);
		info.Name0 = language_flag_list[TEXT("Name0")];
		info.Description0 = language_flag_list[TEXT("Description0")];
		info.Name1 = language_flag_list[TEXT("Name1")];
		info.Description1 = language_flag_list[TEXT("Description1")];
		info.Name2 = language_flag_list[TEXT("Name2")];
		info.Description2 = language_flag_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_flag_ByLanguage(int id, OUT Frontend_txt_struct_flag& info, int language)
{
	Frontend_txt_struct_language_flag language_info;
	if(!Get_Frontend_txt_struct_language_flag(id, language_info) || !Get_Frontend_txt_struct_flag(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_flag_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_flag info;
	if(!Get_Frontend_txt_struct_flag_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("SkeletalMesh1"), info.SkeletalMesh1);
	return true;
}

bool Get_Frontend_txt_struct_language_formation(int id, OUT Frontend_txt_struct_language_formation& info)
{
	info.Id = 0;
	TMap<FString, FString> language_formation_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_formation"), id, language_formation_list);
	if (language_formation_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_formation_list[TEXT("Id")]);
		info.Name0 = language_formation_list[TEXT("Name0")];
		info.Description0 = language_formation_list[TEXT("Description0")];
		info.Name1 = language_formation_list[TEXT("Name1")];
		info.Description1 = language_formation_list[TEXT("Description1")];
		info.Name2 = language_formation_list[TEXT("Name2")];
		info.Description2 = language_formation_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_formation_ByLanguage(int id, OUT Frontend_txt_struct_formation& info, int language)
{
	Frontend_txt_struct_language_formation language_info;
	if(!Get_Frontend_txt_struct_language_formation(id, language_info) || !Get_Frontend_txt_struct_formation(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	return true;
}

bool Get_Frontend_txt_struct_formation_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_formation info;
	if(!Get_Frontend_txt_struct_formation_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("nMass"), FString::FromInt(info.nMass));
	out.Add(TEXT("name"), info.name);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("nTop"), FString::FromInt(info.nTop));
	out.Add(TEXT("nLeft"), FString::FromInt(info.nLeft));
	out.Add(TEXT("nWidth"), FString::FromInt(info.nWidth));
	out.Add(TEXT("nHeight"), FString::FromInt(info.nHeight));
	out.Add(TEXT("nMassValueInit"), FString::FromInt(info.nMassValueInit));
	out.Add(TEXT("fEnemyKindCheckRange"), FString::SanitizeFloat(info.fEnemyKindCheckRange));
	out.Add(TEXT("fEnemyCountCheckRange"), FString::SanitizeFloat(info.fEnemyCountCheckRange));
	out.Add(TEXT("fCollisionRadiusSelfCamp"), FString::SanitizeFloat(info.fCollisionRadiusSelfCamp));
	out.Add(TEXT("fSameCampRadius"), FString::SanitizeFloat(info.fSameCampRadius));
	out.Add(TEXT("fCollisionRadiusEnemyCamp"), FString::SanitizeFloat(info.fCollisionRadiusEnemyCamp));
	out.Add(TEXT("SoundPath"), info.SoundPath);
	out.Add(TEXT("fujiang"), info.fujiang);
	out.Add(TEXT("szForbidSoldierKind"), info.szForbidSoldierKind);
	out.Add(TEXT("SquadAggressive"), FString::FromInt(info.SquadAggressive));
	out.Add(TEXT("MeleeInjuredFactor"), FString::SanitizeFloat(info.MeleeInjuredFactor));
	out.Add(TEXT("RangedInjuredFactor"), FString::SanitizeFloat(info.RangedInjuredFactor));
	out.Add(TEXT("ProbeFactor"), FString::SanitizeFloat(info.ProbeFactor));
	out.Add(TEXT("BeDetectFactor"), FString::SanitizeFloat(info.BeDetectFactor));
	out.Add(TEXT("fSafeDistance"), FString::SanitizeFloat(info.fSafeDistance));
	out.Add(TEXT("MoraleFactor"), FString::FromInt(info.MoraleFactor));
	out.Add(TEXT("BMFactor"), FString::SanitizeFloat(info.BMFactor));
	out.Add(TEXT("MeleeDamageFactor"), FString::SanitizeFloat(info.MeleeDamageFactor));
	out.Add(TEXT("RangedDamageFactor"), FString::SanitizeFloat(info.RangedDamageFactor));
	out.Add(TEXT("fAttackSpeedFactor"), FString::SanitizeFloat(info.fAttackSpeedFactor));
	out.Add(TEXT("fMaxSpeedFactor"), FString::SanitizeFloat(info.fMaxSpeedFactor));
	out.Add(TEXT("fAcceleationFactor"), FString::SanitizeFloat(info.fAcceleationFactor));
	out.Add(TEXT("fujiang0x"), FString::SanitizeFloat(info.fujiang0x));
	out.Add(TEXT("fujiang0y"), FString::SanitizeFloat(info.fujiang0y));
	out.Add(TEXT("fujiang1x"), FString::SanitizeFloat(info.fujiang1x));
	out.Add(TEXT("fujiang1y"), FString::SanitizeFloat(info.fujiang1y));
	out.Add(TEXT("soldier0x"), FString::SanitizeFloat(info.soldier0x));
	out.Add(TEXT("soldier0y"), FString::SanitizeFloat(info.soldier0y));
	out.Add(TEXT("soldier1x"), FString::SanitizeFloat(info.soldier1x));
	out.Add(TEXT("soldier1y"), FString::SanitizeFloat(info.soldier1y));
	out.Add(TEXT("soldier2x"), FString::SanitizeFloat(info.soldier2x));
	out.Add(TEXT("soldier2y"), FString::SanitizeFloat(info.soldier2y));
	out.Add(TEXT("soldier3x"), FString::SanitizeFloat(info.soldier3x));
	out.Add(TEXT("soldier3y"), FString::SanitizeFloat(info.soldier3y));
	out.Add(TEXT("soldier4x"), FString::SanitizeFloat(info.soldier4x));
	out.Add(TEXT("soldier4y"), FString::SanitizeFloat(info.soldier4y));
	out.Add(TEXT("soldier5x"), FString::SanitizeFloat(info.soldier5x));
	out.Add(TEXT("soldier5y"), FString::SanitizeFloat(info.soldier5y));
	out.Add(TEXT("soldier6x"), FString::SanitizeFloat(info.soldier6x));
	out.Add(TEXT("soldier6y"), FString::SanitizeFloat(info.soldier6y));
	out.Add(TEXT("soldier7x"), FString::SanitizeFloat(info.soldier7x));
	out.Add(TEXT("soldier7y"), FString::SanitizeFloat(info.soldier7y));
	out.Add(TEXT("soldier8x"), FString::SanitizeFloat(info.soldier8x));
	out.Add(TEXT("soldier8y"), FString::SanitizeFloat(info.soldier8y));
	out.Add(TEXT("soldier9x"), FString::SanitizeFloat(info.soldier9x));
	out.Add(TEXT("soldier9y"), FString::SanitizeFloat(info.soldier9y));
	out.Add(TEXT("soldier10x"), FString::SanitizeFloat(info.soldier10x));
	out.Add(TEXT("soldier10y"), FString::SanitizeFloat(info.soldier10y));
	out.Add(TEXT("soldier11x"), FString::SanitizeFloat(info.soldier11x));
	out.Add(TEXT("soldier11y"), FString::SanitizeFloat(info.soldier11y));
	out.Add(TEXT("soldier12x"), FString::SanitizeFloat(info.soldier12x));
	out.Add(TEXT("soldier12y"), FString::SanitizeFloat(info.soldier12y));
	out.Add(TEXT("soldier13x"), FString::SanitizeFloat(info.soldier13x));
	out.Add(TEXT("soldier13y"), FString::SanitizeFloat(info.soldier13y));
	out.Add(TEXT("soldier14x"), FString::SanitizeFloat(info.soldier14x));
	out.Add(TEXT("soldier14y"), FString::SanitizeFloat(info.soldier14y));
	out.Add(TEXT("soldier15x"), FString::SanitizeFloat(info.soldier15x));
	out.Add(TEXT("soldier15y"), FString::SanitizeFloat(info.soldier15y));
	out.Add(TEXT("soldier16x"), FString::SanitizeFloat(info.soldier16x));
	out.Add(TEXT("soldier16y"), FString::SanitizeFloat(info.soldier16y));
	out.Add(TEXT("soldier17x"), FString::SanitizeFloat(info.soldier17x));
	out.Add(TEXT("soldier17y"), FString::SanitizeFloat(info.soldier17y));
	out.Add(TEXT("soldier18x"), FString::SanitizeFloat(info.soldier18x));
	out.Add(TEXT("soldier18y"), FString::SanitizeFloat(info.soldier18y));
	out.Add(TEXT("soldier19x"), FString::SanitizeFloat(info.soldier19x));
	out.Add(TEXT("soldier19y"), FString::SanitizeFloat(info.soldier19y));
	out.Add(TEXT("soldier20x"), FString::SanitizeFloat(info.soldier20x));
	out.Add(TEXT("soldier20y"), FString::SanitizeFloat(info.soldier20y));
	out.Add(TEXT("soldier21x"), FString::SanitizeFloat(info.soldier21x));
	out.Add(TEXT("soldier21y"), FString::SanitizeFloat(info.soldier21y));
	out.Add(TEXT("soldier22x"), FString::SanitizeFloat(info.soldier22x));
	out.Add(TEXT("soldier22y"), FString::SanitizeFloat(info.soldier22y));
	out.Add(TEXT("soldier23x"), FString::SanitizeFloat(info.soldier23x));
	out.Add(TEXT("soldier23y"), FString::SanitizeFloat(info.soldier23y));
	out.Add(TEXT("soldier24x"), FString::SanitizeFloat(info.soldier24x));
	out.Add(TEXT("soldier24y"), FString::SanitizeFloat(info.soldier24y));
	out.Add(TEXT("soldier25x"), FString::SanitizeFloat(info.soldier25x));
	out.Add(TEXT("soldier25y"), FString::SanitizeFloat(info.soldier25y));
	out.Add(TEXT("soldier26x"), FString::SanitizeFloat(info.soldier26x));
	out.Add(TEXT("soldier26y"), FString::SanitizeFloat(info.soldier26y));
	out.Add(TEXT("soldier27x"), FString::SanitizeFloat(info.soldier27x));
	out.Add(TEXT("soldier27y"), FString::SanitizeFloat(info.soldier27y));
	out.Add(TEXT("soldier28x"), FString::SanitizeFloat(info.soldier28x));
	out.Add(TEXT("soldier28y"), FString::SanitizeFloat(info.soldier28y));
	out.Add(TEXT("soldier29x"), FString::SanitizeFloat(info.soldier29x));
	out.Add(TEXT("soldier29y"), FString::SanitizeFloat(info.soldier29y));
	out.Add(TEXT("soldier30x"), FString::SanitizeFloat(info.soldier30x));
	out.Add(TEXT("soldier30y"), FString::SanitizeFloat(info.soldier30y));
	out.Add(TEXT("soldier31x"), FString::SanitizeFloat(info.soldier31x));
	out.Add(TEXT("soldier31y"), FString::SanitizeFloat(info.soldier31y));
	out.Add(TEXT("soldier32x"), FString::SanitizeFloat(info.soldier32x));
	out.Add(TEXT("soldier32y"), FString::SanitizeFloat(info.soldier32y));
	out.Add(TEXT("soldier33x"), FString::SanitizeFloat(info.soldier33x));
	out.Add(TEXT("soldier33y"), FString::SanitizeFloat(info.soldier33y));
	out.Add(TEXT("soldier34x"), FString::SanitizeFloat(info.soldier34x));
	out.Add(TEXT("soldier34y"), FString::SanitizeFloat(info.soldier34y));
	out.Add(TEXT("soldier35x"), FString::SanitizeFloat(info.soldier35x));
	out.Add(TEXT("soldier35y"), FString::SanitizeFloat(info.soldier35y));
	out.Add(TEXT("soldier36x"), FString::SanitizeFloat(info.soldier36x));
	out.Add(TEXT("soldier36y"), FString::SanitizeFloat(info.soldier36y));
	out.Add(TEXT("soldier37x"), FString::SanitizeFloat(info.soldier37x));
	out.Add(TEXT("soldier37y"), FString::SanitizeFloat(info.soldier37y));
	out.Add(TEXT("soldier38x"), FString::SanitizeFloat(info.soldier38x));
	out.Add(TEXT("soldier38y"), FString::SanitizeFloat(info.soldier38y));
	out.Add(TEXT("soldier39x"), FString::SanitizeFloat(info.soldier39x));
	out.Add(TEXT("soldier39y"), FString::SanitizeFloat(info.soldier39y));
	out.Add(TEXT("soldier0angle"), FString::SanitizeFloat(info.soldier0angle));
	out.Add(TEXT("soldier1angle"), FString::SanitizeFloat(info.soldier1angle));
	out.Add(TEXT("soldier2angle"), FString::SanitizeFloat(info.soldier2angle));
	out.Add(TEXT("soldier3angle"), FString::SanitizeFloat(info.soldier3angle));
	out.Add(TEXT("soldier4angle"), FString::SanitizeFloat(info.soldier4angle));
	out.Add(TEXT("soldier5angle"), FString::SanitizeFloat(info.soldier5angle));
	out.Add(TEXT("soldier6angle"), FString::SanitizeFloat(info.soldier6angle));
	out.Add(TEXT("soldier7angle"), FString::SanitizeFloat(info.soldier7angle));
	out.Add(TEXT("soldier8angle"), FString::SanitizeFloat(info.soldier8angle));
	out.Add(TEXT("soldier9angle"), FString::SanitizeFloat(info.soldier9angle));
	out.Add(TEXT("soldier10angle"), FString::SanitizeFloat(info.soldier10angle));
	out.Add(TEXT("soldier11angle"), FString::SanitizeFloat(info.soldier11angle));
	out.Add(TEXT("soldier12angle"), FString::SanitizeFloat(info.soldier12angle));
	out.Add(TEXT("soldier13angle"), FString::SanitizeFloat(info.soldier13angle));
	out.Add(TEXT("soldier14angle"), FString::SanitizeFloat(info.soldier14angle));
	out.Add(TEXT("soldier15angle"), FString::SanitizeFloat(info.soldier15angle));
	out.Add(TEXT("soldier16angle"), FString::SanitizeFloat(info.soldier16angle));
	out.Add(TEXT("soldier17angle"), FString::SanitizeFloat(info.soldier17angle));
	out.Add(TEXT("soldier18angle"), FString::SanitizeFloat(info.soldier18angle));
	out.Add(TEXT("soldier19angle"), FString::SanitizeFloat(info.soldier19angle));
	out.Add(TEXT("soldier20angle"), FString::SanitizeFloat(info.soldier20angle));
	out.Add(TEXT("soldier21angle"), FString::SanitizeFloat(info.soldier21angle));
	out.Add(TEXT("soldier22angle"), FString::SanitizeFloat(info.soldier22angle));
	out.Add(TEXT("soldier23angle"), FString::SanitizeFloat(info.soldier23angle));
	out.Add(TEXT("soldier24angle"), FString::SanitizeFloat(info.soldier24angle));
	out.Add(TEXT("soldier25angle"), FString::SanitizeFloat(info.soldier25angle));
	out.Add(TEXT("soldier26angle"), FString::SanitizeFloat(info.soldier26angle));
	out.Add(TEXT("soldier27angle"), FString::SanitizeFloat(info.soldier27angle));
	out.Add(TEXT("soldier28angle"), FString::SanitizeFloat(info.soldier28angle));
	out.Add(TEXT("soldier29angle"), FString::SanitizeFloat(info.soldier29angle));
	out.Add(TEXT("soldier30angle"), FString::SanitizeFloat(info.soldier30angle));
	out.Add(TEXT("soldier31angle"), FString::SanitizeFloat(info.soldier31angle));
	out.Add(TEXT("soldier32angle"), FString::SanitizeFloat(info.soldier32angle));
	out.Add(TEXT("soldier33angle"), FString::SanitizeFloat(info.soldier33angle));
	out.Add(TEXT("soldier34angle"), FString::SanitizeFloat(info.soldier34angle));
	out.Add(TEXT("soldier35angle"), FString::SanitizeFloat(info.soldier35angle));
	out.Add(TEXT("soldier36angle"), FString::SanitizeFloat(info.soldier36angle));
	out.Add(TEXT("soldier37angle"), FString::SanitizeFloat(info.soldier37angle));
	out.Add(TEXT("soldier38angle"), FString::SanitizeFloat(info.soldier38angle));
	out.Add(TEXT("soldier39angle"), FString::SanitizeFloat(info.soldier39angle));
	out.Add(TEXT("soldier0amt"), FString::FromInt(info.soldier0amt));
	out.Add(TEXT("soldier1amt"), FString::FromInt(info.soldier1amt));
	out.Add(TEXT("soldier2amt"), FString::FromInt(info.soldier2amt));
	out.Add(TEXT("soldier3amt"), FString::FromInt(info.soldier3amt));
	out.Add(TEXT("soldier4amt"), FString::FromInt(info.soldier4amt));
	out.Add(TEXT("soldier5amt"), FString::FromInt(info.soldier5amt));
	out.Add(TEXT("soldier6amt"), FString::FromInt(info.soldier6amt));
	out.Add(TEXT("soldier7amt"), FString::FromInt(info.soldier7amt));
	out.Add(TEXT("soldier8amt"), FString::FromInt(info.soldier8amt));
	out.Add(TEXT("soldier9amt"), FString::FromInt(info.soldier9amt));
	out.Add(TEXT("soldier10amt"), FString::FromInt(info.soldier10amt));
	out.Add(TEXT("soldier11amt"), FString::FromInt(info.soldier11amt));
	out.Add(TEXT("soldier12amt"), FString::FromInt(info.soldier12amt));
	out.Add(TEXT("soldier13amt"), FString::FromInt(info.soldier13amt));
	out.Add(TEXT("soldier14amt"), FString::FromInt(info.soldier14amt));
	out.Add(TEXT("soldier15amt"), FString::FromInt(info.soldier15amt));
	out.Add(TEXT("soldier16amt"), FString::FromInt(info.soldier16amt));
	out.Add(TEXT("soldier17amt"), FString::FromInt(info.soldier17amt));
	out.Add(TEXT("soldier18amt"), FString::FromInt(info.soldier18amt));
	out.Add(TEXT("soldier19amt"), FString::FromInt(info.soldier19amt));
	out.Add(TEXT("soldier20amt"), FString::FromInt(info.soldier20amt));
	out.Add(TEXT("soldier21amt"), FString::FromInt(info.soldier21amt));
	out.Add(TEXT("soldier22amt"), FString::FromInt(info.soldier22amt));
	out.Add(TEXT("soldier23amt"), FString::FromInt(info.soldier23amt));
	out.Add(TEXT("soldier24amt"), FString::FromInt(info.soldier24amt));
	out.Add(TEXT("soldier25amt"), FString::FromInt(info.soldier25amt));
	out.Add(TEXT("soldier26amt"), FString::FromInt(info.soldier26amt));
	out.Add(TEXT("soldier27amt"), FString::FromInt(info.soldier27amt));
	out.Add(TEXT("soldier28amt"), FString::FromInt(info.soldier28amt));
	out.Add(TEXT("soldier29amt"), FString::FromInt(info.soldier29amt));
	out.Add(TEXT("soldier30amt"), FString::FromInt(info.soldier30amt));
	out.Add(TEXT("soldier31amt"), FString::FromInt(info.soldier31amt));
	out.Add(TEXT("soldier32amt"), FString::FromInt(info.soldier32amt));
	out.Add(TEXT("soldier33amt"), FString::FromInt(info.soldier33amt));
	out.Add(TEXT("soldier34amt"), FString::FromInt(info.soldier34amt));
	out.Add(TEXT("soldier35amt"), FString::FromInt(info.soldier35amt));
	out.Add(TEXT("soldier36amt"), FString::FromInt(info.soldier36amt));
	out.Add(TEXT("soldier37amt"), FString::FromInt(info.soldier37amt));
	out.Add(TEXT("soldier38amt"), FString::FromInt(info.soldier38amt));
	out.Add(TEXT("soldier39amt"), FString::FromInt(info.soldier39amt));
	return true;
}

bool Get_Frontend_txt_struct_language_fujiang_passive_skill(int id, OUT Frontend_txt_struct_language_fujiang_passive_skill& info)
{
	info.Id = 0;
	TMap<FString, FString> language_fujiang_passive_skill_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_fujiang_passive_skill"), id, language_fujiang_passive_skill_list);
	if (language_fujiang_passive_skill_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_fujiang_passive_skill_list[TEXT("Id")]);
		info.ShoutTextInfo0 = language_fujiang_passive_skill_list[TEXT("ShoutTextInfo0")];
		info.ShoutTextInfo1 = language_fujiang_passive_skill_list[TEXT("ShoutTextInfo1")];
		info.ShoutTextInfo2 = language_fujiang_passive_skill_list[TEXT("ShoutTextInfo2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_fujiang_passive_skill_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_fujiang_passive_skill info;
	if(!Get_Frontend_txt_struct_language_fujiang_passive_skill(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ShoutTextInfo0"), info.ShoutTextInfo0);
	out.Add(TEXT("ShoutTextInfo1"), info.ShoutTextInfo1);
	out.Add(TEXT("ShoutTextInfo2"), info.ShoutTextInfo2);
	return true;
}

bool Get_Frontend_txt_struct_language_horse(int id, OUT Frontend_txt_struct_language_horse& info)
{
	info.Id = 0;
	TMap<FString, FString> language_horse_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_horse"), id, language_horse_list);
	if (language_horse_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_horse_list[TEXT("Id")]);
		info.Name0 = language_horse_list[TEXT("Name0")];
		info.Description0 = language_horse_list[TEXT("Description0")];
		info.Name1 = language_horse_list[TEXT("Name1")];
		info.Description1 = language_horse_list[TEXT("Description1")];
		info.Name2 = language_horse_list[TEXT("Name2")];
		info.Description2 = language_horse_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horse_ByLanguage(int id, OUT Frontend_txt_struct_horse& info, int language)
{
	Frontend_txt_struct_language_horse language_info;
	if(!Get_Frontend_txt_struct_language_horse(id, language_info) || !Get_Frontend_txt_struct_horse(id, info))
	{
		return false;
	}

	info.HorseID = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_horse_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_horse info;
	if(!Get_Frontend_txt_struct_horse_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("HorseID"), FString::FromInt(info.HorseID));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("PhysicsAsset"), info.PhysicsAsset);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("fHealth"), FString::FromInt(info.fHealth));
	out.Add(TEXT("DefenseValue"), FString::FromInt(info.DefenseValue));
	out.Add(TEXT("fJump"), FString::SanitizeFloat(info.fJump));
	out.Add(TEXT("Extraweight"), FString::SanitizeFloat(info.Extraweight));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("MaxSpeed"), FString::SanitizeFloat(info.MaxSpeed));
	out.Add(TEXT("fTurnToParam"), FString::SanitizeFloat(info.fTurnToParam));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("SprintTotalCount"), FString::FromInt(info.SprintTotalCount));
	out.Add(TEXT("minCrashDamage"), FString::FromInt(info.minCrashDamage));
	out.Add(TEXT("maxCrashDamage"), FString::FromInt(info.maxCrashDamage));
	out.Add(TEXT("MountAnimTime"), FString::SanitizeFloat(info.MountAnimTime));
	out.Add(TEXT("DismountAnimTime"), FString::SanitizeFloat(info.DismountAnimTime));
	out.Add(TEXT("HorseLazyTime"), FString::SanitizeFloat(info.HorseLazyTime));
	out.Add(TEXT("CollisionStopTime"), FString::SanitizeFloat(info.CollisionStopTime));
	out.Add(TEXT("QuickStopTime"), FString::SanitizeFloat(info.QuickStopTime));
	out.Add(TEXT("SprintExtraValue"), FString::SanitizeFloat(info.SprintExtraValue));
	out.Add(TEXT("iCollisionStopVel"), FString::SanitizeFloat(info.iCollisionStopVel));
	out.Add(TEXT("iBumpStopVel"), FString::SanitizeFloat(info.iBumpStopVel));
	out.Add(TEXT("fSprintTime"), FString::SanitizeFloat(info.fSprintTime));
	out.Add(TEXT("BumpMass"), FString::SanitizeFloat(info.BumpMass));
	out.Add(TEXT("recoveryTimeInSprint"), FString::SanitizeFloat(info.recoveryTimeInSprint));
	out.Add(TEXT("fBlockSprintSpeed"), FString::SanitizeFloat(info.fBlockSprintSpeed));
	out.Add(TEXT("fHealthDown"), FString::SanitizeFloat(info.fHealthDown));
	out.Add(TEXT("fAccelRateDown"), FString::SanitizeFloat(info.fAccelRateDown));
	out.Add(TEXT("MaxSpeedDown"), FString::SanitizeFloat(info.MaxSpeedDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("nDifficuty"), FString::FromInt(info.nDifficuty));
	out.Add(TEXT("nAssaultMomentum"), FString::FromInt(info.nAssaultMomentum));
	return true;
}

bool Get_Frontend_txt_struct_language_horseaccessory(int id, OUT Frontend_txt_struct_language_horseaccessory& info)
{
	info.Id = 0;
	TMap<FString, FString> language_horseaccessory_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_horseaccessory"), id, language_horseaccessory_list);
	if (language_horseaccessory_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_horseaccessory_list[TEXT("Id")]);
		info.Name0 = language_horseaccessory_list[TEXT("Name0")];
		info.Description0 = language_horseaccessory_list[TEXT("Description0")];
		info.Name1 = language_horseaccessory_list[TEXT("Name1")];
		info.Description1 = language_horseaccessory_list[TEXT("Description1")];
		info.Name2 = language_horseaccessory_list[TEXT("Name2")];
		info.Description2 = language_horseaccessory_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_horseaccessory_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_horseaccessory info;
	if(!Get_Frontend_txt_struct_language_horseaccessory(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Name0"), info.Name0);
	out.Add(TEXT("Description0"), info.Description0);
	out.Add(TEXT("Name1"), info.Name1);
	out.Add(TEXT("Description1"), info.Description1);
	out.Add(TEXT("Name2"), info.Name2);
	out.Add(TEXT("Description2"), info.Description2);
	return true;
}

bool Get_Frontend_txt_struct_language_horsearmor(int id, OUT Frontend_txt_struct_language_horsearmor& info)
{
	info.Id = 0;
	TMap<FString, FString> language_horsearmor_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_horsearmor"), id, language_horsearmor_list);
	if (language_horsearmor_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_horsearmor_list[TEXT("Id")]);
		info.Name0 = language_horsearmor_list[TEXT("Name0")];
		info.Description0 = language_horsearmor_list[TEXT("Description0")];
		info.Name1 = language_horsearmor_list[TEXT("Name1")];
		info.Description1 = language_horsearmor_list[TEXT("Description1")];
		info.Name2 = language_horsearmor_list[TEXT("Name2")];
		info.Description2 = language_horsearmor_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_horsearmor_ByLanguage(int id, OUT Frontend_txt_struct_horsearmor& info, int language)
{
	Frontend_txt_struct_language_horsearmor language_info;
	if(!Get_Frontend_txt_struct_language_horsearmor(id, language_info) || !Get_Frontend_txt_struct_horsearmor(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_horsearmor_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_horsearmor info;
	if(!Get_Frontend_txt_struct_horsearmor_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("fControlCoef"), FString::SanitizeFloat(info.fControlCoef));
	out.Add(TEXT("VelocityExtraValue"), FString::SanitizeFloat(info.VelocityExtraValue));
	out.Add(TEXT("HealthExtraValue"), FString::SanitizeFloat(info.HealthExtraValue));
	out.Add(TEXT("MetalFailPro"), FString::SanitizeFloat(info.MetalFailPro));
	out.Add(TEXT("LeatherFailPro"), FString::SanitizeFloat(info.LeatherFailPro));
	out.Add(TEXT("ClothFailPro"), FString::SanitizeFloat(info.ClothFailPro));
	out.Add(TEXT("MetalDefenseValue"), FString::FromInt(info.MetalDefenseValue));
	out.Add(TEXT("LeatherDefenseValue"), FString::FromInt(info.LeatherDefenseValue));
	out.Add(TEXT("ClothDefenseValue"), FString::FromInt(info.ClothDefenseValue));
	out.Add(TEXT("MetalMinusCutParam"), FString::SanitizeFloat(info.MetalMinusCutParam));
	out.Add(TEXT("LeatherMinusCutParam"), FString::SanitizeFloat(info.LeatherMinusCutParam));
	out.Add(TEXT("ClothMinusCutParam"), FString::SanitizeFloat(info.ClothMinusCutParam));
	out.Add(TEXT("MetalMinusStabParam"), FString::SanitizeFloat(info.MetalMinusStabParam));
	out.Add(TEXT("LeatherMinusStabParam"), FString::SanitizeFloat(info.LeatherMinusStabParam));
	out.Add(TEXT("ClothMinusStabParam"), FString::SanitizeFloat(info.ClothMinusStabParam));
	out.Add(TEXT("MetalMinusBluntParam"), FString::SanitizeFloat(info.MetalMinusBluntParam));
	out.Add(TEXT("LeatherMinusBluntParam"), FString::SanitizeFloat(info.LeatherMinusBluntParam));
	out.Add(TEXT("ClothMinusBluntParam"), FString::SanitizeFloat(info.ClothMinusBluntParam));
	out.Add(TEXT("Metal"), info.Metal);
	out.Add(TEXT("Leather"), info.Leather);
	out.Add(TEXT("Cloth"), info.Cloth);
	out.Add(TEXT("MetalDefenseDown"), FString::SanitizeFloat(info.MetalDefenseDown));
	out.Add(TEXT("LeatherDefenseDown"), FString::SanitizeFloat(info.LeatherDefenseDown));
	out.Add(TEXT("ClothDefenseDown"), FString::SanitizeFloat(info.ClothDefenseDown));
	out.Add(TEXT("FailProDown"), FString::SanitizeFloat(info.FailProDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("DefenseDownLv1"), FString::SanitizeFloat(info.DefenseDownLv1));
	out.Add(TEXT("DefenseDownLv2"), FString::SanitizeFloat(info.DefenseDownLv2));
	out.Add(TEXT("DefenseDownLv3"), FString::SanitizeFloat(info.DefenseDownLv3));
	out.Add(TEXT("DefenseDownLv4"), FString::SanitizeFloat(info.DefenseDownLv4));
	out.Add(TEXT("DefenseDownLv5"), FString::SanitizeFloat(info.DefenseDownLv5));
	out.Add(TEXT("DefenseDownLv6"), FString::SanitizeFloat(info.DefenseDownLv6));
	out.Add(TEXT("DefenseDownLv7"), FString::SanitizeFloat(info.DefenseDownLv7));
	out.Add(TEXT("DefenseDownLv8"), FString::SanitizeFloat(info.DefenseDownLv8));
	out.Add(TEXT("DefenseDownLv9"), FString::SanitizeFloat(info.DefenseDownLv9));
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	return true;
}

bool Get_Frontend_txt_struct_language_map_name(int id, OUT Frontend_txt_struct_language_map_name& info)
{
	info.Id = 0;
	TMap<FString, FString> language_map_name_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_map_name"), id, language_map_name_list);
	if (language_map_name_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_map_name_list[TEXT("Id")]);
		info.MapName0 = language_map_name_list[TEXT("MapName0")];
		info.MapName1 = language_map_name_list[TEXT("MapName1")];
		info.MapName2 = language_map_name_list[TEXT("MapName2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_map_name_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_map_name info;
	if(!Get_Frontend_txt_struct_language_map_name(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("MapName0"), info.MapName0);
	out.Add(TEXT("MapName1"), info.MapName1);
	out.Add(TEXT("MapName2"), info.MapName2);
	return true;
}

bool Get_Frontend_txt_struct_language_meleeweapon(int id, OUT Frontend_txt_struct_language_meleeweapon& info)
{
	info.Id = 0;
	TMap<FString, FString> language_meleeweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_meleeweapon"), id, language_meleeweapon_list);
	if (language_meleeweapon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_meleeweapon_list[TEXT("Id")]);
		info.Name0 = language_meleeweapon_list[TEXT("Name0")];
		info.Description0 = language_meleeweapon_list[TEXT("Description0")];
		info.Name1 = language_meleeweapon_list[TEXT("Name1")];
		info.Description1 = language_meleeweapon_list[TEXT("Description1")];
		info.Name2 = language_meleeweapon_list[TEXT("Name2")];
		info.Description2 = language_meleeweapon_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_meleeweapon_ByLanguage(int id, OUT Frontend_txt_struct_meleeweapon& info, int language)
{
	Frontend_txt_struct_language_meleeweapon language_info;
	if(!Get_Frontend_txt_struct_language_meleeweapon(id, language_info) || !Get_Frontend_txt_struct_meleeweapon(id, info))
	{
		return false;
	}

	info.ItemId = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	const FString* FrontWeaponPartName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.FrontWeaponPartName = language < 3 ? *FrontWeaponPartName_ptr[language] : TEXT("");

	const FString* BackWeaponPartName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.BackWeaponPartName = language < 3 ? *BackWeaponPartName_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_meleeweapon_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_meleeweapon info;
	if(!Get_Frontend_txt_struct_meleeweapon_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("ItemId"), FString::FromInt(info.ItemId));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("ScabbardMesh"), info.ScabbardMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("WeaponWeightLevel"), FString::FromInt(info.WeaponWeightLevel));
	out.Add(TEXT("nUpAttackType"), FString::FromInt(info.nUpAttackType));
	out.Add(TEXT("nDownAttackType"), FString::FromInt(info.nDownAttackType));
	out.Add(TEXT("nLeftAttackType"), FString::FromInt(info.nLeftAttackType));
	out.Add(TEXT("nRightAttackType"), FString::FromInt(info.nRightAttackType));
	out.Add(TEXT("AssaultDamageType"), FString::FromInt(info.AssaultDamageType));
	out.Add(TEXT("CutDamageFactor"), FString::SanitizeFloat(info.CutDamageFactor));
	out.Add(TEXT("PunctureDamageFactor"), FString::SanitizeFloat(info.PunctureDamageFactor));
	out.Add(TEXT("AssaultDamageFactor"), FString::SanitizeFloat(info.AssaultDamageFactor));
	out.Add(TEXT("McDamageFactor"), FString::SanitizeFloat(info.McDamageFactor));
	out.Add(TEXT("CutHurtMultiple"), FString::SanitizeFloat(info.CutHurtMultiple));
	out.Add(TEXT("PunctureHurtMultiple"), FString::SanitizeFloat(info.PunctureHurtMultiple));
	out.Add(TEXT("DamageShieldFactor"), FString::SanitizeFloat(info.DamageShieldFactor));
	out.Add(TEXT("Durableness"), FString::FromInt(info.Durableness));
	out.Add(TEXT("bIsBeginCharge"), FString::FromInt(info.bIsBeginCharge));
	out.Add(TEXT("bIsUseOnHorse"), FString::FromInt(info.bIsUseOnHorse));
	out.Add(TEXT("fWeaponLength"), FString::SanitizeFloat(info.fWeaponLength));
	out.Add(TEXT("WeaponCachedMaxRange"), FString::SanitizeFloat(info.WeaponCachedMaxRange));
	out.Add(TEXT("fFrontWeaponPart"), FString::SanitizeFloat(info.fFrontWeaponPart));
	out.Add(TEXT("fBackWeaponPartDamage"), FString::SanitizeFloat(info.fBackWeaponPartDamage));
	out.Add(TEXT("FrontWeaponPartName"), info.FrontWeaponPartName);
	out.Add(TEXT("BackWeaponPartName"), info.BackWeaponPartName);
	out.Add(TEXT("FiringTime"), FString::SanitizeFloat(info.FiringTime));
	out.Add(TEXT("WeaponFetchingTime"), FString::SanitizeFloat(info.WeaponFetchingTime));
	out.Add(TEXT("BeginDefendTime"), FString::SanitizeFloat(info.BeginDefendTime));
	out.Add(TEXT("DoHurtAnimTime"), FString::SanitizeFloat(info.DoHurtAnimTime));
	out.Add(TEXT("FailFireTime"), FString::SanitizeFloat(info.FailFireTime));
	out.Add(TEXT("SucDefendTime"), FString::SanitizeFloat(info.SucDefendTime));
	out.Add(TEXT("FailDefendTime"), FString::SanitizeFloat(info.FailDefendTime));
	out.Add(TEXT("SprintAttackTime"), FString::SanitizeFloat(info.SprintAttackTime));
	out.Add(TEXT("DoubleHitTime"), FString::SanitizeFloat(info.DoubleHitTime));
	out.Add(TEXT("DoubleHitEndTime"), FString::SanitizeFloat(info.DoubleHitEndTime));
	out.Add(TEXT("ForbidBreakTime"), FString::SanitizeFloat(info.ForbidBreakTime));
	out.Add(TEXT("PersistFetching1Time"), FString::SanitizeFloat(info.PersistFetching1Time));
	out.Add(TEXT("PersistFetching2Time"), FString::SanitizeFloat(info.PersistFetching2Time));
	out.Add(TEXT("Persist1WeaponRange"), FString::SanitizeFloat(info.Persist1WeaponRange));
	out.Add(TEXT("Persist2WeaponRange"), FString::SanitizeFloat(info.Persist2WeaponRange));
	out.Add(TEXT("Persist1WeaponWeightLevel"), FString::SanitizeFloat(info.Persist1WeaponWeightLevel));
	out.Add(TEXT("Persist2WeaponWeightLevel"), FString::SanitizeFloat(info.Persist2WeaponWeightLevel));
	out.Add(TEXT("Persist1DamageFactor"), FString::SanitizeFloat(info.Persist1DamageFactor));
	out.Add(TEXT("Persist2DamageFactor"), FString::SanitizeFloat(info.Persist2DamageFactor));
	out.Add(TEXT("MetalCutCamailValue"), FString::SanitizeFloat(info.MetalCutCamailValue));
	out.Add(TEXT("MetalStabCamailValue"), FString::SanitizeFloat(info.MetalStabCamailValue));
	out.Add(TEXT("MetalBluntCamailValue"), FString::SanitizeFloat(info.MetalBluntCamailValue));
	out.Add(TEXT("LeatherCutCamailValue"), FString::SanitizeFloat(info.LeatherCutCamailValue));
	out.Add(TEXT("LeatherStabCamailValue"), FString::SanitizeFloat(info.LeatherStabCamailValue));
	out.Add(TEXT("LeatherBluntCamailValue"), FString::SanitizeFloat(info.LeatherBluntCamailValue));
	out.Add(TEXT("ClothCutCamailValue"), FString::SanitizeFloat(info.ClothCutCamailValue));
	out.Add(TEXT("ClothStabCamailValue"), FString::SanitizeFloat(info.ClothStabCamailValue));
	out.Add(TEXT("ClothBluntCamailValue"), FString::SanitizeFloat(info.ClothBluntCamailValue));
	out.Add(TEXT("CannotAttackRange"), FString::SanitizeFloat(info.CannotAttackRange));
	out.Add(TEXT("ReleasePercent"), FString::FromInt(info.ReleasePercent));
	out.Add(TEXT("ReleaseParam"), FString::SanitizeFloat(info.ReleaseParam));
	out.Add(TEXT("ReleaseEndPercent"), FString::FromInt(info.ReleaseEndPercent));
	out.Add(TEXT("ReleaseEndParam"), FString::SanitizeFloat(info.ReleaseEndParam));
	out.Add(TEXT("nUpDefendType"), FString::FromInt(info.nUpDefendType));
	out.Add(TEXT("nDownDefendType"), FString::FromInt(info.nDownDefendType));
	out.Add(TEXT("nLeftDefendType"), FString::FromInt(info.nLeftDefendType));
	out.Add(TEXT("nRightDefendType"), FString::FromInt(info.nRightDefendType));
	out.Add(TEXT("CutDamageDown"), FString::SanitizeFloat(info.CutDamageDown));
	out.Add(TEXT("PunctureDamageDown"), FString::SanitizeFloat(info.PunctureDamageDown));
	out.Add(TEXT("AssaultDamageDown"), FString::SanitizeFloat(info.AssaultDamageDown));
	out.Add(TEXT("CamailDown"), FString::SanitizeFloat(info.CamailDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("DamageDownLv1"), FString::SanitizeFloat(info.DamageDownLv1));
	out.Add(TEXT("DamageDownLv2"), FString::SanitizeFloat(info.DamageDownLv2));
	out.Add(TEXT("DamageDownLv3"), FString::SanitizeFloat(info.DamageDownLv3));
	out.Add(TEXT("DamageDownLv4"), FString::SanitizeFloat(info.DamageDownLv4));
	out.Add(TEXT("DamageDownLv5"), FString::SanitizeFloat(info.DamageDownLv5));
	out.Add(TEXT("DamageDownLv6"), FString::SanitizeFloat(info.DamageDownLv6));
	out.Add(TEXT("DamageDownLv7"), FString::SanitizeFloat(info.DamageDownLv7));
	out.Add(TEXT("DamageDownLv8"), FString::SanitizeFloat(info.DamageDownLv8));
	out.Add(TEXT("DamageDownLv9"), FString::SanitizeFloat(info.DamageDownLv9));
	out.Add(TEXT("MeleeFeedbackSlomo"), FString::SanitizeFloat(info.MeleeFeedbackSlomo));
	out.Add(TEXT("MeleeFeedbackEndTime"), FString::SanitizeFloat(info.MeleeFeedbackEndTime));
	out.Add(TEXT("MeleeFeedbackEndPow"), FString::SanitizeFloat(info.MeleeFeedbackEndPow));
	out.Add(TEXT("nAnimPauseCount"), FString::FromInt(info.nAnimPauseCount));
	out.Add(TEXT("fAttackBlendTimeU"), FString::FromInt(info.fAttackBlendTimeU));
	out.Add(TEXT("nAttackBlendTypeU"), FString::FromInt(info.nAttackBlendTypeU));
	out.Add(TEXT("fAttackBlendTimeD"), FString::FromInt(info.fAttackBlendTimeD));
	out.Add(TEXT("nAttackBlendTypeD"), FString::FromInt(info.nAttackBlendTypeD));
	out.Add(TEXT("fAttackBlendTimeL"), FString::FromInt(info.fAttackBlendTimeL));
	out.Add(TEXT("nAttackBlendTypeL"), FString::FromInt(info.nAttackBlendTypeL));
	out.Add(TEXT("fAttackBlendTimeR"), FString::FromInt(info.fAttackBlendTimeR));
	out.Add(TEXT("nAttackBlendTypeR"), FString::FromInt(info.nAttackBlendTypeR));
	out.Add(TEXT("PushInitSpeed"), FString::SanitizeFloat(info.PushInitSpeed));
	out.Add(TEXT("PushCdTime"), FString::SanitizeFloat(info.PushCdTime));
	out.Add(TEXT("PushDistance"), FString::SanitizeFloat(info.PushDistance));
	out.Add(TEXT("PushAngle"), FString::SanitizeFloat(info.PushAngle));
	out.Add(TEXT("PushType"), FString::FromInt(info.PushType));
	out.Add(TEXT("BeginSprint"), FString::SanitizeFloat(info.BeginSprint));
	out.Add(TEXT("WaveVoice"), info.WaveVoice);
	out.Add(TEXT("fPlayerCauseAIDamageVal"), FString::SanitizeFloat(info.fPlayerCauseAIDamageVal));
	out.Add(TEXT("fPvPDamageRate"), FString::SanitizeFloat(info.fPvPDamageRate));
	out.Add(TEXT("fPveDamageFactor"), FString::SanitizeFloat(info.fPveDamageFactor));
	out.Add(TEXT("nIsPveWeapon"), FString::FromInt(info.nIsPveWeapon));
	out.Add(TEXT("fContinusCut2ndTime"), FString::SanitizeFloat(info.fContinusCut2ndTime));
	out.Add(TEXT("fContinusCut3rdTime"), FString::SanitizeFloat(info.fContinusCut3rdTime));
	out.Add(TEXT("fContinusCut2ndAttackGround"), FString::SanitizeFloat(info.fContinusCut2ndAttackGround));
	out.Add(TEXT("fContinusCut2ndAttackRide"), FString::SanitizeFloat(info.fContinusCut2ndAttackRide));
	out.Add(TEXT("fContinusCut3rdAttackGround"), FString::SanitizeFloat(info.fContinusCut3rdAttackGround));
	out.Add(TEXT("fContinusCut3rdAttackRide"), FString::SanitizeFloat(info.fContinusCut3rdAttackRide));
	out.Add(TEXT("nfContinusCut2ndWeight"), FString::FromInt(info.nfContinusCut2ndWeight));
	out.Add(TEXT("nfContinusCut3rdWeight"), FString::FromInt(info.nfContinusCut3rdWeight));
	out.Add(TEXT("fNewDoubleHitPos01"), FString::SanitizeFloat(info.fNewDoubleHitPos01));
	out.Add(TEXT("fNewDoubleHitLens01"), FString::SanitizeFloat(info.fNewDoubleHitLens01));
	out.Add(TEXT("fNewDoubleHitPos02"), FString::SanitizeFloat(info.fNewDoubleHitPos02));
	out.Add(TEXT("fNewDoubleHitLens02"), FString::SanitizeFloat(info.fNewDoubleHitLens02));
	out.Add(TEXT("fNewDoubleHitToNextPercent02"), FString::SanitizeFloat(info.fNewDoubleHitToNextPercent02));
	out.Add(TEXT("fNewDoubleHitTime02_Up"), FString::SanitizeFloat(info.fNewDoubleHitTime02_Up));
	out.Add(TEXT("fNewDoubleHitTime02_Down"), FString::SanitizeFloat(info.fNewDoubleHitTime02_Down));
	out.Add(TEXT("fNewDoubleHitTime02_Left"), FString::SanitizeFloat(info.fNewDoubleHitTime02_Left));
	out.Add(TEXT("fNewDoubleHitTime02_Right"), FString::SanitizeFloat(info.fNewDoubleHitTime02_Right));
	out.Add(TEXT("fNewDoubleHitTime03_Up  "), FString::SanitizeFloat(info.fNewDoubleHitTime03_Up  ));
	out.Add(TEXT("fNewDoubleHitTime03_Down"), FString::SanitizeFloat(info.fNewDoubleHitTime03_Down));
	out.Add(TEXT("fNewDoubleHitTime03_Left"), FString::SanitizeFloat(info.fNewDoubleHitTime03_Left));
	out.Add(TEXT("fNewDoubleHitTime03_Right"), FString::SanitizeFloat(info.fNewDoubleHitTime03_Right));
	out.Add(TEXT("fWithShieldAtkSpeedRate"), FString::SanitizeFloat(info.fWithShieldAtkSpeedRate));
	out.Add(TEXT("fHead_hurt_factor"), FString::SanitizeFloat(info.fHead_hurt_factor));
	out.Add(TEXT("fShoulder_hurt_factor"), FString::SanitizeFloat(info.fShoulder_hurt_factor));
	out.Add(TEXT("fChest_hurt_factor"), FString::SanitizeFloat(info.fChest_hurt_factor));
	out.Add(TEXT("fLeg_hurt_factor"), FString::SanitizeFloat(info.fLeg_hurt_factor));
	out.Add(TEXT("nSwitchWeapon"), FString::FromInt(info.nSwitchWeapon));
	out.Add(TEXT("nDifficuty"), FString::FromInt(info.nDifficuty));
	out.Add(TEXT("nCanPushBlock"), FString::FromInt(info.nCanPushBlock));
	out.Add(TEXT("fPushBlockPushTime"), FString::SanitizeFloat(info.fPushBlockPushTime));
	out.Add(TEXT("fPushBlockPullTime"), FString::SanitizeFloat(info.fPushBlockPullTime));
	out.Add(TEXT("nPushBlockWeight"), FString::FromInt(info.nPushBlockWeight));
	out.Add(TEXT("costfield"), FString::FromInt(info.costfield));
	out.Add(TEXT("Persist2AddCamailVal"), FString::SanitizeFloat(info.Persist2AddCamailVal));
	out.Add(TEXT("nFurySkillId"), FString::FromInt(info.nFurySkillId));
	out.Add(TEXT("nFuryBaoQiSkillId"), FString::FromInt(info.nFuryBaoQiSkillId));
	out.Add(TEXT("nAttackCount_Normal"), FString::FromInt(info.nAttackCount_Normal));
	out.Add(TEXT("nAttackCount_Persist1"), FString::FromInt(info.nAttackCount_Persist1));
	out.Add(TEXT("nAttackCount_Persist2"), FString::FromInt(info.nAttackCount_Persist2));
	out.Add(TEXT("fRideAttackSpeedRate"), FString::SanitizeFloat(info.fRideAttackSpeedRate));
	out.Add(TEXT("nRideEruptSkillId"), FString::FromInt(info.nRideEruptSkillId));
	out.Add(TEXT("nRideJumpEruptSkillId"), FString::FromInt(info.nRideJumpEruptSkillId));
	out.Add(TEXT("nRidePushSkillId"), FString::FromInt(info.nRidePushSkillId));
	out.Add(TEXT("fRideEruptCdTimeSec"), FString::SanitizeFloat(info.fRideEruptCdTimeSec));
	out.Add(TEXT("fSprintTimeSec"), FString::SanitizeFloat(info.fSprintTimeSec));
	out.Add(TEXT("fSprintTimeCdSec"), FString::SanitizeFloat(info.fSprintTimeCdSec));
	out.Add(TEXT("nSprintMaxYawAim"), FString::FromInt(info.nSprintMaxYawAim));
	out.Add(TEXT("fSprintSpeed"), FString::SanitizeFloat(info.fSprintSpeed));
	out.Add(TEXT("fTakeOffTime"), FString::SanitizeFloat(info.fTakeOffTime));
	out.Add(TEXT("fTakeOutTime"), FString::SanitizeFloat(info.fTakeOutTime));
	out.Add(TEXT("fGroundRotationFactor"), FString::SanitizeFloat(info.fGroundRotationFactor));
	out.Add(TEXT("fHorseDamageRate"), FString::SanitizeFloat(info.fHorseDamageRate));
	out.Add(TEXT("fAICauseAIDamageShieldFactor"), FString::SanitizeFloat(info.fAICauseAIDamageShieldFactor));
	return true;
}

bool Get_Frontend_txt_struct_language_message(int id, OUT Frontend_txt_struct_language_message& info)
{
	info.Id = 0;
	TMap<FString, FString> language_message_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_message"), id, language_message_list);
	if (language_message_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_message_list[TEXT("Id")]);
		info.Desc = language_message_list[TEXT("Desc")];
		info.Content0 = language_message_list[TEXT("Content0")];
		info.Content1 = language_message_list[TEXT("Content1")];
		info.Content2 = language_message_list[TEXT("Content2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_message_ByLanguage(int id, OUT Frontend_txt_struct_message& info, int language)
{
	Frontend_txt_struct_language_message language_info;
	if(!Get_Frontend_txt_struct_language_message(id, language_info) || !Get_Frontend_txt_struct_message(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* sContent_ptr[]=
	{
		&language_info.Content0,
		&language_info.Content1,
		&language_info.Content2,
	};
	info.sContent = language < 3 ? *sContent_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_message_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_message info;
	if(!Get_Frontend_txt_struct_message_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("nTimeLast"), FString::FromInt(info.nTimeLast));
	out.Add(TEXT("nTimeCD"), FString::FromInt(info.nTimeCD));
	out.Add(TEXT("nType"), FString::FromInt(info.nType));
	out.Add(TEXT("nColor"), FString::FromInt(info.nColor));
	out.Add(TEXT("sContent"), info.sContent);
	return true;
}

bool Get_Frontend_txt_struct_language_message_left_right(int id, OUT Frontend_txt_struct_language_message_left_right& info)
{
	info.Id = 0;
	TMap<FString, FString> language_message_left_right_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_message_left_right"), id, language_message_left_right_list);
	if (language_message_left_right_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_message_left_right_list[TEXT("Id")]);
		info.Main0 = language_message_left_right_list[TEXT("Main0")];
		info.Back0 = language_message_left_right_list[TEXT("Back0")];
		info.Main1 = language_message_left_right_list[TEXT("Main1")];
		info.Back1 = language_message_left_right_list[TEXT("Back1")];
		info.Main2 = language_message_left_right_list[TEXT("Main2")];
		info.Back2 = language_message_left_right_list[TEXT("Back2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_message_left_right_ByLanguage(int id, OUT Frontend_txt_struct_message_left_right& info, int language)
{
	Frontend_txt_struct_language_message_left_right language_info;
	if(!Get_Frontend_txt_struct_language_message_left_right(id, language_info) || !Get_Frontend_txt_struct_message_left_right(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* szMain_ptr[]=
	{
		&language_info.Main0,
		&language_info.Main1,
		&language_info.Main2,
	};
	info.szMain = language < 3 ? *szMain_ptr[language] : TEXT("");

	const FString* szBack_ptr[]=
	{
		&language_info.Back0,
		&language_info.Back1,
		&language_info.Back2,
	};
	info.szBack = language < 3 ? *szBack_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_message_left_right_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_message_left_right info;
	if(!Get_Frontend_txt_struct_message_left_right_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("nTimeCD"), FString::FromInt(info.nTimeCD));
	out.Add(TEXT("nLeftRight"), FString::FromInt(info.nLeftRight));
	out.Add(TEXT("szMain"), info.szMain);
	out.Add(TEXT("szBack"), info.szBack);
	out.Add(TEXT("nFujiang"), FString::FromInt(info.nFujiang));
	return true;
}

bool Get_Frontend_txt_struct_language_modename(int id, OUT Frontend_txt_struct_language_modename& info)
{
	info.modeId = 0;
	TMap<FString, FString> language_modename_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_modename"), id, language_modename_list);
	if (language_modename_list.Num() > 0)
	{
		info.modeId = FCString::Atoi(*language_modename_list[TEXT("modeId")]);
		info.szModeName0 = language_modename_list[TEXT("szModeName0")];
		info.szModeName1 = language_modename_list[TEXT("szModeName1")];
		info.szModeName2 = language_modename_list[TEXT("szModeName2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_modename_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_modename info;
	if(!Get_Frontend_txt_struct_language_modename(id, info))
	{
		return false;
	}

	out.Add(TEXT("modeId"), FString::FromInt(info.modeId));
	out.Add(TEXT("szModeName0"), info.szModeName0);
	out.Add(TEXT("szModeName1"), info.szModeName1);
	out.Add(TEXT("szModeName2"), info.szModeName2);
	return true;
}

bool Get_Frontend_txt_struct_language_neterrortype(int id, OUT Frontend_txt_struct_language_neterrortype& info)
{
	info.Id = 0;
	TMap<FString, FString> language_neterrortype_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_neterrortype"), id, language_neterrortype_list);
	if (language_neterrortype_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_neterrortype_list[TEXT("Id")]);
		info.ErrInfo0 = language_neterrortype_list[TEXT("ErrInfo0")];
		info.ErrInfo1 = language_neterrortype_list[TEXT("ErrInfo1")];
		info.ErrInfo2 = language_neterrortype_list[TEXT("ErrInfo2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_neterrortype_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_neterrortype info;
	if(!Get_Frontend_txt_struct_language_neterrortype(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ErrInfo0"), info.ErrInfo0);
	out.Add(TEXT("ErrInfo1"), info.ErrInfo1);
	out.Add(TEXT("ErrInfo2"), info.ErrInfo2);
	return true;
}

bool Get_Frontend_txt_struct_language_obstacle(int id, OUT Frontend_txt_struct_language_obstacle& info)
{
	info.Id = 0;
	TMap<FString, FString> language_obstacle_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_obstacle"), id, language_obstacle_list);
	if (language_obstacle_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_obstacle_list[TEXT("Id")]);
		info.Name0 = language_obstacle_list[TEXT("Name0")];
		info.Description0 = language_obstacle_list[TEXT("Description0")];
		info.Name1 = language_obstacle_list[TEXT("Name1")];
		info.Description1 = language_obstacle_list[TEXT("Description1")];
		info.Name2 = language_obstacle_list[TEXT("Name2")];
		info.Description2 = language_obstacle_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_obstacle_ByLanguage(int id, OUT Frontend_txt_struct_obstacle& info, int language)
{
	Frontend_txt_struct_language_obstacle language_info;
	if(!Get_Frontend_txt_struct_language_obstacle(id, language_info) || !Get_Frontend_txt_struct_obstacle(id, info))
	{
		return false;
	}

	info.Id = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_obstacle_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_obstacle info;
	if(!Get_Frontend_txt_struct_obstacle_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("EnemySkeletalMesh"), info.EnemySkeletalMesh);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("AnimSet"), info.AnimSet);
	out.Add(TEXT("PhysicAsset"), info.PhysicAsset);
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("nHitHealthDestroySelf"), FString::FromInt(info.nHitHealthDestroySelf));
	out.Add(TEXT("nBaseHit"), FString::FromInt(info.nBaseHit));
	out.Add(TEXT("nHorseBaseHit"), FString::FromInt(info.nHorseBaseHit));
	out.Add(TEXT("nRaiseHoovesHit"), FString::FromInt(info.nRaiseHoovesHit));
	out.Add(TEXT("fBeDetected"), FString::FromInt(info.fBeDetected));
	out.Add(TEXT("nWeaponKind"), FString::FromInt(info.nWeaponKind));
	out.Add(TEXT("fWeight"), FString::FromInt(info.fWeight));
	out.Add(TEXT("Radius"), FString::SanitizeFloat(info.Radius));
	out.Add(TEXT("fSpeed1Val"), FString::FromInt(info.fSpeed1Val));
	out.Add(TEXT("nSpeed1Hurt"), FString::FromInt(info.nSpeed1Hurt));
	out.Add(TEXT("nSpeed2Hurt"), FString::FromInt(info.nSpeed2Hurt));
	return true;
}

bool Get_Frontend_txt_struct_language_pve_monster(int id, OUT Frontend_txt_struct_language_pve_monster& info)
{
	info.Id = 0;
	TMap<FString, FString> language_pve_monster_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_pve_monster"), id, language_pve_monster_list);
	if (language_pve_monster_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_pve_monster_list[TEXT("Id")]);
		info.Name0 = language_pve_monster_list[TEXT("Name0")];
		info.Description0 = language_pve_monster_list[TEXT("Description0")];
		info.Name1 = language_pve_monster_list[TEXT("Name1")];
		info.Description1 = language_pve_monster_list[TEXT("Description1")];
		info.Name2 = language_pve_monster_list[TEXT("Name2")];
		info.Description2 = language_pve_monster_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_pve_monster_ByLanguage(int id, OUT Frontend_txt_struct_pve_monster& info, int language)
{
	Frontend_txt_struct_language_pve_monster language_info;
	if(!Get_Frontend_txt_struct_language_pve_monster(id, language_info) || !Get_Frontend_txt_struct_pve_monster(id, info))
	{
		return false;
	}

	info.MonsterID = language_info.Id;

	const FString* MonsterName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.MonsterName = language < 3 ? *MonsterName_ptr[language] : TEXT("");

	const FString* MonsterDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.MonsterDescription = language < 3 ? *MonsterDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_pve_monster_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_pve_monster info;
	if(!Get_Frontend_txt_struct_pve_monster_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("MonsterID"), FString::FromInt(info.MonsterID));
	out.Add(TEXT("MonsterName"), info.MonsterName);
	out.Add(TEXT("MonsterDescription"), info.MonsterDescription);
	out.Add(TEXT("MonsterModelType"), FString::FromInt(info.MonsterModelType));
	out.Add(TEXT("nMonsterKind"), FString::FromInt(info.nMonsterKind));
	out.Add(TEXT("ArmorType"), FString::FromInt(info.ArmorType));
	out.Add(TEXT("SpawnType"), FString::FromInt(info.SpawnType));
	out.Add(TEXT("nAwardPoint"), FString::FromInt(info.nAwardPoint));
	out.Add(TEXT("fBumpMass"), FString::SanitizeFloat(info.fBumpMass));
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("nFlagID"), info.nFlagID);
	out.Add(TEXT("IconTexture"), info.IconTexture);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("nHealth"), FString::FromInt(info.nHealth));
	out.Add(TEXT("MaxSpeed"), FString::SanitizeFloat(info.MaxSpeed));
	out.Add(TEXT("fAiHorseSpeedRate"), FString::SanitizeFloat(info.fAiHorseSpeedRate));
	out.Add(TEXT("fAiHorseAcceRate"), FString::SanitizeFloat(info.fAiHorseAcceRate));
	out.Add(TEXT("fAiHorseRotationRate"), FString::SanitizeFloat(info.fAiHorseRotationRate));
	out.Add(TEXT("fAiAttackSpeedRate"), FString::SanitizeFloat(info.fAiAttackSpeedRate));
	out.Add(TEXT("fRemoteAtkFactor"), FString::SanitizeFloat(info.fRemoteAtkFactor));
	out.Add(TEXT("RotationRate"), FString::SanitizeFloat(info.RotationRate));
	out.Add(TEXT("fAccelRate"), FString::SanitizeFloat(info.fAccelRate));
	out.Add(TEXT("DefenseValue"), FString::SanitizeFloat(info.DefenseValue));
	out.Add(TEXT("DamageValue"), FString::SanitizeFloat(info.DamageValue));
	out.Add(TEXT("fPlayerCauseAIShieldVal"), FString::SanitizeFloat(info.fPlayerCauseAIShieldVal));
	out.Add(TEXT("AlertRange1"), FString::SanitizeFloat(info.AlertRange1));
	out.Add(TEXT("AlertRange2"), FString::SanitizeFloat(info.AlertRange2));
	out.Add(TEXT("AlertRange3"), FString::SanitizeFloat(info.AlertRange3));
	out.Add(TEXT("AlertRange4"), FString::SanitizeFloat(info.AlertRange4));
	out.Add(TEXT("WeaponID1"), FString::FromInt(info.WeaponID1));
	out.Add(TEXT("WeaponID2"), FString::FromInt(info.WeaponID2));
	out.Add(TEXT("WeaponID3"), FString::FromInt(info.WeaponID3));
	out.Add(TEXT("WeaponID4"), FString::FromInt(info.WeaponID4));
	out.Add(TEXT("HeadEquipID"), FString::FromInt(info.HeadEquipID));
	out.Add(TEXT("ShoulderEquipID"), FString::FromInt(info.ShoulderEquipID));
	out.Add(TEXT("UpBodyEquipID"), FString::FromInt(info.UpBodyEquipID));
	out.Add(TEXT("DownBodyEquipID"), FString::FromInt(info.DownBodyEquipID));
	out.Add(TEXT("HorseID"), FString::FromInt(info.HorseID));
	out.Add(TEXT("HorseEquipID"), FString::FromInt(info.HorseEquipID));
	out.Add(TEXT("fHorseLifeRate"), FString::SanitizeFloat(info.fHorseLifeRate));
	out.Add(TEXT("DetectRate"), FString::SanitizeFloat(info.DetectRate));
	out.Add(TEXT("BeDetectedRate"), FString::SanitizeFloat(info.BeDetectedRate));
	out.Add(TEXT("fDefendRange"), FString::SanitizeFloat(info.fDefendRange));
	out.Add(TEXT("fSupportRange"), FString::SanitizeFloat(info.fSupportRange));
	out.Add(TEXT("szForceMovePos"), info.szForceMovePos);
	out.Add(TEXT("AlertHewupPercent"), FString::SanitizeFloat(info.AlertHewupPercent));
	out.Add(TEXT("AlertBlockPercent"), FString::SanitizeFloat(info.AlertBlockPercent));
	out.Add(TEXT("ShotOffsetRangeX"), FString::SanitizeFloat(info.ShotOffsetRangeX));
	out.Add(TEXT("ShotOffsetRangeY"), FString::SanitizeFloat(info.ShotOffsetRangeY));
	out.Add(TEXT("fAttackOrDefendProb_0"), FString::SanitizeFloat(info.fAttackOrDefendProb_0));
	out.Add(TEXT("fAttackOrDefendProb_1"), FString::SanitizeFloat(info.fAttackOrDefendProb_1));
	out.Add(TEXT("fAttackOrDefendProb_2"), FString::SanitizeFloat(info.fAttackOrDefendProb_2));
	out.Add(TEXT("fAttackOrDefendProb_3"), FString::SanitizeFloat(info.fAttackOrDefendProb_3));
	out.Add(TEXT("fMeleeAttackIntervalTime"), FString::SanitizeFloat(info.fMeleeAttackIntervalTime));
	out.Add(TEXT("fRangeAttackIntervalTime"), FString::SanitizeFloat(info.fRangeAttackIntervalTime));
	out.Add(TEXT("CausePlayerDamage"), FString::SanitizeFloat(info.CausePlayerDamage));
	out.Add(TEXT("CauseAIDamage"), FString::SanitizeFloat(info.CauseAIDamage));
	out.Add(TEXT("CauseHorseDamage"), FString::SanitizeFloat(info.CauseHorseDamage));
	out.Add(TEXT("CauseBossDamage"), FString::SanitizeFloat(info.CauseBossDamage));
	out.Add(TEXT("PenetrateCut"), FString::SanitizeFloat(info.PenetrateCut));
	out.Add(TEXT("PenetratePuncture"), FString::SanitizeFloat(info.PenetratePuncture));
	out.Add(TEXT("PenetrateBlunt"), FString::SanitizeFloat(info.PenetrateBlunt));
	out.Add(TEXT("nTacticalMovePercent"), FString::SanitizeFloat(info.nTacticalMovePercent));
	out.Add(TEXT("Skill1"), info.Skill1);
	out.Add(TEXT("Skill2"), info.Skill2);
	out.Add(TEXT("Skill3"), info.Skill3);
	out.Add(TEXT("Skill4"), info.Skill4);
	out.Add(TEXT("Skill5"), info.Skill5);
	out.Add(TEXT("Skill6"), info.Skill6);
	out.Add(TEXT("Skill7"), info.Skill7);
	out.Add(TEXT("Skill8"), info.Skill8);
	out.Add(TEXT("Skill9"), info.Skill9);
	out.Add(TEXT("Skill10"), info.Skill10);
	out.Add(TEXT("Skill11"), info.Skill11);
	out.Add(TEXT("Skill12"), info.Skill12);
	out.Add(TEXT("Skill13"), info.Skill13);
	out.Add(TEXT("Skill14"), info.Skill14);
	out.Add(TEXT("Skill15"), info.Skill15);
	out.Add(TEXT("fDefenseRemoteAtk"), FString::SanitizeFloat(info.fDefenseRemoteAtk));
	out.Add(TEXT("nNationType"), FString::FromInt(info.nNationType));
	return true;
}

bool Get_Frontend_txt_struct_language_rangedweapon(int id, OUT Frontend_txt_struct_language_rangedweapon& info)
{
	info.Id = 0;
	TMap<FString, FString> language_rangedweapon_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_rangedweapon"), id, language_rangedweapon_list);
	if (language_rangedweapon_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_rangedweapon_list[TEXT("Id")]);
		info.Name0 = language_rangedweapon_list[TEXT("Name0")];
		info.Description0 = language_rangedweapon_list[TEXT("Description0")];
		info.Name1 = language_rangedweapon_list[TEXT("Name1")];
		info.Description1 = language_rangedweapon_list[TEXT("Description1")];
		info.Name2 = language_rangedweapon_list[TEXT("Name2")];
		info.Description2 = language_rangedweapon_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_rangedweapon_ByLanguage(int id, OUT Frontend_txt_struct_rangedweapon& info, int language)
{
	Frontend_txt_struct_language_rangedweapon language_info;
	if(!Get_Frontend_txt_struct_language_rangedweapon(id, language_info) || !Get_Frontend_txt_struct_rangedweapon(id, info))
	{
		return false;
	}

	info.ItemId = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_rangedweapon_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_rangedweapon info;
	if(!Get_Frontend_txt_struct_rangedweapon_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("ItemId"), FString::FromInt(info.ItemId));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("WeaponWeightLevel"), FString::FromInt(info.WeaponWeightLevel));
	out.Add(TEXT("ShootDamageFactor"), FString::SanitizeFloat(info.ShootDamageFactor));
	out.Add(TEXT("RemoteHurtMultiple"), FString::SanitizeFloat(info.RemoteHurtMultiple));
	out.Add(TEXT("DamageShieldFactor"), FString::SanitizeFloat(info.DamageShieldFactor));
	out.Add(TEXT("FetchingTime"), FString::SanitizeFloat(info.FetchingTime));
	out.Add(TEXT("FiringTime"), FString::SanitizeFloat(info.FiringTime));
	out.Add(TEXT("HoldingTime"), FString::SanitizeFloat(info.HoldingTime));
	out.Add(TEXT("iFirstMinRadius"), FString::SanitizeFloat(info.iFirstMinRadius));
	out.Add(TEXT("iSecondMinRadius"), FString::SanitizeFloat(info.iSecondMinRadius));
	out.Add(TEXT("fPresistHoldingToSpreadTime"), FString::SanitizeFloat(info.fPresistHoldingToSpreadTime));
	out.Add(TEXT("iSpreadRadius"), FString::SanitizeFloat(info.iSpreadRadius));
	out.Add(TEXT("SpreadMoveFactorOnGround"), FString::SanitizeFloat(info.SpreadMoveFactorOnGround));
	out.Add(TEXT("SpreadMoveFactorOnHorse"), FString::SanitizeFloat(info.SpreadMoveFactorOnHorse));
	out.Add(TEXT("fSpeedFactorBase"), FString::SanitizeFloat(info.fSpeedFactorBase));
	out.Add(TEXT("bSpreadAble"), FString::FromInt(info.bSpreadAble));
	out.Add(TEXT("nMaxFireRange"), FString::FromInt(info.nMaxFireRange));
	out.Add(TEXT("DoHurtAnimTime"), FString::SanitizeFloat(info.DoHurtAnimTime));
	out.Add(TEXT("WeaponCachedMaxRange"), FString::FromInt(info.WeaponCachedMaxRange));
	out.Add(TEXT("fHoldLvPerscent"), FString::SanitizeFloat(info.fHoldLvPerscent));
	out.Add(TEXT("fOriginalSpeed"), FString::SanitizeFloat(info.fOriginalSpeed));
	out.Add(TEXT("fSecondSpeed"), FString::SanitizeFloat(info.fSecondSpeed));
	out.Add(TEXT("Persist1WeaponWeightLevel"), FString::FromInt(info.Persist1WeaponWeightLevel));
	out.Add(TEXT("Persist2WeaponWeightLevel"), FString::FromInt(info.Persist2WeaponWeightLevel));
	out.Add(TEXT("AmmoID"), FString::FromInt(info.AmmoID));
	out.Add(TEXT("vecHitOffsetX"), FString::SanitizeFloat(info.vecHitOffsetX));
	out.Add(TEXT("vecHitOffsetY"), FString::SanitizeFloat(info.vecHitOffsetY));
	out.Add(TEXT("kind"), FString::FromInt(info.kind));
	out.Add(TEXT("CannotAttackRange"), FString::FromInt(info.CannotAttackRange));
	out.Add(TEXT("bIsUseOnHorse"), FString::FromInt(info.bIsUseOnHorse));
	out.Add(TEXT("LoadAmmoCount"), FString::FromInt(info.LoadAmmoCount));
	out.Add(TEXT("LoadAmmoTime"), FString::SanitizeFloat(info.LoadAmmoTime));
	out.Add(TEXT("ShootDamageDown"), FString::SanitizeFloat(info.ShootDamageDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("DamageDownLv1"), FString::SanitizeFloat(info.DamageDownLv1));
	out.Add(TEXT("DamageDownLv2"), FString::SanitizeFloat(info.DamageDownLv2));
	out.Add(TEXT("DamageDownLv3"), FString::SanitizeFloat(info.DamageDownLv3));
	out.Add(TEXT("DamageDownLv4"), FString::SanitizeFloat(info.DamageDownLv4));
	out.Add(TEXT("DamageDownLv5"), FString::SanitizeFloat(info.DamageDownLv5));
	out.Add(TEXT("DamageDownLv6"), FString::SanitizeFloat(info.DamageDownLv6));
	out.Add(TEXT("DamageDownLv7"), FString::SanitizeFloat(info.DamageDownLv7));
	out.Add(TEXT("DamageDownLv8"), FString::SanitizeFloat(info.DamageDownLv8));
	out.Add(TEXT("DamageDownLv9"), FString::SanitizeFloat(info.DamageDownLv9));
	out.Add(TEXT("ShortRange"), FString::FromInt(info.ShortRange));
	out.Add(TEXT("LongRange"), FString::FromInt(info.LongRange));
	out.Add(TEXT("ShortRangeDamage"), FString::SanitizeFloat(info.ShortRangeDamage));
	out.Add(TEXT("LongRangeDamage"), FString::SanitizeFloat(info.LongRangeDamage));
	out.Add(TEXT("HighLowDamage"), FString::SanitizeFloat(info.HighLowDamage));
	out.Add(TEXT("PushInitSpeed"), FString::SanitizeFloat(info.PushInitSpeed));
	out.Add(TEXT("PushCdTime"), FString::FromInt(info.PushCdTime));
	out.Add(TEXT("PushDistance"), FString::SanitizeFloat(info.PushDistance));
	out.Add(TEXT("PushAngle"), FString::FromInt(info.PushAngle));
	out.Add(TEXT("PushType"), FString::FromInt(info.PushType));
	out.Add(TEXT("WaveVoice"), info.WaveVoice);
	out.Add(TEXT("fPlayerCauseAIDamageVal"), FString::SanitizeFloat(info.fPlayerCauseAIDamageVal));
	out.Add(TEXT("fPvPDamageRate"), FString::SanitizeFloat(info.fPvPDamageRate));
	out.Add(TEXT("fPveDamageFactor"), FString::FromInt(info.fPveDamageFactor));
	out.Add(TEXT("nIsPveWeapon"), FString::FromInt(info.nIsPveWeapon));
	out.Add(TEXT("fWithShieldAtkSpeedRate"), FString::SanitizeFloat(info.fWithShieldAtkSpeedRate));
	out.Add(TEXT("fHead_hurt_factor"), FString::SanitizeFloat(info.fHead_hurt_factor));
	out.Add(TEXT("fShoulder_hurt_factor"), FString::FromInt(info.fShoulder_hurt_factor));
	out.Add(TEXT("fChest_hurt_factor"), FString::SanitizeFloat(info.fChest_hurt_factor));
	out.Add(TEXT("fLeg_hurt_factor"), FString::SanitizeFloat(info.fLeg_hurt_factor));
	out.Add(TEXT("nSingleComboNum"), FString::FromInt(info.nSingleComboNum));
	out.Add(TEXT("fSingleComboShootTime"), FString::SanitizeFloat(info.fSingleComboShootTime));
	out.Add(TEXT("nSwitchWeapon"), FString::FromInt(info.nSwitchWeapon));
	out.Add(TEXT("nDifficuty"), FString::FromInt(info.nDifficuty));
	out.Add(TEXT("fComboShotAtkDmgFactor"), FString::SanitizeFloat(info.fComboShotAtkDmgFactor));
	out.Add(TEXT("costfield"), FString::FromInt(info.costfield));
	out.Add(TEXT("fCamailValue"), FString::FromInt(info.fCamailValue));
	out.Add(TEXT("Persist2AddCamailVal"), FString::FromInt(info.Persist2AddCamailVal));
	out.Add(TEXT("nFurySkillId"), FString::FromInt(info.nFurySkillId));
	out.Add(TEXT("nFuryBaoQiSkillId"), FString::FromInt(info.nFuryBaoQiSkillId));
	out.Add(TEXT("fRideAttackSpeedRate"), FString::SanitizeFloat(info.fRideAttackSpeedRate));
	out.Add(TEXT("nQSkillId"), FString::FromInt(info.nQSkillId));
	out.Add(TEXT("fRideShotCdTimeSec"), FString::SanitizeFloat(info.fRideShotCdTimeSec));
	out.Add(TEXT("fTakeOffTime"), FString::SanitizeFloat(info.fTakeOffTime));
	out.Add(TEXT("fTakeOutTime"), FString::SanitizeFloat(info.fTakeOutTime));
	out.Add(TEXT("fGroundRotationFactor"), FString::SanitizeFloat(info.fGroundRotationFactor));
	out.Add(TEXT("fHorseDamageRate"), FString::SanitizeFloat(info.fHorseDamageRate));
	return true;
}

bool Get_Frontend_txt_struct_language_savefile_error(int id, OUT Frontend_txt_struct_language_savefile_error& info)
{
	info.Id = 0;
	TMap<FString, FString> language_savefile_error_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_savefile_error"), id, language_savefile_error_list);
	if (language_savefile_error_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_savefile_error_list[TEXT("Id")]);
		info.ErrInfo0 = language_savefile_error_list[TEXT("ErrInfo0")];
		info.ErrInfo1 = language_savefile_error_list[TEXT("ErrInfo1")];
		info.ErrInfo2 = language_savefile_error_list[TEXT("ErrInfo2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_savefile_error_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_savefile_error info;
	if(!Get_Frontend_txt_struct_language_savefile_error(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("ErrInfo0"), info.ErrInfo0);
	out.Add(TEXT("ErrInfo1"), info.ErrInfo1);
	out.Add(TEXT("ErrInfo2"), info.ErrInfo2);
	return true;
}

bool Get_Frontend_txt_struct_language_save_filename(int id, OUT Frontend_txt_struct_language_save_filename& info)
{
	info.Id = 0;
	TMap<FString, FString> language_save_filename_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_save_filename"), id, language_save_filename_list);
	if (language_save_filename_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_save_filename_list[TEXT("Id")]);
		info.FileName0 = language_save_filename_list[TEXT("FileName0")];
		info.FileName1 = language_save_filename_list[TEXT("FileName1")];
		info.FileName2 = language_save_filename_list[TEXT("FileName2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_save_filename_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_save_filename info;
	if(!Get_Frontend_txt_struct_language_save_filename(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("FileName0"), info.FileName0);
	out.Add(TEXT("FileName1"), info.FileName1);
	out.Add(TEXT("FileName2"), info.FileName2);
	return true;
}

bool Get_Frontend_txt_struct_language_scene_default(int id, OUT Frontend_txt_struct_language_scene_default& info)
{
	info.Id = 0;
	TMap<FString, FString> language_scene_default_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_scene_default"), id, language_scene_default_list);
	if (language_scene_default_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_scene_default_list[TEXT("Id")]);
		info.MatchResult0 = language_scene_default_list[TEXT("MatchResult0")];
		info.MatchResult1 = language_scene_default_list[TEXT("MatchResult1")];
		info.MatchResult2 = language_scene_default_list[TEXT("MatchResult2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_scene_default_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_scene_default info;
	if(!Get_Frontend_txt_struct_language_scene_default(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("MatchResult0"), info.MatchResult0);
	out.Add(TEXT("MatchResult1"), info.MatchResult1);
	out.Add(TEXT("MatchResult2"), info.MatchResult2);
	return true;
}

bool Get_Frontend_txt_struct_language_shield(int id, OUT Frontend_txt_struct_language_shield& info)
{
	info.Id = 0;
	TMap<FString, FString> language_shield_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_shield"), id, language_shield_list);
	if (language_shield_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_shield_list[TEXT("Id")]);
		info.Name0 = language_shield_list[TEXT("Name0")];
		info.Description0 = language_shield_list[TEXT("Description0")];
		info.Name1 = language_shield_list[TEXT("Name1")];
		info.Description1 = language_shield_list[TEXT("Description1")];
		info.Name2 = language_shield_list[TEXT("Name2")];
		info.Description2 = language_shield_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_shield_ByLanguage(int id, OUT Frontend_txt_struct_shield& info, int language)
{
	Frontend_txt_struct_language_shield language_info;
	if(!Get_Frontend_txt_struct_language_shield(id, language_info) || !Get_Frontend_txt_struct_shield(id, info))
	{
		return false;
	}

	info.ItemID = language_info.Id;

	const FString* ItemName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ItemName = language < 3 ? *ItemName_ptr[language] : TEXT("");

	const FString* ItemDescription_ptr[]=
	{
		&language_info.Description0,
		&language_info.Description1,
		&language_info.Description2,
	};
	info.ItemDescription = language < 3 ? *ItemDescription_ptr[language] : TEXT("");

	const FString* ShieldStyleName_ptr[]=
	{
		&language_info.Name0,
		&language_info.Name1,
		&language_info.Name2,
	};
	info.ShieldStyleName = language < 3 ? *ShieldStyleName_ptr[language] : TEXT("");

	return true;
}

bool Get_Frontend_txt_struct_shield_to_map(int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();
	Frontend_txt_struct_shield info;
	if(!Get_Frontend_txt_struct_shield_ByLanguage(id, info, language))
	{
		return false;
	}

	out.Add(TEXT("ItemID"), FString::FromInt(info.ItemID));
	out.Add(TEXT("ItemName"), info.ItemName);
	out.Add(TEXT("ItemDescription"), info.ItemDescription);
	out.Add(TEXT("SkeletalMesh"), info.SkeletalMesh);
	out.Add(TEXT("Level"), FString::FromInt(info.Level));
	out.Add(TEXT("WeaponWeight"), FString::SanitizeFloat(info.WeaponWeight));
	out.Add(TEXT("WeaponWeightLevel"), FString::FromInt(info.WeaponWeightLevel));
	out.Add(TEXT("ResistHit"), FString::FromInt(info.ResistHit));
	out.Add(TEXT("Durableness"), FString::FromInt(info.Durableness));
	out.Add(TEXT("bIsUseOnHorse"), FString::FromInt(info.bIsUseOnHorse));
	out.Add(TEXT("UpDefendShieldRange"), FString::SanitizeFloat(info.UpDefendShieldRange));
	out.Add(TEXT("DownDefendShieldRange"), FString::SanitizeFloat(info.DownDefendShieldRange));
	out.Add(TEXT("LeftDefendShieldRange"), FString::SanitizeFloat(info.LeftDefendShieldRange));
	out.Add(TEXT("RightDefendShieldRange"), FString::SanitizeFloat(info.RightDefendShieldRange));
	out.Add(TEXT("UpRealShieldRange"), FString::SanitizeFloat(info.UpRealShieldRange));
	out.Add(TEXT("DownRealShieldRange"), FString::SanitizeFloat(info.DownRealShieldRange));
	out.Add(TEXT("LeftRealShieldRange"), FString::SanitizeFloat(info.LeftRealShieldRange));
	out.Add(TEXT("RightRealShieldRange"), FString::SanitizeFloat(info.RightRealShieldRange));
	out.Add(TEXT("BeginDefendTime"), FString::SanitizeFloat(info.BeginDefendTime));
	out.Add(TEXT("SucDefendTime"), FString::SanitizeFloat(info.SucDefendTime));
	out.Add(TEXT("FailDefendTime"), FString::SanitizeFloat(info.FailDefendTime));
	out.Add(TEXT("ShieldStyleName"), info.ShieldStyleName);
	out.Add(TEXT("ResistHitDown"), FString::SanitizeFloat(info.ResistHitDown));
	out.Add(TEXT("DurablenessDown"), FString::FromInt(info.DurablenessDown));
	out.Add(TEXT("fight"), FString::FromInt(info.fight));
	out.Add(TEXT("ResistHitDownLv1"), FString::FromInt(info.ResistHitDownLv1));
	out.Add(TEXT("ResistHitDownLv2"), FString::FromInt(info.ResistHitDownLv2));
	out.Add(TEXT("ResistHitDownLv3"), FString::FromInt(info.ResistHitDownLv3));
	out.Add(TEXT("ResistHitDownLv4"), FString::FromInt(info.ResistHitDownLv4));
	out.Add(TEXT("ResistHitDownLv5"), FString::FromInt(info.ResistHitDownLv5));
	out.Add(TEXT("ResistHitDownLv6"), FString::FromInt(info.ResistHitDownLv6));
	out.Add(TEXT("ResistHitDownLv7"), FString::FromInt(info.ResistHitDownLv7));
	out.Add(TEXT("ResistHitDownLv8"), FString::FromInt(info.ResistHitDownLv8));
	out.Add(TEXT("ResistHitDownLv9"), FString::FromInt(info.ResistHitDownLv9));
	out.Add(TEXT("PushInitSpeed"), FString::SanitizeFloat(info.PushInitSpeed));
	out.Add(TEXT("PushCdTime"), FString::SanitizeFloat(info.PushCdTime));
	out.Add(TEXT("PushDistance"), FString::SanitizeFloat(info.PushDistance));
	out.Add(TEXT("PushAngle"), FString::SanitizeFloat(info.PushAngle));
	out.Add(TEXT("PushType"), FString::FromInt(info.PushType));
	out.Add(TEXT("BeginSprint"), FString::SanitizeFloat(info.BeginSprint));
	out.Add(TEXT("fPveDurableness"), FString::FromInt(info.fPveDurableness));
	out.Add(TEXT("nIsPveWeapon"), FString::FromInt(info.nIsPveWeapon));
	out.Add(TEXT("nDifficuty"), FString::FromInt(info.nDifficuty));
	out.Add(TEXT("costfield"), FString::FromInt(info.costfield));
	out.Add(TEXT("fRideDefenseSpeedRate"), FString::SanitizeFloat(info.fRideDefenseSpeedRate));
	out.Add(TEXT("fSprintTimeSec"), FString::SanitizeFloat(info.fSprintTimeSec));
	out.Add(TEXT("fSprintTimeCdSec"), FString::SanitizeFloat(info.fSprintTimeCdSec));
	out.Add(TEXT("nSprintMaxYawAim"), FString::FromInt(info.nSprintMaxYawAim));
	out.Add(TEXT("fSprintSpeed"), FString::SanitizeFloat(info.fSprintSpeed));
	out.Add(TEXT("fTakeOffTime"), FString::SanitizeFloat(info.fTakeOffTime));
	out.Add(TEXT("fTakeOutTime"), FString::SanitizeFloat(info.fTakeOutTime));
	out.Add(TEXT("fGroundRotationFactor"), FString::SanitizeFloat(info.fGroundRotationFactor));
	return true;
}

bool Get_Frontend_txt_struct_language_soldier(int id, OUT Frontend_txt_struct_language_soldier& info)
{
	info.Id = 0;
	TMap<FString, FString> language_soldier_list;
	FrontendAsset::GetInstance().GetBinariesTabFile(TEXT("language_soldier"), id, language_soldier_list);
	if (language_soldier_list.Num() > 0)
	{
		info.Id = FCString::Atoi(*language_soldier_list[TEXT("Id")]);
		info.Name0 = language_soldier_list[TEXT("Name0")];
		info.Description0 = language_soldier_list[TEXT("Description0")];
		info.Name1 = language_soldier_list[TEXT("Name1")];
		info.Description1 = language_soldier_list[TEXT("Description1")];
		info.Name2 = language_soldier_list[TEXT("Name2")];
		info.Description2 = language_soldier_list[TEXT("Description2")];
		return true;
	}
	return false;
}

bool Get_Frontend_txt_struct_language_soldier_to_map(int id, OUT TMap<FString, FString>& out)
{
	out.Reset();
	Frontend_txt_struct_language_soldier info;
	if(!Get_Frontend_txt_struct_language_soldier(id, info))
	{
		return false;
	}

	out.Add(TEXT("Id"), FString::FromInt(info.Id));
	out.Add(TEXT("Name0"), info.Name0);
	out.Add(TEXT("Description0"), info.Description0);
	out.Add(TEXT("Name1"), info.Name1);
	out.Add(TEXT("Description1"), info.Description1);
	out.Add(TEXT("Name2"), info.Name2);
	out.Add(TEXT("Description2"), info.Description2);
	return true;
}

bool Get_Frontend_txt_struct_to_map(const FString& file, int id, OUT TMap<FString, FString>& out, int language)
{
	out.Reset();

	if(file == TEXT("Rank_Property")) { return Get_Frontend_txt_struct_Rank_Property_to_map(id, out, language);}
	if(file == TEXT("achievement")) { return Get_Frontend_txt_struct_achievement_to_map(id, out, language);}
	if(file == TEXT("agentparam")) { return Get_Frontend_txt_struct_agentparam_to_map(id, out);}
	if(file == TEXT("aiplayer")) { return Get_Frontend_txt_struct_aiplayer_to_map(id, out);}
	if(file == TEXT("aiplayeraction")) { return Get_Frontend_txt_struct_aiplayeraction_to_map(id, out);}
	if(file == TEXT("aiskill10_attackinterval")) { return Get_Frontend_txt_struct_aiskill10_attackinterval_to_map(id, out);}
	if(file == TEXT("aiskill11_continuouscut")) { return Get_Frontend_txt_struct_aiskill11_continuouscut_to_map(id, out);}
	if(file == TEXT("aiskill12_firebow")) { return Get_Frontend_txt_struct_aiskill12_firebow_to_map(id, out);}
	if(file == TEXT("aiskill13_ambush")) { return Get_Frontend_txt_struct_aiskill13_ambush_to_map(id, out);}
	if(file == TEXT("aiskill14_ctrlmccata")) { return Get_Frontend_txt_struct_aiskill14_ctrlmccata_to_map(id, out);}
	if(file == TEXT("aiskill15_formatcrossbowshield")) { return Get_Frontend_txt_struct_aiskill15_formatcrossbowshield_to_map(id, out);}
	if(file == TEXT("aiskill16_smog")) { return Get_Frontend_txt_struct_aiskill16_smog_to_map(id, out);}
	if(file == TEXT("aiskill17_ctrlmcball")) { return Get_Frontend_txt_struct_aiskill17_ctrlmcball_to_map(id, out);}
	if(file == TEXT("aiskill18_continueshot")) { return Get_Frontend_txt_struct_aiskill18_continueshot_to_map(id, out);}
	if(file == TEXT("aiskill19_force_change_weapon")) { return Get_Frontend_txt_struct_aiskill19_force_change_weapon_to_map(id, out);}
	if(file == TEXT("aiskill1_volley")) { return Get_Frontend_txt_struct_aiskill1_volley_to_map(id, out);}
	if(file == TEXT("aiskill20_formatshield_plus")) { return Get_Frontend_txt_struct_aiskill20_formatshield_plus_to_map(id, out);}
	if(file == TEXT("aiskill21_formatpole_plus")) { return Get_Frontend_txt_struct_aiskill21_formatpole_plus_to_map(id, out);}
	if(file == TEXT("aiskill22_formatpoleshield_plus")) { return Get_Frontend_txt_struct_aiskill22_formatpoleshield_plus_to_map(id, out);}
	if(file == TEXT("aiskill23_formatplus_crossbowshield")) { return Get_Frontend_txt_struct_aiskill23_formatplus_crossbowshield_to_map(id, out);}
	if(file == TEXT("aiskill24_dismount")) { return Get_Frontend_txt_struct_aiskill24_dismount_to_map(id, out);}
	if(file == TEXT("aiskill25_obstacle")) { return Get_Frontend_txt_struct_aiskill25_obstacle_to_map(id, out);}
	if(file == TEXT("aiskill26_remoteattack")) { return Get_Frontend_txt_struct_aiskill26_remoteattack_to_map(id, out);}
	if(file == TEXT("aiskill27_powerfulthrow")) { return Get_Frontend_txt_struct_aiskill27_powerfulthrow_to_map(id, out);}
	if(file == TEXT("aiskill28_testudo")) { return Get_Frontend_txt_struct_aiskill28_testudo_to_map(id, out);}
	if(file == TEXT("aiskill29_shieldhit")) { return Get_Frontend_txt_struct_aiskill29_shieldhit_to_map(id, out);}
	if(file == TEXT("aiskill2_formatshield")) { return Get_Frontend_txt_struct_aiskill2_formatshield_to_map(id, out);}
	if(file == TEXT("aiskill30_javelinshield")) { return Get_Frontend_txt_struct_aiskill30_javelinshield_to_map(id, out);}
	if(file == TEXT("aiskill31_designated_shot")) { return Get_Frontend_txt_struct_aiskill31_designated_shot_to_map(id, out);}
	if(file == TEXT("aiskill32_formatromaJavelinshield")) { return Get_Frontend_txt_struct_aiskill32_formatromaJavelinshield_to_map(id, out);}
	if(file == TEXT("aiskill33_BlockState")) { return Get_Frontend_txt_struct_aiskill33_BlockState_to_map(id, out);}
	if(file == TEXT("aiskill34_roadshield")) { return Get_Frontend_txt_struct_aiskill34_roadshield_to_map(id, out);}
	if(file == TEXT("aiskill35_ThrowAssault")) { return Get_Frontend_txt_struct_aiskill35_ThrowAssault_to_map(id, out);}
	if(file == TEXT("aiskill36_SupplyThing")) { return Get_Frontend_txt_struct_aiskill36_SupplyThing_to_map(id, out);}
	if(file == TEXT("aiskill37_FollowStrike")) { return Get_Frontend_txt_struct_aiskill37_FollowStrike_to_map(id, out);}
	if(file == TEXT("aiskill3_formatpole")) { return Get_Frontend_txt_struct_aiskill3_formatpole_to_map(id, out);}
	if(file == TEXT("aiskill4_formatpoleshield")) { return Get_Frontend_txt_struct_aiskill4_formatpoleshield_to_map(id, out);}
	if(file == TEXT("aiskill5_assault")) { return Get_Frontend_txt_struct_aiskill5_assault_to_map(id, out);}
	if(file == TEXT("aiskill6_meleeweapon")) { return Get_Frontend_txt_struct_aiskill6_meleeweapon_to_map(id, out);}
	if(file == TEXT("aiskill7_rangeweapon")) { return Get_Frontend_txt_struct_aiskill7_rangeweapon_to_map(id, out);}
	if(file == TEXT("aiskill8_collective")) { return Get_Frontend_txt_struct_aiskill8_collective_to_map(id, out);}
	if(file == TEXT("aiskill9_tacticalmove")) { return Get_Frontend_txt_struct_aiskill9_tacticalmove_to_map(id, out);}
	if(file == TEXT("aisoldiericon")) { return Get_Frontend_txt_struct_aisoldiericon_to_map(id, out);}
	if(file == TEXT("armor")) { return Get_Frontend_txt_struct_armor_to_map(id, out, language);}
	if(file == TEXT("armytype")) { return Get_Frontend_txt_struct_armytype_to_map(id, out, language);}
	if(file == TEXT("boss")) { return Get_Frontend_txt_struct_boss_to_map(id, out, language);}
	if(file == TEXT("bullet_clip")) { return Get_Frontend_txt_struct_bullet_clip_to_map(id, out, language);}
	if(file == TEXT("crash_detail")) { return Get_Frontend_txt_struct_crash_detail_to_map(id, out);}
	if(file == TEXT("crash_effect")) { return Get_Frontend_txt_struct_crash_effect_to_map(id, out);}
	if(file == TEXT("fallfromhorse")) { return Get_Frontend_txt_struct_fallfromhorse_to_map(id, out);}
	if(file == TEXT("fallfromhorse_idx")) { return Get_Frontend_txt_struct_fallfromhorse_idx_to_map(id, out);}
	if(file == TEXT("fashion")) { return Get_Frontend_txt_struct_fashion_to_map(id, out);}
	if(file == TEXT("flag")) { return Get_Frontend_txt_struct_flag_to_map(id, out, language);}
	if(file == TEXT("formation")) { return Get_Frontend_txt_struct_formation_to_map(id, out, language);}
	if(file == TEXT("fortress_gate")) { return Get_Frontend_txt_struct_fortress_gate_to_map(id, out);}
	if(file == TEXT("fortress_medical")) { return Get_Frontend_txt_struct_fortress_medical_to_map(id, out);}
	if(file == TEXT("fortress_oneoccupy")) { return Get_Frontend_txt_struct_fortress_oneoccupy_to_map(id, out);}
	if(file == TEXT("fortress_pve_medical")) { return Get_Frontend_txt_struct_fortress_pve_medical_to_map(id, out);}
	if(file == TEXT("fortress_pve_recruit")) { return Get_Frontend_txt_struct_fortress_pve_recruit_to_map(id, out);}
	if(file == TEXT("fortress_pve_supply")) { return Get_Frontend_txt_struct_fortress_pve_supply_to_map(id, out);}
	if(file == TEXT("fortress_pve_troops")) { return Get_Frontend_txt_struct_fortress_pve_troops_to_map(id, out);}
	if(file == TEXT("fortress_recruit")) { return Get_Frontend_txt_struct_fortress_recruit_to_map(id, out);}
	if(file == TEXT("fortress_resource")) { return Get_Frontend_txt_struct_fortress_resource_to_map(id, out);}
	if(file == TEXT("fortress_spawn")) { return Get_Frontend_txt_struct_fortress_spawn_to_map(id, out);}
	if(file == TEXT("fortress_supply")) { return Get_Frontend_txt_struct_fortress_supply_to_map(id, out);}
	if(file == TEXT("fortress_troops")) { return Get_Frontend_txt_struct_fortress_troops_to_map(id, out);}
	if(file == TEXT("fr_aisoldierskill")) { return Get_Frontend_txt_struct_fr_aisoldierskill_to_map(id, out, language);}
	if(file == TEXT("fr_background")) { return Get_Frontend_txt_struct_fr_background_to_map(id, out, language);}
	if(file == TEXT("fr_banner")) { return Get_Frontend_txt_struct_fr_banner_to_map(id, out);}
	if(file == TEXT("fr_bsip")) { return Get_Frontend_txt_struct_fr_bsip_to_map(id, out);}
	if(file == TEXT("fr_bsserver")) { return Get_Frontend_txt_struct_fr_bsserver_to_map(id, out, language);}
	if(file == TEXT("fr_buffinfo")) { return Get_Frontend_txt_struct_fr_buffinfo_to_map(id, out, language);}
	if(file == TEXT("fr_chathost")) { return Get_Frontend_txt_struct_fr_chathost_to_map(id, out);}
	if(file == TEXT("fr_city")) { return Get_Frontend_txt_struct_fr_city_to_map(id, out, language);}
	if(file == TEXT("fr_customroom_map")) { return Get_Frontend_txt_struct_fr_customroom_map_to_map(id, out, language);}
	if(file == TEXT("fr_customroom_mode")) { return Get_Frontend_txt_struct_fr_customroom_mode_to_map(id, out, language);}
	if(file == TEXT("fr_dlc")) { return Get_Frontend_txt_struct_fr_dlc_to_map(id, out);}
	if(file == TEXT("fr_effect")) { return Get_Frontend_txt_struct_fr_effect_to_map(id, out);}
	if(file == TEXT("fr_exename")) { return Get_Frontend_txt_struct_fr_exename_to_map(id, out);}
	if(file == TEXT("fr_faceicon")) { return Get_Frontend_txt_struct_fr_faceicon_to_map(id, out, language);}
	if(file == TEXT("fr_faction_award")) { return Get_Frontend_txt_struct_fr_faction_award_to_map(id, out, language);}
	if(file == TEXT("fr_faction_flag")) { return Get_Frontend_txt_struct_fr_faction_flag_to_map(id, out);}
	if(file == TEXT("fr_faction_flag_icon")) { return Get_Frontend_txt_struct_fr_faction_flag_icon_to_map(id, out);}
	if(file == TEXT("fr_fashion")) { return Get_Frontend_txt_struct_fr_fashion_to_map(id, out);}
	if(file == TEXT("fr_formation")) { return Get_Frontend_txt_struct_fr_formation_to_map(id, out, language);}
	if(file == TEXT("fr_fujiang_skill")) { return Get_Frontend_txt_struct_fr_fujiang_skill_to_map(id, out, language);}
	if(file == TEXT("fr_fujiang_skillBuff")) { return Get_Frontend_txt_struct_fr_fujiang_skillBuff_to_map(id, out, language);}
	if(file == TEXT("fr_helptip")) { return Get_Frontend_txt_struct_fr_helptip_to_map(id, out, language);}
	if(file == TEXT("fr_hightmorale_level_rate")) { return Get_Frontend_txt_struct_fr_hightmorale_level_rate_to_map(id, out, language);}
	if(file == TEXT("fr_honor")) { return Get_Frontend_txt_struct_fr_honor_to_map(id, out, language);}
	if(file == TEXT("fr_jade_award")) { return Get_Frontend_txt_struct_fr_jade_award_to_map(id, out);}
	if(file == TEXT("fr_market")) { return Get_Frontend_txt_struct_fr_market_to_map(id, out);}
	if(file == TEXT("fr_medal")) { return Get_Frontend_txt_struct_fr_medal_to_map(id, out, language);}
	if(file == TEXT("fr_medal_condition")) { return Get_Frontend_txt_struct_fr_medal_condition_to_map(id, out, language);}
	if(file == TEXT("fr_onlinereward")) { return Get_Frontend_txt_struct_fr_onlinereward_to_map(id, out);}
	if(file == TEXT("fr_pve_limit")) { return Get_Frontend_txt_struct_fr_pve_limit_to_map(id, out);}
	if(file == TEXT("fr_resolution")) { return Get_Frontend_txt_struct_fr_resolution_to_map(id, out, language);}
	if(file == TEXT("fr_sound")) { return Get_Frontend_txt_struct_fr_sound_to_map(id, out, language);}
	if(file == TEXT("fr_task")) { return Get_Frontend_txt_struct_fr_task_to_map(id, out, language);}
	if(file == TEXT("fr_techmaterial")) { return Get_Frontend_txt_struct_fr_techmaterial_to_map(id, out, language);}
	if(file == TEXT("fr_version")) { return Get_Frontend_txt_struct_fr_version_to_map(id, out);}
	if(file == TEXT("fr_vip")) { return Get_Frontend_txt_struct_fr_vip_to_map(id, out);}
	if(file == TEXT("fr_weekrank_reward")) { return Get_Frontend_txt_struct_fr_weekrank_reward_to_map(id, out, language);}
	if(file == TEXT("fuiang_notify_voice")) { return Get_Frontend_txt_struct_fuiang_notify_voice_to_map(id, out);}
	if(file == TEXT("fujiang")) { return Get_Frontend_txt_struct_fujiang_to_map(id, out, language);}
	if(file == TEXT("fujiangPersonalSkillVoice")) { return Get_Frontend_txt_struct_fujiangPersonalSkillVoice_to_map(id, out);}
	if(file == TEXT("hero_levexp")) { return Get_Frontend_txt_struct_hero_levexp_to_map(id, out);}
	if(file == TEXT("hero_type")) { return Get_Frontend_txt_struct_hero_type_to_map(id, out, language);}
	if(file == TEXT("hit_effect")) { return Get_Frontend_txt_struct_hit_effect_to_map(id, out);}
	if(file == TEXT("horse")) { return Get_Frontend_txt_struct_horse_to_map(id, out, language);}
	if(file == TEXT("horse_fashion")) { return Get_Frontend_txt_struct_horse_fashion_to_map(id, out);}
	if(file == TEXT("horsearmor")) { return Get_Frontend_txt_struct_horsearmor_to_map(id, out, language);}
	if(file == TEXT("horsehoof")) { return Get_Frontend_txt_struct_horsehoof_to_map(id, out);}
	if(file == TEXT("horsestrike")) { return Get_Frontend_txt_struct_horsestrike_to_map(id, out);}
	if(file == TEXT("itemicon")) { return Get_Frontend_txt_struct_itemicon_to_map(id, out);}
	if(file == TEXT("itemtype")) { return Get_Frontend_txt_struct_itemtype_to_map(id, out, language);}
	if(file == TEXT("language_aipersonalskill")) { return Get_Frontend_txt_struct_language_aipersonalskill_to_map(id, out);}
	if(file == TEXT("language_aisoldierskill")) { return Get_Frontend_txt_struct_language_aisoldierskill_to_map(id, out);}
	if(file == TEXT("language_battle_conditions")) { return Get_Frontend_txt_struct_language_battle_conditions_to_map(id, out);}
	if(file == TEXT("language_fujiang_passive_skill")) { return Get_Frontend_txt_struct_language_fujiang_passive_skill_to_map(id, out);}
	if(file == TEXT("language_horseaccessory")) { return Get_Frontend_txt_struct_language_horseaccessory_to_map(id, out);}
	if(file == TEXT("language_map_name")) { return Get_Frontend_txt_struct_language_map_name_to_map(id, out);}
	if(file == TEXT("language_modename")) { return Get_Frontend_txt_struct_language_modename_to_map(id, out);}
	if(file == TEXT("language_neterrortype")) { return Get_Frontend_txt_struct_language_neterrortype_to_map(id, out);}
	if(file == TEXT("language_save_filename")) { return Get_Frontend_txt_struct_language_save_filename_to_map(id, out);}
	if(file == TEXT("language_savefile_error")) { return Get_Frontend_txt_struct_language_savefile_error_to_map(id, out);}
	if(file == TEXT("language_scene_default")) { return Get_Frontend_txt_struct_language_scene_default_to_map(id, out);}
	if(file == TEXT("language_soldier")) { return Get_Frontend_txt_struct_language_soldier_to_map(id, out);}
	if(file == TEXT("mapindex")) { return Get_Frontend_txt_struct_mapindex_to_map(id, out);}
	if(file == TEXT("mc_aerialladder")) { return Get_Frontend_txt_struct_mc_aerialladder_to_map(id, out);}
	if(file == TEXT("mc_arrowtower")) { return Get_Frontend_txt_struct_mc_arrowtower_to_map(id, out);}
	if(file == TEXT("mc_ballista")) { return Get_Frontend_txt_struct_mc_ballista_to_map(id, out);}
	if(file == TEXT("mc_bullet")) { return Get_Frontend_txt_struct_mc_bullet_to_map(id, out);}
	if(file == TEXT("mc_catapults")) { return Get_Frontend_txt_struct_mc_catapults_to_map(id, out);}
	if(file == TEXT("mc_gate")) { return Get_Frontend_txt_struct_mc_gate_to_map(id, out);}
	if(file == TEXT("mc_roadblock")) { return Get_Frontend_txt_struct_mc_roadblock_to_map(id, out);}
	if(file == TEXT("mc_siege")) { return Get_Frontend_txt_struct_mc_siege_to_map(id, out);}
	if(file == TEXT("meleeweapon")) { return Get_Frontend_txt_struct_meleeweapon_to_map(id, out, language);}
	if(file == TEXT("message")) { return Get_Frontend_txt_struct_message_to_map(id, out, language);}
	if(file == TEXT("message_left_right")) { return Get_Frontend_txt_struct_message_left_right_to_map(id, out, language);}
	if(file == TEXT("obstacle")) { return Get_Frontend_txt_struct_obstacle_to_map(id, out, language);}
	if(file == TEXT("owneroffsetpos")) { return Get_Frontend_txt_struct_owneroffsetpos_to_map(id, out);}
	if(file == TEXT("playerposecard")) { return Get_Frontend_txt_struct_playerposecard_to_map(id, out);}
	if(file == TEXT("pve_monster")) { return Get_Frontend_txt_struct_pve_monster_to_map(id, out, language);}
	if(file == TEXT("rangedweapon")) { return Get_Frontend_txt_struct_rangedweapon_to_map(id, out, language);}
	if(file == TEXT("rank_tree")) { return Get_Frontend_txt_struct_rank_tree_to_map(id, out, language);}
	if(file == TEXT("restrain")) { return Get_Frontend_txt_struct_restrain_to_map(id, out);}
	if(file == TEXT("roadshield")) { return Get_Frontend_txt_struct_roadshield_to_map(id, out);}
	if(file == TEXT("role_levexp")) { return Get_Frontend_txt_struct_role_levexp_to_map(id, out);}
	if(file == TEXT("rolling_wood")) { return Get_Frontend_txt_struct_rolling_wood_to_map(id, out);}
	if(file == TEXT("science")) { return Get_Frontend_txt_struct_science_to_map(id, out);}
	if(file == TEXT("science_tree")) { return Get_Frontend_txt_struct_science_tree_to_map(id, out);}
	if(file == TEXT("science_type")) { return Get_Frontend_txt_struct_science_type_to_map(id, out, language);}
	if(file == TEXT("shield")) { return Get_Frontend_txt_struct_shield_to_map(id, out, language);}
	if(file == TEXT("sign_reward")) { return Get_Frontend_txt_struct_sign_reward_to_map(id, out);}
	if(file == TEXT("soldiers")) { return Get_Frontend_txt_struct_soldiers_to_map(id, out);}
	if(file == TEXT("specificflag")) { return Get_Frontend_txt_struct_specificflag_to_map(id, out);}
	if(file == TEXT("splitfromhorse")) { return Get_Frontend_txt_struct_splitfromhorse_to_map(id, out);}
	if(file == TEXT("sprintact")) { return Get_Frontend_txt_struct_sprintact_to_map(id, out);}
	if(file == TEXT("state_display")) { return Get_Frontend_txt_struct_state_display_to_map(id, out);}
	if(file == TEXT("supplything")) { return Get_Frontend_txt_struct_supplything_to_map(id, out);}
	if(file == TEXT("survival_bufflist")) { return Get_Frontend_txt_struct_survival_bufflist_to_map(id, out);}
	if(file == TEXT("team_attack")) { return Get_Frontend_txt_struct_team_attack_to_map(id, out);}
	if(file == TEXT("terrain_type")) { return Get_Frontend_txt_struct_terrain_type_to_map(id, out);}
	if(file == TEXT("unlawful")) { return Get_Frontend_txt_struct_unlawful_to_map(id, out, language);}
	if(file == TEXT("weapon_alert_range")) { return Get_Frontend_txt_struct_weapon_alert_range_to_map(id, out);}
	if(file == TEXT("weaponicon")) { return Get_Frontend_txt_struct_weaponicon_to_map(id, out);}

	return false;
}

