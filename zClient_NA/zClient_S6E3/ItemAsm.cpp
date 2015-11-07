#include "stdafx.h"
#include "Item.h"
#include "ItemAsm.h"
#include "TMemory.h"
#include "Import.h"
// ----------------------------------------------------------------------------------------------

DWORD FixWingsExcellentGlow_Buff;
DWORD FixWingsLevelGlow_Buff;
DWORD FixWingsLevelGlow_Buff2;
DWORD FixWingsMoveList_Buff;
DWORD FixWingsJewelsInsert_Buff;
DWORD FixWingsJewelsInsert_Buff2;
DWORD WingsFixMoveKanturu_Buff;
DWORD AllowJewelsInsert_Buff;
DWORD AllowJewelsInsert_Buff2;
DWORD AllowJewelsInsert_Buff3;
DWORD ReToJewelVisualFlag_Buff;
DWORD AddShineGlow_Buff;
DWORD DropTitleColor_Buff;
DWORD DropTitleColor_Buff2;
DWORD	AddWingsEffect_Buff;
float	Color[3];
//LPVOID	F1_This;
//DWORD	F1_Arg1;
//DWORD	F1_Arg11;
//DWORD	F1_Arg2;
//DWORD	F2_Arg5;
//DWORD	F3_Arg3;


//LPVOID F1_Thisv1;
//DWORD F1_Arg1v1;
//DWORD F1_Arg11v1;
//DWORD F1_Arg2v1;
//DWORD F2_Arg5v1;
//DWORD F3_Arg3v1;
//// 
//LPVOID F1_Thisv2;
//DWORD F1_Arg1v2;
//DWORD F1_Arg11v2;
//DWORD F1_Arg2v2;
//DWORD F2_Arg5v2;
//DWORD F3_Arg3v2;
//// 
//LPVOID F1_Thisv3;
//DWORD F1_Arg1v3;
//DWORD F1_Arg11v3;
//DWORD F1_Arg2v3;
//DWORD F2_Arg5v3;
//DWORD F3_Arg3v3;
//// 
//LPVOID F1_Thisv4;
//DWORD F1_Arg1v4;
//DWORD F1_Arg11v4;
//DWORD F1_Arg2v4;
//DWORD F2_Arg5v4;
//DWORD F3_Arg3v4;
//// 
//LPVOID F1_Thisv5;
//DWORD F1_Arg1v5;
//DWORD F1_Arg11v5;
//DWORD F1_Arg2v5;
//DWORD F2_Arg5v5;
//DWORD F3_Arg3v5;
//// 
//LPVOID F1_Thisv6;
//DWORD F1_Arg1v6;
//DWORD F1_Arg11v6;
//DWORD F1_Arg2v6;
//DWORD F2_Arg5v6;
//DWORD F3_Arg3v6;
//// 
//LPVOID F1_Thisv7;
//DWORD F1_Arg1v7;
//DWORD F1_Arg11v7;
//DWORD F1_Arg2v7;
//DWORD F2_Arg5v7;
//DWORD F3_Arg3v7;
//// 
//LPVOID F1_Thisv8;
//DWORD F1_Arg1v8;
//DWORD F1_Arg11v8;
//DWORD F1_Arg2v8;
//DWORD F2_Arg5v8;
//DWORD F3_Arg3v8;
//// 
//LPVOID F1_Thisv9;
//DWORD F1_Arg1v9;
//DWORD F1_Arg11v9;
//DWORD F1_Arg2v9;
//DWORD F2_Arg5v9;
//DWORD F3_Arg3v9;
//// 
//LPVOID F1_Thisv10;
//DWORD F1_Arg1v10;
//DWORD F1_Arg11v10;
//DWORD F1_Arg2v10;
//DWORD F2_Arg5v10;
//DWORD F3_Arg3v10;

LPVOID  F1_Thisv1;
DWORD   F1_Arg1v1;
DWORD   F1_Arg11v1;
DWORD   F1_Arg2v1;
DWORD   F2_Arg5v1;
DWORD   F3_Arg3v1;
//
LPVOID  F1_Thisv2;
DWORD   F1_Arg1v2;
DWORD   F1_Arg11v2;
DWORD   F1_Arg2v2;
DWORD   F2_Arg5v2;
DWORD   F3_Arg3v2;
//
LPVOID  F1_Thisv3;
DWORD   F1_Arg1v3;
DWORD   F1_Arg11v3;
DWORD   F1_Arg2v3;
DWORD   F2_Arg5v3;
DWORD   F3_Arg3v3;
//
LPVOID  F1_Thisv4;
DWORD   F1_Arg1v4;
DWORD   F1_Arg11v4;
DWORD   F1_Arg2v4;
DWORD   F2_Arg5v4;
DWORD   F3_Arg3v4;
//
LPVOID  F1_Thisv5;
DWORD   F1_Arg1v5;
DWORD   F1_Arg11v5;
DWORD   F1_Arg2v5;
DWORD   F2_Arg5v5;
DWORD   F3_Arg3v5;
//
LPVOID  F1_Thisv6;
DWORD   F1_Arg1v6;
DWORD   F1_Arg11v6;
DWORD   F1_Arg2v6;
DWORD   F2_Arg5v6;
DWORD   F3_Arg3v6;
//
LPVOID  F1_Thisv7;
DWORD   F1_Arg1v7;
DWORD   F1_Arg11v7;
DWORD   F1_Arg2v7;
DWORD   F2_Arg5v7;
DWORD   F3_Arg3v7;
//
LPVOID  F1_Thisv8;
DWORD   F1_Arg1v8;
DWORD   F1_Arg11v8;
DWORD   F1_Arg2v8;
DWORD   F2_Arg5v8;
DWORD   F3_Arg3v8;
//
LPVOID  F1_Thisv9;
DWORD   F1_Arg1v9;
DWORD   F1_Arg11v9;
DWORD   F1_Arg2v9;
DWORD   F2_Arg5v9;
DWORD   F3_Arg3v9;
//
LPVOID  F1_Thisv10;
DWORD   F1_Arg1v10;
DWORD   F1_Arg11v10;
DWORD   F1_Arg2v10;
DWORD   F2_Arg5v10;
DWORD   F3_Arg3v10;
//
LPVOID  F1_Thisv11;
DWORD   F1_Arg1v11;
DWORD   F1_Arg11v11;
DWORD   F1_Arg2v11;
DWORD   F2_Arg5v11;
DWORD   F3_Arg3v11;
//
LPVOID  F1_Thisv12;
DWORD   F1_Arg1v12;
DWORD   F1_Arg11v12;
DWORD   F1_Arg2v12;
DWORD   F2_Arg5v12;
DWORD   F3_Arg3v12;
//
LPVOID  F1_Thisv13;
DWORD   F1_Arg1v13;
DWORD   F1_Arg11v13;
DWORD   F1_Arg2v13;
DWORD   F2_Arg5v13;
DWORD   F3_Arg3v13;
//
LPVOID  F1_Thisv14;
DWORD   F1_Arg1v14;
DWORD   F1_Arg11v14;
DWORD   F1_Arg2v14;
DWORD   F2_Arg5v14;
DWORD   F3_Arg3v14;
//
LPVOID  F1_Thisv15;
DWORD   F1_Arg1v15;
DWORD   F1_Arg11v15;
DWORD   F1_Arg2v15;
DWORD   F2_Arg5v15;
DWORD   F3_Arg3v15;
//
LPVOID  F1_Thisv16;
DWORD   F1_Arg1v16;
DWORD   F1_Arg11v16;
DWORD   F1_Arg2v16;
DWORD   F2_Arg5v16;
DWORD   F3_Arg3v16;
//
LPVOID  F1_Thisv17;
DWORD   F1_Arg1v17;
DWORD   F1_Arg11v17;
DWORD   F1_Arg2v17;
DWORD   F2_Arg5v17;
DWORD   F3_Arg3v17;
//
LPVOID  F1_Thisv18;
DWORD   F1_Arg1v18;
DWORD   F1_Arg11v18;
DWORD   F1_Arg2v18;
DWORD   F2_Arg5v18;
DWORD   F3_Arg3v18;
//
LPVOID  F1_Thisv19;
DWORD   F1_Arg1v19;
DWORD   F1_Arg11v19;
DWORD   F1_Arg2v19;
DWORD   F2_Arg5v19;
DWORD   F3_Arg3v19;
//
LPVOID  F1_Thisv20;
DWORD   F1_Arg1v20;
DWORD   F1_Arg11v20;
DWORD   F1_Arg2v20;
DWORD   F2_Arg5v20;
DWORD   F3_Arg3v20;
//
LPVOID  F1_Thisv21;
DWORD   F1_Arg1v21;
DWORD   F1_Arg11v21;
DWORD   F1_Arg2v21;
DWORD   F2_Arg5v21;
DWORD   F3_Arg3v21;
//
LPVOID  F1_Thisv22;
DWORD   F1_Arg1v22;
DWORD   F1_Arg11v22;
DWORD   F1_Arg2v22;
DWORD   F2_Arg5v22;
DWORD   F3_Arg3v22;
//
LPVOID  F1_Thisv23;
DWORD   F1_Arg1v23;
DWORD   F1_Arg11v23;
DWORD   F1_Arg2v23;
DWORD   F2_Arg5v23;
DWORD   F3_Arg3v23;
//
LPVOID  F1_Thisv24;
DWORD   F1_Arg1v24;
DWORD   F1_Arg11v24;
DWORD   F1_Arg2v24;
DWORD   F2_Arg5v24;
DWORD   F3_Arg3v24;
// ----------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------

Naked(FixWingsExcellentGlow)
{
	_asm
	{
		mov FixWingsExcellentGlow_Buff, ecx
			mov ecx, dword ptr ds : [FixWingsExcellentGlow_Buff + 0x30]
			mov FixWingsExcellentGlow_Buff, ecx
	}
	// ----
	if (FixWingsExcellentGlow_Buff <= ITEM2(12, 50)
		|| gItem.IsCustomWings(FixWingsExcellentGlow_Buff, true))
	{
		_asm
		{
			mov FixWingsExcellentGlow_Buff, 0x0060F325
				jmp FixWingsExcellentGlow_Buff
		}
	}
	// ----
	_asm
	{
		mov FixWingsExcellentGlow_Buff, 0x0060EE95
			jmp FixWingsExcellentGlow_Buff
	}
}
// ----------------------------------------------------------------------------------------------

Naked(FixWingsLevelGlow)
{
	_asm
	{
		mov FixWingsLevelGlow_Buff, ecx
			sub ecx, 0x1C9A
			mov FixWingsLevelGlow_Buff2, ecx
			mov dword ptr ss : [ebp - 0x4ec], ecx
	}
	// ----
	if (gItem.IsCustomWings(FixWingsLevelGlow_Buff, true))
	{
		_asm
		{
			mov dword ptr ss : [ebp - 4], 0
		}
	}
	// ----
	if (FixWingsLevelGlow_Buff2 > 136)
	{
		_asm
		{
			mov FixWingsLevelGlow_Buff, 0x0060A3B0
				jmp FixWingsLevelGlow_Buff
		}
	}
	else
	{
		_asm
		{
			mov FixWingsLevelGlow_Buff, 0x0060A06B
				jmp FixWingsLevelGlow_Buff
		}
	}
}
// ----------------------------------------------------------------------------------------------

Naked(FixWingsMoveList)
{
	_asm
	{
		mov FixWingsMoveList_Buff, eax
	}
	// ----
	if (FixWingsMoveList_Buff == 0x1887 || gItem.IsCustomWings(FixWingsMoveList_Buff, false))
	{
		_asm
		{
			mov FixWingsMoveList_Buff, 0x00831996
				jmp FixWingsMoveList_Buff
		}
	}
	// ----
	_asm
	{
		mov FixWingsMoveList_Buff, 0x008319D5
			jmp FixWingsMoveList_Buff
	}
}
// ----------------------------------------------------------------------------------------------

DWORD FixWingsJewelsInsert_Buff3;
DWORD FixWingsJewelsInsert_Buff4;

Naked(FixWingsJewelsInsert)
{
	_asm
	{
		mov FixWingsJewelsInsert_Buff2, ecx

			mov FixWingsJewelsInsert_Buff3, edx
			mov ecx, dword ptr ss : [ebp - 0x20]
			movsx edx, word ptr ds : [ecx]
			mov FixWingsJewelsInsert_Buff4, edx
			mov edx, FixWingsJewelsInsert_Buff3

			mov ecx, dword ptr ss : [ebp - 0x3c]
			mov FixWingsJewelsInsert_Buff, ecx
			mov ecx, FixWingsJewelsInsert_Buff2
	}
	// ----
	if (FixWingsJewelsInsert_Buff == 0x1887
		|| gItem.IsCustomWings(FixWingsJewelsInsert_Buff, false)
		|| gItem.IsCustomJewels(FixWingsJewelsInsert_Buff4, false))
	{
		_asm
		{
			mov FixWingsJewelsInsert_Buff, 0x00838365
				jmp FixWingsJewelsInsert_Buff
		}
	}
	// ----
	_asm
	{
		mov FixWingsJewelsInsert_Buff, 0x00838361
			jmp FixWingsJewelsInsert_Buff
	}
}
// ----------------------------------------------------------------------------------------------


	/*
	0x7d83    // ~ Lights (1-5)
	------   ----------------------------------
	0x7d7E    // ~ Flower 1
	0x7d7F    // ~ Flower 2
	0x7d80    // ~ Flower 3
	------   ----------------------------------
	0x7d4d    // ~ Flame (0 / 1+)
	0x7e73    // ~ Flame Type 2
	0x7eaf    // ~ Flame Type 3
	------   ----------------------------------
	0x7e35    // ~ Snow Type 1
	0x7e36    // ~ Snow Type 2
	------   ----------------------------------
	0x7e63    // ~ Heart (0 / 1)
	------   ----------------------------------
	0x7E1F    // ~ Blue Effect
	------   ----------------------------------
	0x7d30    // ~ Some Balls
	------   ----------------------------------
	0x7d65    // ~ Basic Smoke(phun khoi)
	0x7d65    // ~ Green Smoke
	0x7d65    // ~ Smoke Up-Right
	0x7d65    // ~ Smoke Type (3 / 4+)
	0x7e04    // ~ Smoke Ball (0 / 5+)
	------   ----------------------------------
	0x7e22    // ~ Some effect
	------   ----------------------------------
	0x7e7c    // ~ Static Light
	------   ----------------------------------
	0x7d36    // ~ Blue Dynamic Light (0+)
	------   ----------------------------------
	0x7d71    // ~ Stars (id 4 like w3 elf)
	*/

	Naked(AddWingsEffect)
	{
		_asm
		{
			mov AddWingsEffect_Buff, edx
				mov edx, dword ptr ss : [ebp - 0x68]
				mov F1_Thisv1, edx
				mov F1_Thisv2, edx
				mov F1_Thisv3, edx
				mov F1_Thisv4, edx
				mov F1_Thisv5, edx
				mov F1_Thisv6, edx
				mov F1_Thisv7, edx
				mov F1_Thisv8, edx
				mov F1_Thisv9, edx
				mov F1_Thisv10, edx
				mov F1_Thisv11, edx
				mov F1_Thisv12, edx
				mov F1_Thisv13, edx
				mov F1_Thisv14, edx
				mov F1_Thisv15, edx
				mov F1_Thisv16, edx
				mov F1_Thisv17, edx
				mov F1_Thisv18, edx
				mov F1_Thisv19, edx
				mov F1_Thisv20, edx
				mov F1_Thisv21, edx
				mov F1_Thisv22, edx
				mov F1_Thisv23, edx
				mov F1_Thisv24, edx
				lea edx, [ebp - 0x58]
				mov F1_Arg1v1, edx
				mov F1_Arg1v2, edx
				mov F1_Arg1v3, edx
				mov F1_Arg1v4, edx
				mov F1_Arg1v5, edx
				mov F1_Arg1v6, edx
				mov F1_Arg1v7, edx
				mov F1_Arg1v8, edx
				mov F1_Arg1v9, edx
				mov F1_Arg1v10, edx
				mov F1_Arg1v11, edx
				mov F1_Arg1v12, edx
				mov F1_Arg1v13, edx
				mov F1_Arg1v14, edx
				mov F1_Arg1v15, edx
				mov F1_Arg1v16, edx
				mov F1_Arg1v17, edx
				mov F1_Arg1v18, edx
				mov F1_Arg1v19, edx
				mov F1_Arg1v20, edx
				mov F1_Arg1v21, edx
				mov F1_Arg1v22, edx
				mov F1_Arg1v23, edx
				mov F1_Arg1v24, edx
				lea edx, [ebp - 0x18]
				mov F1_Arg11v1, edx
				mov F1_Arg11v2, edx
				mov F1_Arg11v3, edx
				mov F1_Arg11v4, edx
				mov F1_Arg11v5, edx
				mov F1_Arg11v6, edx
				mov F1_Arg11v7, edx
				mov F1_Arg11v8, edx
				mov F1_Arg11v9, edx
				mov F1_Arg11v10, edx
				mov F1_Arg11v11, edx
				mov F1_Arg11v12, edx
				mov F1_Arg11v13, edx
				mov F1_Arg11v14, edx
				mov F1_Arg11v15, edx
				mov F1_Arg11v16, edx
				mov F1_Arg11v17, edx
				mov F1_Arg11v18, edx
				mov F1_Arg11v19, edx
				mov F1_Arg11v20, edx
				mov F1_Arg11v21, edx
				mov F1_Arg11v22, edx
				mov F1_Arg11v23, edx
				mov F1_Arg11v24, edx
				mov edx, dword ptr ss : [ebp - 0x6c]
				mov F1_Arg2v1, edx
				mov F1_Arg2v2, edx
				mov F1_Arg2v3, edx
				mov F1_Arg2v4, edx
				mov F1_Arg2v5, edx
				mov F1_Arg2v6, edx
				mov F1_Arg2v7, edx
				mov F1_Arg2v8, edx
				mov F1_Arg2v9, edx
				mov F1_Arg2v10, edx
				mov F1_Arg2v11, edx
				mov F1_Arg2v12, edx
				mov F1_Arg2v13, edx
				mov F1_Arg2v14, edx
				mov F1_Arg2v15, edx
				mov F1_Arg2v16, edx
				mov F1_Arg2v17, edx
				mov F1_Arg2v18, edx
				mov F1_Arg2v19, edx
				mov F1_Arg2v20, edx
				mov F1_Arg2v21, edx
				mov F1_Arg2v22, edx
				mov F1_Arg2v23, edx
				mov F1_Arg2v24, edx
				fldz
				fstp dword ptr ss : [esp]
				mov edx, dword ptr ss : [ebp - 0x70]
				mov F2_Arg5v1, edx
				mov F2_Arg5v2, edx
				mov F2_Arg5v3, edx
				mov F2_Arg5v4, edx
				mov F2_Arg5v5, edx
				mov F2_Arg5v6, edx
				mov F2_Arg5v7, edx
				mov F2_Arg5v8, edx
				mov F2_Arg5v9, edx
				mov F2_Arg5v10, edx
				mov F2_Arg5v11, edx
				mov F2_Arg5v12, edx
				mov F2_Arg5v13, edx
				mov F2_Arg5v14, edx
				mov F2_Arg5v15, edx
				mov F2_Arg5v16, edx
				mov F2_Arg5v17, edx
				mov F2_Arg5v18, edx
				mov F2_Arg5v19, edx
				mov F2_Arg5v20, edx
				mov F2_Arg5v21, edx
				mov F2_Arg5v22, edx
				mov F2_Arg5v23, edx
				mov F2_Arg5v24, edx
				mov edx, AddWingsEffect_Buff
		}

		// ----
		if (gItem.IsCustomWings(AddWingsEffect_Buff, true))
		{
			if (AddWingsEffect_Buff == ITEM2(12, 180))
			{
				Color[0] = 1.0;
				Color[1] = 0.75;
				Color[2] = 0.62;
				// --
				pAllowStaticEffect(F1_Thisv1, &F1_Arg11v1, F1_Arg2v1, 61, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v1, 0.5, Color, F2_Arg5v1, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv2, &F1_Arg11v2, F1_Arg2v2, 42, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v2, 0.5, Color, F2_Arg5v2, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv3, &F1_Arg11v3, F1_Arg2v3, 60, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v3, 1.0, Color, F2_Arg5v3, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv4, &F1_Arg11v4, F1_Arg2v4, 41, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v4, 1.0, Color, F2_Arg5v4, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv5, &F1_Arg11v5, F1_Arg2v5, 63, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v5, 1.0, Color, F2_Arg5v5, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv6, &F1_Arg11v6, F1_Arg2v6, 44, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v6, 1.0, Color, F2_Arg5v6, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv7, &F1_Arg11v7, F1_Arg2v7, 42, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v7, 1.0, Color, F2_Arg5v7, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv8, &F1_Arg11v8, F1_Arg2v8, 59, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v8, 1.4, Color, F2_Arg5v8, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv9, &F1_Arg11v9, F1_Arg2v9, 40, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v9, 1.4, Color, F2_Arg5v9, 1.0, 0);
				// ----
				Color[0] = 0.3;
				Color[1] = 0.3;
				Color[2] = 1.0;
				// --
				pAllowStaticEffect(F1_Thisv10, &F1_Arg11v10, F1_Arg2v10, 62, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v10, 2.6, Color, F2_Arg5v10, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv11, &F1_Arg11v11, F1_Arg2v11, 43, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v11, 2.6, Color, F2_Arg5v11, 1.0, 0);
				// ----
				Color[0] = 0.6;
				Color[1] = 0.45;
				Color[2] = 1.0;
				// --
				pAllowStaticEffect(F1_Thisv12, &F1_Arg11v12, F1_Arg2v12, 65, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v12, 1.4, Color, F2_Arg5v12, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv13, &F1_Arg11v13, F1_Arg2v13, 46, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v13, 1.4, Color, F2_Arg5v13, 1.0, 0);
				// ----
				Color[0] = 0.3;
				Color[1] = 0.3;
				Color[2] = 1.0;
				// --
				pAllowStaticEffect(F1_Thisv14, &F1_Arg11v14, F1_Arg2v14, 58, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v14, 2.0, Color, F2_Arg5v14, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv15, &F1_Arg11v15, F1_Arg2v15, 39, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v15, 2.0, Color, F2_Arg5v15, 1.0, 0);
				// ----
				Color[0] = 0.6;
				Color[1] = 0.45;
				Color[2] = 1.0;
				// --
				pAllowStaticEffect(F1_Thisv16, &F1_Arg11v16, F1_Arg2v16, 64, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v16, 2.0, Color, F2_Arg5v16, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv17, &F1_Arg11v17, F1_Arg2v17, 32, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v17, 2.0, Color, F2_Arg5v17, 1.0, 0);
				// ----
				Color[0] = 0.34;
				Color[1] = 0.25;
				Color[2] = 1.0;
				// --
				pAllowStaticEffect(F1_Thisv18, &F1_Arg11v18, F1_Arg2v18, 13, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v18, 2.0, Color, F2_Arg5v18, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv19, &F1_Arg11v19, F1_Arg2v19, 15, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v19, 2.0, Color, F2_Arg5v19, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv20, &F1_Arg11v20, F1_Arg2v20, 25, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v20, 2.0, Color, F2_Arg5v20, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv21, &F1_Arg11v21, F1_Arg2v21, 27, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v21, 2.0, Color, F2_Arg5v21, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv22, &F1_Arg11v22, F1_Arg2v22, 3, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v22, 0.5, Color, F2_Arg5v22, 1.0, 0);

			}
			else if (AddWingsEffect_Buff == ITEM2(12, 181))
			{
				Color[0] = 1.0;
				Color[1] = 0.6;
				Color[2] = 0.0;
				// ----
				pAllowStaticEffect(F1_Thisv1, &F1_Arg11v1, F1_Arg2v1, 4, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v1, 2, Color, F2_Arg5v1, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv2, &F1_Arg11v2, F1_Arg2v2, 42, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v2, 2, Color, F2_Arg5v2, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv3, &F1_Arg11v3, F1_Arg2v3, 27, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v3, 2, Color, F2_Arg5v3, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv4, &F1_Arg11v4, F1_Arg2v4, 21, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v4, 2, Color, F2_Arg5v4, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv5, &F1_Arg11v5, F1_Arg2v5, 53, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v5, 2, Color, F2_Arg5v5, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv6, &F1_Arg11v6, F1_Arg2v6, 59, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v6, 2, Color, F2_Arg5v6, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv7, &F1_Arg11v7, F1_Arg2v7, 5, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v7, 2, Color, F2_Arg5v7, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv8, &F1_Arg11v8, F1_Arg2v8, 28, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v8, 2, Color, F2_Arg5v8, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv9, &F1_Arg11v9, F1_Arg2v9, 10, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v9, 2, Color, F2_Arg5v9, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv10, &F1_Arg11v10, F1_Arg2v10, 33, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v10, 2, Color, F2_Arg5v10, 1.0, 0);
				// --
				Color[0] = 1.0;
				Color[1] = 0.4;
				Color[2] = 0.0;
	
				// --
				pAllowStaticEffect(F1_Thisv11, &F1_Arg11v11, F1_Arg2v11, 44, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v11, 0.8, Color, F2_Arg5v11, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv12, &F1_Arg11v12, F1_Arg2v12, 45, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v12, 0.8, Color, F2_Arg5v12, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv13, &F1_Arg11v13, F1_Arg2v13, 12, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v13, 0.8, Color, F2_Arg5v13, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv14, &F1_Arg11v14, F1_Arg2v14, 16, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v14, 0.8, Color, F2_Arg5v14, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv15, &F1_Arg11v15, F1_Arg2v15, 21, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v15, 0.8, Color, F2_Arg5v15, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv16, &F1_Arg11v16, F1_Arg2v16, 22, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v16, 0.8, Color, F2_Arg5v16, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv17, &F1_Arg11v17, F1_Arg2v17, 61, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v17, 0.8, Color, F2_Arg5v17, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv18, &F1_Arg11v18, F1_Arg2v18, 60, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v18, 0.8, Color, F2_Arg5v18, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv19, &F1_Arg11v19, F1_Arg2v19, 59, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v19, 0.8, Color, F2_Arg5v19, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv20, &F1_Arg11v20, F1_Arg2v20, 62, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v20, 0.8, Color, F2_Arg5v20, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv21, &F1_Arg11v21, F1_Arg2v21, 55, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v21, 0.8, Color, F2_Arg5v21, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv22, &F1_Arg11v22, F1_Arg2v22, 52, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v22, 0.8, Color, F2_Arg5v22, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv23, &F1_Arg11v23, F1_Arg2v23, 53, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v23, 0.8, Color, F2_Arg5v23, 1.0, 0);
				// --
				pAllowStaticEffect(F1_Thisv24, &F1_Arg11v24, F1_Arg2v24, 54, 0);
				pPlayStaticEffect(0x7D03, &F1_Arg11v24, 0.8, Color, F2_Arg5v24, 1.0, 0);
				// --
			}

			// ----
			_asm
			{
				mov AddWingsEffect_Buff, 0x0056CA63
					jmp AddWingsEffect_Buff
			}
		}
		// ----
		if (AddWingsEffect_Buff > 0x0A9D)
		{
			_asm
			{
				mov AddWingsEffect_Buff, 0x005667BB
					jmp AddWingsEffect_Buff
			}
		}
		// ----
		_asm
		{
			mov AddWingsEffect_Buff, 0x00566707
				jmp AddWingsEffect_Buff
		}
	}
// ----------------------------------------------------------------------------------------------

Naked(WingsFixMoveKanturu)
{
	_asm
	{
		mov WingsFixMoveKanturu_Buff, ecx
	}
	// ----
	if (gItem.IsCustomWings(WingsFixMoveKanturu_Buff, false)
		|| WingsFixMoveKanturu_Buff == 0x1887)
	{
		_asm
		{
			mov WingsFixMoveKanturu_Buff, 0x00876E5E
				jmp WingsFixMoveKanturu_Buff
		}
	}
	// ----
	_asm
	{
		mov WingsFixMoveKanturu_Buff, 0x00876E50
			jmp WingsFixMoveKanturu_Buff
	}
}
// ----------------------------------------------------------------------------------------------

Naked(AllowJewelsInsert)
{
	_asm
	{
		mov AllowJewelsInsert_Buff, edx
	}
	// ----
	if (AllowJewelsInsert_Buff == ITEM(14, 14)
		|| gItem.IsCustomJewels(AllowJewelsInsert_Buff, false))
	{
		_asm
		{
			mov AllowJewelsInsert_Buff, 0x008382C1
				jmp AllowJewelsInsert_Buff
		}
	}
	// ----
	_asm
	{
		mov AllowJewelsInsert_Buff, 0x0083826B
			jmp AllowJewelsInsert_Buff
	}
}
// ----------------------------------------------------------------------------------------------

Naked(ReToJewelVisualFlag)
{
	_asm
	{
		mov ReToJewelVisualFlag_Buff, eax
	}
	// ----
	if (ReToJewelVisualFlag_Buff == ITEM(14, 13)
		|| gItem.IsCustomJewels(ReToJewelVisualFlag_Buff, false))
	{
		_asm
		{
			mov ReToJewelVisualFlag_Buff, 0x007DBD5A
				jmp ReToJewelVisualFlag_Buff
		}
	}
	// ----
	_asm
	{
		mov ReToJewelVisualFlag_Buff, 0x007DBD4C
			jmp ReToJewelVisualFlag_Buff
	}
}
// ----------------------------------------------------------------------------------------------

Naked(AddShineGlow)
{
	_asm
	{
		mov AddShineGlow_Buff, eax
	}
	// ----
	if (gItem.IsCustomJewels(AddShineGlow_Buff, true))
	{
		_asm
		{
			mov dword ptr ss : [ebp - 4], 9
				mov AddShineGlow_Buff, 0x0060A3B0
				jmp AddShineGlow_Buff
		}
	}
	// ----
	if (AddShineGlow_Buff > 0x1E96)
	{
		_asm
		{
			mov AddShineGlow_Buff, 0x0060A07F
				jmp AddShineGlow_Buff
		}
	}
	// ----
	_asm
	{
		mov AddShineGlow_Buff, 0x00609FF8
			jmp AddShineGlow_Buff
	}
}
// ----------------------------------------------------------------------------------------------

Naked(DropTitleColor)
{
	_asm
	{
		mov DropTitleColor_Buff2, eax
			mov eax, dword ptr ds : [ecx + 0x30]
			mov DropTitleColor_Buff, eax
			mov eax, DropTitleColor_Buff2
	}
	// ----
	if (DropTitleColor_Buff == ITEM2(14, 14)
		|| gItem.IsCustomJewels(DropTitleColor_Buff, true))
	{
		_asm
		{
			mov DropTitleColor_Buff, 0x005F439E
				jmp DropTitleColor_Buff
		}
	}
	// ----
	_asm
	{
		mov DropTitleColor_Buff, 0x005F3F9E
			jmp DropTitleColor_Buff
	}
}
// ----------------------------------------------------------------------------------------------

void ItemAsmLoad()
{
	SetRange((LPVOID)0x005F3F91, 13, ASM::NOP);
	SetOp((LPVOID)0x005F3F91, DropTitleColor, ASM::JMP);
	// ----
	SetRange((LPVOID)0x00609FF2, 6, ASM::NOP);
	SetOp((LPVOID)0x00609FF2, AddShineGlow, ASM::JMP);
	// ----
	SetRange((LPVOID)0x007DBD45, 7, ASM::NOP);
	SetOp((LPVOID)0x007DBD45, ReToJewelVisualFlag, ASM::JMP);
	// ----
	SetRange((LPVOID)0x00838263, 8, ASM::NOP);
	SetOp((LPVOID)0x00838263, AllowJewelsInsert, ASM::JMP);
	// ----
#ifdef NEWWINGS
	SetRange((LPVOID)0x00876E48, 8, ASM::NOP);
	SetOp((LPVOID)0x00876E48, WingsFixMoveKanturu, ASM::JMP);
	// ----
	SetRange((LPVOID)0x005666F7, 10, ASM::NOP);
	SetOp((LPVOID)0x005666F7, AddWingsEffect, ASM::JMP);
	// ----
	SetRange((LPVOID)0x00838358, 9, ASM::NOP);
	SetOp((LPVOID)0x00838358, FixWingsJewelsInsert, ASM::JMP);
	// ----
	SetRange((LPVOID)0x0083198E, 8, ASM::NOP);
	SetOp((LPVOID)0x0083198E, FixWingsMoveList, ASM::JMP);
	// ----
	SetRange((LPVOID)0x0060EE88, 7, ASM::NOP);
	SetOp((LPVOID)0x0060EE88, FixWingsExcellentGlow, ASM::JMP);
	// ----
	SetRange((LPVOID)0x0060A04F, 28, ASM::NOP);
	SetOp((LPVOID)0x0060A04F, FixWingsLevelGlow, ASM::JMP);
#endif
}
// ----------------------------------------------------------------------------------------------