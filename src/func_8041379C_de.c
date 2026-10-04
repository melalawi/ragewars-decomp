#include "span_16E000/code_804136EC.h"
#include "types.h"

/* Copies record i of the 52-byte table D_800E2B20 into the destination. */


extern struct Format D_800DEAD0[];

void func_8041379C_de(s32 index, struct Format *out) {
    *out = D_800DEAD0[index];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800EF144_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA304_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DEAD4_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
