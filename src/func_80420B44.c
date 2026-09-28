#include "basetypes.h"

/* Counts how many of the four 0x4C8-byte entries D_800E42D0 points to are in state 1 or 2. */
struct Entry {
    char pad[0x14];
    s32 state;
    char pad18[0x4C8 - 0x18];
};

extern struct Entry *D_800E42D0;

s32 func_80420B44(void) {
    s32 count = 0;
    s32 i;

    for (i = 0; i < 4; i++) {
        if ((u32) (D_800E42D0[i].state - 1) < 2) {
            count++;
        }
    }
    return count;
}
