#include "basetypes.h"

/* Counts the timer D_80154100 down by D_800D2988 without passing zero, then sets bit 24 of the flag word at offset 8 of a record unless func_80265370 reports 0x400000, in which case the bit is cleared, stores what func_8040C43C returns at offset 0x14 and returns zero. Adapted from func_80446198 with the timer countdown added, func_80265370 called without arguments and bit 24 instead of bit 23 changed. */
struct Record {
    char pad[8];
    s32 flags;
    char padC[0x14 - 0xC];
    s32 value;
};

extern f32 D_80154100;
extern f32 D_800D2988;
extern s32 func_80265370(void);
extern s32 func_8040C43C();

s32 func_80444DD8(struct Record *record) {
    D_80154100 -= D_800D2988;
    if (D_80154100 <= 0.0f) {
        D_80154100 = 0.0f;
    }
    if (func_80265370() != 0x400000) {
        record->flags |= 0x1000000;
    } else {
        record->flags &= ~0x1000000;
    }
    record->value = func_8040C43C();
    return 0;
}
