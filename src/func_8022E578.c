#include "basetypes.h"

extern f32 func_80272768(f32 *a, f32 *b);

f32 func_8022E578(void *arg0, f32 *arg1) {
    f32 var_f20;
    void *var_s0;

    var_s0 = *(void **)((char *)arg0 + 0x20);
    var_f20 = 0.0f;
    if (var_s0 != 0) {
        do {
            if (*(s32 *)((char *)var_s0 + 0x5DC) != 0) {
                var_f20 += func_80272768(arg1, (f32 *)((char *)var_s0 + 8));
            }
            var_s0 = *(void **)((char *)var_s0 + 0x16E0);
        } while (var_s0 != 0);
    }
    return var_f20;
}
