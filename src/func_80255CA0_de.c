#include "common/types_1dc8418c21db.h"
#include "span_1000/code_80255BEC.h"
#include "types.h"

/** Initialize a five-word record. */
void func_80255CA0_de(IntrusiveList *list, s32 prevOffset, s32 nextOffset) {
    list->prevOffset = prevOffset;
    list->nextOffset = nextOffset;
    list->tail = 0;
    list->head = 0;
    list->count = 0;
}

s32 func_80255CB8_de(void *arg0, s32 arg1) {
    s32 temp_v1;
    s32 temp_v0;

    temp_v1 = *(s32 *)arg0;
    if (temp_v1 != 0) {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unkC) = temp_v1;
        *(s32 *)(*(s32 *)arg0 + ((func_80239CDC_S1 *)(arg0))->unk8) = arg1;
    } else {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unkC) = 0;
        ((func_80239CDC_S1 *)(arg0))->unk4 = arg1;
    }
    *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unk8) = 0;
    *(s32 *)arg0 = arg1;
    temp_v0 = ((func_80239CDC_S1 *)(arg0))->unk10 + 1;
    ((func_80239CDC_S1 *)(arg0))->unk10 = temp_v0;
    return temp_v0;
}
