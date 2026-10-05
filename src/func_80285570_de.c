#include "span_1000/code_8028469C.h"
#include "types.h"

extern void func_80295E84_de(s32 *arg0, s32 arg1);






void func_80285570_de(void *arg0, void *arg1) {
    s16 value;
    s32 reference;

    *(s32 *)arg0 = ((func_80285540_S1 *)(arg1))->unk4;
    ((func_80285540_S2 *)(arg0))->unk10 = ((func_80285540_S1 *)(arg1))->unkC;
    ((func_80285540_S2 *)(arg0))->unk11 = ((func_80285540_S1 *)(arg1))->unkD;
    ((func_80285540_S2 *)(arg0))->unk12 = ((func_80285540_S1 *)(arg1))->unkE;
    ((func_80285540_S2 *)(arg0))->unk13 = ((func_80285540_S1 *)(arg1))->unkF;
    ((func_80285540_S2 *)(arg0))->unk14 = ((func_80285540_S1 *)(arg1))->unk10;
    ((func_80285540_S2 *)(arg0))->unk15 = ((func_80285540_S1 *)(arg1))->unk11;
    ((func_80285540_S2 *)(arg0))->unk16 = ((func_80285540_S1 *)(arg1))->unk12;
    ((func_80285540_S2 *)(arg0))->unk17 = ((func_80285540_S1 *)(arg1))->unk13;
    ((func_80285540_S2 *)(arg0))->unk18 = ((func_80285540_S1 *)(arg1))->unk14;
    ((func_80285540_S2 *)(arg0))->unk1A = ((func_80285540_S1 *)(arg1))->unk16;
    ((func_80285540_S2 *)(arg0))->unk6 = ((func_80285540_S1 *)(arg1))->unkA;
    if (((func_80285540_S1 *)(arg1))->unk4 & 0x40) {
        value = (((func_80285540_S1 *)(arg1))->unk8 * 2) | 1;
    } else {
        value = ((func_80285540_S1 *)(arg1))->unk8 * 2;
    }
    ((func_80285540_S2 *)(arg0))->unk4 = value;
    reference = *(s32 *)arg1;
    if (reference == -1) {
        ((func_80285540_S2 *)(arg0))->unk8 = 0;
        return;
    }
    func_80295E84_de(&((func_80285540_S2 *)(arg0))->unk8, reference);
}
