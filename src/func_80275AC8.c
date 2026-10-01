#include "basetypes.h"

extern f32 D_800C9ADC;

void func_80275AC8(void *arg0) {
    s32 *ip = (s32 *)arg0;
    f32 *fp = (f32 *)arg0;
    f32 scale = D_800C9ADC;
    fp[0] = (f32)ip[0] * scale;
    fp[1] = (f32)ip[1] * scale;
    fp[2] = (f32)ip[2] * scale;
    fp[3] = (f32)ip[3] * scale;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C491C_4 = 0.029296875f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9ADC_4 = 0.029296875f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4C9C_4 = 0.029296875f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4CDC_4 = 0.029296875f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C49EC_4 = 0.029296875f;
#endif
