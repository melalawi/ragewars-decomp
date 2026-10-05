#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8022A274.h"
#include "types.h"








void *func_8022A504_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    f32 var_f3;
    void *var_v1;
    void *var_a1;
    f32 dx, dy, dz, distSq;

    var_f3 = D_800C2CE8_de;
    var_v1 = ((func_80228774_S1 *)(arg0))->unk20;
    var_a1 = 0;
    if (var_v1 != 0) {
        do {
            if (((func_8022A4F4_S2 *)(var_v1))->unk5E4 != 0 && var_v1 != arg4) {
                dx = ((func_8022A4F4_S2 *)(var_v1))->unk8 - *(f32 *)&arg1;
                dx = dx * dx;
                dy = ((func_8022A4F4_S2 *)(var_v1))->unkC - *(f32 *)&arg2;
                dy = dy * dy;
                dz = ((func_8022A4F4_S2 *)(var_v1))->unk10 - *(f32 *)&arg3;
                dz = dz * dz;
                distSq = (dx + dy) + dz;
                if (distSq < var_f3) {
                    var_f3 = distSq;
                    var_a1 = var_v1;
                }
            }
            var_v1 = ((func_8022A4F4_S2 *)(var_v1))->unk16E0;
        } while (var_v1 != 0);
    }
    return var_a1;
}
