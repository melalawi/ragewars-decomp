#include "common/types.h"
#include "span_1000/code_80273744.h"
#include "span_C76B0/data.h"
#include "types.h"





/** LCG PRNG step scaled into [0, arg0 * D_800C9A38) as a float. */
f32 func_80274564_de(f32 arg0) {
    f64 var_f1;
    s32 temp_v0;
    u32 temp_v1;

    temp_v1 = (D_80111D24 * 0xA84A5B53) + 0x58348C2D;
    temp_v0 = (s32)((temp_v1 >> 0x10) & 0x7FFF);
    var_f1 = (f64)temp_v0;
    D_80111D24 = temp_v1;
    if (temp_v0 < 0) {
        var_f1 = var_f1 + D_800C4940_de;
    }
    return (f32)var_f1 * arg0 * D_800C4948_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4870_8 = 4294967296.0;
const float unbake_rodata_800C4878_4 = 3.05185094e-05f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9A30_8 = 4294967296.0;
const float unbake_rodata_800C9A38_4 = 3.05185094e-05f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4BF0_8 = 4294967296.0;
const float unbake_rodata_800C4BF8_4 = 3.05185094e-05f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4C30_8 = 4294967296.0;
const float unbake_rodata_800C4C38_4 = 3.05185094e-05f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4940_8 = 4294967296.0;
const float unbake_rodata_800C4948_4 = 3.05185094e-05f;
#endif
