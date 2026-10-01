#include "basetypes.h"

extern s32 D_8010F194;
extern f32 D_800CA588;

s32 func_802938E8(s32 arg0, f32 arg1, s32 arg2, s32 arg3) {
    s32 *flag = &D_8010F194;

    if ((*flag != 0) && (arg3 != -1)) {
        *(s8 *)(arg0 + 0x26DC1) = 2;
        *(s32 *)(arg0 + 0x26DBC) = arg3;
        *flag = 0;
        return 1;
    }
    if ((arg1 * D_800CA588) < *(f32 *)(arg0 + 0x26DB0)) {
        *(s8 *)(arg0 + 0x26DC1) = 2;
        *(s32 *)(arg0 + 0x26DBC) = arg2;
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53C8_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA588_4 = 15.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5748_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5788_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C549C_4 = 15.0f;
#endif
