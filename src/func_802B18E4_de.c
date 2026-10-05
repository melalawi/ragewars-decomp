#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B0388.h"
#include "types.h"

extern void func_802B1A40_de(void *arg0, s32 arg1);
extern void func_802B1AC0_de(void *arg0, void *arg1, s32 arg2);








void func_802B18E4_de(void *arg0, void *arg1) {
    s32 i;
    void *p;
    void *found;

    p = arg1;
    do {
        found = ((func_802B69B4_S1 *)(p))->unkC;
        p = &((func_802B69B4_S1 *)(p))->unk4;
    } while (found == 0);
    i = 0;
    if (((func_802B69B4_S2 *)(arg0))->unk34 != 0) {
        do {
            func_802B1A40_de(arg0, i);
            func_802B1AC0_de(arg0, found, i);
            i += 1;
        } while (i < ((func_802B69B4_S2 *)(arg0))->unk34);
    }
    if (((func_80255BEC_S1 *)(arg1))->unk8 != 0) {
        func_802B1A40_de(arg0, i);
        func_802B1AC0_de(arg0, ((func_80255BEC_S1 *)(arg1))->unk8, 9);
    }
}
