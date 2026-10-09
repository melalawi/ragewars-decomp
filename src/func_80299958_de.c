#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80297CD0.h"
#include "types.h"


extern s32 D_8014D080;

s32 func_80299958_de(void) {
    s32 result;
    s32 field4;

    result = D_80146E18;
    if (result < 0) {
        field4 = ((struct func_8024B8DC_S2 *) ((s8 *) D_8014D080))->unk4;
        if (field4 < 0) {
            return -1;
        }
        result = ((struct func_80203E78_S1 *) ((s8 *) ((field4 * 0x1C) + ((struct func_8024B8DC_S2 *) ((s8 *) D_8014D080))->unkC)))->unk4;
    }
    return result;
}
