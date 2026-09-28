#include "basetypes.h"

/* Clears bit 26 and sets bit 3 of the flag word at offset 0x120 of the object at offset 0xC of a
   record, stores 8 in the state word D_80153788 between the two, and calls func_80264A1C. */
struct Target {
    char pad[0x120];
    s32 flags;
};

struct Record {
    char pad[0xC];
    struct Target *target;
};

extern s32 D_80153788;
extern void func_80264A1C();

void func_8040ABD4(struct Record *record) {
    record->target->flags &= ~0x04000000;
    D_80153788 = 8;
    record->target->flags |= 8;
    func_80264A1C();
}
