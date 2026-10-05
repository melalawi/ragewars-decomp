#include "common/types_1dc8418c21db.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80297CD0.h"
#include "types.h"

extern s32 D_80146E00;

s16 func_80299A08_de(void) {
    void *ptr;

    ptr = ((struct func_80255BEC_S1 *) ((s8 *) ((((struct func_8024B8DC_S2 *) ((s8 *) D_80146E00))->unk4 * 0x1C) + ((struct func_8024B8DC_S2 *) ((s8 *) D_80146E00))->unkC)))->unk8;
    if (ptr != 0) {
        return ((struct func_8021C9B4_S3 *) ((s8 *) ptr))->unkC;
    }
    return -1;
}
