#include "span_16E000/code_8042ED84.h"
#include "types.h"

/* Copies the records player p owns into p's block record: for each of the four 400-byte records of
   D_800FEB00 whose byte 0xE is clear and whose owner byte 0xD is p, when the matching 150-byte
   status record at 0xD0 of D_80142208_de has byte 0x78 equal to one and byte 0x91 clear, copies the whole record
   through func_802A0724_de into slot [byte 0xC] of the 400-byte slots at 0x18 of p's 2920-byte
   record at 0x58 of the block D_800E1454_de points to. */





extern struct Block_func_80434B08_de *D_800E1454_de;
extern u8 D_800FEB00[];
extern s8 D_800FEB0C[];
extern s8 D_800FEB0D[];
extern s8 D_800FEB0E[];




extern struct MatchSetupGlobals D_80142208_de;
extern void func_802A0724_de(void *, void *, s32);

void func_80434B08_de(s32 player) {
    struct MatchSetupGlobals *globals;
    s32 i;
    s32 size;

    size = 400;
    globals = &D_80142208_de;
    for (i = 0; i < 4; i++) {
        if (D_800FEB0E[i * 400] == 0 && D_800FEB0D[i * 400] == player &&
            globals->status[i].active == 1 && globals->status[i].out == 0) {
            func_802A0724_de(D_800E1454_de->players[player].slots[D_800FEB0C[i * 400]],
                          &D_800FEB00[i * 400], size);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB0E_1[] = {0xC2};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB0E_1[] = {0xF5};
#endif
