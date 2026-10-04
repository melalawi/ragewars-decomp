#include "span_1000/code_80274A24.h"
#include "types.h"














/** Copy two 3-vectors, then derive an edge vector, its z-component twice, and a negated x. */
void func_80274B7C_de(void *arg0, void *arg1, void *arg2) {
    u8 *dst = (u8 *)arg0;
    u8 *a = (u8 *)arg1;
    u8 *b = (u8 *)arg2;
    s32 a0, a1, a2;
    s32 b0, b1, b2;
    f32 zdiff;

    a0 = ((func_80274BEC_S1 *)(a))->unk0.v0;
    a1 = ((func_80274BEC_S1 *)(a))->unk4.v0;
    a2 = ((func_80274BEC_S1 *)(a))->unk8.v0;
    ((func_80274BEC_S2 *)(dst))->unk0 = a0;
    ((func_80274BEC_S2 *)(dst))->unk4 = a1;
    ((func_80274BEC_S2 *)(dst))->unk8 = a2;
    b0 = ((func_80274BEC_S1 *)(b))->unk0.v0;
    b1 = ((func_80274BEC_S1 *)(b))->unk4.v0;
    b2 = ((func_80274BEC_S1 *)(b))->unk8.v0;
    ((func_80274BEC_S2 *)(dst))->unkC = b0;
    ((func_80274BEC_S2 *)(dst))->unk10 = b1;
    ((func_80274BEC_S2 *)(dst))->unk14 = b2;
    ((func_80274BEC_S2 *)(dst))->unk18 = ((func_80274BEC_S1 *)(b))->unk0.v1 - ((func_80274BEC_S1 *)(a))->unk0.v1;
    ((func_80274BEC_S2 *)(dst))->unk1C = ((func_80274BEC_S1 *)(b))->unk4.v1 - ((func_80274BEC_S1 *)(a))->unk4.v1;
    zdiff = ((func_80274BEC_S1 *)(b))->unk8.v1 - ((func_80274BEC_S1 *)(a))->unk8.v1;
    ((func_80274BEC_S2 *)(dst))->unk34 = 0;
    ((func_80274BEC_S2 *)(dst))->unk38 = -((func_80274BEC_S2 *)(dst))->unk18;
    ((func_80274BEC_S2 *)(dst))->unk20 = zdiff;
    ((func_80274BEC_S2 *)(dst))->unk30 = zdiff;
}
