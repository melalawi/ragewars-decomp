#include "basetypes.h"

/* Takes a free slot from func_804353C0 and fills it with two values, marking it set, as
   func_80435B78 does for an index; returns one, or zero when no slot is free. */
struct Slot {
    s32 first;
    s32 second;
    s32 set;
};

struct Table {
    char pad[0x2DF8];
    struct Slot slots[1];
};

extern struct Table *D_800E54A4;
extern s32 func_804353C0();

s32 func_804354A4(s32 first, s32 second) {
    s32 result = 0;
    s32 index = func_804353C0();
    s32 taken;

    if (index >= 0) {
        taken = 1;
        result = taken;
        D_800E54A4->slots[index].first = first;
        D_800E54A4->slots[index].second = second;
        D_800E54A4->slots[index].set = result;
    }
    taken = result;
    return taken;
}
