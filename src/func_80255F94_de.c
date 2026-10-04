#include "span_1000/code_802555C8.h"




/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F94_de(void *arg0) {
    char *cursor = ((func_80255F34_S1 *)(arg0))->unk4.v0;
    int stride = ((func_80255F34_S1 *)(arg0))->unk8;
    int value = *(int *)(cursor + stride);
    int count = ((func_80255F34_S1 *)(arg0))->unk10 - 1;
    ((func_80255F34_S1 *)(arg0))->unk10 = count;
    ((func_80255F34_S1 *)(arg0))->unk4.v1 = value;
}
