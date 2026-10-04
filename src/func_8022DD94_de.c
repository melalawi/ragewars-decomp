#include "span_1000/code_8022D7A0.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_80274870_de(f32 *, f32, f32);
extern f32 D_800C2DF8_de[2];





void func_8022DD94_de(void *arg0) {
    f32 sp10;
    f32 var_f1;
    f32 var_f2;

    var_f1 = 0.0f;
    if ((u32)(((func_8022DD84_S1 *)(arg0))->unk650 - 9) < 4U) {
        var_f1 = D_800C2DF8_de[0];
    }
    sp10 = ((func_8022DD84_S1 *)(arg0))->unk720;
    func_80274870_de(&sp10, var_f1, 0.25f);
    var_f2 = sp10 - ((func_8022DD84_S1 *)(arg0))->unk720;
    if (var_f2 < 0.0f) {
        if (-var_f2 < D_800C2DF8_de[1]) {
            goto clamp;
        }
    } else if (var_f2 < D_800C2E00_de) {
clamp:
        var_f2 = 0.0f;
    }
    ((func_8022DD84_S1 *)(arg0))->unk720 = ((func_8022DD84_S1 *)(arg0))->unk720 + var_f2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2D28_4 = 66.5599976f;
const float unbake_rodata_800C2D2C_4 = 0.00100000005f;
const float unbake_rodata_800C2D30_4 = 0.00100000005f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EE8_4 = 66.5599976f;
const float unbake_rodata_800C7EEC_4 = 0.00100000005f;
const float unbake_rodata_800C7EF0_4 = 0.00100000005f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C309C_4 = 66.5599976f;
const float unbake_rodata_800C30A0_4 = 0.00100000005f;
const float unbake_rodata_800C30A4_4 = 0.00100000005f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C30DC_4 = 66.5599976f;
const float unbake_rodata_800C30E0_4 = 0.00100000005f;
const float unbake_rodata_800C30E4_4 = 0.00100000005f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DF8_4 = 66.5599976f;
const float unbake_rodata_800C2DFC_4 = 0.00100000005f;
const float unbake_rodata_800C2E00_4 = 0.00100000005f;
#endif
