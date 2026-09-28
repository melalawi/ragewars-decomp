#include "basetypes.h"

/* Counts how many of the four 2920-byte entries D_800E54A4 points to have a word at offset 0x58 that is neither zero nor 0x11.
   Adapted from func_80435790 with the extra 0x11 exclusion changed. */
struct Entry {
    char pad0[0x58];
    s32 active;
    char pad5C[2920 - 0x5C];
};

extern struct Entry *D_800E54A4;

s32 func_80435750(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (D_800E54A4[i].active != 0 && D_800E54A4[i].active != 0x11) {
            count++;
        }
    }
    return count;
}
