#include "span_1000/code_802BC630.h"
#include "span_1000/types.h"
#include "types.h"

extern char D_801471E0;




void func_802B784C_de(void) {
    s32 var_v0;
    u8 *var_v1;
    s32 val;

    var_v1 = &D_801471E0;
    ((func_8023EBEC_S1 *)(var_v1))->unk3C = 1;
    val = 0xFD;
    var_v0 = 3;
    do {
        *var_v1 = val;
        var_v0 -= 1;
        var_v1 += 1;
    } while (var_v0 >= 0);
    *var_v1 = 0xFE;
}
