#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"
#include "types.h"




s32 func_8020C9CC_de(void *arg0) {
    u8 temp_v1;
    s32 val;

    temp_v1 = ((func_8020C9CC_S1 *)(arg0))->unk4;
    val = temp_v1;
    if (val == 4) {
        goto ret1;
    }
    if (val >= 5) {
        goto ge_5;
    }
    if (val == 1) {
        goto ret1;
    }
    goto ret0;
ge_5:
    if (val != 7) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
