#include "basetypes.h"

void func_80255BEC(void *arg0, s32 *arg1, u32 *arg2) {
    u32 temp_a0;
    u32 var_v1;
    void *var_a3;

    *arg1 = 0;
    *arg2 = 0;
    var_a3 = *(void **)((char *)arg0 + 8);
    if (var_a3 != 0) {
        do {
            *arg1 += *(u32 *)((char *)var_a3 + 0x14);
            var_v1 = *(u32 *)((char *)var_a3 + 0x14);
            temp_a0 = *arg2;
            if (var_v1 < temp_a0) {
                var_v1 = temp_a0;
            }
            *arg2 = var_v1;
            var_a3 = *(void **)((char *)var_a3 + 4);
        } while (var_a3 != 0);
    }
}
