#include "span_1000/code_8028CCB8.h"



/** Return an indexed record from the table at object offset 0xA4. */
void *func_8028CE78_de(void *object, int index) {
    char *base = ((func_8028CE54_S1 *)(object))->unkA4;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}
