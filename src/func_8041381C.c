#include "basetypes.h"

/* Copies record i of the 52-byte table D_800E2B20 into the destination. */
struct Record {
    s32 words[13];
};

extern struct Record D_800E2B20[];

void func_8041381C(s32 index, struct Record *out) {
    *out = D_800E2B20[index];
}
