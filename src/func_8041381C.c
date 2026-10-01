#include "basetypes.h"

/* Copies record i of the 52-byte table D_800E2B20 into the destination. */
struct Record {
    s32 words[13];
};

extern struct Record D_800E2B20[];

void func_8041381C(s32 index, struct Record *out) {
    *out = D_800E2B20[index];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800EF144_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA304_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DEAD4_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
