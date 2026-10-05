#include "span_1000/code_80254CE4.h"
#include "types.h"

extern s32 D_80101190;
extern s32 D_80101194;









void func_80255488_de(s32 arg0) {
    s32 key;
    s32 *temp_v0;
    s32 *var_a0;
    s32 *var_a2;
    s32 *var_v1;

    key = arg0;
    var_v1 = (s32 *)(D_80101194 + ((((key << 5) ^ ((u32)key >> 1) ^
                                      ((u32)key >> 9) ^ ((u32)key >> 0x11)) &
                                     D_80101190) * 0x10));
    var_a2 = 0;
    if (*var_v1 != key) {
loop:
        var_a2 = var_v1;
        var_v1 = ((func_80255428_S1 *)(var_v1))->unkC.v0;
        if (var_v1 != 0) {
            if (*var_v1 == key) {
                goto found;
            }
            goto loop;
        }
    } else {
found:
        if (var_v1 != 0) {
            var_a0 = ((func_80255428_S1 *)(var_v1))->unkC.v0;
            if (var_a0 != 0) {
                ((func_80255428_S1 *)(var_v1))->unk4 = ((func_80255428_S2 *)(var_a0))->unk4;
                *var_v1 = *var_a0;
                ((func_80255428_S1 *)(var_v1))->unkC.v0 = ((func_80255428_S2 *)(var_a0))->unkC;
                temp_v0 = var_v1;
                var_v1 = var_a0;
                var_a0 = temp_v0;
            }
            if (var_a2 != 0) {
                ((func_80255428_S3 *)(var_a2))->unkC = var_a0;
            }
            ((func_80255428_S1 *)(var_v1))->unk4 = 0;
            *var_v1 = 0;
            ((func_80255428_S1 *)(var_v1))->unkC.v1 = 0;
        }
    }
}
