#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "types.h"

extern f32 D_800C2CE0_de[2];






void *func_8022A480_de(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 var_f3;
    void *var_v1;
    void *var_v0;
    f32 dx, dy, dz, distSq;

    var_f3 = D_800C2CE0_de[1];
    var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
    var_v0 = 0;
    if (var_v1 != 0) {
        do {
            dx = ((func_8022A470_S2 *)(var_v1))->unk8 - *(f32 *)&arg1;
            dx = dx * dx;
            dy = ((func_8022A470_S2 *)(var_v1))->unkC - *(f32 *)&arg2;
            dy = dy * dy;
            dz = ((func_8022A470_S2 *)(var_v1))->unk10 - *(f32 *)&arg3;
            dz = dz * dz;
            distSq = (dx + dy) + dz;
            if (distSq < var_f3) {
                var_f3 = distSq;
                var_v0 = var_v1;
            }
            var_v1 = ((func_8022A470_S2 *)(var_v1))->unk16E0;
        } while (var_v1 != 0);
    }
    return var_v0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C14_4 = 3.40282347e+38f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DD4_4 = 3.40282347e+38f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2F8C_4 = 3.40282347e+38f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FCC_4 = 3.40282347e+38f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2CE4_4 = 3.40282347e+38f;
#endif
