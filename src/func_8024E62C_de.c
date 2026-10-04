#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"



/** Return the low three mode bits when the record type is one. */
int func_8024E62C_de(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_802428C0_S2 *)(arg0))->unk38 & 7;
    }
    return 0;
}
