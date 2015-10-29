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
LPVOID F1_Thisv1; 
DWORD F1_Arg1v1; 
DWORD F1_Arg11v1; 
DWORD F1_Arg2v1; 
DWORD F2_Arg5v1; 
DWORD F3_Arg3v1; 
// 
LPVOID F1_Thisv2; 
DWORD F1_Arg1v2; 
DWORD F1_Arg11v2; 
DWORD F1_Arg2v2; 
DWORD F2_Arg5v2; 
DWORD F3_Arg3v2; 
// 
LPVOID F1_Thisv3; 
DWORD F1_Arg1v3; 
DWORD F1_Arg11v3; 
DWORD F1_Arg2v3; 
DWORD F2_Arg5v3; 
DWORD F3_Arg3v3; 
// 
LPVOID F1_Thisv4; 
DWORD F1_Arg1v4; 
DWORD F1_Arg11v4; 
DWORD F1_Arg2v4; 
DWORD F2_Arg5v4; 
DWORD F3_Arg3v4; 
// 
LPVOID F1_Thisv5; 
DWORD F1_Arg1v5; 
DWORD F1_Arg11v5; 
DWORD F1_Arg2v5; 
DWORD F2_Arg5v5; 
DWORD F3_Arg3v5; 
// 
LPVOID F1_Thisv6; 
DWORD F1_Arg1v6; 
DWORD F1_Arg11v6; 
DWORD F1_Arg2v6; 
DWORD F2_Arg5v6; 
DWORD F3_Arg3v6; 
// 
LPVOID F1_Thisv7; 
DWORD F1_Arg1v7; 
DWORD F1_Arg11v7; 
DWORD F1_Arg2v7; 
DWORD F2_Arg5v7; 
DWORD F3_Arg3v7; 
// 
LPVOID F1_Thisv8; 
DWORD F1_Arg1v8; 
DWORD F1_Arg11v8; 
DWORD F1_Arg2v8; 
DWORD F2_Arg5v8; 
DWORD F3_Arg3v8; 
// 
LPVOID F1_Thisv9; 
DWORD F1_Arg1v9; 
DWORD F1_Arg11v9; 
DWORD F1_Arg2v9; 
DWORD F2_Arg5v9; 
DWORD F3_Arg3v9; 
// 
LPVOID F1_Thisv10; 
DWORD F1_Arg1v10; 
DWORD F1_Arg11v10; 
DWORD F1_Arg2v10; 
DWORD F2_Arg5v10; 
DWORD F3_Arg3v10; 
// ----------------------------------------------------------------------------------------------

Naked(FixWingsExcellentGlow)
{
	_asm
	{
		mov FixWingsExcellentGlow_Buff, ecx
		mov ecx, dword ptr ds:[FixWingsExcellentGlow_Buff + 0x30]
		mov FixWingsExcellentGlow_Buff, ecx
	}
	// ----
	if(		FixWingsExcellentGlow_Buff <= ITEM2(12, 50)
		||	gItem.IsCustomWings(FixWingsExcellentGlow_Buff, true) )
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
		mov dword ptr ss:[ebp-0x4ec], ecx
	}
	// ----
	if( gItem.IsCustomWings(FixWingsLevelGlow_Buff, true) )
	{
		_asm
		{
			mov dword ptr ss:[ebp-4], 0
		}
	}
	// ----
	if( FixWingsLevelGlow_Buff2 > 136 )
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
	if( FixWingsMoveList_Buff == 0x1887 || gItem.IsCustomWings(FixWingsMoveList_Buff, false) )
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
		mov ecx, dword ptr ss:[ebp-0x20]
		movsx edx, word ptr ds:[ecx]
		mov FixWingsJewelsInsert_Buff4, edx
		mov edx, FixWingsJewelsInsert_Buff3

		mov ecx, dword ptr ss:[ebp-0x3c]
		mov FixWingsJewelsInsert_Buff, ecx
		mov ecx, FixWingsJewelsInsert_Buff2
	}
	// ----
	if(		FixWingsJewelsInsert_Buff == 0x1887 
		||	gItem.IsCustomWings(FixWingsJewelsInsert_Buff, false) 
		||	gItem.IsCustomJewels(FixWingsJewelsInsert_Buff4, false) )
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

Naked(AddWingsEffect)
{ /* 
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
     
     
    _asm 
    { 
        mov AddWingsEffect_Buff, edx 
        mov edx, dword ptr ss: [ebp - 0x68] 
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
        mov edx, dword ptr ss: [ebp - 0x6c] 
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
        fldz 
        fstp dword ptr ss: [esp] 
        mov edx, dword ptr ss: [ebp - 0x70] 
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
        mov edx, AddWingsEffect_Buff 
    } 
     

    if (gItem.IsCustomWings(AddWingsEffect_Buff, true)) 
    { 
         
        if(AddWingsEffect_Buff == ITEM2(12, 184)) 
        { 
            Color= 1.0;
            Color [1] = 0.3; 
            Color [2] = 0.0; 
            // ---- 
            pAllowStaticEffect (F1_Thisv1, & F1_Arg11v1, F1_Arg2v1, 4, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v1, 2, Color, F2_Arg5v1, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv2, & F1_Arg11v2, F1_Arg2v2, 42, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v2, 2, Color, F2_Arg5v2, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv3, & F1_Arg11v3, F1_Arg2v3, 27, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v3, 2, Color, F2_Arg5v3, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv4, & F1_Arg11v4, F1_Arg2v4, 21, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v4, 2, Color, F2_Arg5v4, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv5, & F1_Arg11v5, F1_Arg2v5, 53, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v5, 2, Color, F2_Arg5v5, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv6, & F1_Arg11v6, F1_Arg2v6, 59, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v6, 2, Color, F2_Arg5v6, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv7, & F1_Arg11v7, F1_Arg2v7, 5, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v7, 2, Color, F2_Arg5v7, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv8, & F1_Arg11v8, F1_Arg2v8, 28, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v8, 2, Color, F2_Arg5v8, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv9, & F1_Arg11v9, F1_Arg2v9, 10, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v9, 2, Color, F2_Arg5v9, 2.0, 0); 
            // - 
            pAllowStaticEffect (F1_Thisv10, & F1_Arg11v10, F1_Arg2v10, 33, 0); 
            pPlayStaticEffect (0x7D03, & F1_Arg11v10, 2, Color, F2_Arg5v10, 2.0, 0); 
        } 
         
        _asm 
        { 
            mov AddWingsEffect_Buff, 0x0056CA63 
            jmp AddWingsEffect_Buff 
        } 
    }     
        // ---- 
    if( AddWingsEffect_Buff > 0x0A9D ) 
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
	if(		gItem.IsCustomWings(WingsFixMoveKanturu_Buff, false)
		||	WingsFixMoveKanturu_Buff == 0x1887 )
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
	if(		AllowJewelsInsert_Buff == ITEM(14, 14)
		||	gItem.IsCustomJewels(AllowJewelsInsert_Buff, false) )
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
	if(		ReToJewelVisualFlag_Buff == ITEM(14, 13)
		||	gItem.IsCustomJewels(ReToJewelVisualFlag_Buff, false) )
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
	if( gItem.IsCustomJewels(AddShineGlow_Buff, true) )
	{
		_asm
		{
			mov dword ptr ss:[ebp-4], 9
			mov AddShineGlow_Buff, 0x0060A3B0
			jmp AddShineGlow_Buff
		}
	}
	// ----
	if( AddShineGlow_Buff > 0x1E96 )
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
		mov eax, dword ptr ds:[ecx+0x30]
		mov DropTitleColor_Buff, eax
		mov eax, DropTitleColor_Buff2
	}
	// ----
	if(		DropTitleColor_Buff == ITEM2(14, 14)
		||	gItem.IsCustomJewels(DropTitleColor_Buff, true) )
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
