#include "span_1000/code_8023ECAC.h"
#include "span_C76B0/data.h"
#include "types.h"









s32 func_8023ED64_de(void *arg0, void *arg1) {
    f32 temp_f2;
    s32 var_v0;

    temp_f2 = ((func_8023ED54_S1 *)(arg1))->unkCC;
    if (temp_f2 <= 0.0f) {
        if (((func_8023ED54_S1 *)(arg1))->unk8 == 7) {
            return 0;
        }
        if ((u32) (((func_8023ED54_S1 *)(arg1))->unk0 - 5) < 2) {
            return 0;
        }
        if ((temp_f2 * ((func_8023ED54_S2 *)(arg0))->unk80) < -(D_800CB408_de * D_800C36D8_de)) {
            return 0;
        }
    }
    var_v0 = 0;
    {
        f32 b = ((func_8023ED54_S1 *)(arg1))->unkCC;
        if (!(((func_8023ED54_S2 *)(arg0))->unk17C <= b)) {
            var_v0 = 1;
        }
    }
    return var_v0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3608_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87C8_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3988_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39C8_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36D8_4 = 10.2399998f;
#endif
