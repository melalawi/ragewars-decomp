#include "basetypes.h"

/* Refreshes option item arg0 from bit 0x40 of the option words: the item's flag 0x1000000 at 0x8
   follows the bit in D_801462CC, and its text pointer at 0x14 becomes D_800D7B68 when the bit is
   set in D_801462C8 and D_800D7B6C otherwise; returns zero. Adapted from func_8043D568 with the bit changed. */
struct Item {
    char pad0[0x8];
    s32 flags;
    char pad0C[0x14 - 0xC];
    char *text;
};

extern s32 D_801462C8;
extern s32 D_801462CC;
extern char D_800D7B68[];
extern char D_800D7B6C[];

s32 func_8043D788(struct Item *item) {
    if (D_801462CC & 0x40) {
        item->flags |= 0x1000000;
    } else {
        item->flags &= ~0x1000000;
    }
    if (D_801462C8 & 0x40) {
        item->text = D_800D7B68;
    } else {
        item->text = D_800D7B6C;
    }
    return 0;
}
