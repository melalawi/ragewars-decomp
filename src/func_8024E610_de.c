#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8024E130.h"



/** Return offset 0x34 only when the type byte at offset 0 is 1. */
int func_8024E610_de(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_8020F2A8_S3 *)(arg0))->unk34;
    }
    return 0;
}
