#include "basetypes.h"

/* The argument is a pointer into 0x8068xxxx whose first byte the debugger read as 0x14, and the
   stride is 52. D_800E2B40, which func_80413758 indexes with the same stride and the same
   argument, sits 24 bytes further on, so both are fields of one 52-byte record. */
extern s32 D_800E2B28[][13];

s32 func_80413688(u8 *record) {
    return D_800E2B28[*record][0];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DD788_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E2B28_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EF148_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA308_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DEAD8_4[] = {0x00, 0x00, 0x00, 0x00};
#endif
