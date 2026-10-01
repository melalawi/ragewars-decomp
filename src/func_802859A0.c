#include "basetypes.h"

extern f32 func_802BC380(f32);
extern f32 func_80264F00(void *arg0);
extern f32 D_800C9FB8;
extern f32 D_800C9FC0;

f32 func_802859A0(f32 *arg0, u32 arg1, u32 arg2, u32 arg3) {
    f32 magnitude;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 limit;
    f32 factor;
    f32 first;

    dx = *(f32 *)&arg1 - arg0[3];
    dy = *(f32 *)&arg2 - arg0[4];
    dz = *(f32 *)&arg3 - arg0[5];
    magnitude = func_802BC380((dx * dx) + (dy * dy) + (dz * dz));
    if ((magnitude == 0.0f) || ((limit = arg0[6]) == 0.0f)) {
        factor = *(&D_800C9FB8 + 1);
    } else {
        factor = 0.0f;
        if (magnitude < limit) {
            factor = D_800C9FC0 - (magnitude / limit);
        }
    }
    factor *= arg0[7];
    first = func_80264F00(&arg0[8]);
    return factor * first * func_80264F00(&arg0[11]);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4DFC_4 = 1.0f;
const float unbake_rodata_800C4E00_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9FBC_4 = 1.0f;
const float unbake_rodata_800C9FC0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C517C_4 = 1.0f;
const float unbake_rodata_800C5180_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C51BC_4 = 1.0f;
const float unbake_rodata_800C51C0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4ECC_4 = 1.0f;
const float unbake_rodata_800C4ED0_4 = 1.0f;
#endif
