#include "span_1000/code_8028DF6C.h"



/** Return an indexed record from the table at object offset 0xAC. */
void *func_8028E770_de(void *object, int index) {
    char *base = ((func_8028E74C_S1 *)(object))->unkAC;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}
