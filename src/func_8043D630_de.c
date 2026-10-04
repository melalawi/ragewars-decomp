#include "span_16E000/code_8043BD50.h"
#include "span_16E000/types.h"
#include "types.h"

/* Refreshes option item arg0 from bit 0x80 of the option words: the item's flag 0x1000000 at 0x8
   follows the bit in D_8014220C, and its text pointer at 0x14 becomes D_800D3B44 when the bit is
   set in D_80142208_de and D_800D3B48 otherwise; returns zero. Adapted from func_8043D388_de with the bit changed. */


extern s32 D_80142208_de;
extern s32 D_8014220C;
extern char D_800D3B44[];
extern char D_800D3B48[];

s32 func_8043D630_de(struct State_func_804447F0_de *item) {
    if (D_8014220C & 0x80) {
        item->unk8 |= 0x1000000;
    } else {
        item->unk8 &= ~0x1000000;
    }
    if (D_80142208_de & 0x80) {
        item->unk14 = D_800D3B44;
    } else {
        item->unk14 = D_800D3B48;
    }
    return 0;
}
