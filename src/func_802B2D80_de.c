#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B2614.h"
#include "types.h"

extern s32 func_802B00D4_de(void *, s16 *, s32);




void func_802B2D80_de(void *arg0) {
    s32 base = ((func_802B7EB0_S1 *)(arg0))->unk40;

    if (((struct func_8020D280_S1 *) (base + (((func_802B7EB0_S1 *) arg0)->unk3C * 0x30)))->unk28 == 0) {
        Params_func_802B2F10_de p;
        p.f0 = 0;
        p.f4 = base + ((func_802B7EB0_S1 *)(arg0))->unk3C * 0x30;
        func_802B00D4_de(&((func_802B7EB0_S1 *)(arg0))->unk14, (s16 *)&p, 0);
    }
}

extern s32 func_802B00D4_de(void *, s16 *, s32);




void func_802B2DE0_de(void *arg0, s8 arg1) {
    Params_func_802B2DE0_de p;
    s32 acc;

    acc = ((func_802B7EB0_S1 *)(arg0))->unk40;
    p.f0 = 8;
    acc += ((func_802B7EB0_S1 *)(arg0))->unk3C * 0x30;
    p.f8 = arg1;
    p.f4 = acc;
    func_802B00D4_de(&((func_802B7EB0_S1 *)(arg0))->unk14, (s16 *)&p, 0);
}
