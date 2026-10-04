#include "span_1000/code_8029AC80.h"
#include "types.h"

extern s32 D_80146E30;




void func_8029AA34_de(void) {
    s32 idx;
    s32 var_a0;
    s32 var_a1;
    void *ptr;

    var_a1 = 0;
    do {
        var_a0 = 0;
        do {
            idx = var_a0 + var_a1 * 4;
            var_a0 += 1;
            ptr = D_80146E30 + idx;
            ((func_8029BA34_S1 *)(ptr))->unkC04 = 0;
        } while (var_a0 < 4);
        var_a1 += 1;
    } while (var_a1 < 0x10);
}
