// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */

#define GetFrontendTxtRecord(file, id, out) Get_Frontend_txt_struct_##file(id, out)
#define GetFrontendTxtRecordByLanguage(file, id, out, language) Get_Frontend_txt_struct_##file##_ByLanguage(id, out, language)

struct Frontend_txt_struct_armytype
{
	int id;
	FString name;
	int price;
	int establish_price;
	int helmet;
	int shawl;
	int armor;
	int shoes;
	int horse;
	int saddle;
	int weapon1;
	int weapon2;
	int weapon3;
	int weapon4;
	int skilltype1;
	int skilltype2;
	int skilltype3;
	int skilltype4;
	int skilltype5;
	int skilltype6;
	int skilltype7;
	int skilltype8;
	int fight;
	float exp_effect;
	float glod;
	float recruit_limit;
	int remove_price;
	int recruitprice_adjust;
};
extern bool Get_Frontend_txt_struct_armytype(int id, OUT Frontend_txt_struct_armytype& info);

struct Frontend_txt_struct_fr_aisoldierskill
{
	int id;
	FString name;
	FString Text;
	FString Icontexture;
	FString Needweapon1;
	FString Needweapon2;
	FString Needweapon3;
	FString NeedText;
};
extern bool Get_Frontend_txt_struct_fr_aisoldierskill(int id, OUT Frontend_txt_struct_fr_aisoldierskill& info);

struct Frontend_txt_struct_fr_background
{
	int id;
	FString Name;
	int pricetype;
	int price;
	int TimeOut;
	FString ImageMini;
	FString ImageBackground;
	FString ImagePreview;
	FString EffectsID;
	FString EffectsParam;
	FString BeginTime;
	FString EndTime;
	FString ImageBackground_2;
	FString ImageObscure;
	FString ImageObscure_2;
	FString ImageMsgWin;
	FString ImageMsgWin_2;
	FString ImageNormal;
	FString ImageNormal_2;
};
extern bool Get_Frontend_txt_struct_fr_background(int id, OUT Frontend_txt_struct_fr_background& info);

struct Frontend_txt_struct_fr_banner
{
	int id;
	int itemId;
	FString name;
	FString desc;
	FString shape;
};
extern bool Get_Frontend_txt_struct_fr_banner(int id, OUT Frontend_txt_struct_fr_banner& info);

struct Frontend_txt_struct_fr_bsip
{
	int id;
	int type;
	FString ip;
	int port;
	FString IPtype;
};
extern bool Get_Frontend_txt_struct_fr_bsip(int id, OUT Frontend_txt_struct_fr_bsip& info);

struct Frontend_txt_struct_fr_bsserver
{
	int id;
	int area_id;
	int net_line;
	int type;
	int zone;
	FString name;
	FString line_name;
};
extern bool Get_Frontend_txt_struct_fr_bsserver(int id, OUT Frontend_txt_struct_fr_bsserver& info);

struct Frontend_txt_struct_fr_buffinfo
{
	int id;
	FString buffid;
	FString Name;
	FString explain;
	int moneymulti;
	int expmulti;
	int armyexpmulti;
	int heroexpmulti;
	int genernalexpmulti;
	int exploitmulti;
};
extern bool Get_Frontend_txt_struct_fr_buffinfo(int id, OUT Frontend_txt_struct_fr_buffinfo& info);

struct Frontend_txt_struct_fr_chathost
{
	int id;
	FString host;
};
extern bool Get_Frontend_txt_struct_fr_chathost(int id, OUT Frontend_txt_struct_fr_chathost& info);

struct Frontend_txt_struct_fr_city
{
	int id;
	FString city_name;
};
extern bool Get_Frontend_txt_struct_fr_city(int id, OUT Frontend_txt_struct_fr_city& info);

struct Frontend_txt_struct_fr_customroom_map
{
	int id;
	int mainmode;
	int submode;
	int mapId;
	FString mapName;
	FString mapNorms;
	FString mapAddress;
};
extern bool Get_Frontend_txt_struct_fr_customroom_map(int id, OUT Frontend_txt_struct_fr_customroom_map& info);

struct Frontend_txt_struct_fr_customroom_mode
{
	int id;
	int mainmode;
	FString mainname;
	int submode;
	FString subname;
	int subdefault;
	int mapdefault;
	int numdefault;
	int minnum;
	int maxnum;
	int halfenter;
	FString winDesc;
	FString winNum;
};
extern bool Get_Frontend_txt_struct_fr_customroom_mode(int id, OUT Frontend_txt_struct_fr_customroom_mode& info);

struct Frontend_txt_struct_fr_dlc
{
	int id;
	int dlc;
	FString name;
};
extern bool Get_Frontend_txt_struct_fr_dlc(int id, OUT Frontend_txt_struct_fr_dlc& info);

struct Frontend_txt_struct_fr_effect
{
	int id;
	FString name;
	int EffectAmount;
	FString Effect0;
	float Delay0;
	float Offset0_x;
	float Offset0_y;
	float Offset0_z;
	float Scale0_x;
	float Scale0_y;
	float Scale0_z;
	float Rotate0_x;
	float Rotate0_y;
	float Rotate0_z;
	int LoopAmount;
	int FrameInterval;
	int LoopInterval;
	float Offset_x;
	float Offset_y;
	float Offset_z;
	float Scale_x;
	float Scale_y;
	float Scale_z;
	float Rotate_x;
	float Rotate_y;
	float Rotate_z;
};
extern bool Get_Frontend_txt_struct_fr_effect(int id, OUT Frontend_txt_struct_fr_effect& info);

struct Frontend_txt_struct_fr_exename
{
	int id;
	FString Description;
	FString ExeName;
	int bUseCook;
	int bAllowConsole;
	int bAllowOutput;
	int bAllowLogServer;
};
extern bool Get_Frontend_txt_struct_fr_exename(int id, OUT Frontend_txt_struct_fr_exename& info);

struct Frontend_txt_struct_fr_faceicon
{
	int id;
	FString name;
};
extern bool Get_Frontend_txt_struct_fr_faceicon(int id, OUT Frontend_txt_struct_fr_faceicon& info);

struct Frontend_txt_struct_fr_faction_award
{
	int id;
	float award;
	int exp;
	int feats;
	FString desc;
};
extern bool Get_Frontend_txt_struct_fr_faction_award(int id, OUT Frontend_txt_struct_fr_faction_award& info);

struct Frontend_txt_struct_fr_faction_flag
{
	int id;
	int flag_color;
	int flag_icon;
	FString flag_icon_pos;
};
extern bool Get_Frontend_txt_struct_fr_faction_flag(int id, OUT Frontend_txt_struct_fr_faction_flag& info);

struct Frontend_txt_struct_fr_faction_flag_icon
{
	int id;
	FString icon;
};
extern bool Get_Frontend_txt_struct_fr_faction_flag_icon(int id, OUT Frontend_txt_struct_fr_faction_flag_icon& info);

struct Frontend_txt_struct_fr_fashion
{
	int id;
	FString Name;
	FString buffid;
	int exp;
	int money;
	int emoney;
	int generalexp;
	int exploit;
};
extern bool Get_Frontend_txt_struct_fr_fashion(int id, OUT Frontend_txt_struct_fr_fashion& info);

struct Frontend_txt_struct_fr_formation
{
	int id;
	FString name;
	FString Text;
	FString Icontexture;
};
extern bool Get_Frontend_txt_struct_fr_formation(int id, OUT Frontend_txt_struct_fr_formation& info);

struct Frontend_txt_struct_fr_fujiang_skill
{
	int id;
	FString name;
	FString Text;
	FString Icontexture;
};
extern bool Get_Frontend_txt_struct_fr_fujiang_skill(int id, OUT Frontend_txt_struct_fr_fujiang_skill& info);

struct Frontend_txt_struct_fr_fujiang_skillBuff
{
	int id;
	FString name;
	FString Text;
	FString Icontexture;
};
extern bool Get_Frontend_txt_struct_fr_fujiang_skillBuff(int id, OUT Frontend_txt_struct_fr_fujiang_skillBuff& info);

struct Frontend_txt_struct_fr_helptip
{
	int id;
	int type;
	FString typeinfo;
	FString Description;
};
extern bool Get_Frontend_txt_struct_fr_helptip(int id, OUT Frontend_txt_struct_fr_helptip& info);

struct Frontend_txt_struct_fr_hightmorale_level_rate
{
	int id;
	FString name;
	FString Text;
	FString Icontexture;
};
extern bool Get_Frontend_txt_struct_fr_hightmorale_level_rate(int id, OUT Frontend_txt_struct_fr_hightmorale_level_rate& info);

struct Frontend_txt_struct_fr_honor
{
	int id;
	FString name;
	FString describe;
	FString icon;
	int need_honor;
	int money;
	int emoney;
	int generalexp;
	int exploit;
	int itemid;
	int itemnum;
};
extern bool Get_Frontend_txt_struct_fr_honor(int id, OUT Frontend_txt_struct_fr_honor& info);

struct Frontend_txt_struct_fr_jade_award
{
	int id;
	int itemtypeid;
	int num;
	int rank;
	int islimit;
};
extern bool Get_Frontend_txt_struct_fr_jade_award(int id, OUT Frontend_txt_struct_fr_jade_award& info);

struct Frontend_txt_struct_fr_market
{
	int id;
	int gold;
	int price_USD;
	FString desc;
};
extern bool Get_Frontend_txt_struct_fr_market(int id, OUT Frontend_txt_struct_fr_market& info);

struct Frontend_txt_struct_fr_medal
{
	int id;
	FString type_name;
	int qua_name;
	FString name;
	FString describe;
	int visible;
	int visible_progress;
	int key;
	int value_1;
	int value_2;
	int value_3;
	int value_4;
	int value_5;
	FString case_desc_1;
	FString case_desc_2;
	FString case_desc_3;
	FString case_desc_4;
	FString case_desc_5;
	FString award_describe;
	FString award_key_1;
	int award_value_1;
	FString award_key_2;
	FString award_value_2;
	FString award_key_3;
	FString award_value_3;
	FString award_key_4;
	FString award_value_4;
	FString award_key_5;
	FString award_value_5;
	FString award_key_6;
	FString award_value_6;
	FString award_key_7;
	FString award_value_7;
	FString icon;
	int is_get_again;
	int medal_id;
};
extern bool Get_Frontend_txt_struct_fr_medal(int id, OUT Frontend_txt_struct_fr_medal& info);

struct Frontend_txt_struct_fr_medal_condition
{
	int id;
	FString name;
	int medal_id_1;
	int medal_id_2;
	int medal_id_3;
	int medal_id_4;
	int medal_id_5;
	int medal_id_6;
	int medal_id_7;
};
extern bool Get_Frontend_txt_struct_fr_medal_condition(int id, OUT Frontend_txt_struct_fr_medal_condition& info);

struct Frontend_txt_struct_fr_onlinereward
{
	int time;
	int reward;
	int num;
};
extern bool Get_Frontend_txt_struct_fr_onlinereward(int id, OUT Frontend_txt_struct_fr_onlinereward& info);

struct Frontend_txt_struct_fr_pve_limit
{
	int id;
	int num1;
	int num2;
	int num3;
	FString describe;
};
extern bool Get_Frontend_txt_struct_fr_pve_limit(int id, OUT Frontend_txt_struct_fr_pve_limit& info);

struct Frontend_txt_struct_fr_resolution
{
	int id;
	int length;
	int width;
	FString Description;
};
extern bool Get_Frontend_txt_struct_fr_resolution(int id, OUT Frontend_txt_struct_fr_resolution& info);

struct Frontend_txt_struct_fr_sound
{
	int id;
	FString description;
	FString path;
};
extern bool Get_Frontend_txt_struct_fr_sound(int id, OUT Frontend_txt_struct_fr_sound& info);

struct Frontend_txt_struct_fr_task
{
	int id;
	int type;
	int quality;
	int pre_task;
	FString title;
	FString desc;
	int date_begin;
	int date_end;
	FString txtcheck;
	FString act1_desc;
	int act1_sche_achi;
	int act2_desc;
	int act2_sche_achi;
	int act3_desc;
	int act3_sche_achi;
	FString lead_action;
	int award_item1;
	int award_item1_num;
	int award_item1_timeout;
	int award_item2;
	int award_item2_num;
	int award_item2_timeout;
	int award_item3;
	int award_item3_num;
	int award_item3_timeout;
	int award_item4;
	int award_item4_num;
	int award_item4_timeout;
	int award_money;
	int award_generalexp;
	int award_exploit;
	int award_exp;
	int award_gold;
};
extern bool Get_Frontend_txt_struct_fr_task(int id, OUT Frontend_txt_struct_fr_task& info);

struct Frontend_txt_struct_fr_techmaterial
{
	int id;
	FString name;
	int soldier;
	FString soldier_name;
	FString effect;
	FString desc;
};
extern bool Get_Frontend_txt_struct_fr_techmaterial(int id, OUT Frontend_txt_struct_fr_techmaterial& info);

struct Frontend_txt_struct_fr_version
{
	int id ;
	FString entrance;
	FString version;
	int CrusadeLevel;
	int CrusadeArmyLevel;
	int HeroLevel;
	int HeroSiegeLevel;
	int HeroTurnLevel;
	int PVEEasyLevel;
	int PVEHardLevel;
	int PVECrazyLevel;
	int CrusadeToRobotLevel;
	FString frversion;
};
extern bool Get_Frontend_txt_struct_fr_version(int id, OUT Frontend_txt_struct_fr_version& info);

struct Frontend_txt_struct_fr_vip
{
	int day;
	int price;
	float discount;
};
extern bool Get_Frontend_txt_struct_fr_vip(int id, OUT Frontend_txt_struct_fr_vip& info);

struct Frontend_txt_struct_fr_weekrank_reward
{
	int id;
	int type;
	int rank;
	FString reward_desc;
};
extern bool Get_Frontend_txt_struct_fr_weekrank_reward(int id, OUT Frontend_txt_struct_fr_weekrank_reward& info);

struct Frontend_txt_struct_fujiang
{
	int Id;
	FString SoldierName;
	FString SoldierDescription;
	int SoldierKind;
	int fPrice;
	int PayPrestige;
	int NeedPrestige;
	float BumpMass;
	int BaseAggressive;
	FString SkeletalMesh;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString IconTexture;
	int Level;
	int fHealth;
	float MaxSpeed;
	float fAiHorseSpeedRate;
	float fAiHorseAcceRate;
	float fAiHorseRotationRate;
	float fAiAttackSpeedRate;
	float RotationRate;
	float SprintSpeed;
	float fAccelRate;
	int SoldierDefenseValue;
	int SoldierDamage;
	float fPlayerCauseAIShieldVal;
	float AlertRange1;
	float AlertRange2;
	float AlertRange3;
	float AlertRange4;
	float FollowRange;
	float DefendRange;
	float PushRange;
	float fStartHoldMinTime;
	float fStartHoldMaxTime;
	float fHoldToFireMinTime;
	float fHoldToFireMaxTime;
	int WeaponID1;
	int WeaponID2;
	int WeaponID3;
	int WeaponID4;
	int HeadEquipID;
	int ShoulderEquipID;
	int UpBodyEquipID;
	int DownBodyEquipID;
	int HorseID;
	int HorseEquipID;
	float fHorseLifeRate;
	int ArmorType;
	float DetectRate;
	float BeDetectedRate;
	float AlertHewupPercent;
	float AlertBlockPercent;
	float ShotOffsetRangeX;
	float ShotOffsetRangeY;
	float fAttackOrDefendProb_0;
	float fAttackOrDefendProb_1;
	float fAttackOrDefendProb_2;
	float fAttackOrDefendProb_3;
	float fMeleeAttackIntervalTime;
	float fRangeAttackIntervalTime;
	float fFailFire;
	int CurGroundFireStyle;
	int CurGroundAimStyle_0;
	int CurGroundAimStyle_1;
	int CurHorseFireStyle;
	int CurHorseAimStyle_0;
	int CurHorseAimStyle_1;
	float CausePlayerDamage;
	float CauseAIDamage;
	float fSprintTimeOnGround;
	int nAISRS;
	float PenetrateCut;
	float PenetratePuncture;
	float PenetrateBlunt;
	float nTacticalMovePercent;
	float FailProDown;
	int LeadCharacter;
	FString SkillID_1;
	FString SkillID_2;
	FString SkillID_3;
	FString SkillID_4;
	int PassiveSkill_1;
	int PassiveSkill_2;
	int PassiveSkill_3;
	int PassiveSkill_4;
	int Formation1;
	int Formation2;
	int Formation3;
	int Formation4;
	float ExpFactor;
	int SkillUnlock_1;
	int SkillUnlock_2;
	int SkillUnlock_3;
	int SkillUnlock_4;
	int FormationUnlock_1;
	int FormationUnlock_2;
	int FormationUnlock_3;
	int FormationUnlock_4;
	int Sell;
	int nTroopMoveId;
	float fRemoteAtkFactor;
	float fDefenseRemoteAtk;
	int nFight;
	int nStrategy;
	int nBubing;
	int nGongnu;
	int nQibing;
	int nQishe;
	int nKeepsakeId;
	int nKeepsakeNum;
	int nTag;
	int nNationType;
};
extern bool Get_Frontend_txt_struct_fujiang(int id, OUT Frontend_txt_struct_fujiang& info);

struct Frontend_txt_struct_hero_levexp
{
	int id;
	int grade;
	int level;
	int exp;
};
extern bool Get_Frontend_txt_struct_hero_levexp(int id, OUT Frontend_txt_struct_hero_levexp& info);

struct Frontend_txt_struct_hero_type
{
	int id;
	FString name;
	int lev;
	int require_lev;
	int require_prestige;
	int require_moneytype;
	int require_price;
	int require_item;
	int require_itemnum;
	int employment_moneytype;
	int employment_price;
	int coat1;
	int coat2;
	int coat2_moneytype;
	int coat2_price;
	int coat3;
	int coat3_moneytype;
	int coat3_price;
	int coat4;
	int coat4_moneytype;
	int coat4_price;
	int exp_effect;
};
extern bool Get_Frontend_txt_struct_hero_type(int id, OUT Frontend_txt_struct_hero_type& info);

struct Frontend_txt_struct_itemtype
{
	int id;
	FString name;
	int level;
	int pack;
	int money;
	int emoney;
	int exploit;
	int sell_money;
	int type;
	int award_ID;
	FString text;
	FString message;
};
extern bool Get_Frontend_txt_struct_itemtype(int id, OUT Frontend_txt_struct_itemtype& info);

struct Frontend_txt_struct_Rank_Property
{
	int id;
	FString propertytext;
	int type;
};
extern bool Get_Frontend_txt_struct_Rank_Property(int id, OUT Frontend_txt_struct_Rank_Property& info);

struct Frontend_txt_struct_rank_tree
{
	int rank_id;
	int army_type;
	int lev;
	FString name;
	int country;
	int pre_rank1;
	int pre_rank1_exp;
	int pre_rank1_price;
	int pre_rank1_con1;
	int pre_rank1_con2;
	int pre_rank1_con3;
	int pre_rank1_con4;
	int pre_rank1_con5;
	int pre_rank2;
	int pre_rank2_exp;
	int pre_rank2_price;
	int pre_rank2_con1;
	int pre_rank2_con2;
	int pre_rank2_con3;
	int pre_rank2_con4;
	int pre_rank2_con5;
	int pre_rank3;
	int pre_rank3_exp;
	int pre_rank3_price;
	int pre_rank3_con1;
	int pre_rank3_con2;
	int pre_rank3_con3;
	int pre_rank3_con4;
	int pre_rank3_con5;
	FString rank_property;
	int NearAttack;
	int FarAttack;
	int NearDefence;
	int FarDefence;
	int MoveSpeed;
	int rank_type;
};
extern bool Get_Frontend_txt_struct_rank_tree(int id, OUT Frontend_txt_struct_rank_tree& info);

struct Frontend_txt_struct_role_levexp
{
	int level;
	int exp;
};
extern bool Get_Frontend_txt_struct_role_levexp(int id, OUT Frontend_txt_struct_role_levexp& info);

struct Frontend_txt_struct_science_tree
{
	int id;
	int rank_id;
	int lev;
	int type;
	int pre_science1;
	int pre_science2;
	int pre_science3;
	int pre_science4;
	int pre_science5;
	int exp;
	int exploit;
};
extern bool Get_Frontend_txt_struct_science_tree(int id, OUT Frontend_txt_struct_science_tree& info);

struct Frontend_txt_struct_science_type
{
	int id;
	int ident;
	FString name;
	int sci_type;
	int sci_id;
};
extern bool Get_Frontend_txt_struct_science_type(int id, OUT Frontend_txt_struct_science_type& info);

struct Frontend_txt_struct_sign_reward
{
	int id;
	int user_lev;
	int reward_type;
	int day_num;
	int item_type;
	int item_num;
	int money;
	int emoney;
	int general_exp;
	int lev_exp;
	int dataID;
};
extern bool Get_Frontend_txt_struct_sign_reward(int id, OUT Frontend_txt_struct_sign_reward& info);

struct Frontend_txt_struct_unlawful
{
	int ID;
	FString WORD;
};
extern bool Get_Frontend_txt_struct_unlawful(int id, OUT Frontend_txt_struct_unlawful& info);

struct Frontend_txt_struct_achievement
{
	int Id;
	int MedalType;
	FString AchieveName;
	int nCondition;
	int nMapId;
	FString GameMode;
	FString SubGameMode_Crusade;
	FString SubGameMode_Hero;
	int nDistance;
	int nWeaponClass;
	int nWeaponKind;
	int nWeaponType;
	int nEnemyType;
	int nTime;
	int nHpPercent;
	int nTeamDead;
	int nOneLifeCycle;
	int nOneHitCycle;
	int nHeadShot;
	int nComboShot;
	int nEnemyHpPercent;
	int nAchieveNum;
	int nEnemyAllAlive;
};
extern bool Get_Frontend_txt_struct_achievement(int id, OUT Frontend_txt_struct_achievement& info);

struct Frontend_txt_struct_agentparam
{
	int type;
	FString desc;
	float radius;
	float samecamp_radius;
	float enemy_radius;
	float width;
	int height;
	int collision_query_range;
	int path_optimization_range;
	int separation_weight;
	int update_flags;
	int obstacle_avoidance_type;
	int max_nneis;
};
extern bool Get_Frontend_txt_struct_agentparam(int id, OUT Frontend_txt_struct_agentparam& info);

struct Frontend_txt_struct_aiplayer
{
	int ID;
	FString Description;
	int ActionType;
	int SoldierKind;
	int Level;
	float MaxSpeed;
	float fAiHorseSpeedRate;
	float fAiHorseAcceRate;
	float fAiHorseRotationRate;
	float fAiAttackSpeedRate;
	float CausePlayerDamage;
	float RotationRate;
	float fAccelRate;
	int AlertRange1;
	int AlertRange2;
	int AlertRange3;
	int AlertRange4;
	int ArmorType;
	int AlertHewupPercent;
	int AlertBlockPercent;
	float ShotOffsetRangeX;
	float ShotOffsetRangeY;
	int fAttackOrDefendProb_0;
	int fAttackOrDefendProb_1;
	int fAttackOrDefendProb_2;
	int fAttackOrDefendProb_3;
	float fMeleeAttackIntervalTime;
	float fRangeAttackIntervalTime;
	float PenetrateCut;
	float PenetratePuncture;
	float PenetrateBlunt;
	int nAttackRandMovePercent;
	int nTacticalMovePercent;
};
extern bool Get_Frontend_txt_struct_aiplayer(int id, OUT Frontend_txt_struct_aiplayer& info);

struct Frontend_txt_struct_aiskill10_attackinterval
{
	int Id;
	FString desc;
	float fAttackIntervalRate;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill10_attackinterval(int id, OUT Frontend_txt_struct_aiskill10_attackinterval& info);

struct Frontend_txt_struct_aiskill11_continuouscut
{
	int Id;
	FString desc;
	int oneAttackCount;
	int maxAttackCount;
	float fSpeedFactor;
	float fAttackIntervalRate;
	float fDdamageFactor;
	float fPercent;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill11_continuouscut(int id, OUT Frontend_txt_struct_aiskill11_continuouscut& info);

struct Frontend_txt_struct_aiskill12_firebow
{
	int Id;
	FString desc;
	int nHorseLiftHoovesNeedHurt;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill12_firebow(int id, OUT Frontend_txt_struct_aiskill12_firebow& info);

struct Frontend_txt_struct_aiskill13_ambush
{
	int Id;
	FString desc;
	float fbeDetectedRate;
	float fSpeedRate;
	float fAttackRate;
	int nBuffLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill13_ambush(int id, OUT Frontend_txt_struct_aiskill13_ambush& info);

struct Frontend_txt_struct_aiskill14_ctrlmccata
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fFindMcRange;
	int nBulletType;
	int nBulletCount;
};
extern bool Get_Frontend_txt_struct_aiskill14_ctrlmccata(int id, OUT Frontend_txt_struct_aiskill14_ctrlmccata& info);

struct Frontend_txt_struct_aiskill15_formatcrossbowshield
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fSpeedRate;
	float fRotateRate;
	float fShieldDamageRate;
	float fMeleeDamageRate;
	float fAttackRate;
	float fWeightFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill15_formatcrossbowshield(int id, OUT Frontend_txt_struct_aiskill15_formatcrossbowshield& info);

struct Frontend_txt_struct_aiskill16_smog
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fOneSoldierRange;
	float fMinRange;
	float fMaxRange;
	int nSmogType;
	int nSmogLastTime;
	float speed_rate;
};
extern bool Get_Frontend_txt_struct_aiskill16_smog(int id, OUT Frontend_txt_struct_aiskill16_smog& info);

struct Frontend_txt_struct_aiskill17_ctrlmcball
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fRangeOut;
	float fRangeIn;
	float fSpeedSpread;
	float fSpeedNarrow;
	float fSpeedRate;
	float fDamageFactor;
	float fFindMcRange;
	int nBulletType;
	int nBulletCount;
};
extern bool Get_Frontend_txt_struct_aiskill17_ctrlmcball(int id, OUT Frontend_txt_struct_aiskill17_ctrlmcball& info);

struct Frontend_txt_struct_aiskill18_continueshot
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	int nLastTime;
	int nShotCount;
	float fTimeHewUp;
	float fTimeOneShotInterval;
};
extern bool Get_Frontend_txt_struct_aiskill18_continueshot(int id, OUT Frontend_txt_struct_aiskill18_continueshot& info);

struct Frontend_txt_struct_aiskill19_force_change_weapon
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	int nForceWeaponType;
	int nLastTime;
	float fAttackIntervalRate;
	float fWeaponAttackSpeedRate;
	float fAtkDamageFactor;
	float fRideSpeedFactor;
	float fGroundSpeedFactor;
	float fAtkShieldDamageRate;
	float fHorseDamageFactor;
	int nAddWeaponWeightLevel;
	float fBeAtkByMeleeDamageFactor;
	float fBeAtkByRangeDamageFactor;
};
extern bool Get_Frontend_txt_struct_aiskill19_force_change_weapon(int id, OUT Frontend_txt_struct_aiskill19_force_change_weapon& info);

struct Frontend_txt_struct_aiskill1_volley
{
	int Id;
	FString desc;
	float fRangeOut;
	float fRangeIn;
	float fSpeedSpread;
	float fSpeedNarrow;
	float fSpeedRate;
	float fDamageFactor;
	float fDamageFactorBoss;
	float fDamageFactorInfantry;
	float fDamageFactorArcher;
	float fDamageFactorKnight;
	float fDamageFactorKnightArcher;
	float fTimeDelayHewUpMin;
	float fTimeDelayHewUpMax;
	float fTimeDelayShotMin;
	float fTimeDelayShotMax;
	float fTimeHewUp;
	float fTimeLoadBullet;
	int nCoolDown;
	int nUseEnergy;
	float fMaxRadian;
	int uReduceEnergyPerShot;
	int uAddEnergyKillEachPerson;
};
extern bool Get_Frontend_txt_struct_aiskill1_volley(int id, OUT Frontend_txt_struct_aiskill1_volley& info);

struct Frontend_txt_struct_aiskill20_formatshield_plus
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nFormationId;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill20_formatshield_plus(int id, OUT Frontend_txt_struct_aiskill20_formatshield_plus& info);

struct Frontend_txt_struct_aiskill21_formatpole_plus
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fHorseDamageFactor;
	float fWeightFactor;
	int nFormationId;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill21_formatpole_plus(int id, OUT Frontend_txt_struct_aiskill21_formatpole_plus& info);

struct Frontend_txt_struct_aiskill22_formatpoleshield_plus
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fHorseDamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nFormationId;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill22_formatpoleshield_plus(int id, OUT Frontend_txt_struct_aiskill22_formatpoleshield_plus& info);

struct Frontend_txt_struct_aiskill23_formatplus_crossbowshield
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fSpeedRate;
	float fRotateRate;
	float fShieldDamageRate;
	float fMeleeDamageRate;
	float fAttackRate;
	float fWeightFactor;
	int nFormationId;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill23_formatplus_crossbowshield(int id, OUT Frontend_txt_struct_aiskill23_formatplus_crossbowshield& info);

struct Frontend_txt_struct_aiskill24_dismount
{
	int Id;
	FString Desc;
	float fAttackRate;
	float fDefendRate;
	float fSpeedRate;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill24_dismount(int id, OUT Frontend_txt_struct_aiskill24_dismount& info);

struct Frontend_txt_struct_aiskill25_obstacle
{
	int Id;
	FString Desc;
	int nObstacleId;
	float fActionTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill25_obstacle(int id, OUT Frontend_txt_struct_aiskill25_obstacle& info);

struct Frontend_txt_struct_aiskill26_remoteattack
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	int nLastTime;
	float fRadius;
	float fSpeedRate;
	float fDamageFactor;
	float fDamageFactorBoss;
	float fDamageFactorInfantry;
	float fDamageFactorArcher;
	float fDamageFactorKnight;
	float fDamageFactorKnightArcher;
	float fTimeHewUp;
	float fTimeLoadBullet;
};
extern bool Get_Frontend_txt_struct_aiskill26_remoteattack(int id, OUT Frontend_txt_struct_aiskill26_remoteattack& info);

struct Frontend_txt_struct_aiskill27_powerfulthrow
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fPersist1CostTimeSec;
	float fPersist2CostTimeSec;
	int nPersist1AdditionWeaponWeightLevel;
	int nPersist2AdditionWeaponWeightLevel;
	float fPersist1AtkDamageFactor;
	float fPersist2AtkDamageFactor;
	float fPersist1AtkShieldDamageFactor;
	float fPersist2AtkShieldDamageFactor;
	int nPersist1AdditionPenetrate;
	int nPersist2AdditionPenetrate;
	float fDamageFactorBoss;
	float fDamageFactorInfantry;
	float fDamageFactorArcher;
	float fDamageFactorKnight;
	float fDamageFactorKnightArcher;
	float fCheckRadius;
	float fMinPersistTimePercent;
	int nForceUseHeavyJavelin;
	float fSpeedRate;
};
extern bool Get_Frontend_txt_struct_aiskill27_powerfulthrow(int id, OUT Frontend_txt_struct_aiskill27_powerfulthrow& info);

struct Frontend_txt_struct_aiskill28_testudo
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fSpeedFactor;
	float fRotateFactor;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nSarcasmInit;
	int nSarcasmLastTime;
	int nFormationId;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill28_testudo(int id, OUT Frontend_txt_struct_aiskill28_testudo& info);

struct Frontend_txt_struct_aiskill29_shieldhit
{
	int Id;
	FString desc;
	float fDamageFactor;
	float fPercent;
	int nCoolDown;
	int nUseEnergy;
	float fPushDistanceFactor;
	int nLastTime;
	int nOneAttackCount;
	int nMaxAttackCount;
};
extern bool Get_Frontend_txt_struct_aiskill29_shieldhit(int id, OUT Frontend_txt_struct_aiskill29_shieldhit& info);

struct Frontend_txt_struct_aiskill2_formatshield
{
	int Id;
	FString desc;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDdamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nCoolDown;
	int nUseEnergy;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill2_formatshield(int id, OUT Frontend_txt_struct_aiskill2_formatshield& info);

struct Frontend_txt_struct_aiskill30_javelinshield
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fSpeedNarrow;
	float fSpeedSpread;
	float fDamageFactorBoss;
	float fDamageFactorInfantry;
	float fDamageFactorArcher;
	float fDamageFactorKnight;
	float fDamageFactorKnightArcher;
	float fDamageFactorPlayer;
	float fShotSpeedFactor;
	float fHewUpTimeFactor;
	float fMinDisToFormatCenterFactor;
	float fMaxDisToFormatCenterFactor;
};
extern bool Get_Frontend_txt_struct_aiskill30_javelinshield(int id, OUT Frontend_txt_struct_aiskill30_javelinshield& info);

struct Frontend_txt_struct_aiskill31_designated_shot
{
	int Id;
	FString desc;
	int nCoolDown;
	int nUseEnergy;
	float fRadius;
	float fSpeedRate;
	float fTimeHewUp;
	float fTimeLoadBullet;
	float fDamageFactor;
	float fDamageFactorBoss;
	float fDamageFactorInfantry;
	float fDamageFactorArcher;
	float fDamageFactorKnight;
	float fDamageFactorKnightArcher;
	int uReduceEnergyPerShot;
	int uAddEnergyKillEachPerson;
	float fDoVolleyIntervalTime;
};
extern bool Get_Frontend_txt_struct_aiskill31_designated_shot(int id, OUT Frontend_txt_struct_aiskill31_designated_shot& info);

struct Frontend_txt_struct_aiskill32_formatromaJavelinshield
{
	int Id;
	FString desc;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fHorseDamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nCoolDown;
	int nUseEnergy;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
	int nFormationId;
};
extern bool Get_Frontend_txt_struct_aiskill32_formatromaJavelinshield(int id, OUT Frontend_txt_struct_aiskill32_formatromaJavelinshield& info);

struct Frontend_txt_struct_aiskill33_BlockState
{
	int Id;
	FString desc;
	float fBlockRate;
	int nBlockFightBackPercent;
	float fBlockFightBackPercentFailInterval;
	int nBlockFightBackStateSec;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nCoolDown;
	int nUseEnergy;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill33_BlockState(int id, OUT Frontend_txt_struct_aiskill33_BlockState& info);

struct Frontend_txt_struct_aiskill34_roadshield
{
	int Id;
	FString Desc;
	int nRoadShieldId;
	float fActionTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill34_roadshield(int id, OUT Frontend_txt_struct_aiskill34_roadshield& info);

struct Frontend_txt_struct_aiskill35_ThrowAssault
{
	int Id;
	FString desc;
	float fRateSpeedOnHorse;
	float fMaxSpeedOnHorse;
	float fRateWeight;
	float fRateHorseWeight;
	int nCoolDown;
	int nUseEnergy;
	int nLastTime;
	int nAddHurtOnGround;
	int nAddHurtOnHorse;
	int fDistFrontCheck;
	int nIfCollision;
	int nFloorMomentum;
	float fLoadBulletTimeRate;
	float fRemoteDamageRate;
	float fShotRadius;
	int nForceUseHeavyJavelin;
	float fMoveSpeedRate;
	float fBeAttackDamageFactor;
	int uBuffLastTimeSec;
	float fAttackRangeRate;
	int nCollisionCnt;
};
extern bool Get_Frontend_txt_struct_aiskill35_ThrowAssault(int id, OUT Frontend_txt_struct_aiskill35_ThrowAssault& info);

struct Frontend_txt_struct_aiskill36_SupplyThing
{
	int Id;
	FString Desc;
	int nSupplyThingId;
	float fActionTime;
	int nCoolDown;
	int nUseEnergy;
	int nFormationId;
	int nFormationMass;
	int nLimitMoveSec;
};
extern bool Get_Frontend_txt_struct_aiskill36_SupplyThing(int id, OUT Frontend_txt_struct_aiskill36_SupplyThing& info);

struct Frontend_txt_struct_aiskill37_FollowStrike
{
	int Id;
	FString Desc;
	int nCoolDown;
	int nUseEnergy;
	int nLastTime;
	float fSoldierHorseWeightRate;
	float fSoldierHorseSpeedRate;
	float fSoldierHorseCollisionDamageRate;
	float fPlayerHorseWeightRate;
	float fPlayerHorseCollisionDamageRate;
	float fPlayerHorseAssaultSpeed;
};
extern bool Get_Frontend_txt_struct_aiskill37_FollowStrike(int id, OUT Frontend_txt_struct_aiskill37_FollowStrike& info);

struct Frontend_txt_struct_aiskill3_formatpole
{
	int Id;
	FString desc;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fHorseDamageFactor;
	float fWeightFactor;
	int nCoolDown;
	int nUseEnergy;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
	int nWeightLevel;
};
extern bool Get_Frontend_txt_struct_aiskill3_formatpole(int id, OUT Frontend_txt_struct_aiskill3_formatpole& info);

struct Frontend_txt_struct_aiskill4_formatpoleshield
{
	int Id;
	FString desc;
	float fAttackIntervalRate;
	float fSpeedFactor;
	float fRotateFactor;
	float fDamageFactor;
	float fHorseDamageFactor;
	float fShieldDamageRate;
	float fWeightFactor;
	int nCoolDown;
	int nUseEnergy;
	float fMeleeDamageFactor;
	float fRangeDamageFactor;
	int nLastTime;
};
extern bool Get_Frontend_txt_struct_aiskill4_formatpoleshield(int id, OUT Frontend_txt_struct_aiskill4_formatpoleshield& info);

struct Frontend_txt_struct_aiskill5_assault
{
	int Id;
	FString desc;
	float fRateSpeedOnHorse;
	float fMaxSpeedOnHorse;
	float fRateWeight;
	float fRateHorseWeight;
	int nCoolDown;
	int nUseEnergy;
	int nAddHurtOnGround;
	int nAddHurtOnHorse;
	int fDistFrontCheck;
	int nIfCollision;
	int nFloorMomentum;
	int nMaxAssaultDis;
	int nLastTime;
	float fAttackRangeRate;
	int nCollisionCnt;
};
extern bool Get_Frontend_txt_struct_aiskill5_assault(int id, OUT Frontend_txt_struct_aiskill5_assault& info);

struct Frontend_txt_struct_aiskill6_meleeweapon
{
	int Id;
	FString desc;
	int uCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill6_meleeweapon(int id, OUT Frontend_txt_struct_aiskill6_meleeweapon& info);

struct Frontend_txt_struct_aiskill7_rangeweapon
{
	int Id;
	FString desc;
	int uCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill7_rangeweapon(int id, OUT Frontend_txt_struct_aiskill7_rangeweapon& info);

struct Frontend_txt_struct_aiskill8_collective
{
	int Id;
	FString desc;
	int nCollectivPercent;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
};
extern bool Get_Frontend_txt_struct_aiskill8_collective(int id, OUT Frontend_txt_struct_aiskill8_collective& info);

struct Frontend_txt_struct_aiskill9_tacticalmove
{
	int Id;
	FString desc;
	int nLastTime;
	int nCoolDown;
	int nUseEnergy;
	int nRoundRadius;
	int nRoundDir;
	float fMoveSpeedRate;
	float fBodyTurnRate;
	float fAccelRate;
	float fAttackRate;
	float fHewUpTimeRate;
};
extern bool Get_Frontend_txt_struct_aiskill9_tacticalmove(int id, OUT Frontend_txt_struct_aiskill9_tacticalmove& info);

struct Frontend_txt_struct_armor
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh_Male;
	FString SkeletalMesh_Female;
	int Level;
	float WeaponWeight;
	float VelocityExtraValue;
	float HealthExtraValue;
	float MetalFailPro;
	float LeatherFailPro;
	float ClothFailPro;
	int MetalDefenseValue;
	int LeatherDefenseValue;
	int ClothDefenseValue;
	int bIsUseOnHorse;
	float MetalMinusCutParam;
	float LeatherMinusCutParam;
	float ClothMinusCutParam;
	float MetalMinusStabParam;
	float LeatherMinusStabParam;
	float ClothMinusStabParam;
	float MetalMinusBluntParam;
	float LeatherMinusBluntParam;
	float ClothMinusBluntParam;
	FString Metal;
	FString Leather;
	FString Cloth;
	float MetalDefenseDown;
	float LeatherDefenseDown;
	float ClothDefenseDown;
	float FailProDown;
	int fight;
	float DefenseDownLv1;
	float DefenseDownLv2;
	float DefenseDownLv3;
	float DefenseDownLv4;
	float DefenseDownLv5;
	float DefenseDownLv6;
	float DefenseDownLv7;
	float DefenseDownLv8;
	float DefenseDownLv9;
	float fDefenseRemoteAtk;
};
extern bool Get_Frontend_txt_struct_armor(int id, OUT Frontend_txt_struct_armor& info);

struct Frontend_txt_struct_boss
{
	int Id;
	FString SoldierName;
	FString SoldierDescription;
	int SoldierKind;
	int fPrice;
	float BumpMass;
	int BaseAggressive;
	FString SkeletalMesh;
	int Level;
	int fHealth;
	int MaxSpeed;
	float fAiHorseSpeedRate;
	float fAiHorseAcceRate;
	float fAiHorseRotationRate;
	float fAiAttackSpeedRate;
	float RotationRate;
	float SprintSpeed;
	float fAccelRate;
	int SoldierDefenseValue;
	int SoldierDamage;
	float fPlayerCauseAIShieldVal;
	int AlertRange1;
	int AlertRange2;
	int AlertRange3;
	int AlertRange4;
	float FollowRange;
	float DefendRange;
	float PushRange;
	float fStartHoldMinTime;
	float fStartHoldMaxTime;
	float fHoldToFireMinTime;
	float fHoldToFireMaxTime;
	int WeaponID1;
	int WeaponID2;
	int WeaponID3;
	int WeaponID4;
	int HeadEquipID;
	int ShoulderEquipID;
	int UpBodyEquipID;
	int DownBodyEquipID;
	int HorseID;
	int HorseEquipID;
	float fHorseLifeRate;
	int ArmorType;
	float DetectRate;
	float BeDetectedRate;
	float AlertHewupPercent;
	float AlertBlockPercent;
	float ShotOffsetRangeX;
	float ShotOffsetRangeY;
	int fAttackOrDefendProb_0;
	float fAttackOrDefendProb_1;
	float fAttackOrDefendProb_2;
	float fAttackOrDefendProb_3;
	float fMeleeAttackIntervalTime;
	float fRangeAttackIntervalTime;
	float fFailFire;
	int CurGroundFireStyle;
	int CurGroundAimStyle_0;
	int CurGroundAimStyle_1;
	int CurHorseFireStyle;
	int CurHorseAimStyle_0;
	int CurHorseAimStyle_1;
	float CausePlayerDamage;
	float CauseAIDamage;
	float fSprintTimeOnGround;
	int nAISRS;
	float PenetrateCut;
	float PenetratePuncture;
	float PenetrateBlunt;
	float nTacticalMovePercent;
	int GainFujiangID;
	int nGuardType;
	int nGuardCount;
	int nGuardFormation;
	int scene;
	float fRemoteAtkFactor;
	float fDefenseRemoteAtk;
	int nNationType;
};
extern bool Get_Frontend_txt_struct_boss(int id, OUT Frontend_txt_struct_boss& info);

struct Frontend_txt_struct_bullet_clip
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString AmmoBagMesh;
	FString EmptyAmmoBagMesh;
	int Level;
	float WeaponWeight;
	float AIWeaponWeight;
	float ShootDamageFactor;
	int damageType;
	int count;
	float fHurtFactor_0;
	float fAttenuationFactor_0;
	float fHurtFactor_1;
	float fAttenuationFactor_1;
	int nBounceCount;
	float fBounceSpeedFactor;
	FString nSceneEffectType ;
	FString AmmoStaticMesh;
	FString FlyVoiceMesh;
	FString CrashVoiceMesh;
	float MetalCutCamailValue;
	float MetalStabCamailValue;
	float MetalBluntCamailValue;
	float LeatherCutCamailValue;
	float LeatherStabCamailValue;
	float LeatherBluntCamailValue;
	float ClothCutCamailValue;
	float ClothStabCamailValue;
	float ClothBluntCamailValue;
	float ShootDamageDown;
	float CamailDown;
	int fight;
	float DamageDownLv1;
	float DamageDownLv2;
	float DamageDownLv3;
	float DamageDownLv4;
	float DamageDownLv5;
	float DamageDownLv6;
	float DamageDownLv7;
	float DamageDownLv8;
	float DamageDownLv9;
	float fPveDamageFactor;
	int nIsPveWeapon;
	int costfield;
	float fHorseDamageRate;
	float fAICauseAIDamageShieldFactor;
};
extern bool Get_Frontend_txt_struct_bullet_clip(int id, OUT Frontend_txt_struct_bullet_clip& info);

struct Frontend_txt_struct_crash_detail
{
	int crash_effect;
	int crash_dir;
	float crash_time1;
	float crash_dis1;
	float crash_time2;
	float crash_dis2;
	float crash_time3;
	float crash_dis3;
};
extern bool Get_Frontend_txt_struct_crash_detail(int id, OUT Frontend_txt_struct_crash_detail& info);

struct Frontend_txt_struct_crash_effect
{
	int atker_type;
	int underatker_type;
	int crash_effect;
	int crash_min;
	int crash_max;
	int crash_factor;
};
extern bool Get_Frontend_txt_struct_crash_effect(int id, OUT Frontend_txt_struct_crash_effect& info);

struct Frontend_txt_struct_fallfromhorse
{
	int fall_type;
	float person_dis1;
	float person_time1;
	float person_ang1;
	float person_dis2;
	float person_time2;
	float person_ang2;
	float person_dis3;
	float person_time3;
	float person_ang3;
	float horse_dis1;
	float horse_time1;
	float horse_dis2;
	float horse_time2;
	int rate;
};
extern bool Get_Frontend_txt_struct_fallfromhorse(int id, OUT Frontend_txt_struct_fallfromhorse& info);

struct Frontend_txt_struct_fallfromhorse_idx
{
	int id;
	float min_speed;
	float max_speed;
	FString fall_type;
};
extern bool Get_Frontend_txt_struct_fallfromhorse_idx(int id, OUT Frontend_txt_struct_fallfromhorse_idx& info);

struct Frontend_txt_struct_formation
{
	int Id;
	int nMass;
	FString name;
	FString SkeletalMesh;
	int nTop;
	int nLeft;
	int nWidth;
	int nHeight;
	int nMassValueInit;
	float fEnemyKindCheckRange;
	float fEnemyCountCheckRange;
	float fCollisionRadiusSelfCamp;
	float fSameCampRadius;
	float fCollisionRadiusEnemyCamp;
	FString SoundPath;
	FString fujiang;
	FString szForbidSoldierKind;
	int SquadAggressive;
	float MeleeInjuredFactor;
	float RangedInjuredFactor;
	float ProbeFactor;
	float BeDetectFactor;
	float fSafeDistance;
	int MoraleFactor;
	float BMFactor;
	float MeleeDamageFactor;
	float RangedDamageFactor;
	float fAttackSpeedFactor;
	float fMaxSpeedFactor;
	float fAcceleationFactor;
	float fujiang0x;
	float fujiang0y;
	float fujiang1x;
	float fujiang1y;
	float soldier0x;
	float soldier0y;
	float soldier1x;
	float soldier1y;
	float soldier2x;
	float soldier2y;
	float soldier3x;
	float soldier3y;
	float soldier4x;
	float soldier4y;
	float soldier5x;
	float soldier5y;
	float soldier6x;
	float soldier6y;
	float soldier7x;
	float soldier7y;
	float soldier8x;
	float soldier8y;
	float soldier9x;
	float soldier9y;
	float soldier10x;
	float soldier10y;
	float soldier11x;
	float soldier11y;
	float soldier12x;
	float soldier12y;
	float soldier13x;
	float soldier13y;
	float soldier14x;
	float soldier14y;
	float soldier15x;
	float soldier15y;
	float soldier16x;
	float soldier16y;
	float soldier17x;
	float soldier17y;
	float soldier18x;
	float soldier18y;
	float soldier19x;
	float soldier19y;
	float soldier20x;
	float soldier20y;
	float soldier21x;
	float soldier21y;
	float soldier22x;
	float soldier22y;
	float soldier23x;
	float soldier23y;
	float soldier24x;
	float soldier24y;
	float soldier25x;
	float soldier25y;
	float soldier26x;
	float soldier26y;
	float soldier27x;
	float soldier27y;
	float soldier28x;
	float soldier28y;
	float soldier29x;
	float soldier29y;
	float soldier30x;
	float soldier30y;
	float soldier31x;
	float soldier31y;
	float soldier32x;
	float soldier32y;
	float soldier33x;
	float soldier33y;
	float soldier34x;
	float soldier34y;
	float soldier35x;
	float soldier35y;
	float soldier36x;
	float soldier36y;
	float soldier37x;
	float soldier37y;
	float soldier38x;
	float soldier38y;
	float soldier39x;
	float soldier39y;
	float soldier0angle;
	float soldier1angle;
	float soldier2angle;
	float soldier3angle;
	float soldier4angle;
	float soldier5angle;
	float soldier6angle;
	float soldier7angle;
	float soldier8angle;
	float soldier9angle;
	float soldier10angle;
	float soldier11angle;
	float soldier12angle;
	float soldier13angle;
	float soldier14angle;
	float soldier15angle;
	float soldier16angle;
	float soldier17angle;
	float soldier18angle;
	float soldier19angle;
	float soldier20angle;
	float soldier21angle;
	float soldier22angle;
	float soldier23angle;
	float soldier24angle;
	float soldier25angle;
	float soldier26angle;
	float soldier27angle;
	float soldier28angle;
	float soldier29angle;
	float soldier30angle;
	float soldier31angle;
	float soldier32angle;
	float soldier33angle;
	float soldier34angle;
	float soldier35angle;
	float soldier36angle;
	float soldier37angle;
	float soldier38angle;
	float soldier39angle;
	int soldier0amt;
	int soldier1amt;
	int soldier2amt;
	int soldier3amt;
	int soldier4amt;
	int soldier5amt;
	int soldier6amt;
	int soldier7amt;
	int soldier8amt;
	int soldier9amt;
	int soldier10amt;
	int soldier11amt;
	int soldier12amt;
	int soldier13amt;
	int soldier14amt;
	int soldier15amt;
	int soldier16amt;
	int soldier17amt;
	int soldier18amt;
	int soldier19amt;
	int soldier20amt;
	int soldier21amt;
	int soldier22amt;
	int soldier23amt;
	int soldier24amt;
	int soldier25amt;
	int soldier26amt;
	int soldier27amt;
	int soldier28amt;
	int soldier29amt;
	int soldier30amt;
	int soldier31amt;
	int soldier32amt;
	int soldier33amt;
	int soldier34amt;
	int soldier35amt;
	int soldier36amt;
	int soldier37amt;
	int soldier38amt;
	int soldier39amt;
};
extern bool Get_Frontend_txt_struct_formation(int id, OUT Frontend_txt_struct_formation& info);

struct Frontend_txt_struct_fortress_gate
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
};
extern bool Get_Frontend_txt_struct_fortress_gate(int id, OUT Frontend_txt_struct_fortress_gate& info);

struct Frontend_txt_struct_fortress_medical
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int nOccupy_self_add_morale;
	int nOccupy_enemy_reduce_morale;
	float fOccupy_boss_life_add_percent;
	float fFound_range;
	int nBuff_count;
	int nBuff_cover_type;
	int nBuff_cd;
	int nBuff1;
	int nBuff2;
	int nBbuff3;
	int nBuff4;
	int nBuff5;
	int nDdelay_add_time;
	int nDelay_add_show_cd_time;
	int nDelay_add_warning_count;
	int nDelay_add_warning_time1;
	int nDelay_add_warning_time2;
	int nDelay_add_warning_time3;
};
extern bool Get_Frontend_txt_struct_fortress_medical(int id, OUT Frontend_txt_struct_fortress_medical& info);

struct Frontend_txt_struct_fortress_oneoccupy
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
};
extern bool Get_Frontend_txt_struct_fortress_oneoccupy(int id, OUT Frontend_txt_struct_fortress_oneoccupy& info);

struct Frontend_txt_struct_fortress_pve_medical
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
	int nBuff_count;
	int nBuff_cover_type;
	int nBuff_cd;
	int nBuff1;
	int nBuff2;
	int nBbuff3;
	int nBuff4;
	int nBuff5;
};
extern bool Get_Frontend_txt_struct_fortress_pve_medical(int id, OUT Frontend_txt_struct_fortress_pve_medical& info);

struct Frontend_txt_struct_fortress_pve_recruit
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
	int nTimeCd;
	float fTotalTime;
	int nSoldierType;
	int nMaxRecruitCount;
};
extern bool Get_Frontend_txt_struct_fortress_pve_recruit(int id, OUT Frontend_txt_struct_fortress_pve_recruit& info);

struct Frontend_txt_struct_fortress_pve_supply
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
	int nBuff_count;
	int nBuff_cover_type;
	int nBuff_cd;
	int nBuff1;
	int nBuff2;
	int nBbuff3;
	int nBuff4;
	int nBuff5;
};
extern bool Get_Frontend_txt_struct_fortress_pve_supply(int id, OUT Frontend_txt_struct_fortress_pve_supply& info);

struct Frontend_txt_struct_fortress_pve_troops
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
	int nSupply_MaxCount;
	float fSupply_OneTime;
};
extern bool Get_Frontend_txt_struct_fortress_pve_troops(int id, OUT Frontend_txt_struct_fortress_pve_troops& info);

struct Frontend_txt_struct_fortress_recruit
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int nOccupy_self_add_morale;
	int nOccupy_enemy_reduce_morale;
	float fOccupy_boss_life_add_percent;
	int fFound_range;
	int nDdelay_add_time;
	int nDelay_add_show_cd_time;
	int nDelay_add_warning_count;
	int nDelay_add_warning_time1;
	int nDelay_add_warning_time2;
	int nDelay_add_warning_time3;
	float fTroops_generate_time;
	float fTroops_add_time;
	float fTroops_add_rate;
	int nVirtual_allplayerarmycount;
};
extern bool Get_Frontend_txt_struct_fortress_recruit(int id, OUT Frontend_txt_struct_fortress_recruit& info);

struct Frontend_txt_struct_fortress_resource
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int nOccupy_self_add_morale;
	int nOccupy_enemy_reduce_morale;
	float fOccupy_boss_life_add_percent;
	int fFound_range;
	int nBuff_count;
	int nBuff_cover_type;
	int nBuff_cd;
	int nBuff1;
	int nBuff2;
	int nBuff3;
	int nBuff4;
	int nBuff5;
	float fTroops_supply_time;
	float fBuff_effective_range;
	float fBuff_effective_inteval;
	int nDdelay_add_time;
	int nDelay_add_show_cd_time;
	int nDelay_add_warning_count;
	int nDelay_add_warning_time1;
	int nDelay_add_warning_time2;
	int nDelay_add_warning_time3;
};
extern bool Get_Frontend_txt_struct_fortress_resource(int id, OUT Frontend_txt_struct_fortress_resource& info);

struct Frontend_txt_struct_fortress_spawn
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int nOccupy_self_add_morale;
	int nOccupy_enemy_reduce_morale;
	float fOccupy_boss_life_add_percent;
	float fFound_range;
};
extern bool Get_Frontend_txt_struct_fortress_spawn(int id, OUT Frontend_txt_struct_fortress_spawn& info);

struct Frontend_txt_struct_fortress_supply
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int nOccupy_self_add_morale;
	int nOccupy_enemy_reduce_morale;
	float fOccupy_boss_life_add_percent;
	float fFound_range;
	int nBuff_count;
	int nBuff_cover_type;
	int nBuff_cd;
	int nBuff1;
	int nBuff2;
	int nBbuff3;
	int nBuff4;
	int nBuff5;
	int nDdelay_add_time;
	int nDelay_add_show_cd_time;
	int nDelay_add_warning_count;
	int nDelay_add_warning_time1;
	int nDelay_add_warning_time2;
	int nDelay_add_warning_time3;
};
extern bool Get_Frontend_txt_struct_fortress_supply(int id, OUT Frontend_txt_struct_fortress_supply& info);

struct Frontend_txt_struct_fortress_troops
{
	int Id;
	FString desc;
	FString SkeletalMesh;
	FString MyMat;
	FString EnemyMat;
	FString NeutralMat;
	FString PhysicsAssets;
	float fRadius;
	int nHealth;
	int nOccupy_range;
	float fOccupy_time;
	int fFound_range;
	int nTroops_generate_time;
	float fTroops_supply_time;
	float fTroops_add_rate;
};
extern bool Get_Frontend_txt_struct_fortress_troops(int id, OUT Frontend_txt_struct_fortress_troops& info);

struct Frontend_txt_struct_hit_effect
{
	int hit_effect;
	int hit_min;
	int hit_max;
};
extern bool Get_Frontend_txt_struct_hit_effect(int id, OUT Frontend_txt_struct_hit_effect& info);

struct Frontend_txt_struct_horse
{
	int HorseID;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString PhysicsAsset;
	int Level;
	int fHealth;
	int DefenseValue;
	float fJump;
	float Extraweight;
	float fAccelRate;
	float MaxSpeed;
	float fTurnToParam;
	float RotationRate;
	int SprintTotalCount;
	int minCrashDamage;
	int maxCrashDamage;
	float MountAnimTime;
	float DismountAnimTime;
	float HorseLazyTime;
	float CollisionStopTime;
	float QuickStopTime;
	float SprintExtraValue;
	float iCollisionStopVel;
	float iBumpStopVel;
	float fSprintTime;
	float BumpMass;
	float recoveryTimeInSprint;
	float fBlockSprintSpeed;
	float fHealthDown;
	float fAccelRateDown;
	float MaxSpeedDown;
	int fight;
	int nDifficuty;
	int nAssaultMomentum;
};
extern bool Get_Frontend_txt_struct_horse(int id, OUT Frontend_txt_struct_horse& info);

struct Frontend_txt_struct_horsearmor
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	int Level;
	float WeaponWeight;
	float fControlCoef;
	float VelocityExtraValue;
	float HealthExtraValue;
	float MetalFailPro;
	float LeatherFailPro;
	float ClothFailPro;
	int MetalDefenseValue;
	int LeatherDefenseValue;
	int ClothDefenseValue;
	float MetalMinusCutParam;
	float LeatherMinusCutParam;
	float ClothMinusCutParam;
	float MetalMinusStabParam;
	float LeatherMinusStabParam;
	float ClothMinusStabParam;
	float MetalMinusBluntParam;
	float LeatherMinusBluntParam;
	float ClothMinusBluntParam;
	FString Metal;
	FString Leather;
	FString Cloth;
	float MetalDefenseDown;
	float LeatherDefenseDown;
	float ClothDefenseDown;
	float FailProDown;
	int fight;
	float DefenseDownLv1;
	float DefenseDownLv2;
	float DefenseDownLv3;
	float DefenseDownLv4;
	float DefenseDownLv5;
	float DefenseDownLv6;
	float DefenseDownLv7;
	float DefenseDownLv8;
	float DefenseDownLv9;
	float fDefenseRemoteAtk;
};
extern bool Get_Frontend_txt_struct_horsearmor(int id, OUT Frontend_txt_struct_horsearmor& info);

struct Frontend_txt_struct_horsehoof
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString IconTexture;
	int Level;
	float fMaxSpeed;
	float fClimbSpeedRate;
	float fJump;
	float fAssaultSpeed;
	float fAngleRate;
	float fAssaultCDRate;
	float fAssaultTime;
	float QuickStopTimeRate;
	float fBeDetectedRate;
	float fAccelRate;
	int uFightPower;
	int uDurableness;
	int uReduceDurablenessPerSec;
};
extern bool Get_Frontend_txt_struct_horsehoof(int id, OUT Frontend_txt_struct_horsehoof& info);

struct Frontend_txt_struct_horsestrike
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString IconTexture;
	int Level;
	int nFront;
	int nBack;
	int nLeft;
	int nRight;
	int fCollisionDamage;
	int uDamageType;
	float fDamageSpeedRate;
	int uFightPower;
	int uDurableness;
	int uPlayerDurablenessPer;
	int uAiDurablenessPer;
	float fAiDamageRate;
	float fPlayerDamageRate;
	int fDamageCD;
	float fAttackRange;
	float fMetalCutCamailValue;
	float fMetalStabCamailValue;
	float fMetalBluntCamailValue;
	float fLeatherCutCamailValue;
	float fLeatherStabCamailValue;
	float fLeatherBluntCamailValue;
	float fClothCutCamailValue;
	float fClothStabCamailValue;
	float fClothBluntCamailValue;
};
extern bool Get_Frontend_txt_struct_horsestrike(int id, OUT Frontend_txt_struct_horsestrike& info);

struct Frontend_txt_struct_mapindex
{
	int map_id;
	FString map_name;
	FString desc;
	FString terrian;
	FString Camp1Pos;
	FString Camp1Dir;
	FString Camp2Pos;
	FString Camp2Dir;
	FString escape1Pos;
	FString escape2Pos;
	FString escape3Pos;
	FString escape4Pos;
	FString maxPathQueueNodes;
	FString camp1InitRegion;
	FString camp2InitRegion;
	int nNationType;
};
extern bool Get_Frontend_txt_struct_mapindex(int id, OUT Frontend_txt_struct_mapindex& info);

struct Frontend_txt_struct_mc_aerialladder
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString SkeletalMesh4;
	FString AnimSet;
	FString PhysicsAssets;
	FString MorphAssets;
	FString IconTexture;
	FString BoneName;
	FString BrokenPointEffectPath;
	FString BrokenEffectPath;
	int nHealth;
	int nDamageValue;
	int nPlayerPlusDamageValue;
	int fAttackInterval;
	int nAttackPointPercent;
	int nDefenseValue;
	int fWeaponWeight;
	float fAroundPlayerRange;
	float fInitialSpeed;
	int fOperatRange;
	float nRotationRate;
	float fAtkPlayerPlusSpeed;
	float fDefendPlayerPlusSpeed;
	float fAtkSpeedMax;
	float fDefendSpeedMax;
	float nBreakLightPercent;
	float nBreakHeavyPercent;
	float fAccelRate;
	int fTimeLadderDown;
	int fTimeLadderUp;
	int nRebornTimeSec;
	float Radius;
	int nRepairTimeDT;
	int nRepairRecoverHealth;
	float putdownRadius;
	float putdownHeight;
	float fCollisionRadius;
	float fWidth;
	int nVehicle;
	int nMax_nneis;
	int fQueryRange;
};
extern bool Get_Frontend_txt_struct_mc_aerialladder(int id, OUT Frontend_txt_struct_mc_aerialladder& info);

struct Frontend_txt_struct_mc_arrowtower
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString SkeletalMesh4;
	FString IconTexture;
	FString AnimSet;
	FString PhysicAsset;
	FString BoneName;
	FString BrokenPointEffectPath;
	FString BrokenEffectPath;
	int nHealth;
	int nDefenseValue;
	float fWeight;
	float Radius;
	float fAttackRate;
	float fDamageRate;
	float fDefenseRate;
	float fBulletSpeedRate;
	float fDetectRate;
	float fBeDetectRate;
	float fOperateRange;
	int nRepairSec;
	int nOccupySec;
	int nOccupySoliderCount;
	int nOccupySoliderRange;
	int nEndOccupySec;
	float fFoundRange;
	int nOnMaxCount;
	float fPosRadius;
	FString Pos;
};
extern bool Get_Frontend_txt_struct_mc_arrowtower(int id, OUT Frontend_txt_struct_mc_arrowtower& info);

struct Frontend_txt_struct_mc_ballista
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString SkeletalMesh4;
	FString IconTexture;
	FString BoneName;
	FString BrokenPointEffectPath;
	FString BrokenEffectPath;
	int nHealth;
	float fShootDamageFactor;
	int nDefenseValue;
	int fWeaponWeight;
	float RotationRate;
	float nMaxRotateAngleH;
	float nMaxRotateAngleV;
	int fLoadAmmoTime;
	float fFetchingTime;
	int fLoadAmmoCancelTime;
	float fOriginalSpeed;
	int nMcBulletType;
	int BulletCount;
	float Radius;
	int nRepairTimeDT;
	int nRepairRecoverHealth;
	float fOwnerOffset_Angle;
	float fOwnerOffset_Dis;
	int fOperatRange;
};
extern bool Get_Frontend_txt_struct_mc_ballista(int id, OUT Frontend_txt_struct_mc_ballista& info);

struct Frontend_txt_struct_mc_bullet
{
	int BulletID;
	FString ItemName;
	FString ItemDescription;
	FString BulletType;
	float fBulletWeight;
	int nBulletWeightLevel;
	int nBulletDamageType;
	float fShootDamageFactor;
	float fDamageShieldFactor;
	float fDamageBuildFactor;
	float fDamageUnitFactor;
	float fSplashDamageFactor;
	float fSplashDamageRange;
};
extern bool Get_Frontend_txt_struct_mc_bullet(int id, OUT Frontend_txt_struct_mc_bullet& info);

struct Frontend_txt_struct_mc_catapults
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString SkeletalMesh4;
	FString BoneName;
	FString BrokenPointEffectPath;
	FString BrokenEffectPath;
	FString nCataType;
	FString IconTexture;
	int nHealth;
	float fShootDamageFactor;
	int nDefenseValue;
	int fWeaponWeight;
	float nRotationRate;
	float nMaxRotateAngle;
	float nWeaponCachedMinRange;
	float nWeaponCachedMaxRange;
	int fLoadAmmoTime;
	int fFetchingTime;
	int fLoadAmmoCancelTime;
	float fOriginalSpeed;
	int nMcBulletType;
	int BulletCount;
	int fMaxOffsetRange;
	float Radius;
	float fCollisionRadius;
	float fWidth;
	int nRepairTimeDT;
	int nRepairRecoverHealth;
	float fOwnerOffset_Angle;
	float fOwnerOffset_Dis;
	float fOperatRange;
};
extern bool Get_Frontend_txt_struct_mc_catapults(int id, OUT Frontend_txt_struct_mc_catapults& info);

struct Frontend_txt_struct_mc_gate
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString IconTexture;
	FString AnimSet;
	FString PhysicAsset;
	int nHealth;
	int nDefenseValue;
	int fWeight;
	float Radius;
};
extern bool Get_Frontend_txt_struct_mc_gate(int id, OUT Frontend_txt_struct_mc_gate& info);

struct Frontend_txt_struct_mc_roadblock
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString IconTexture;
	FString AnimSet;
	FString PhysicAsset;
	int nHealth;
	int nDefenseValue;
	int fWeight;
	float Radius;
	float fScaleRate;
};
extern bool Get_Frontend_txt_struct_mc_roadblock(int id, OUT Frontend_txt_struct_mc_roadblock& info);

struct Frontend_txt_struct_mc_siege
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh1;
	FString SkeletalMesh2;
	FString SkeletalMesh3;
	FString SkeletalMesh4;
	FString AnimSet;
	FString PhysicsAssets;
	FString MorphAssets;
	FString IconTexture;
	FString BoneName;
	FString BrokenPointEffectPath;
	FString BrokenEffectPath;
	int nHealth;
	int nDamageValue;
	int nPlayerPlusDamageValue;
	int nDefenseValue;
	int fWeaponWeight;
	float fAroundPlayerRange;
	float fOperatRange;
	float fInitialSpeed;
	float nRotationRate;
	float fAtkPlayerPlusSpeed;
	float fDefendPlayerPlusSpeed;
	float fAtkSpeedMax;
	float fDefendSpeedMax;
	float fAccelRate;
	float fAttackInterval;
	int nAttackPointPercent;
	int nBreakLightPercent;
	int nBreakHeavyPercent;
	int nRebornTimeSec;
	float Radius;
	float fCollisionRadius;
	float fWidth;
	int nRepairTimeDT;
	int nRepairRecoverHealth;
	int nVehicle;
	float fScaleRate;
};
extern bool Get_Frontend_txt_struct_mc_siege(int id, OUT Frontend_txt_struct_mc_siege& info);

struct Frontend_txt_struct_meleeweapon
{
	int ItemId;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString ScabbardMesh;
	int Level;
	float WeaponWeight;
	int WeaponWeightLevel;
	int nUpAttackType;
	int nDownAttackType;
	int nLeftAttackType;
	int nRightAttackType;
	int AssaultDamageType;
	float CutDamageFactor;
	float PunctureDamageFactor;
	float AssaultDamageFactor;
	float McDamageFactor;
	float CutHurtMultiple;
	float PunctureHurtMultiple;
	float DamageShieldFactor;
	int Durableness;
	int bIsBeginCharge;
	int bIsUseOnHorse;
	float fWeaponLength;
	float WeaponCachedMaxRange;
	float fFrontWeaponPart;
	float fBackWeaponPartDamage;
	FString FrontWeaponPartName;
	FString BackWeaponPartName;
	float FiringTime;
	float WeaponFetchingTime;
	float BeginDefendTime;
	float DoHurtAnimTime;
	float FailFireTime;
	float SucDefendTime;
	float FailDefendTime;
	float SprintAttackTime;
	float DoubleHitTime;
	float DoubleHitEndTime;
	float ForbidBreakTime;
	float PersistFetching1Time;
	float PersistFetching2Time;
	float Persist1WeaponRange;
	float Persist2WeaponRange;
	float Persist1WeaponWeightLevel;
	float Persist2WeaponWeightLevel;
	float Persist1DamageFactor;
	float Persist2DamageFactor;
	float MetalCutCamailValue;
	float MetalStabCamailValue;
	float MetalBluntCamailValue;
	float LeatherCutCamailValue;
	float LeatherStabCamailValue;
	float LeatherBluntCamailValue;
	float ClothCutCamailValue;
	float ClothStabCamailValue;
	float ClothBluntCamailValue;
	float CannotAttackRange;
	int ReleasePercent;
	float ReleaseParam;
	int ReleaseEndPercent;
	float ReleaseEndParam;
	int nUpDefendType;
	int nDownDefendType;
	int nLeftDefendType;
	int nRightDefendType;
	float CutDamageDown;
	float PunctureDamageDown;
	float AssaultDamageDown;
	float CamailDown;
	int fight;
	float DamageDownLv1;
	float DamageDownLv2;
	float DamageDownLv3;
	float DamageDownLv4;
	float DamageDownLv5;
	float DamageDownLv6;
	float DamageDownLv7;
	float DamageDownLv8;
	float DamageDownLv9;
	float MeleeFeedbackSlomo;
	float MeleeFeedbackEndTime;
	float MeleeFeedbackEndPow;
	int nAnimPauseCount;
	int fAttackBlendTimeU;
	int nAttackBlendTypeU;
	int fAttackBlendTimeD;
	int nAttackBlendTypeD;
	int fAttackBlendTimeL;
	int nAttackBlendTypeL;
	int fAttackBlendTimeR;
	int nAttackBlendTypeR;
	float PushInitSpeed;
	float PushCdTime;
	float PushDistance;
	float PushAngle;
	int PushType;
	float BeginSprint;
	FString WaveVoice;
	float fPlayerCauseAIDamageVal;
	float fPvPDamageRate;
	float fPveDamageFactor;
	int nIsPveWeapon;
	float fContinusCut2ndTime;
	float fContinusCut3rdTime;
	float fContinusCut2ndAttackGround;
	float fContinusCut2ndAttackRide;
	float fContinusCut3rdAttackGround;
	float fContinusCut3rdAttackRide;
	int nfContinusCut2ndWeight;
	int nfContinusCut3rdWeight;
	float fNewDoubleHitPos01;
	float fNewDoubleHitLens01;
	float fNewDoubleHitPos02;
	float fNewDoubleHitLens02;
	float fNewDoubleHitToNextPercent02;
	float fNewDoubleHitTime02_Up;
	float fNewDoubleHitTime02_Down;
	float fNewDoubleHitTime02_Left;
	float fNewDoubleHitTime02_Right;
	float fNewDoubleHitTime03_Up  ;
	float fNewDoubleHitTime03_Down;
	float fNewDoubleHitTime03_Left;
	float fNewDoubleHitTime03_Right;
	float fWithShieldAtkSpeedRate;
	float fHead_hurt_factor;
	float fShoulder_hurt_factor;
	float fChest_hurt_factor;
	float fLeg_hurt_factor;
	int nSwitchWeapon;
	int nDifficuty;
	int nCanPushBlock;
	float fPushBlockPushTime;
	float fPushBlockPullTime;
	int nPushBlockWeight;
	int costfield;
	float Persist2AddCamailVal;
	int nFurySkillId;
	int nFuryBaoQiSkillId;
	int nAttackCount_Normal;
	int nAttackCount_Persist1;
	int nAttackCount_Persist2;
	float fRideAttackSpeedRate;
	int nRideEruptSkillId;
	int nRideJumpEruptSkillId;
	int nRidePushSkillId;
	float fRideEruptCdTimeSec;
	float fSprintTimeSec;
	float fSprintTimeCdSec;
	int nSprintMaxYawAim;
	float fSprintSpeed;
	float fTakeOffTime;
	float fTakeOutTime;
	float fGroundRotationFactor;
	float fHorseDamageRate;
	float fAICauseAIDamageShieldFactor;
};
extern bool Get_Frontend_txt_struct_meleeweapon(int id, OUT Frontend_txt_struct_meleeweapon& info);

struct Frontend_txt_struct_message
{
	int Id;
	int nTimeLast;
	int nTimeCD;
	int nType;
	int nColor;
	FString sContent;
};
extern bool Get_Frontend_txt_struct_message(int id, OUT Frontend_txt_struct_message& info);

struct Frontend_txt_struct_message_left_right
{
	int Id;
	int nTimeCD;
	int nLeftRight;
	FString szMain;
	FString szBack;
	int nFujiang;
};
extern bool Get_Frontend_txt_struct_message_left_right(int id, OUT Frontend_txt_struct_message_left_right& info);

struct Frontend_txt_struct_obstacle
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString EnemySkeletalMesh;
	FString IconTexture;
	FString AnimSet;
	FString PhysicAsset;
	int nHealth;
	int nHitHealthDestroySelf;
	int nBaseHit;
	int nHorseBaseHit;
	int nRaiseHoovesHit;
	int fBeDetected;
	int nWeaponKind;
	int fWeight;
	float Radius;
	int fSpeed1Val;
	int nSpeed1Hurt;
	int nSpeed2Hurt;
};
extern bool Get_Frontend_txt_struct_obstacle(int id, OUT Frontend_txt_struct_obstacle& info);

struct Frontend_txt_struct_owneroffsetpos
{
	int unit_type;
	float angle;
	float distance;
};
extern bool Get_Frontend_txt_struct_owneroffsetpos(int id, OUT Frontend_txt_struct_owneroffsetpos& info);

struct Frontend_txt_struct_playerposecard
{
	int Id;
	FString PoseAsset;
};
extern bool Get_Frontend_txt_struct_playerposecard(int id, OUT Frontend_txt_struct_playerposecard& info);

struct Frontend_txt_struct_pve_monster
{
	int MonsterID;
	FString MonsterName;
	FString MonsterDescription;
	int MonsterModelType;
	int nMonsterKind;
	int ArmorType;
	int SpawnType;
	int nAwardPoint;
	float fBumpMass;
	FString SkeletalMesh;
	FString nFlagID;
	FString IconTexture;
	int Level;
	int nHealth;
	float MaxSpeed;
	float fAiHorseSpeedRate;
	float fAiHorseAcceRate;
	float fAiHorseRotationRate;
	float fAiAttackSpeedRate;
	float fRemoteAtkFactor;
	float RotationRate;
	float fAccelRate;
	float DefenseValue;
	float DamageValue;
	float fPlayerCauseAIShieldVal;
	float AlertRange1;
	float AlertRange2;
	float AlertRange3;
	float AlertRange4;
	int WeaponID1;
	int WeaponID2;
	int WeaponID3;
	int WeaponID4;
	int HeadEquipID;
	int ShoulderEquipID;
	int UpBodyEquipID;
	int DownBodyEquipID;
	int HorseID;
	int HorseEquipID;
	float fHorseLifeRate;
	float DetectRate;
	float BeDetectedRate;
	float fDefendRange;
	float fSupportRange;
	FString szForceMovePos;
	float AlertHewupPercent;
	float AlertBlockPercent;
	float ShotOffsetRangeX;
	float ShotOffsetRangeY;
	float fAttackOrDefendProb_0;
	float fAttackOrDefendProb_1;
	float fAttackOrDefendProb_2;
	float fAttackOrDefendProb_3;
	float fMeleeAttackIntervalTime;
	float fRangeAttackIntervalTime;
	float CausePlayerDamage;
	float CauseAIDamage;
	float CauseHorseDamage;
	float CauseBossDamage;
	float PenetrateCut;
	float PenetratePuncture;
	float PenetrateBlunt;
	float nTacticalMovePercent;
	FString Skill1;
	FString Skill2;
	FString Skill3;
	FString Skill4;
	FString Skill5;
	FString Skill6;
	FString Skill7;
	FString Skill8;
	FString Skill9;
	FString Skill10;
	FString Skill11;
	FString Skill12;
	FString Skill13;
	FString Skill14;
	FString Skill15;
	float fDefenseRemoteAtk;
	int nNationType;
};
extern bool Get_Frontend_txt_struct_pve_monster(int id, OUT Frontend_txt_struct_pve_monster& info);

struct Frontend_txt_struct_rangedweapon
{
	int ItemId;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	int Level;
	float WeaponWeight;
	int WeaponWeightLevel;
	float ShootDamageFactor;
	float RemoteHurtMultiple;
	float DamageShieldFactor;
	float FetchingTime;
	float FiringTime;
	float HoldingTime;
	float iFirstMinRadius;
	float iSecondMinRadius;
	float fPresistHoldingToSpreadTime;
	float iSpreadRadius;
	float SpreadMoveFactorOnGround;
	float SpreadMoveFactorOnHorse;
	float fSpeedFactorBase;
	int bSpreadAble;
	int nMaxFireRange;
	float DoHurtAnimTime;
	int WeaponCachedMaxRange;
	float fHoldLvPerscent;
	float fOriginalSpeed;
	float fSecondSpeed;
	int Persist1WeaponWeightLevel;
	int Persist2WeaponWeightLevel;
	int AmmoID;
	float vecHitOffsetX;
	float vecHitOffsetY;
	int kind;
	int CannotAttackRange;
	int bIsUseOnHorse;
	int LoadAmmoCount;
	float LoadAmmoTime;
	float ShootDamageDown;
	int fight;
	float DamageDownLv1;
	float DamageDownLv2;
	float DamageDownLv3;
	float DamageDownLv4;
	float DamageDownLv5;
	float DamageDownLv6;
	float DamageDownLv7;
	float DamageDownLv8;
	float DamageDownLv9;
	int ShortRange;
	int LongRange;
	float ShortRangeDamage;
	float LongRangeDamage;
	float HighLowDamage;
	float PushInitSpeed;
	int PushCdTime;
	float PushDistance;
	int PushAngle;
	int PushType;
	FString WaveVoice;
	float fPlayerCauseAIDamageVal;
	float fPvPDamageRate;
	int fPveDamageFactor;
	int nIsPveWeapon;
	float fWithShieldAtkSpeedRate;
	float fHead_hurt_factor;
	int fShoulder_hurt_factor;
	float fChest_hurt_factor;
	float fLeg_hurt_factor;
	int nSingleComboNum;
	float fSingleComboShootTime;
	int nSwitchWeapon;
	int nDifficuty;
	float fComboShotAtkDmgFactor;
	int costfield;
	int fCamailValue;
	int Persist2AddCamailVal;
	int nFurySkillId;
	int nFuryBaoQiSkillId;
	float fRideAttackSpeedRate;
	int nQSkillId;
	float fRideShotCdTimeSec;
	float fTakeOffTime;
	float fTakeOutTime;
	float fGroundRotationFactor;
	float fHorseDamageRate;
};
extern bool Get_Frontend_txt_struct_rangedweapon(int id, OUT Frontend_txt_struct_rangedweapon& info);

struct Frontend_txt_struct_roadshield
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString EnemySkeletalMesh;
	FString AnimSet;
	FString PhysicAsset;
	int nHealth;
	int fBeDetected;
	int fWeight;
	float fRadius;
};
extern bool Get_Frontend_txt_struct_roadshield(int id, OUT Frontend_txt_struct_roadshield& info);

struct Frontend_txt_struct_rolling_wood
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString IconTexture;
	FString AnimSet;
	FString PhysicAsset;
	int nHitHealth;
	int nPrepareTime;
	int fMaxSpeed;
	int fAcceleration;
	int fRotationRate;
	int fWeight;
};
extern bool Get_Frontend_txt_struct_rolling_wood(int id, OUT Frontend_txt_struct_rolling_wood& info);

struct Frontend_txt_struct_science
{
	int Id;
	FString Name;
	int PersonId;
	FString SoldierName;
	FString AttributeId;
	FString Desc;
	float fAttributeValue;
};
extern bool Get_Frontend_txt_struct_science(int id, OUT Frontend_txt_struct_science& info);

struct Frontend_txt_struct_shield
{
	int ItemID;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	int Level;
	float WeaponWeight;
	int WeaponWeightLevel;
	int ResistHit;
	int Durableness;
	int bIsUseOnHorse;
	float UpDefendShieldRange;
	float DownDefendShieldRange;
	float LeftDefendShieldRange;
	float RightDefendShieldRange;
	float UpRealShieldRange;
	float DownRealShieldRange;
	float LeftRealShieldRange;
	float RightRealShieldRange;
	float BeginDefendTime;
	float SucDefendTime;
	float FailDefendTime;
	FString ShieldStyleName;
	float ResistHitDown;
	int DurablenessDown;
	int fight;
	int ResistHitDownLv1;
	int ResistHitDownLv2;
	int ResistHitDownLv3;
	int ResistHitDownLv4;
	int ResistHitDownLv5;
	int ResistHitDownLv6;
	int ResistHitDownLv7;
	int ResistHitDownLv8;
	int ResistHitDownLv9;
	float PushInitSpeed;
	float PushCdTime;
	float PushDistance;
	float PushAngle;
	int PushType;
	float BeginSprint;
	int fPveDurableness;
	int nIsPveWeapon;
	int nDifficuty;
	int costfield;
	float fRideDefenseSpeedRate;
	float fSprintTimeSec;
	float fSprintTimeCdSec;
	int nSprintMaxYawAim;
	float fSprintSpeed;
	float fTakeOffTime;
	float fTakeOutTime;
	float fGroundRotationFactor;
};
extern bool Get_Frontend_txt_struct_shield(int id, OUT Frontend_txt_struct_shield& info);

struct Frontend_txt_struct_soldiers
{
	int Id;
	FString SoldierName;
	FString SoldierDescription;
	int SoldierKind;
	int SoldierSubKind;
	int fPrice;
	float BumpMass;
	int BaseAggressive;
	FString SkeletalMesh;
	int Level;
	int fHealth;
	float MaxSpeed;
	float fAiHorseSpeedRate;
	float fAiHorseAcceRate;
	float fAiHorseRotationRate;
	float fAiAttackSpeedRate;
	float RotationRate;
	float SprintSpeed;
	float fAccelRate;
	int SoldierDefenseValue;
	int SoldierDamage;
	float fPlayerCauseAIShieldVal;
	float AlertRange1;
	float AlertRange2;
	float AlertRange3;
	float AlertRange4;
	float FollowRange;
	float DefendRange;
	float PushRange;
	float fStartHoldMinTime;
	float fStartHoldMaxTime;
	float fHoldToFireMinTime;
	float fHoldToFireMaxTime;
	int WeaponID1;
	int WeaponID2;
	int WeaponID3;
	int WeaponID4;
	int HeadEquipID;
	int ShoulderEquipID;
	int UpBodyEquipID;
	int DownBodyEquipID;
	int HorseID;
	int HorseEquipID;
	float fHorseLifeRate;
	float AmmoCountFactor;
	int ArmorType;
	float DetectRate;
	float BeDetectedRate;
	float AlertHewupPercent;
	float AlertBlockPercent;
	float ShotOffsetRangeX;
	float ShotOffsetRangeY;
	float fAttackOrDefendProb_0;
	float fAttackOrDefendProb_1;
	float fAttackOrDefendProb_2;
	float fAttackOrDefendProb_3;
	float fMeleeAttackIntervalTime;
	float fRangeAttackIntervalTime;
	float fFailFire;
	int CurGroundFireStyle;
	int CurGroundAimStyle_0;
	int CurGroundAimStyle_1;
	int CurHorseFireStyle;
	int CurHorseAimStyle_0;
	int CurHorseAimStyle_1;
	float CausePlayerDamage;
	float CauseAIDamage;
	float CauseHorseDamage;
	float CauseBossDamage;
	float fSprintTimeOnGround;
	int nAISRS;
	float PenetrateCut;
	float PenetratePuncture;
	float PenetrateBlunt;
	float nTacticalMovePercent;
	int nMorale;
	int nMoraleBehavior1;
	int nMoraleBehavior2;
	int nMoraleBehavior3;
	int nMoraleBehavior4;
	int nMoraleBehavior5;
	int SkillID_1;
	int SkillID_2;
	int SkillID_3;
	int SkillID_4;
	int SkillID_5;
	int CollectivPercent;
	int Energy;
	int MatchValue;
	float ExpFactor;
	float CoinFactor;
	float fRemoteAtkFactor;
	int nFlagId;
	int nFlagIdElite;
	float fScoreFactor;
	float fDefenseRemoteAtk;
	float fHorseWeightRate;
	float fPveDamageRate;
	int nDefaultFormation;
	int nNationType;
	float fTeamMoveSpeed;
	float fTeamAngleSpeed;
	float fTeamAccel;
	float fFallBehindSpeedRate;
};
extern bool Get_Frontend_txt_struct_soldiers(int id, OUT Frontend_txt_struct_soldiers& info);

struct Frontend_txt_struct_specificflag
{
	int SpecificFlagType;
	FString SkeletalMesh;
	FString Name;
};
extern bool Get_Frontend_txt_struct_specificflag(int id, OUT Frontend_txt_struct_specificflag& info);

struct Frontend_txt_struct_splitfromhorse
{
	int split_type;
	int time;
	float dist;
	int min_speed;
	int max_speed;
};
extern bool Get_Frontend_txt_struct_splitfromhorse(int id, OUT Frontend_txt_struct_splitfromhorse& info);

struct Frontend_txt_struct_sprintact
{
	int act_type;
	float time1;
	float dis1;
	float time2;
	float dis2;
};
extern bool Get_Frontend_txt_struct_sprintact(int id, OUT Frontend_txt_struct_sprintact& info);

struct Frontend_txt_struct_supplything
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString EnemySkeletalMesh;
	FString AnimSet;
	FString PhysicAsset;
	int nHealth;
	int fBeDetected;
	int fWeight;
	float fRadius;
	float fSupplyRange;
	int nLifeTime;
	int nSuppyType;
	int nSupplyBuffID1;
	int nSupplyBuffID2;
};
extern bool Get_Frontend_txt_struct_supplything(int id, OUT Frontend_txt_struct_supplything& info);

struct Frontend_txt_struct_survival_bufflist
{
	int Type;
	FString Name;
	FString Desc;
	int Percent;
};
extern bool Get_Frontend_txt_struct_survival_bufflist(int id, OUT Frontend_txt_struct_survival_bufflist& info);

struct Frontend_txt_struct_team_attack
{
	int nSoldierKind;
	int nEnemyTeam_FootMan;
	int nEnemyTeam_Archer;
	int nEnemyTeam_Cavalry;
	int nEnemyTeam_HorseArcher;
	int nEnemyPlayer_Ride;
	int nEnemyPlayer_Ground;
	float fCalcValueParam;
	float fFindTargetRange;
	float fStopMoveDistance;
};
extern bool Get_Frontend_txt_struct_team_attack(int id, OUT Frontend_txt_struct_team_attack& info);

struct Frontend_txt_struct_terrain_type
{
	int terrain_type;
	FString desc;
	int detect_range;
	int bedetected_range;
	int map;
};
extern bool Get_Frontend_txt_struct_terrain_type(int id, OUT Frontend_txt_struct_terrain_type& info);

struct Frontend_txt_struct_aiplayeraction
{
	int ActionType;
	FString Desc;
	int nUpdateTimeSec;
	float fAdditionDamping;
	int nValueBase_EnemyTeam;
	int nValueBase_EnemyBoss;
	int nValueBase_FortressMedical;
	int nValueBase_FortressSupply;
	int nValueBase_FortressTroop;
	int nValueBase_FortressResource;
	int nValueBase_FinalHit;
	int nValueBase_Rescue;
	int nValueAddition_PlayerHitByPlayer;
	int nValueAddition_PlayerHitByAI;
	int nValueAddition_AIHitByPlayer;
	int nValueAddition_AIHitByAI;
	int nValueAddition_BossBeHit;
	int nValueAddition_FortressBeOccupy;
};
extern bool Get_Frontend_txt_struct_aiplayeraction(int id, OUT Frontend_txt_struct_aiplayeraction& info);

struct Frontend_txt_struct_aisoldiericon
{
	int idSkill;
	FString SkeletalMesh;
	FString TLWH;
	FString SoundPath;
};
extern bool Get_Frontend_txt_struct_aisoldiericon(int id, OUT Frontend_txt_struct_aisoldiericon& info);

struct Frontend_txt_struct_fashion
{
	int ItemID;
	FString ItemName;
	FString MaleHelmetSkeletalMesh;
	FString MaleShoulderSkeletalMesh;
	FString MaleUpBodySkeletalMesh;
	FString MaleDownBodySkeletalMesh;
	FString FemaleHelmetSkeletalMesh;
	FString FemaleShoulderSkeletalMesh;
	FString FemaleUpBodySkeletalMesh;
	FString FemaleDownBodySkeletalMesh;
};
extern bool Get_Frontend_txt_struct_fashion(int id, OUT Frontend_txt_struct_fashion& info);

struct Frontend_txt_struct_flag
{
	int Id;
	FString ItemName;
	FString ItemDescription;
	FString SkeletalMesh;
	FString SkeletalMesh1;
};
extern bool Get_Frontend_txt_struct_flag(int id, OUT Frontend_txt_struct_flag& info);

struct Frontend_txt_struct_fuiang_notify_voice
{
	int nFujiangId;
	FString szFormation;
	FString szAtkShort;
	FString szDeath;
	FString szHurt;
};
extern bool Get_Frontend_txt_struct_fuiang_notify_voice(int id, OUT Frontend_txt_struct_fuiang_notify_voice& info);

struct Frontend_txt_struct_fujiangPersonalSkillVoice
{
	int nFujiangId;
	int nSkillType;
	FString szVoisePath;
};
extern bool Get_Frontend_txt_struct_fujiangPersonalSkillVoice(int id, OUT Frontend_txt_struct_fujiangPersonalSkillVoice& info);

struct Frontend_txt_struct_horse_fashion
{
	int ItemID;
	FString ItemName;
	FString HorseSkeletalMesh;
	FString HorseArmorSkeletalMesh;
};
extern bool Get_Frontend_txt_struct_horse_fashion(int id, OUT Frontend_txt_struct_horse_fashion& info);

struct Frontend_txt_struct_itemicon
{
	int Id;
	FString Desc;
	FString ItemTexPath;
	FString TLWH;
	FString ItemTexUsePath;
	FString ItemTexOtherUsePath;
};
extern bool Get_Frontend_txt_struct_itemicon(int id, OUT Frontend_txt_struct_itemicon& info);

struct Frontend_txt_struct_restrain
{
	int self_soldier_kind;
	int self_horse_state;
	int enemy_dist_type;
	int enemy_soldier_kind;
	int enemy_horse_state;
	int enemy_armor_type;
	int restrain_class;
	int restrain_type1;
	int restrain_type2;
	int restrain_type3;
	int restrain_type4;
	int restrain_type5;
	int restrain_type6;
	int restrain_type7;
	int restrain_type8;
	int restrain_type9;
	int restrain_type10;
};
extern bool Get_Frontend_txt_struct_restrain(int id, OUT Frontend_txt_struct_restrain& info);

struct Frontend_txt_struct_state_display
{
	int Id;
	FString Desc;
	int nIconX;
	int nIconY;
	int nbShowSelfPlayer;
	int nbShowSelfTroops;
	int nbShowTeamPlayer;
	int nbShowTeamTroops;
	int nbShowEnemyPlayer;
	int nbShowEnemyTroops;
};
extern bool Get_Frontend_txt_struct_state_display(int id, OUT Frontend_txt_struct_state_display& info);

struct Frontend_txt_struct_weaponicon
{
	int Id;
	FString Desc;
	FString ItemTexPath;
};
extern bool Get_Frontend_txt_struct_weaponicon(int id, OUT Frontend_txt_struct_weaponicon& info);

struct Frontend_txt_struct_weapon_alert_range
{
	int WeaponKind;
	FString Desc;
	int Range_SelfGroundTargetGround;
	int Range_SelfGroundTargetRide;
	int Range_SelfRideTargetGround;
	int Range_SelfRideTargetRide;
};
extern bool Get_Frontend_txt_struct_weapon_alert_range(int id, OUT Frontend_txt_struct_weapon_alert_range& info);

struct Frontend_txt_struct_language_armytype
{
	int id;
	FString name0;
	FString name1;
	FString name2;
};
extern bool Get_Frontend_txt_struct_language_armytype(int id, OUT Frontend_txt_struct_language_armytype& info);
extern bool Get_Frontend_txt_struct_armytype_ByLanguage(int id, OUT Frontend_txt_struct_armytype& info, int language);

struct Frontend_txt_struct_language_battle_conditions
{
	int ID;
	FString condition0;
	FString condition1;
	FString condition2;
};
extern bool Get_Frontend_txt_struct_language_battle_conditions(int id, OUT Frontend_txt_struct_language_battle_conditions& info);

struct Frontend_txt_struct_language_fr_aisoldierskill
{
	int id;
	FString name0;
	FString Text0;
	FString name1;
	FString Text1;
	FString name2;
	FString Text2;
	FString Icontexture0;
	FString Icontexture1;
	FString Icontexture2;
	FString NeedText0;
	FString NeedText1;
	FString NeedText2;
};
extern bool Get_Frontend_txt_struct_language_fr_aisoldierskill(int id, OUT Frontend_txt_struct_language_fr_aisoldierskill& info);
extern bool Get_Frontend_txt_struct_fr_aisoldierskill_ByLanguage(int id, OUT Frontend_txt_struct_fr_aisoldierskill& info, int language);

struct Frontend_txt_struct_language_fr_background
{
	int id;
	FString Name0;
	FString Name1;
	FString Name2;
};
extern bool Get_Frontend_txt_struct_language_fr_background(int id, OUT Frontend_txt_struct_language_fr_background& info);
extern bool Get_Frontend_txt_struct_fr_background_ByLanguage(int id, OUT Frontend_txt_struct_fr_background& info, int language);

struct Frontend_txt_struct_language_fr_bsserver
{
	int id;
	FString name0;
	FString name1;
	FString name2;
	FString line_name0;
	FString line_name1;
	FString line_name2;
};
extern bool Get_Frontend_txt_struct_language_fr_bsserver(int id, OUT Frontend_txt_struct_language_fr_bsserver& info);
extern bool Get_Frontend_txt_struct_fr_bsserver_ByLanguage(int id, OUT Frontend_txt_struct_fr_bsserver& info, int language);

struct Frontend_txt_struct_language_fr_buffinfo
{
	int id;
	FString buffid;
	FString Name0;
	FString Name1;
	FString Name2;
	FString explain0;
	FString explain1;
	FString explain2;
};
extern bool Get_Frontend_txt_struct_language_fr_buffinfo(int id, OUT Frontend_txt_struct_language_fr_buffinfo& info);
extern bool Get_Frontend_txt_struct_fr_buffinfo_ByLanguage(int id, OUT Frontend_txt_struct_fr_buffinfo& info, int language);

struct Frontend_txt_struct_language_fr_city
{
	int id;
	FString city_name0;
	FString city_name1;
	FString city_name2;
};
extern bool Get_Frontend_txt_struct_language_fr_city(int id, OUT Frontend_txt_struct_language_fr_city& info);
extern bool Get_Frontend_txt_struct_fr_city_ByLanguage(int id, OUT Frontend_txt_struct_fr_city& info, int language);

struct Frontend_txt_struct_language_fr_customroom_map
{
	int id;
	FString mapName0;
	FString mapNorms0;
	FString mapAddress0;
	FString mapName1;
	FString mapNorms1;
	FString mapAddress1;
	FString mapName2;
	FString mapNorms2;
	FString mapAddress2;
};
extern bool Get_Frontend_txt_struct_language_fr_customroom_map(int id, OUT Frontend_txt_struct_language_fr_customroom_map& info);
extern bool Get_Frontend_txt_struct_fr_customroom_map_ByLanguage(int id, OUT Frontend_txt_struct_fr_customroom_map& info, int language);

struct Frontend_txt_struct_language_fr_customroom_mode
{
	int id;
	FString mainname0;
	FString subname0;
	FString winDesc0;
	FString winNum0;
	FString mainname1;
	FString subname1;
	FString winDesc1;
	FString winNum1;
	FString mainname2;
	FString subname2;
	FString winDesc2;
	FString winNum2;
};
extern bool Get_Frontend_txt_struct_language_fr_customroom_mode(int id, OUT Frontend_txt_struct_language_fr_customroom_mode& info);
extern bool Get_Frontend_txt_struct_fr_customroom_mode_ByLanguage(int id, OUT Frontend_txt_struct_fr_customroom_mode& info, int language);

struct Frontend_txt_struct_language_fr_faceicon
{
	int id;
	FString name0;
	FString name1;
	FString name2;
};
extern bool Get_Frontend_txt_struct_language_fr_faceicon(int id, OUT Frontend_txt_struct_language_fr_faceicon& info);
extern bool Get_Frontend_txt_struct_fr_faceicon_ByLanguage(int id, OUT Frontend_txt_struct_fr_faceicon& info, int language);

struct Frontend_txt_struct_language_fr_faction_award
{
	int id;
	FString desc0;
	FString desc1;
	FString desc2;
};
extern bool Get_Frontend_txt_struct_language_fr_faction_award(int id, OUT Frontend_txt_struct_language_fr_faction_award& info);
extern bool Get_Frontend_txt_struct_fr_faction_award_ByLanguage(int id, OUT Frontend_txt_struct_fr_faction_award& info, int language);

struct Frontend_txt_struct_language_fr_formation
{
	int id;
	FString name0;
	FString Text0;
	FString name1;
	FString Text1;
	FString name2;
	FString Text2;
	FString Icontexture0;
	FString Icontexture1;
	FString Icontexture2;
};
extern bool Get_Frontend_txt_struct_language_fr_formation(int id, OUT Frontend_txt_struct_language_fr_formation& info);
extern bool Get_Frontend_txt_struct_fr_formation_ByLanguage(int id, OUT Frontend_txt_struct_fr_formation& info, int language);

struct Frontend_txt_struct_language_fr_fujiang_skill
{
	int id;
	FString name0;
	FString Text0;
	FString Icontexture0;
	FString name1;
	FString Text1;
	FString Icontexture1;
	FString name2;
	FString Text2;
	FString Icontexture2;
};
extern bool Get_Frontend_txt_struct_language_fr_fujiang_skill(int id, OUT Frontend_txt_struct_language_fr_fujiang_skill& info);
extern bool Get_Frontend_txt_struct_fr_fujiang_skill_ByLanguage(int id, OUT Frontend_txt_struct_fr_fujiang_skill& info, int language);

struct Frontend_txt_struct_language_fr_fujiang_skillBuff
{
	int id;
	FString name0;
	FString Text0;
	FString name1;
	FString Text1;
	FString name2;
	FString Text2;
};
extern bool Get_Frontend_txt_struct_language_fr_fujiang_skillBuff(int id, OUT Frontend_txt_struct_language_fr_fujiang_skillBuff& info);
extern bool Get_Frontend_txt_struct_fr_fujiang_skillBuff_ByLanguage(int id, OUT Frontend_txt_struct_fr_fujiang_skillBuff& info, int language);

struct Frontend_txt_struct_language_fr_helptip
{
	int id;
	FString Description0;
	FString Description1;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_fr_helptip(int id, OUT Frontend_txt_struct_language_fr_helptip& info);
extern bool Get_Frontend_txt_struct_fr_helptip_ByLanguage(int id, OUT Frontend_txt_struct_fr_helptip& info, int language);

struct Frontend_txt_struct_language_fr_hightmorale_level_rate
{
	int id;
	FString name0;
	FString Text0;
	FString Icontexture0;
	FString name1;
	FString Text1;
	FString Icontexture1;
	FString name2;
	FString Text2;
	FString Icontexture2;
};
extern bool Get_Frontend_txt_struct_language_fr_hightmorale_level_rate(int id, OUT Frontend_txt_struct_language_fr_hightmorale_level_rate& info);
extern bool Get_Frontend_txt_struct_fr_hightmorale_level_rate_ByLanguage(int id, OUT Frontend_txt_struct_fr_hightmorale_level_rate& info, int language);

struct Frontend_txt_struct_language_fr_honor
{
	int id;
	FString name0;
	FString describe0;
	FString icon0;
	FString name1;
	FString describe1;
	FString icon1;
	FString name2;
	FString describe2;
	FString icon2;
};
extern bool Get_Frontend_txt_struct_language_fr_honor(int id, OUT Frontend_txt_struct_language_fr_honor& info);
extern bool Get_Frontend_txt_struct_fr_honor_ByLanguage(int id, OUT Frontend_txt_struct_fr_honor& info, int language);

struct Frontend_txt_struct_language_fr_medal
{
	int id;
	FString type_name0;
	FString name0;
	FString describe0;
	FString case_desc_1_0;
	FString case_desc_2_0;
	FString case_desc_3_0;
	FString case_desc_4_0;
	FString case_desc_5_0;
	FString award_describe0;
	FString type_name1;
	FString name1;
	FString describe1;
	FString case_desc_1_1;
	FString case_desc_2_1;
	FString case_desc_3_1;
	FString case_desc_4_1;
	FString case_desc_5_1;
	FString award_describe1;
	FString type_name2;
	FString name2;
	FString describe2;
	FString case_desc_1_2;
	FString case_desc_2_2;
	FString case_desc_3_2;
	FString case_desc_4_2;
	FString case_desc_5_2;
	FString award_describe2;
};
extern bool Get_Frontend_txt_struct_language_fr_medal(int id, OUT Frontend_txt_struct_language_fr_medal& info);
extern bool Get_Frontend_txt_struct_fr_medal_ByLanguage(int id, OUT Frontend_txt_struct_fr_medal& info, int language);

struct Frontend_txt_struct_language_fr_medal_condition
{
	int id;
	FString condition0;
	FString condition_dis0;
	FString condition1;
	FString condition_dis1;
	FString condition2;
	FString condition_dis2;
};
extern bool Get_Frontend_txt_struct_language_fr_medal_condition(int id, OUT Frontend_txt_struct_language_fr_medal_condition& info);
extern bool Get_Frontend_txt_struct_fr_medal_condition_ByLanguage(int id, OUT Frontend_txt_struct_fr_medal_condition& info, int language);

struct Frontend_txt_struct_language_fr_resolution
{
	int id;
	FString Description0;
	FString Description1;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_fr_resolution(int id, OUT Frontend_txt_struct_language_fr_resolution& info);
extern bool Get_Frontend_txt_struct_fr_resolution_ByLanguage(int id, OUT Frontend_txt_struct_fr_resolution& info, int language);

struct Frontend_txt_struct_language_fr_sound
{
	int id;
	FString description0;
	FString path0;
	FString description1;
	FString path1;
	FString description2;
	FString path2;
};
extern bool Get_Frontend_txt_struct_language_fr_sound(int id, OUT Frontend_txt_struct_language_fr_sound& info);
extern bool Get_Frontend_txt_struct_fr_sound_ByLanguage(int id, OUT Frontend_txt_struct_fr_sound& info, int language);

struct Frontend_txt_struct_language_fr_task
{
	int id;
	FString title0;
	FString desc0;
	FString act1_desc0;
	FString act2_desc0;
	FString act3_desc0;
	FString lead_action0;
	FString title1;
	FString desc1;
	FString act1_desc1;
	FString act2_desc1;
	FString act3_desc1;
	FString lead_action1;
	FString title2;
	FString desc2;
	FString act1_desc2;
	FString act2_desc2;
	FString act3_desc2;
	FString lead_action2;
};
extern bool Get_Frontend_txt_struct_language_fr_task(int id, OUT Frontend_txt_struct_language_fr_task& info);
extern bool Get_Frontend_txt_struct_fr_task_ByLanguage(int id, OUT Frontend_txt_struct_fr_task& info, int language);

struct Frontend_txt_struct_language_fr_techmaterial
{
	int id;
	FString name0;
	FString soldier_name0;
	FString effect0;
	FString desc0;
	FString name1;
	FString soldier_name1;
	FString effect1;
	FString desc1;
	FString name2;
	FString soldier_name2;
	FString effect2;
	FString desc2;
};
extern bool Get_Frontend_txt_struct_language_fr_techmaterial(int id, OUT Frontend_txt_struct_language_fr_techmaterial& info);
extern bool Get_Frontend_txt_struct_fr_techmaterial_ByLanguage(int id, OUT Frontend_txt_struct_fr_techmaterial& info, int language);

struct Frontend_txt_struct_language_fr_weekrank_reward
{
	int id;
	FString reward_desc0;
	FString reward_desc1;
	FString reward_desc2;
};
extern bool Get_Frontend_txt_struct_language_fr_weekrank_reward(int id, OUT Frontend_txt_struct_language_fr_weekrank_reward& info);
extern bool Get_Frontend_txt_struct_fr_weekrank_reward_ByLanguage(int id, OUT Frontend_txt_struct_fr_weekrank_reward& info, int language);

struct Frontend_txt_struct_language_fujiang
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
	FString Strength0;
	FString Strength1;
	FString Strength2;
};
extern bool Get_Frontend_txt_struct_language_fujiang(int id, OUT Frontend_txt_struct_language_fujiang& info);
extern bool Get_Frontend_txt_struct_fujiang_ByLanguage(int id, OUT Frontend_txt_struct_fujiang& info, int language);

struct Frontend_txt_struct_language_hero_type
{
	int id;
	FString name0;
	FString name1;
	FString name2;
};
extern bool Get_Frontend_txt_struct_language_hero_type(int id, OUT Frontend_txt_struct_language_hero_type& info);
extern bool Get_Frontend_txt_struct_hero_type_ByLanguage(int id, OUT Frontend_txt_struct_hero_type& info, int language);

struct Frontend_txt_struct_language_itemtype
{
	int id;
	FString name0;
	FString text0;
	FString message0;
	FString aliastype0;
	FString name1;
	FString text1;
	FString message1;
	FString aliastype1;
	FString name2;
	FString text2;
	FString message2;
	FString aliastype2;
};
extern bool Get_Frontend_txt_struct_language_itemtype(int id, OUT Frontend_txt_struct_language_itemtype& info);
extern bool Get_Frontend_txt_struct_itemtype_ByLanguage(int id, OUT Frontend_txt_struct_itemtype& info, int language);

struct Frontend_txt_struct_language_Rank_Property
{
	int id;
	FString propertytext0;
	FString propertytext1;
	FString propertytext2;
};
extern bool Get_Frontend_txt_struct_language_Rank_Property(int id, OUT Frontend_txt_struct_language_Rank_Property& info);
extern bool Get_Frontend_txt_struct_Rank_Property_ByLanguage(int id, OUT Frontend_txt_struct_Rank_Property& info, int language);

struct Frontend_txt_struct_language_rank_tree
{
	int rank_id;
	FString name0;
	FString name1;
	FString name2;
};
extern bool Get_Frontend_txt_struct_language_rank_tree(int id, OUT Frontend_txt_struct_language_rank_tree& info);
extern bool Get_Frontend_txt_struct_rank_tree_ByLanguage(int id, OUT Frontend_txt_struct_rank_tree& info, int language);

struct Frontend_txt_struct_language_science_type
{
	int id;
	FString name0;
	FString name1;
	FString name2;
};
extern bool Get_Frontend_txt_struct_language_science_type(int id, OUT Frontend_txt_struct_language_science_type& info);
extern bool Get_Frontend_txt_struct_science_type_ByLanguage(int id, OUT Frontend_txt_struct_science_type& info, int language);

struct Frontend_txt_struct_language_unlawful
{
	int ID;
	FString WORD0;
	FString WORD1;
	FString WORD2;
};
extern bool Get_Frontend_txt_struct_language_unlawful(int id, OUT Frontend_txt_struct_language_unlawful& info);
extern bool Get_Frontend_txt_struct_unlawful_ByLanguage(int id, OUT Frontend_txt_struct_unlawful& info, int language);

struct Frontend_txt_struct_language_achievement
{
	int Id;
	FString Name0;
	FString Name1;
	FString Name2;
};
extern bool Get_Frontend_txt_struct_language_achievement(int id, OUT Frontend_txt_struct_language_achievement& info);
extern bool Get_Frontend_txt_struct_achievement_ByLanguage(int id, OUT Frontend_txt_struct_achievement& info, int language);

struct Frontend_txt_struct_language_aipersonalskill
{
	int Id;
	FString Desc;
	FString ShoutContent0;
	FString ShoutContent1;
	FString ShoutContent2;
};
extern bool Get_Frontend_txt_struct_language_aipersonalskill(int id, OUT Frontend_txt_struct_language_aipersonalskill& info);

struct Frontend_txt_struct_language_aisoldierskill
{
	int idSkill;
	FString SkillName0;
	FString SkillDesc0;
	FString SkillName1;
	FString SkillDesc1;
	FString SkillName2;
	FString SkillDesc2;
};
extern bool Get_Frontend_txt_struct_language_aisoldierskill(int id, OUT Frontend_txt_struct_language_aisoldierskill& info);

struct Frontend_txt_struct_language_armor
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_armor(int id, OUT Frontend_txt_struct_language_armor& info);
extern bool Get_Frontend_txt_struct_armor_ByLanguage(int id, OUT Frontend_txt_struct_armor& info, int language);

struct Frontend_txt_struct_language_boss
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_boss(int id, OUT Frontend_txt_struct_language_boss& info);
extern bool Get_Frontend_txt_struct_boss_ByLanguage(int id, OUT Frontend_txt_struct_boss& info, int language);

struct Frontend_txt_struct_language_bullet_clip
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_bullet_clip(int id, OUT Frontend_txt_struct_language_bullet_clip& info);
extern bool Get_Frontend_txt_struct_bullet_clip_ByLanguage(int id, OUT Frontend_txt_struct_bullet_clip& info, int language);

struct Frontend_txt_struct_language_flag
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_flag(int id, OUT Frontend_txt_struct_language_flag& info);
extern bool Get_Frontend_txt_struct_flag_ByLanguage(int id, OUT Frontend_txt_struct_flag& info, int language);

struct Frontend_txt_struct_language_formation
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_formation(int id, OUT Frontend_txt_struct_language_formation& info);
extern bool Get_Frontend_txt_struct_formation_ByLanguage(int id, OUT Frontend_txt_struct_formation& info, int language);

struct Frontend_txt_struct_language_fujiang_passive_skill
{
	int Id;
	FString ShoutTextInfo0;
	FString ShoutTextInfo1;
	FString ShoutTextInfo2;
};
extern bool Get_Frontend_txt_struct_language_fujiang_passive_skill(int id, OUT Frontend_txt_struct_language_fujiang_passive_skill& info);

struct Frontend_txt_struct_language_horse
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_horse(int id, OUT Frontend_txt_struct_language_horse& info);
extern bool Get_Frontend_txt_struct_horse_ByLanguage(int id, OUT Frontend_txt_struct_horse& info, int language);

struct Frontend_txt_struct_language_horseaccessory
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_horseaccessory(int id, OUT Frontend_txt_struct_language_horseaccessory& info);

struct Frontend_txt_struct_language_horsearmor
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_horsearmor(int id, OUT Frontend_txt_struct_language_horsearmor& info);
extern bool Get_Frontend_txt_struct_horsearmor_ByLanguage(int id, OUT Frontend_txt_struct_horsearmor& info, int language);

struct Frontend_txt_struct_language_map_name
{
	int Id;
	FString MapName0;
	FString MapName1;
	FString MapName2;
};
extern bool Get_Frontend_txt_struct_language_map_name(int id, OUT Frontend_txt_struct_language_map_name& info);

struct Frontend_txt_struct_language_meleeweapon
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_meleeweapon(int id, OUT Frontend_txt_struct_language_meleeweapon& info);
extern bool Get_Frontend_txt_struct_meleeweapon_ByLanguage(int id, OUT Frontend_txt_struct_meleeweapon& info, int language);

struct Frontend_txt_struct_language_message
{
	int Id;
	FString Desc;
	FString Content0;
	FString Content1;
	FString Content2;
};
extern bool Get_Frontend_txt_struct_language_message(int id, OUT Frontend_txt_struct_language_message& info);
extern bool Get_Frontend_txt_struct_message_ByLanguage(int id, OUT Frontend_txt_struct_message& info, int language);

struct Frontend_txt_struct_language_message_left_right
{
	int Id;
	FString Main0;
	FString Back0;
	FString Main1;
	FString Back1;
	FString Main2;
	FString Back2;
};
extern bool Get_Frontend_txt_struct_language_message_left_right(int id, OUT Frontend_txt_struct_language_message_left_right& info);
extern bool Get_Frontend_txt_struct_message_left_right_ByLanguage(int id, OUT Frontend_txt_struct_message_left_right& info, int language);

struct Frontend_txt_struct_language_modename
{
	int modeId;
	FString szModeName0;
	FString szModeName1;
	FString szModeName2;
};
extern bool Get_Frontend_txt_struct_language_modename(int id, OUT Frontend_txt_struct_language_modename& info);

struct Frontend_txt_struct_language_neterrortype
{
	int Id;
	FString ErrInfo0;
	FString ErrInfo1;
	FString ErrInfo2;
};
extern bool Get_Frontend_txt_struct_language_neterrortype(int id, OUT Frontend_txt_struct_language_neterrortype& info);

struct Frontend_txt_struct_language_obstacle
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_obstacle(int id, OUT Frontend_txt_struct_language_obstacle& info);
extern bool Get_Frontend_txt_struct_obstacle_ByLanguage(int id, OUT Frontend_txt_struct_obstacle& info, int language);

struct Frontend_txt_struct_language_pve_monster
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_pve_monster(int id, OUT Frontend_txt_struct_language_pve_monster& info);
extern bool Get_Frontend_txt_struct_pve_monster_ByLanguage(int id, OUT Frontend_txt_struct_pve_monster& info, int language);

struct Frontend_txt_struct_language_rangedweapon
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_rangedweapon(int id, OUT Frontend_txt_struct_language_rangedweapon& info);
extern bool Get_Frontend_txt_struct_rangedweapon_ByLanguage(int id, OUT Frontend_txt_struct_rangedweapon& info, int language);

struct Frontend_txt_struct_language_savefile_error
{
	int Id;
	FString ErrInfo0;
	FString ErrInfo1;
	FString ErrInfo2;
};
extern bool Get_Frontend_txt_struct_language_savefile_error(int id, OUT Frontend_txt_struct_language_savefile_error& info);

struct Frontend_txt_struct_language_save_filename
{
	int Id;
	FString FileName0;
	FString FileName1;
	FString FileName2;
};
extern bool Get_Frontend_txt_struct_language_save_filename(int id, OUT Frontend_txt_struct_language_save_filename& info);

struct Frontend_txt_struct_language_scene_default
{
	int Id;
	FString MatchResult0;
	FString MatchResult1;
	FString MatchResult2;
};
extern bool Get_Frontend_txt_struct_language_scene_default(int id, OUT Frontend_txt_struct_language_scene_default& info);

struct Frontend_txt_struct_language_shield
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_shield(int id, OUT Frontend_txt_struct_language_shield& info);
extern bool Get_Frontend_txt_struct_shield_ByLanguage(int id, OUT Frontend_txt_struct_shield& info, int language);

struct Frontend_txt_struct_language_soldier
{
	int Id;
	FString Name0;
	FString Description0;
	FString Name1;
	FString Description1;
	FString Name2;
	FString Description2;
};
extern bool Get_Frontend_txt_struct_language_soldier(int id, OUT Frontend_txt_struct_language_soldier& info);

extern bool Get_Frontend_txt_struct_to_map(const FString& file, int id, OUT TMap<FString, FString>& out, int language);

