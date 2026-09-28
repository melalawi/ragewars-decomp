#include "basetypes.h"

/* Clears bits 23 and 24 of the flag words at offsets 0xA8 and 0xD0 of the object at offset 0xC
   of a record, clearing D_80153730 and setting D_80153774 between the two. */
struct Target {
    char pad0[0xA8];
    s32 first;
    char padAC[0xD0 - 0xAC];
    s32 second;
};

struct Record {
    char pad[0xC];
    struct Target *target;
};

extern s32 D_80153730;
extern s32 D_80153774;

void func_8040A7A8(struct Record *record) {
    record->target->first &= ~0x01800000;
    D_80153730 = 0;
    D_80153774 = 1;
    record->target->second &= ~0x01800000;
}
