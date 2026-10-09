#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80297CD0.h"
#include "types.h"

extern s32 D_8014D080;

s32 func_802999A0_de(s32 arg0) {
    s32 idx;
    s32 countMinus1;

    countMinus1 = (((struct func_8024B8DC_S2 *) ((s8 *) D_8014D080))->unk4) - 1;
    idx = countMinus1 - arg0;
    if (idx >= 0) {
        return (((struct func_80203E78_S1 *) ((s8 *) ((idx * 0x1C) + ((struct func_8024B8DC_S2 *) ((s8 *) D_8014D080))->unkC)))->unk4);
    }
    return -1;
}
