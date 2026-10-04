#include "common/types.h"
#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
















f32 func_80209C5C_de(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    u8 state;
    void *base;

    base = *arg0;
    state = ((func_80209B64_S2 *)(((func_80209B64_S1 *)(base))->unk5D8))->unk93;
    var_f1 = ((func_80209C5C_S3 *)(((func_80209B64_S1 *)(base))->unk18))->unk30;
    var_f1 *= D_800C1CB4_de;
    switch (state) {
    case 1:
        break;
    default:
        ((func_80209B64_S5 *)(((func_80209B64_S4 *)(*arg0))->unk5D8))->unk93 = 0;
    case 0:
        var_f0 = D_800C1CB8_de;
        goto multiply;
    case 2:
        var_f0 = D_800C1CBC_de;
multiply:
        var_f1 *= var_f0;
        break;
    }
    return var_f1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1BE4_4 = 0.00999999978f;
const float unbake_rodata_800C1BE8_4 = 0.899999976f;
const float unbake_rodata_800C1BEC_4 = 1.10000002f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6DA4_4 = 0.00999999978f;
const float unbake_rodata_800C6DA8_4 = 0.899999976f;
const float unbake_rodata_800C6DAC_4 = 1.10000002f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1F54_4 = 0.00999999978f;
const float unbake_rodata_800C1F58_4 = 0.899999976f;
const float unbake_rodata_800C1F5C_4 = 1.10000002f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1F94_4 = 0.00999999978f;
const float unbake_rodata_800C1F98_4 = 0.899999976f;
const float unbake_rodata_800C1F9C_4 = 1.10000002f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1CB4_4 = 0.00999999978f;
const float unbake_rodata_800C1CB8_4 = 0.899999976f;
const float unbake_rodata_800C1CBC_4 = 1.10000002f;
#endif
