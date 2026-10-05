#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8020AF9C.h"



/** Return an indexed record from the table at object offset 0x8. */
void *func_8020C9B0_de(void *object, int index) {
    char *base = ((func_8020C9B0_S1 *)(object))->unk8;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}
