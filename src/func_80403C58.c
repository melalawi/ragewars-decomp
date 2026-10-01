#include "basetypes.h"

/* Blends two values with cubic weights: with u the pooled constant D_800E0CB0[0] less t, from is
   weighted by u cubed less u and to by t cubed less t. The constant lives in a shared literal
   pool outside this object, so it is read by name. */
extern f32 D_800E0CB0[];

f32 func_80403C58(f32 from, f32 to, f32 t) {
    f32 u = D_800E0CB0[0] - t;

    return from * (u * u * u - u) + to * (t * t * t - t);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DB930_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E0CB0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800ED300_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E84C0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DCC80_4 = 1.0f;
#endif
