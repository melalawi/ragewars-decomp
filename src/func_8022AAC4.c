#include "basetypes.h"

extern void *D_800D052C[];

s16 func_8022AAC4(void *arg0, s32 arg1) {
    s16 *var_v0;
    void *temp_a0;

    temp_a0 = D_800D052C[arg1];
    if (*(s32 *)((char *)arg0 + 0x594) == 1) {
        var_v0 = *(s16 **)((char *)temp_a0 + 0x20);
    } else {
        var_v0 = *(s16 **)((char *)temp_a0 + 0x24);
    }
    if (var_v0 != 0) {
        return *var_v0;
    }
    return -1;
}
