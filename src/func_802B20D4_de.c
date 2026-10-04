#include "common/types.h"
#include "span_1000/code_802B6958.h"
#include "span_C76B0/data.h"
#include "types.h"




extern f32 D_800C74F0_de;

f32 func_802B20D4_de(Obj_func_802B20D4_de *arg0, s32 arg1, s32 arg2) {
    f64 v;
    f32 new_var;

    v = (f64)arg2;
    new_var = (f32)arg1;
    if (arg2 < 0) {
        v = v + D_800C74E8_de;
    }
    return (new_var * (f32)v) / ((f32)arg0->field18 * D_800C74F0_de);
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
