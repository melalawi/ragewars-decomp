#include "basetypes.h"

/* Latches D_80153768 to one when the record's team value is not -1 and both func_802645F0 and func_80406178 accept it, then returns D_80153768. Adapted from func_80409C38 with the latch D_80153784 changed to D_80153768. */

struct Inner {
    char pad[4];
    signed char value;
};

struct Record {
    char pad[0x20];
    struct Inner *inner;
};

extern s32 D_80153768;
extern s32 D_8015375C;
extern s32 D_800E28C8;
extern s32 func_802645F0(s32);
extern s32 func_80406178(struct Record *, s32, s32);

static inline s32 func_80409C08(struct Record *record) {
    if (D_8015375C != 0) {
        return D_800E28C8;
    }
    return record->inner->value;
}

s32 func_8040B348(struct Record *record) {
    if (D_80153768 == 0) {
        if (func_80409C08(record) != -1) {
            if (func_802645F0(func_80409C08(record)) != 0) {
                if (func_80406178(record, func_80409C08(record), 0) != 0) {
                    D_80153768 = 1;
                }
            }
        }
    }
    return D_80153768;
}
