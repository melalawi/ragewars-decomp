#include "span_1000/code_80208410.h"
#include "types.h"




s32 func_80209A94_de(void *arg0) {
    s32 val;

    val = ((func_80209A94_S1 *)(arg0))->unk21C;
    if (val >= 8) {
        goto ge_8;
    }
    if (val >= 3) {
        goto ret1;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_8:
    if (val != 0xD) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
