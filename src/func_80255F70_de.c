#include "span_1000/code_802555C8.h"
#include "span_1000/types.h"



/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F70_de(void *arg0) {
    char *cursor = *(char **)arg0;
    int stride = ((func_80203B60_S2 *)(arg0))->unkC;
    int value = *(int *)(cursor + stride);
    int count = ((func_80203B60_S2 *)(arg0))->unk10 - 1;
    ((func_80203B60_S2 *)(arg0))->unk10 = count;
    *(int *)arg0 = value;
}
