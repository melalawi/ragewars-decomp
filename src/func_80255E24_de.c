#include "common/types.h"
#include "span_1000/code_802555C8.h"
#include "types.h"




void func_80255E24_de(void *arg0, s32 arg1, s32 arg2) {
    char *o = (char *) arg0;
    s32 next = *(s32 *) (arg1 + ((func_80255D10_S1 *)(o))->unkC);
    s32 v0;

    if (next != 0) {
        s32 offC;
        *(s32 *) (next + ((func_80255D10_S1 *)(o))->unk8) = arg2;
        offC = ((func_80255D10_S1 *)(o))->unkC;
        *(s32 *) (arg2 + offC) = *(s32 *) (arg1 + offC);
        *(s32 *) (arg1 + ((func_80255D10_S1 *)(o))->unkC) = arg2;
        *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unk8) = arg1;
        v0 = ((func_80255D10_S1 *)(o))->unk10 + 1;
    } else {
        s32 head = ((func_80255D10_S1 *)(o))->unk4;
        if (head != 0) {
            *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unk8) = head;
            *(s32 *) (((func_80255D10_S1 *)(o))->unk4 + ((func_80255D10_S1 *)(o))->unkC) = arg2;
        } else {
            *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unk8) = 0;
            ((func_80255D10_S1 *)(o))->unk0 = arg2;
        }
        *(s32 *) (arg2 + ((func_80255D10_S1 *)(o))->unkC) = 0;
        ((func_80255D10_S1 *)(o))->unk4 = arg2;
        v0 = ((func_80255D10_S1 *)(o))->unk10 + 1;
    }
    ((func_80255D10_S1 *)(o))->unk10 = v0;
}
