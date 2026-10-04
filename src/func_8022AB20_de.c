#include "span_1000/code_8022A8E0.h"
#include "types.h"

extern void *D_800CB2EC[];








s16 func_8022AB20_de(void *arg0, s32 arg1) {
    s16 *var_v0;
    s32 temp_v1;
    void *temp_v0;

    if ((arg1 == 1) && (((func_8022AB10_S1 *)(arg0))->unk604 != 0)) {
        return -1;
    }
    temp_v0 = D_800CB2EC[arg1];
    if (((func_8022AB10_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_v0))->unk24;
    }
    if (var_v0 != 0) {
        temp_v1 = *var_v0;
    } else {
        temp_v1 = -1;
    }
    if (temp_v1 != -1) {
        return ((Actor_func_8022AB20_de *)arg0)->table[temp_v1];
    }
    return -1;
}
