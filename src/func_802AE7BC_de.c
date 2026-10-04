#include "span_1000/code_802B323C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"








f32 func_802AE7BC_de(void **arg0, s32 arg1, s32 arg2) {
    f64 angle;
    f32 arg1f;
    f32 scaled;
    s32 temp_v0;
    f64 val;

    angle = (f64)arg2;
    arg1f = (f32)arg1;
    if (arg2 < 0) {
        angle += D_800C7310_de;
    }
    temp_v0 = ((Obj_func_80297DBC_de *)((*arg0)))->unk40;
    scaled = arg1f * (f32)angle;
    val = (f64)temp_v0;
    if (temp_v0 < 0) {
        val += D_800C7318_de;
    }
    return scaled / ((f32)val * D_800C7320_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7230_8 = 4294967296.0;
const double unbake_rodata_800C7238_8 = 4294967296.0;
const float unbake_rodata_800C7240_4 = 1000000.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CC560_8 = 4294967296.0;
const double unbake_rodata_800CC568_8 = 4294967296.0;
const float unbake_rodata_800CC570_4 = 1000000.0f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C7F00_8 = 4294967296.0;
const double unbake_rodata_800C7F08_8 = 4294967296.0;
const float unbake_rodata_800C7F10_4 = 1000000.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C88D0_8 = 4294967296.0;
const double unbake_rodata_800C88D8_8 = 4294967296.0;
const float unbake_rodata_800C88E0_4 = 1000000.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C7310_8 = 4294967296.0;
const double unbake_rodata_800C7318_8 = 4294967296.0;
const float unbake_rodata_800C7320_4 = 1000000.0f;
#endif
