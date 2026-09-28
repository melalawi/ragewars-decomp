#include "basetypes.h"

void *func_8022A5E4(void *arg0, u32 arg1) {
    void *var_v1;
    s32 var_a2;

    var_v1 = 0;
    var_a2 = 0;
    if (arg1 < 8U) {
        var_v1 = *(void **)((char *)arg0 + 0x20);
        if (var_v1 != 0) {
            do {
                if (var_a2 == (s32)arg1) {
                    return var_v1;
                }
                var_v1 = *(void **)((char *)var_v1 + 0x16E0);
                var_a2 += 1;
            } while (var_v1 != 0);
        }
    }
    return var_v1;
}
