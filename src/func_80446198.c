#include "basetypes.h"

/* Sets bit 23 of the flag word at offset 8 of a record unless func_80265370 reports 0x400000 for
   it, in which case the bit is cleared; then stores what func_8040C43C returns at offset 0x14.
   Returns zero. */
struct Record {
    char pad[8];
    s32 flags;
    char padC[0x14 - 0xC];
    s32 value;
};

extern s32 func_80265370(struct Record *);
extern s32 func_8040C43C();

s32 func_80446198(struct Record *record) {
    if (func_80265370(record) != 0x400000) {
        record->flags |= 0x800000;
    } else {
        record->flags &= ~0x800000;
    }
    record->value = func_8040C43C();
    return 0;
}
