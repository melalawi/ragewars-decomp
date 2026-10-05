#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024E130.h"



/** Return the low three mode bits when the record type is one. */
int func_8024E778_de(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_802428C0_S2 *)(arg0))->unk38 & 7;
    }
    return 0;
}
