#include "common/types.h"
#include "span_1000/code_80285170.h"
#include "span_C76B0/data.h"
#include "types.h"





f32 func_80285630_de(s32 arg0) {
    s32 sp0;
    s32 sp4;
    u32 seed;
    s32 idx;
    f64 var_f2;

    sp0 = (s32) (*(u16 *) &arg0) << 16;
    if (((struct func_8022EA2C_S1 *) ((u16 *) (&arg0)))->unk2 == 0) {
        return *(f32 *) &sp0;
    }
    sp4 = (s32) (((struct func_8022EA2C_S1 *) ((u16 *) (&arg0)))->unk2) << 16;
    seed = (D_80111D24 * (s32) 0xA84A5B53) + (s32) 0x58348C2D;
    idx = (s32) ((seed >> 16) & 0x7FFF);
    var_f2 = (f64) idx;
    D_80111D24 = seed;
    if (idx < 0) {
        var_f2 += D_800C4EB0_de;
    }
    return *(f32 *) &sp0 + (((f32) var_f2 * *(f32 *) &sp4) * D_800C4EB8_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4DE0_8 = 4294967296.0;
const float unbake_rodata_800C4DE8_4 = 3.05185094e-05f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9FA0_8 = 4294967296.0;
const float unbake_rodata_800C9FA8_4 = 3.05185094e-05f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C5160_8 = 4294967296.0;
const float unbake_rodata_800C5168_4 = 3.05185094e-05f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C51A0_8 = 4294967296.0;
const float unbake_rodata_800C51A8_4 = 3.05185094e-05f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4EB0_8 = 4294967296.0;
const float unbake_rodata_800C4EB8_4 = 3.05185094e-05f;
#endif
