#include "basetypes.h"

extern f32 D_800C7000[];

s32 func_8020F984(void *arg0) {
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
    var_f1 = *(f32 *)((s8 *)D_800C7000 + 4);
    var_v1 = 0;
    if (*(s32 *)((s8 *)var_a0 + 0x38) > 0) {
        mask = 0x300000;
        temp_f2 = var_f1;
        temp_v0 = *(s32 *)((s8 *)var_a0 + 0x38);
        do {
            if ((*(s32 *)((s8 *)*(void **)((s8 *)var_a0 + 0x3C) + 0x100) & mask) &&
                ((temp_f0 = (f32)*(s32 *)((s8 *)var_a0 + 0x94), temp_f0 < var_f1) ||
                 (var_f1 == temp_f2)) &&
                (*(s32 *)((s8 *)var_a0 + 0x6C) != 0)) {
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
