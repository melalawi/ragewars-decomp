#include "span_1000/code_802555C8.h"
#include "span_1000/types.h"
#include "types.h"




void func_80255ED8_de(void *arg0, s32 arg1) {
    s32 next;
    s32 prev;

    next = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unk8);
    if (next != 0) {
        s32 off = ((func_80239CDC_S1 *)(arg0))->unkC;
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unkC);
    if (prev != 0) {
        s32 off = ((func_80239CDC_S1 *)(arg0))->unk8;
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)arg0 == arg1) {
        *(s32 *)arg0 = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unkC);
    }
    if (((func_80239CDC_S1 *)(arg0))->unk4 == arg1) {
        ((func_80239CDC_S1 *)(arg0))->unk4 = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(arg0))->unk8);
    }
    ((func_80239CDC_S1 *)(arg0))->unk10 = ((func_80239CDC_S1 *)(arg0))->unk10 - 1;
}
