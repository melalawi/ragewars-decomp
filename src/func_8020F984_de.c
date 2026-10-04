#include "common/types.h"
#include "span_1000/code_8020F2A8.h"
#include "span_1000/types.h"
#include "types.h"








extern func_802077F4_S2 D_800C21F0_eu_x;

s32 func_8020F984_de(void *arg0) {
    f32 temp_f0;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_v0;
    s32 mask;
    s32 var_a1;
    s32 var_v1;
    void *var_a0;

    var_a0 = arg0;
    var_a1 = -1;
    var_f1 = D_800C21F0_eu_x.unk4;
    var_v1 = 0;
    if (((func_8020F984_S2 *)(var_a0))->unk38 > 0) {
        mask = 0x300000;
        temp_f2 = var_f1;
        temp_v0 = ((func_8020F984_S2 *)(var_a0))->unk38;
        do {
            if ((((func_80203C40_S1 *)(((func_8020F984_S2 *)(var_a0))->unk3C))->unk100 & mask) &&
                ((temp_f0 = (f32)((func_8020F984_S2 *)(var_a0))->unk94, temp_f0 < var_f1) ||
                 (var_f1 == temp_f2)) &&
                (((func_8020F984_S2 *)(var_a0))->unk6C != 0)) {
                var_f1 = temp_f0;
                var_a1 = var_v1;
                var_a0++;
                var_a0--;
            }
            var_v1 += 1;
            var_a0 += 4;
        } while (var_v1 < temp_v0);
    }
    return var_a1;
}
