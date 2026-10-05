#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80434F4C.h"
#include "types.h"

/* Counts how many of the four 2920-byte entries D_800E54A4 points to have a word at offset 0x58 that is not zero, 0xE or 0x11.
   Adapted from func_804355B4_de with the extra 0xE and 0x11 exclusions changed. */


extern struct Player_func_80434750_de *D_800E1454_de;

s32 func_80435528_de(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_800E1454_de[i].state != 0 && D_800E1454_de[i].state != 0xE && D_800E1454_de[i].state != 0x11) {
            count++;
        }
    }
    return count;
}
