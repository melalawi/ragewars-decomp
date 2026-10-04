#include "common/types.h"
#include "span_1000/code_802555C8.h"
#include "types.h"




void func_80255D70_de(void *arg0, s32 arg1, s32 arg2) {
    char *o = (char *) arg0;
    s32 next = *(s32 *) (arg1 + ((func_80255D10_S1 *)(o))->unk8);
    s32 v0;

    if (next != 0) {
        s32 off8;
        *(s32 *) (next + ((func_80255D10_S1 *)(o))->unkC) = arg2;
        off8 = ((func_80255D10_S1 *)(o))->unk8;
        *(s32 *) (arg2 + off8) = *(s32 *) (arg1 + off8);
        *(s32 *) (arg1 + ((func_80255D10_S1 *)(o))->unk8) = arg2;
        *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unkC) = arg1;
        v0 = ((func_80255D10_S1 *)(o))->unk10 + 1;
    } else {
        s32 tail = ((func_80255D10_S1 *)(o))->unk0;
        if (tail != 0) {
            *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unkC) = tail;
            *(s32 *) (((func_80255D10_S1 *)(o))->unk0 + ((func_80255D10_S1 *)(o))->unk8) = arg2;
        } else {
            *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unkC) = 0;
            ((func_80255D10_S1 *)(o))->unk4 = arg2;
        }
        *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unk8) = 0;
        ((func_80255D10_S1 *)(o))->unk0 = arg2;
        v0 = ((func_80255D10_S1 *)(o))->unk10 + 1;
    }
    ((func_80255D10_S1 *)(o))->unk10 = v0;
}
