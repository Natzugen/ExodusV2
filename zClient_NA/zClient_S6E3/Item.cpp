#include "stdafx.h"
#include "TMemory.h"
#include "TDebugLog.h"
#include "ItemAsm.h"
#include "Import.h"
#include "Defines.h"
#include "ItemPrice.h"
#include "Item.h"
#include "ItemRank.h"
#include "ItemModel.h"
// ----------------------------------------------------------------------------------------------
#include "Interface.h"
#include "User.h"


Item	gItem;
// ----------------------------------------------------------------------------------------------

void Item::Load()
{
	ItemAsmLoad();
	// ----
	SetOp((LPVOID)0x633FCB, this->LoadModels, ASM::CALL);
	SetOp((LPVOID)0x633FE3, this->LoadTextures, ASM::CALL);
	// ----
	SetOp((LPVOID)0x5087E6, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x58B78F, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x58B7A6, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x58B7FC, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x5C1A7F, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x5C2117, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x5C4268, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x7AF806, this->GetPrice, ASM::CALL);

	//Fix Kriss Shop
	/*SetOp((LPVOID)0x7E42F9, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x7E4347, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x7E439C, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x8475C3, this->GetPrice, ASM::CALL);*/
	//Fim
	SetOp((LPVOID)0x846B99, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x846C13, this->GetPrice, ASM::CALL);
	SetOp((LPVOID)0x9683D0, this->GetPrice, ASM::CALL);
	// ----
	SetOp((LPVOID)0x83476C, this->IsExpensiveItem, ASM::CALL);
	SetOp((LPVOID)0x8477BC, this->IsExpensiveItem, ASM::CALL);
	// ----
	SetOp((LPVOID)0x7E3FC0, this->IsWings, ASM::CALL);
	SetOp((LPVOID)0x7E4766, this->IsWings, ASM::CALL);
	SetOp((LPVOID)0x7E5195, this->IsWings, ASM::CALL);
	// ----
	SetOp((LPVOID)0x7DBD6B, this->GetUpgradeFlag, ASM::CALL);
	// ----
	SetOp((LPVOID)0x48FB8C, this->PreviewCharSet, ASM::CALL);
	SetOp((LPVOID)0x63D2D8, this->PreviewCharSet, ASM::CALL);
	SetOp((LPVOID)0x641189, this->PreviewCharSet, ASM::CALL);
	SetOp((LPVOID)0x641F42, this->PreviewCharSet, ASM::CALL);
	SetOp((LPVOID)0x642598, this->PreviewCharSet, ASM::CALL);
	SetOp((LPVOID)0x65EA2D, this->PreviewCharSet, ASM::CALL);
	// ----
	SetOp((LPVOID)0x7D9D5A, this->AllowRepairWings, ASM::CALL);
	// ----
	SetOp((LPVOID)0x58B77E, this->SetOption, ASM::CALL);
	SetOp((LPVOID)0x5C7833, this->SetOption, ASM::CALL);
	SetOp((LPVOID)0x5C7D71, this->SetOption, ASM::CALL);
	SetOp((LPVOID)0x5C7F1B, this->SetOption, ASM::CALL);
	SetOp((LPVOID)0x5C80BE, this->SetOption, ASM::CALL);
	SetOp((LPVOID)0x7E216A, this->SetOption, ASM::CALL);
	// ----
	SetOp((LPVOID)0x4FA5E8, this->SetOptionText, ASM::CALL);
	SetOp((LPVOID)0x7E568B, this->SetOptionText, ASM::CALL);
	// ----
	SetOp((LPVOID)0x5666C1, this->SetItemEffect, ASM::CALL);
	SetOp((LPVOID)0x61041C, this->SetItemEffect, ASM::CALL);
	SetOp((LPVOID)0x610466, this->SetItemEffect, ASM::CALL);
	// ----
	SetOp((LPVOID)0x51BCA5, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x590260, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x5C1A2F, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x5C1B70, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x5C423A, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x5C46E0, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7D9A52, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7DF4B2, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7DFB0B, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7E04D9, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7E0811, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x7E5E8B, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x836FFD, this->GetMaxDurability, ASM::CALL);
	SetOp((LPVOID)0x95F5EE, this->GetMaxDurability, ASM::CALL);
	// ----
	SetOp((LPVOID)0x57AC07, this->GetItemColor, ASM::CALL);
	SetOp((LPVOID)0x6083B9, this->GetItemColor, ASM::CALL);
	SetOp((LPVOID)0x60905E, this->GetItemColor2, ASM::CALL);
}
// ----------------------------------------------------------------------------------------------

void Item::LoadModels()
{
	pInitModelData();
	g_ItemModel.SetModel();
	// ----
	char * Path = "Data\\Custom\\Item\\";
	// ----
#ifdef NEWWINGS

	//#ifdef __MEGAMU__
	pLoadModel(ITEM2(12, 180), Path, "Wings1", -1);
	pLoadModel(ITEM2(12, 181), Path, "Wings2", -1);
	pLoadModel(ITEM2(12, 182), Path, "Wings3", -1);
	pLoadModel(ITEM2(12, 183), Path, "Wings4", -1);
	pLoadModel(ITEM2(12, 184), Path, "Wings5", -1);
	pLoadModel(ITEM2(12, 185), Path, "Wings6", -1);
	pLoadModel(ITEM2(12, 186), Path, "Wings7", -1);
	pLoadModel(ITEM2(12, 187), Path, "Wings8", -1);
	pLoadModel(ITEM2(12, 188), Path, "Wings9", -1);
	pLoadModel(ITEM2(12, 189), Path, "Wings10", -1);
	pLoadModel(ITEM2(12, 190), Path, "Wings11", -1);
	pLoadModel(ITEM2(12, 191), Path, "Wings12", -1);
	pLoadModel(ITEM2(12, 192), Path, "Wings13", -1);
	pLoadModel(ITEM2(12, 193), Path, "Wings14", -1);

	//#else
	//	pLoadModel(ITEM2(12, 180), Path, "WingsOfWizardry", -1);
	//	pLoadModel(ITEM2(12, 181), Path, "WingsOfGreatDragon", -1);
	//	pLoadModel(ITEM2(12, 182), Path, "WingsOfNature", -1);
	//	pLoadModel(ITEM2(12, 183), Path, "WingsOfReign", -1);
	//	pLoadModel(ITEM2(12, 184), Path, "WingsOfChaotic", -1);
	//	pLoadModel(ITEM2(12, 185), Path, "WingsOfLilium", -1);
	//	pLoadModel(ITEM2(12, 186), Path, "WingsOfMonarh", -1);
	//#endif
#endif

	// ----
	pLoadModel(ITEM2(14, 180), Path, "JewelOfLuck", -1);
	pLoadModel(ITEM2(14, 181), Path, "JewelOfSkill", -1);
	pLoadModel(ITEM2(14, 182), Path, "JewelOfExcellent", -1);
	pLoadModel(ITEM2(14, 183), Path, "JewelOfNature", -1);
	pLoadModel(ITEM2(14, 184), Path, "JewelOfCurse", -1);


#ifdef NEWITENSNNEWAGE
	pLoadModel(ITEM2(14, 186), Path, "ChannelCard1", -1);
	pLoadModel(ITEM2(14, 187), Path, "ChannelCard2", -1);
	pLoadModel(ITEM2(14, 188), Path, "ChannelCard3", -1);
	pLoadModel(ITEM2(14, 189), Path, "ChannelCard4", -1);
	pLoadModel(ITEM2(14, 190), Path, "ChannelCard5", -1);

	pLoadModel(ITEM2(14, 185), Path, "penalvl4", -1);
#endif
#ifdef _NEW_ITEMS_
	for (int i = 5; i < 512; i++)
	{
		if (i > 73)//helms
		{
			pLoadModel(ITEM2(7, i), Path, "HelmMale%d", i + 1);
		}
		if (i > 73)//armors
		{
			pLoadModel(ITEM2(8, i), Path, "ArmorMale%d", i + 1);
		}
		if (i > 72)//pants (fix Phoenix soul pants)
		{
			pLoadModel(ITEM2(9, i), Path, "PantMale%d", i + 1);
		}
		if (i > 73)//gloves
		{
			pLoadModel(ITEM2(10, i), Path, "GloveMale%d", i + 1);
		}
		if (i > 73)//boots
		{
			pLoadModel(ITEM2(11, i), Path, "BootMale%d", i + 1);
		}
		if (i > 28 && i < 31 || i > 35 && i < 256)//swords
		{
			pLoadModel(ITEM2(0, i), Path, "Sword%d", i + 1);
		}
		if (i > 8)//axes
		{
			pLoadModel(ITEM2(1, i), Path, "Axe%d", i + 1);
		}
		if (i > 18)//maces
		{
			pLoadModel(ITEM2(2, i), Path, "Mace%d", i + 1);
		}
		if (i > 11)//spears
		{
			pLoadModel(ITEM2(3, i), Path, "Spear%d", i + 1);
		}
		if (i > 24 && i < 210)//bow
		{
			pLoadModel(ITEM2(4, i), Path, "Bow%d", i + 1);
		}
		if (i > 209 && i < 511)//crossbow
		{
			pLoadModel(ITEM2(4, i), Path, "Crossbow%d", i + 1);
		}
		if (i > 36)//staff
		{
			pLoadModel(ITEM2(5, i), Path, "Staff%d", i + 1);
		}
		if (i > 21)//shield
		{
			pLoadModel(ITEM2(6, i), Path, "Shield%d", i + 1);
		}
		//	if(i > 199 && i < 255) //jewels (extend custom jewels load models)
		//{
		//pLoadModel(ITEM2(14, i), Path, "Jewel%d", i+1);
		//sprintf_s(Item, "Jewel%d", i+1);
		//InitModel(LOAD_ITEM(14, i), Item, ItemFolder, ItemDir);
		//}
		//if(i > 199 && i < 255)//wings (fix mini wings)
		//{
		//sprintf_s(Item, "Wing%d", i+1);
		//InitModel(LOAD_ITEM(12, i), Item, ItemFolder, ItemDir);
		//}
	}
#endif

}
// ----------------------------------------------------------------------------------------------

void Item::LoadTextures()
{
	pInitTextureData();
	g_ItemModel.SetTexture();
	// ----
	char * Path = "Custom\\Item\\";
	// ----
#ifdef NEWWINGS
	pLoadTexture(ITEM2(12, 180), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 181), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 182), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 183), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 184), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 185), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 186), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
#ifdef __MEGAMU__
	pLoadTexture(ITEM2(12, 187), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 188), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 189), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 190), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 191), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 192), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(12, 193), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
#endif

#endif
	// ----
	pLoadTexture(ITEM2(14, 180), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 181), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 182), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 183), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 184), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);



	pLoadTexture(ITEM2(14, 186), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 187), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 188), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 189), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 190), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
	pLoadTexture(ITEM2(14, 185), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);

#ifdef _NEW_ITEMS_
	for (int i = 5; i < 512; i++)
	{
		if (i > 73)//helms
		{
			i = i + 1;
			pLoadTexture(ITEM2(7, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 73)//armors
		{
			i = i + 1;
			pLoadTexture(ITEM2(8, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 72)//pants (fix Phoenix soul pants)
		{
			i = i + 1;
			pLoadTexture(ITEM2(9, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 73)//gloves
		{
			i = i + 1;
			pLoadTexture(ITEM2(10, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 73)//boots
		{
			i = i + 1;
			pLoadTexture(ITEM2(11, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 28 && i < 31 || i > 35 && i < 256)//swords
		{
			i = i + 1;
			pLoadTexture(ITEM2(0, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 8)//axes
		{
			i = i + 1;
			pLoadTexture(ITEM2(1, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 18)//maces
		{
			i = i + 1;
			pLoadTexture(ITEM2(2, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 11)//spears
		{
			i = i + 1;
			pLoadTexture(ITEM2(3, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 24 && i < 210)//bow
		{
			i = i + 1;
			pLoadTexture(ITEM2(4, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 209 && i < 511)//crossbow
		{
			i = i + 1;
			pLoadTexture(ITEM2(4, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 36)//staff
		{
			i = i + 1;
			pLoadTexture(ITEM2(5, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
		if (i > 21)//shield
		{
			i = i + 1;
			pLoadTexture(ITEM2(6, i), Path, GL_REPEAT, GL_NEAREST, GL_TRUE);
		}
	}

#endif
}
// ----------------------------------------------------------------------------------------------

bool Item::IsCustomWings(WORD ItemID, bool Preview)
{
#ifndef NEWWINGS
	return false;
#endif
	// ----
	if (Preview)
	{
		ItemID -= ITEM_INTER;
	}
	// ----
	//#ifdef __MEGAMU__
	if (ItemID >= ITEM(12, 180) && ItemID <= ITEM(12, 193))
		//#else
		//if (ItemID >= ITEM(12, 180) && ItemID <= ITEM(12, 186))
		//#endif
	{
		return true;
	}
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

bool Item::IsCustomJewels(WORD ItemID, bool Preview)
{
	if (Preview)
	{
		ItemID -= ITEM_INTER;
	}
	// ----
	if (ItemID >= ITEM(14, 180) && ItemID <= ITEM(14, 184))
	{
		return true;
	}
	// ----
	return false;
}
// ----------------------------------------------------------------------------------------------

__int64 Item::GetPrice(ObjectItem * lpItem, int Mode)
{
	__int64 Money = -1;
	__int64 StartMoney = pSetItemPrice(lpItem, Mode);
	__int64 NewOptionAddMoney = 0;
	int Divisor = 3;
	// ----
	if (gItemPrice.CheckItem(lpItem->ItemID, GET_ITEMOPT_LEVEL(lpItem->Level), &Money, &Divisor))
	{
		if (Money != -1)
		{
			if (Mode == 1)
			{
				Money /= Divisor;
			}
			// ----
			return Money;
		}
	}
	// ----
	if (lpItem->ItemID >= ITEM(0, 0) && lpItem->ItemID <= ITEM(12, 6)
		|| lpItem->ItemID >= ITEM(12, 36) && lpItem->ItemID <= ITEM(12, 43)
		|| lpItem->ItemID >= ITEM(12, 49) && lpItem->ItemID <= ITEM(12, 50)
		|| lpItem->ItemID == ITEM(13, 30))
	{
		for (int i = 0; i < lpItem->SpecialCount; i++)
		{
			switch (lpItem->SpecialType[i])
			{
			case eItemOption::Damage:
			case eItemOption::WizardryDamage:
			case eItemOption::CurseSpell:
			case eItemOption::Defense:
			case eItemOption::HPRecovery:
			{
				switch (lpItem->SpecialValue[i])
				{


				case 20:
					NewOptionAddMoney += (StartMoney * 84.0 / 10.0);
					break;
				case 24:
					NewOptionAddMoney += (StartMoney * 112.0 / 10.0);
					break;
				case 28:
					NewOptionAddMoney += (StartMoney * 140.0 / 10.0);
					break;

				}
			}
				break;
			}
		}
	}
	// ----
	if (NewOptionAddMoney > 0)
	{
		if (StartMoney + NewOptionAddMoney > 2000000000)
		{
			Money = 2000000000;
		}
		else
		{
			Money = StartMoney + NewOptionAddMoney;
		}
	}
	// ----
	if (Money != -1)
	{
		if (Mode == 1)
		{
			Money /= 3;
		}
		// ----
		return Money;
	}
	// ----
	return pSetItemPrice(lpItem, Mode);
}
// ----------------------------------------------------------------------------------------------

bool Item::IsExpensiveItem(ObjectItem * lpItem)
{
	if (lpItem->ItemID == ITEM(13, 20) && lpItem->Level == 0)	//-> Wizards Ring
	{
		return false;
	}
	// ----
	if (gItem.IsCustomJewels(lpItem->ItemID, false))
	{
		return true;
	}
	// ----

	if (gItem.IsCustomWings(lpItem->ItemID, false))
	{
		return true;
	}
	return pIsExpensiveItem(lpItem);
}
// ----------------------------------------------------------------------------------------------

int Item::IsWings(LPVOID This, LPVOID EDX, DWORD ItemID)
{
	if (gItem.IsCustomWings(ItemID, false))
	{
		return true;
	}
	// ----
	return pIsWings(This, ItemID);
}
// ----------------------------------------------------------------------------------------------

bool Item::GetUpgradeFlag(LPVOID This, LPVOID EDX, ObjectItem * lpSource, ObjectItem * lpTarget)
{
	BYTE TargetLevel = (lpTarget->Level >> 3) & 0xF;
	// ----
	if (gItem.IsCustomJewels(lpSource->ItemID, false))
	{
		return true;
	}
	// ----
	if (gItem.IsCustomWings(lpTarget->ItemID, false))
	{
		if (lpSource->ItemID == ITEM(14, 13))
		{
			if (TargetLevel >= 0 && TargetLevel <= 5)
			{
				return true;
			}
		}
		else if (lpSource->ItemID == ITEM(14, 14))
		{
			if (TargetLevel >= 0 && TargetLevel <= 8)
			{
				return true;
			}
		}
	}
	// ----
	return pIsUpgradeItem(This, lpSource, lpTarget);
}
// ----------------------------------------------------------------------------------------------

void Item::PreviewCharSet(int ObjectIndex, BYTE * CharSet, lpViewObj Object, int Mode)
{
	pPreviewCharSet(ObjectIndex, CharSet, Object, Mode);
	// ----
#ifdef NEWWINGS
	lpViewObj lpObj;
	// ----
	if (Object == 0)
	{
		lpObj = &*(lpViewObj)pGetPreviewStruct(pPreviewThis(), ObjectIndex);
	}
	else
	{
		lpObj = Object;
	}
	// ----
	//BYTE CustomWings = CharSet[16] >> 2 & 7;
	BYTE CustomWings = CharSet[16] >> 2;
	// ----
	if (CustomWings > 0)
	{
		lpObj->WingsSlot = ITEM2(12, 180) + (CustomWings - 1);
	}
#endif
}
// ----------------------------------------------------------------------------------------------

bool Item::AllowRepairWings(ObjectItem * lpItem)
{
	if (gItem.IsCustomWings(lpItem->ItemID, false))
	{
		return true;
	}
	// ----
	return pAllowRepairWings(lpItem);
}
// ----------------------------------------------------------------------------------------------

void Item::SetOption(ObjectItem * lpItem, BYTE Option, BYTE Special, BYTE Value)
{
	pSetItemOption(lpItem, Option, Special, Value);
	// ----
	int ItemAttr		= *(DWORD*)0x8128AC0 + 84 * lpItem->ItemID; //item.bmd reader
	int SpecialValue	= GET_ITEMOPT0(Option) + 4 * (GET_ITEMOPT16(Special) >> 6);	
	// ----
	lpItem->ReqLevel	= *(short*)(ItemAttr + 60);
	// ----
	if( gItem.IsCustomWings(lpItem->ItemID, false) )
	{
		if( Special & MAX_ITEMOPT_BIT >= 10 && Special & MAX_ITEMOPT_BIT <= 15 )
		{
			lpItem->Unknown14 += 1;
		}
		// ----
		if( GET_ITEMOPT_LUCK(Option) ) //-> Add luck option
		{
			lpItem->SpecialType[lpItem->SpecialCount]	= eItemOption::Luck;
			lpItem->SpecialCount++;
		}
		// ----
		if( GET_ITEMOPT_0(Special) ) //-> Set IgnorOpDefense
		{
			lpItem->SpecialValue[lpItem->SpecialCount]	= 8;
			lpItem->SpecialType[lpItem->SpecialCount]	= eItemOption::IgnorOpDefense;
			lpItem->SpecialCount++;
		}
		// ----
		if( GET_ITEMOPT_1(Special) ) //-> Set ReturnAttack
		{
			lpItem->SpecialValue[lpItem->SpecialCount]	= 10;
			lpItem->SpecialType[lpItem->SpecialCount]	= eItemOption::ReturnAttack;
			lpItem->SpecialCount++;
		}
		// ----
		if( GET_ITEMOPT_2(Special) ) //-> Set CompleteLife
		{
			lpItem->SpecialValue[lpItem->SpecialCount]	= 5;
			lpItem->SpecialType[lpItem->SpecialCount]	= eItemOption::CompleteLife;
			lpItem->SpecialCount++;
		}
		// ----
		if( GET_ITEMOPT_3(Special) ) //-> Set CompleteMana
		{
			lpItem->SpecialValue[lpItem->SpecialCount]	= 5;
			lpItem->SpecialType[lpItem->SpecialCount]	= eItemOption::CompleteMana;
			lpItem->SpecialCount++;
		}
		// ----
		if( SpecialValue < 1 )
		{
			return;
		}
		// ----
		switch(lpItem->ItemID) //-> Set add option
		{
		case ITEM(12, 180):	//-> DW
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;
			}
			else if (GET_ITEMOPT_5(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Defense;
				lpItem->SpecialCount++;
			}
			else
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;
			}
		}
			break;
			// --
		case ITEM(12, 183):	//-> MG
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Damage;
				lpItem->SpecialCount++;
			}
			else if (GET_ITEMOPT_5(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;
			}
			else
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;
			}
		}
			break;
			// --
		case ITEM(12, 181):	//-> DK
		case ITEM(12, 182):	//-> ELF
		case ITEM(12, 184):	//-> DL
		case ITEM(12, 186):	//-> MONK
		{
			if (GET_ITEMOPT_4(Special))
			{


				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Damage;
				lpItem->SpecialCount++;

			}
			else if (GET_ITEMOPT_5(Special))

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Defense;
				lpItem->SpecialCount++;

			}
			else

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;

			}
		}
			break;
			// --
		case ITEM(12, 185):	//-> SUM
		{
			if (GET_ITEMOPT_4(Special))
			{


				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;

			}
			else if (GET_ITEMOPT_5(Special))

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::CurseSpell;
				lpItem->SpecialCount++;

			}
			else

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;

			}
		}
			break;
			// --

			//#ifdef __MEGAMU__
		case ITEM(12, 187):	//-> DW
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;
			}
			else if (GET_ITEMOPT_5(Special))

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Defense;
				lpItem->SpecialCount++;
			}
			else

			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;

			}
		}
			break;
			// --
		case ITEM(12, 190):	//-> MG
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Damage;
				lpItem->SpecialCount++;

			}
			else if (GET_ITEMOPT_5(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;
			}
			else
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;
			}
		}
			break;
			// --
		case ITEM(12, 188):	//-> DK
		case ITEM(12, 189):	//-> ELF
		case ITEM(12, 191):	//-> DL
		case ITEM(12, 193):	//-> MONK
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Damage;
				lpItem->SpecialCount++;
			}
			else if (GET_ITEMOPT_5(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::Defense;
				lpItem->SpecialCount++;
			}
			else
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;
			}
		}
			break;
			// --
		case ITEM(12, 192):	//-> SUM
		{
			if (GET_ITEMOPT_4(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::WizardryDamage;
				lpItem->SpecialCount++;
			}
			else if (GET_ITEMOPT_5(Special))
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = 4 * SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::CurseSpell;
				lpItem->SpecialCount++;
			}
			else
			{
				lpItem->SpecialValue[lpItem->SpecialCount] = SpecialValue;
				lpItem->SpecialType[lpItem->SpecialCount] = eItemOption::HPRecovery;
				lpItem->SpecialCount++;
			}
		}
			break;
			//#endif
		}
	}
}
// ----------------------------------------------------------------------------------------------

void Item::SetOptionText(int ItemID, int Line, WORD OptionID, bool Arg4, int Arg5)
{
	pSetItemOptionText(ItemID, Line, OptionID, Arg4, Arg5);
	// ----
#ifdef __RMOS__
	if (!g_ItemRank.IsRankItem(ItemID))
	{
		return;
	}
	// ----
	switch (OptionID)
	{
	case eItemOption::LifeIncrease:
		pSetItemTextLine(Line, "Increase Max HP +%d%%",
			g_ItemRank.GetValue(ItemID, 0));
		break;
	case eItemOption::ExcellentDamage:
		pSetItemTextLine(Line, "Excellent Damage rate +%d%%",
			g_ItemRank.GetValue(ItemID, 0));
		break;
	case eItemOption::ManaIncrease:
		pSetItemTextLine(Line, "Increase Max Mana +%d%%",
			g_ItemRank.GetValue(ItemID, 1));
		break;
	case eItemOption::DamageByLevel:
		pSetItemTextLine(Line, "Increase Damage +level/%d",
			g_ItemRank.GetValue(ItemID, 1));
		break;
	case eItemOption::IncreaseWizardry:
		pSetItemTextLine(Line, "Increase Wizardry Dmg +level/%d",
			g_ItemRank.GetValue(ItemID, 1));
		break;
	case eItemOption::DamageDecrease:
		pSetItemTextLine(Line, "Damage Decrease +%d%%",
			g_ItemRank.GetValue(ItemID, 2));
		break;
	case eItemOption::IncreaseDamage:
		pSetItemTextLine(Line, "Increase Damage +%d%%",
			g_ItemRank.GetValue(ItemID, 2));
		break;
	case eItemOption::IncreaseWizardry:
		pSetItemTextLine(Line, "Increase Wizardry Dmg +level/%d",
			g_ItemRank.GetValue(ItemID, 3));


	case eItemOption::IncreaseWizardryDmg:
		pSetItemTextLine(Line, "Increase Wizardry Dmg +%d%%",
			g_ItemRank.GetValue(ItemID, 2));
		break;
	case eItemOption::Reflect:
		pSetItemTextLine(Line, "Reflect Damage +%d%%",
			g_ItemRank.GetValue(ItemID, 3));
		break;
	case eItemOption::IncreaseSpeed:
		pSetItemTextLine(Line, "Increase Attacking(Wizardy)speed +%d",
			g_ItemRank.GetValue(ItemID, 3));
		break;
	case eItemOption::DefenseSuccess:
		pSetItemTextLine(Line, "Defense success rate +%d%%",
			g_ItemRank.GetValue(ItemID, 4));
		break;
	case eItemOption::LifePerMob:
		pSetItemTextLine(Line, " Increases acquisition rate of Life after hunting monsters +life/%d",
			g_ItemRank.GetValue(ItemID, 4));
		break;
	case eItemOption::IncreaseZen:
		pSetItemTextLine(Line, "Increases acquisition rate of Zen after hunting monsters +%d%%",
			g_ItemRank.GetValue(ItemID, 5));
		break;
	case eItemOption::ManaPerMob:
		pSetItemTextLine(Line, "Increases acquisition rate of Mana after hunting monsters +Mana/%d",
			g_ItemRank.GetValue(ItemID, 5));
		break;

	}
#endif
}
// ----------------------------------------------------------------------------------------------

void Item::SetItemEffect(int Arg1, int ModelID, VAngle Angle, int Arg4, int ItemLevel, char Arg6, int Arg7, int Arg8, int Arg9)
{
	return pSetItemEffect(Arg1, ModelID, Angle, Arg4, ItemLevel, Arg6, Arg7, Arg8, Arg9);
}
// ----------------------------------------------------------------------------------------------

short Item::GetMaxDurability(ObjectItem * lpItem, int ScriptStruct, int Level)
{
	if (gItem.IsCustomWings(lpItem->ItemID, false))
	{
		return 255;
	}
	// ----
	return pGetMaxDurability(lpItem, ScriptStruct, Level);
}
// ----------------------------------------------------------------------------------------------

void Item::GetItemColor(int ModelID, float Arg2, float Arg3, VAngle * Color, bool BalrogMode)
{
	if (!g_ItemModel.SetColor(ModelID, Color))
	{
		return pGetItemColor(ModelID, Arg2, Arg3, Color, BalrogMode);
	}
}
// ----------------------------------------------------------------------------------------------

void Item::GetItemColor2(int ModelID, float Arg2, float Arg3, VAngle * Color, bool BalrogMode)
{
	if (!g_ItemModel.SetColor(ModelID, Color))
	{
		return pGetItemColor2(ModelID, Arg2, Arg3, Color, BalrogMode);
	}
}
// ----------------------------------------------------------------------------------------------
