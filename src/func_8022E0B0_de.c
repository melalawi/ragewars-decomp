#include "span_1000/code_8022D7A0.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"


extern void func_802738C0_de(void *arg0, f32 arg1);










void func_8022E0B0_de(void *arg0, void *arg1) {
    void *range;
    void *actor;
    s32 value;
    f32 amount;

    range = ((func_8022E0A0_S1 *)(arg1))->unk1C;
    value = ((func_8022E0A0_S1 *)(arg1))->unk4;
    if (value < ((func_8022E0A0_S2 *)(range))->unk18) {
        return;
    }
    if (((func_8022E0A0_S2 *)(range))->unk19 < value) {
        return;
    }

    actor = ((func_8020A028_S3 *)(((func_8022E0A0_S1 *)(arg1))->unk8))->unk1D8;
    amount = -((func_8022E0A0_S4 *)(actor))->unk724;
    if (((func_8022E0A0_S4 *)(actor))->unk650 == 0xF) {
        amount += D_800C2E0C_de;
    }
    func_802738C0_de(arg0, amount / (f32)((func_8022E0A0_S2 *)(range))->unk1A);
}
