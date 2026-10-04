#include "span_1000/code_8022A8E0.h"
#include "types.h"

extern void *D_800CB2EC[];






s16 func_8022AAD4_de(void *arg0, s32 arg1) {
    s16 *var_v0;
    void *temp_a0;

    temp_a0 = D_800CB2EC[arg1];
    if (((func_8022AA8C_S1 *)(arg0))->unk594 == 1) {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk20;
    } else {
        var_v0 = ((func_8022AAC4_S2 *)(temp_a0))->unk24;
    }
    if (var_v0 != 0) {
        return *var_v0;
    }
    return -1;
}
