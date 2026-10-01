#include "basetypes.h"

extern f64 D_800CC560;
extern f64 D_800CC568;
extern f32 D_800CC570;

typedef struct func_802B388C_S1 func_802B388C_S1;
struct func_802B388C_S1 {
    char pad0[0x40];
    s32 unk40;
};

f32 func_802B388C(void **arg0, s32 arg1, s32 arg2) {
    f64 angle;
    f32 arg1f;
    f32 scaled;
    s32 temp_v0;
    f64 val;

    angle = (f64)arg2;
    arg1f = (f32)arg1;
    if (arg2 < 0) {
        angle += D_800CC560;
    }
    temp_v0 = ((func_802B388C_S1 *)((*arg0)))->unk40;
    scaled = arg1f * (f32)angle;
    val = (f64)temp_v0;
    if (temp_v0 < 0) {
        val += D_800CC568;
    }
    return scaled / ((f32)val * D_800CC570);
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
