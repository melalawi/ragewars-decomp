#include "basetypes.h"

s32 func_802327C4(s32 arg0) {
    if (arg0 < 0xD) {
        if (arg0 >= 0xA) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D218C_4[] = {0x80, 0x0C, 0xF5, 0x34};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D750C_4[] = {0x80, 0x0D, 0x48, 0xB4};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE2C4_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CD25C_4[] = {0x38, 0x38, 0x38, 0x00};
const unsigned char unbake_rodata_800CD260_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800CD264_4[] = {0xFF, 0xFF, 0xFF, 0x00};
const unsigned char unbake_rodata_800CD268_4[] = {0x00, 0x00, 0x7F, 0x00};
const unsigned char unbake_rodata_800CD26C_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D30AC_4[] = {0x80, 0x0C, 0xF6, 0xE0};
#endif
