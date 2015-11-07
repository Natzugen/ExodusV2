#pragma once
// ----------------------------------------------------------------------------------------------

#include "Object.h"
#include "ProtocolDefine.h"
#include "UserDefine.h"
// ----------------------------------------------------------------------------------------------

#define MAX_BATTLE_LIST	30
#define MAX_TARGET_LIST 70
// ----------------------------------------------------------------------------------------------

struct PMSG_BATTLE_LIST
{
	PBMSG_HEAD	h;
	BYTE		BattleMapList[MAX_BATTLE_LIST];
	BYTE		BattleZoneList[MAX_BATTLE_LIST];
};

struct SENDRECONNECTSTATUS
{
	PBMSG_HEAD2 h;
	int value;
};
// ----------------------------------------------------------------------------------------------

#pragma pack(push, 1)
struct PMSG_TARGETDATA_REQ
{
	PBMSG_HEAD2 h;
	int			aIndex;
};
#pragma pack(pop)
// ----------------------------------------------------------------------------------------------

#pragma pack(push, 1)
struct COMBAT_DATA
{
	float		TargetLife;
	float		TargetMaxLife;
	int			TargetLevel = 0;
	int			TargetReset = 0;
	float		TargetLifePercent;
};
#pragma pack(pop)
// ----------------------------------------------------------------------------------------------
struct TARGET_DATA
{
	float		TargetLife;
	float		TargetMaxLife;
	int			TargetLevel = 0;
	int			TargetReset = 0;
	float		TargetLifePercent;
	lpViewObj   Obj;
};

// ----------------------------------------------------------------------------------------------
#pragma pack(push, 1)
struct PMSG_TARGETDATA_ANS
{
	PBMSG_HEAD2 h;
	COMBAT_DATA cdata;
};
#pragma pack(pop)
// ----------------------------------------------------------------------------------------------
struct MUHELPER_ANS_DATA
{
	PBMSG_HEAD2 h;	
	WORD	Time;
	DWORD	Money;
	BYTE	Mode;
};
// ----------------------------------------------------------------------------------------------

struct OFFLINEATTACK_REQ
{
	PBMSG_HEAD2 h;
	int			MagicNumber;
};
// ----------------------------------------------------------------------------------------------

#pragma pack(push, 1)
struct CHAR_UPDATEINFO
{
	PBMSG_HEAD2 h;
	short	Strength;
	short	Dexterity;
	short	Vitality;
	short	Energy;
	short	Leadership;
	int		LevelUpPoint;
};
#pragma pack(pop)
// ----------------------------------------------------------------------------------------------

class User
{
public:
	void		Load();
	void		Refresh();
	// ----
	bool		GetTarget();
	
	int			GetActiveSkill();
	// ----
	void		UpdateCharInfo(CHAR_UPDATEINFO * aRecv);
	void		SetBattleMapData(PMSG_BATTLE_LIST * aRecv);
	void        UpdateTargetListHP(int aIndex);

	static bool	IsBattleServer() { return true; };
	static bool	IsBattleZone(int MapNumber);
	static void	SetEventEffect(int PreviewStruct);
	static bool	IsMasterClass(BYTE Class);
	static void	DrawPartyHP();
	static void	DrawHP();
	// ----
	lpCharObj	lpPlayer;
	lpViewObj	lpViewPlayer;
	lpViewObj	lpViewTarget;
	// ----
	BYTE		m_TargetType;	//1 - npc, 2 - attack
	int			m_MapNumber;
	int			m_CursorX;
	int			m_CursorY;
	short		m_MasterLevel;
	short		m_MasterPoint;
	__int64		m_MasterExp;
	__int64		m_MasterNextExp;
	int			m_Reset;
	int			m_GrandReset;

	BYTE		m_ResetItemCheck[5];
	BYTE		m_BattleZoneList[MAX_BATTLE_LIST];
	//__NOVUS__
	DWORD		m_TargetUpdateTick;
	int		    m_TargetLifePercent;
	int		    m_TargetLevel;
	bool        showHPBar;
	//----//

	//-----//
	int			m_CraftLevel;
	int			m_CraftStage;
	int			m_CraftQuest;
	BYTE		m_CraftItemCheck[5];
	// ----
	void		SetTargetData(PMSG_TARGETDATA_ANS * aRecv);
	// ----
}; extern User gObjUser;
// ----------------------------------------------------------------------------------------------