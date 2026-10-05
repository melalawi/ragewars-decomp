#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80203F04.h"
#include "types.h"






s32 func_80204620_de(void *arg0) {
    s32 val;

    val = ((func_80204620_S2 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk28;
    if (val != 0) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x2000;
    } else {
        s32 flags = ((func_80204468_S2 *)(arg0))->unk100 & ~0x2000;
        flags &= ~0x100;
        ((func_80204468_S2 *)(arg0))->unk100 = flags;
    }
    return val;
}
