#include "basetypes.h"

typedef struct {
    char pad18[0x18];
    s16 field18;
} Obj;

extern f64 D_800CC738;
extern f32 D_800CC740;

f32 func_802B71A4(Obj *arg0, s32 arg1, s32 arg2) {
    f64 v;
    f32 new_var;

    v = (f64)arg2;
    new_var = (f32)arg1;
    if (arg2 < 0) {
        v = v + D_800CC738;
    }
    return (new_var * (f32)v) / ((f32)arg0->field18 * D_800CC740);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7408_8 = 4294967296.0;
const float unbake_rodata_800C7410_4 = 1000000.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC738_8 = 4294967296.0;
const float unbake_rodata_800CC740_4 = 1000000.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C80D8_8 = 4294967296.0;
const float unbake_rodata_800C80E0_4 = 1000000.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C8AA8_8 = 4294967296.0;
const float unbake_rodata_800C8AB0_4 = 1000000.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C74E8_8 = 4294967296.0;
const float unbake_rodata_800C74F0_4 = 1000000.0f;
#endif
