#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8020AF9C.h"



/** Look up a byte in a strided grid addressed via a base-record pointer. */
unsigned char func_8020D1CC_de(void *arg0, int arg1, int arg2) {
    int stride = ((ObjectLinks14 *)(arg0))->unk_4;
    char *base = ((ObjectLinks14 *)(arg0))->unk_10;
    int span = *(int *)base;
    int index = (arg1 * stride + arg2) * span;
    return ((struct func_80242278_S2 *) (index + ((int) base)))->unk8;
}
