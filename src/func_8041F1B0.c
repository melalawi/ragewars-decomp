#include "basetypes.h"

/* Returns the index of the first of the seventeen 0x70-byte slots of D_800E3A54 whose leading word equals the argument, or zero when none does. */

struct Slot {
    s32 key;
    char pad[0x70 - 4];
};

extern struct Slot D_800E3A54[];

s32 func_8041F1B0(s32 key) {
    s32 index = 0;
    s32 found = 0;
    s32 i;

    for (i = 0; i < 17 && !found; i++) {
        if (D_800E3A54[i].key == key) {
            found = 1;
            index = i;
        }
    }
    return index;
}
