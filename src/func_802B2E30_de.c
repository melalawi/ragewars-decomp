#include "span_1000/code_802B7C50.h"
#include "types.h"



extern s32 func_802B00D4_de(void *, s16 *, s32);




s32 func_802B2E30_de(void *arg0, s8 arg1) {
    Params_func_802B2DE0_de p;
    s32 acc;

    acc = ((func_802B7EB0_S1 *)(arg0))->unk40;
    p.f0 = 2;
    p.f8 = arg1;
    acc += ((func_802B7EB0_S1 *)(arg0))->unk3C * 0x30;
    p.f4 = acc;
    func_802B00D4_de(&((func_802B7EB0_S1 *)(arg0))->unk14, (s16 *)&p, 0);
}
