#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B2EF8.h"
#include "types.h"

void func_802B2F00_de(void *arg0, s16 arg1) {
    ((func_8023EBEC_S1 *)(arg0))->unk3C = (s32) arg1;
}

extern s32 func_802B00D4_de(void *, s16 *, s32);




void func_802B2F10_de(void *arg0, s16 arg1) {
    Params_func_802B2F10_de p;
    s32 acc;

    acc = ((func_802B7EB0_S1 *)(arg0))->unk40;
    p.f0 = 3;
    acc += ((func_802B7EB0_S1 *)(arg0))->unk3C * 0x30;
    p.f8 = arg1;
    p.f4 = acc;
    func_802B00D4_de(&((func_802B7EB0_S1 *)(arg0))->unk14, (s16 *)&p, 0);
}
