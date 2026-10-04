#include "span_16E000/code_8043D904.h"
#include "span_16E000/types.h"
#include "types.h"

/* Refreshes option item arg0 from bit 0x8000 of the option words: the item's flag 0x1000000 at 0x8
   follows the bit in D_8014220C, and its text pointer at 0x14 becomes D_800D3B84 when the bit is
   set in D_80142208_de and D_800D3B88 otherwise; returns zero. Adapted from func_8043D388_de with the bit changed. */


extern s32 D_80142208_de;
extern s32 D_8014220C;
extern char D_800D3B84[];
extern char D_800D3B88[];

s32 func_8043DA70_de(struct State_func_804447F0_de *item) {
    if (D_8014220C & 0x8000) {
        item->unk8 |= 0x1000000;
    } else {
        item->unk8 &= ~0x1000000;
    }
    if (D_80142208_de & 0x8000) {
        item->unk14 = D_800D3B84;
    } else {
        item->unk14 = D_800D3B88;
    }
    return 0;
}
