#include "basetypes.h"

/* Fills entry i of the 12-byte records at offset 0x2DF8 of the object D_800E54A4 points to with
   two values and marks it set. */
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

void func_80435B78(s32 first, s32 second, s32 index) {
    D_800E54A4->slots[index].first = first;
    D_800E54A4->slots[index].second = second;
    D_800E54A4->slots[index].set = 1;
}
