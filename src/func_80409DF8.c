#include "basetypes.h"

/* Latches D_80146D60 and D_800E28CC to one the first time bit 12 of the word at offset 0xB0 of the
   object at 0x20 of a record is seen set, and returns D_80146D60. */
struct Inner {
    char pad[0xB0];
    s32 flags;
};

struct Record {
    char pad[0x20];
    struct Inner *inner;
};

extern s32 D_80146D60;
extern s32 D_800E28CC;

s32 func_80409DF8(struct Record *record) {
    if ((record->inner->flags & 0x1000) && D_800E28CC == 0) {
        D_80146D60 = 1;
        D_800E28CC = 1;
    }
    return D_80146D60;
}
