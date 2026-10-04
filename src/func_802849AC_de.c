#include "span_1000/code_80283D24.h"
#include "span_1000/types.h"
#include "types.h"




s32 func_802849AC_de(void *arg0) {
    u16 temp_v1;
    s32 val;

    temp_v1 = ((func_8022BC04_S2 *)(arg0))->unk4;
    val = temp_v1;
    if (val == 0xD) {
        goto ret1;
    }
    if (val >= 0xE) {
        goto ge_e;
    }
    if (val == 8) {
        goto ret1;
    }
    goto ret0;
ge_e:
    if (val != 0x12) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
