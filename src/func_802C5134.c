#include "basetypes.h"

extern f32 D_800CCF38;
extern f32 D_800CCF3C;
extern f32 D_800CCF40;
extern f32 D_800CCF44;

s16 func_802C5134(f32 arg0) {
    f32 f0;
    f32 f12;

    if (arg0 >= 0.0f) {
        f12 = arg0 + D_800CCF38;
        f0 = D_800CCF3C;
        if (f0 < f12) {
            f12 = f0;
        }
    } else {
        f12 = arg0 - D_800CCF40;
        f0 = D_800CCF44;
        if (f12 < f0) {
            f12 = f0;
        }
    }
    return (s16)(s32)f12;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7C08_4 = 0.5f;
const float unbake_rodata_800C7C0C_4 = 32767.0f;
const float unbake_rodata_800C7C10_4 = 0.5f;
const float unbake_rodata_800C7C14_4 = (-32768.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CCF38_4 = 0.5f;
const float unbake_rodata_800CCF3C_4 = 32767.0f;
const float unbake_rodata_800CCF40_4 = 0.5f;
const float unbake_rodata_800CCF44_4 = (-32768.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C88D8_4 = 0.5f;
const float unbake_rodata_800C88DC_4 = 32767.0f;
const float unbake_rodata_800C88E0_4 = 0.5f;
const float unbake_rodata_800C88E4_4 = (-32768.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C92A8_4 = 0.5f;
const float unbake_rodata_800C92AC_4 = 32767.0f;
const float unbake_rodata_800C92B0_4 = 0.5f;
const float unbake_rodata_800C92B4_4 = (-32768.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C7CE8_4 = 0.5f;
const float unbake_rodata_800C7CEC_4 = 32767.0f;
const float unbake_rodata_800C7CF0_4 = 0.5f;
const float unbake_rodata_800C7CF4_4 = (-32768.0f);
#endif
