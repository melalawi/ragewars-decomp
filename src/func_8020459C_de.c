#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"






s32 func_8020459C_de(void *arg0) {
    s32 val;

    val = ((func_8020459C_S2 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk20;
    if (val != 0) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x2000;
    } else {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & ~0x2000;
    }
    return val;
}
