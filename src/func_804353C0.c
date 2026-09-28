#include "basetypes.h"

/* Returns the index of the first of the four 12-byte slots at offset 0x2DF8 of the table D_800E54A4
   points to whose first word is -1, meaning free, or -1 when none is. */
struct Slot {
    s32 first;
    s32 second;
    s32 set;
};

struct Table {
    char pad[0x2DF8];
    struct Slot slots[4];
};

extern struct Table *D_800E54A4;

s32 func_804353C0(void) {
    s32 found = -1;
    s32 i;

    for (i = 0; i < 4; i++) {
        if (found != -1) {
            break;
        }
        if (D_800E54A4->slots[i].first == -1) {
            found = i;
        }
    }
    return found;
}
