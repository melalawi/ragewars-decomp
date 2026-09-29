#include "basetypes.h"

extern s32 D_8014D0B0;

typedef struct func_8029BA34_S1 func_8029BA34_S1;
struct func_8029BA34_S1 {
    char pad0[0xC04];
    char unkC04;
};

void func_8029BA34(void) {
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
            ptr = D_8014D0B0 + idx;
            ((func_8029BA34_S1 *)(ptr))->unkC04 = 0;
        } while (var_a0 < 4);
        var_a1 += 1;
    } while (var_a1 < 0x10);
}
