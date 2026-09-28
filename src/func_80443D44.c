#include "basetypes.h"

/* Sets bit 24 of the flag word at offset 0x120 of the object at offset 0xC of a record when
   D_801468F4 is set, and clears it otherwise. */
struct Target {
    char pad[0x120];
    s32 flags;
};

struct Record {
    char pad[0xC];
    struct Target *target;
};

extern s32 D_801468F4;

void func_80443D44(struct Record *record) {
    if (D_801468F4 != 0) {
        record->target->flags |= 0x01000000;
    } else {
        record->target->flags &= ~0x01000000;
    }
}
