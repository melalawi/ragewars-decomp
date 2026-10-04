#include "span_1000/code_802555C8.h"
#include "span_1000/types.h"
#include "types.h"




void func_802560A4_de(void *arg0, s32 arg1) {
    char *o = (char *)arg0;
    s32 next;
    s32 prev;
    s32 tail;

    next = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unk8);
    if (next != 0) {
        s32 off = ((func_80239CDC_S1 *)(o))->unkC;
        *(s32 *)(next + off) = *(s32 *)(arg1 + off);
    }
    prev = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unkC);
    if (prev != 0) {
        s32 off = ((func_80239CDC_S1 *)(o))->unk8;
        *(s32 *)(prev + off) = *(s32 *)(arg1 + off);
    }
    if (*(s32 *)o == arg1) {
        *(s32 *)o = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unkC);
    }
    if (((func_80239CDC_S1 *)(o))->unk4 == arg1) {
        ((func_80239CDC_S1 *)(o))->unk4 = *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unk8);
    }
    ((func_80239CDC_S1 *)(o))->unk10 = ((func_80239CDC_S1 *)(o))->unk10 - 1;

    tail = ((func_80239CDC_S1 *)(o))->unk4;
    if (tail != 0) {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unk8) = tail;
        *(s32 *)(((func_80239CDC_S1 *)(o))->unk4 + ((func_80239CDC_S1 *)(o))->unkC) = arg1;
    } else {
        *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unk8) = 0;
        *(s32 *)o = arg1;
    }
    *(s32 *)(arg1 + ((func_80239CDC_S1 *)(o))->unkC) = 0;
    ((func_80239CDC_S1 *)(o))->unk4 = arg1;
    ((func_80239CDC_S1 *)(o))->unk10 = ((func_80239CDC_S1 *)(o))->unk10 + 1;
}
