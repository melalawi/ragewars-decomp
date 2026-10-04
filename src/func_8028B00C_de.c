#include "span_1000/code_80286050.h"



/** Return an indexed record from the table at object offset 0xA0. */
void *func_8028B00C_de(void *object, int index) {
    char *base = ((func_8028AFE8_S1 *)(object))->unkA0;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}
