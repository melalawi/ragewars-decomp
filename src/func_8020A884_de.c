#include "span_1000/code_80209AE8.h"
#include "types.h"











void func_8020A884_de(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;
    s32 timer = ((func_8020A884_S1 *)(o))->unk2EC;

    if (timer == 0) {
        if (((func_8020A884_S1 *)(o))->unk23C == 0 && ((func_8020A884_S1 *)(o))->unk240 <= 0) {
            f32 k = D_800C1D2C_de;
            f32 threshold = func_80274564_de(D_800C1D28_de) + k;

            if ((f32) ((func_8020A884_S2 *)(i))->unk18 < threshold) {
                ((func_8020A884_S1 *)(o))->unk240 = 1;
                func_8020A95C_de(arg0, arg1);
            }
            ((func_8020A884_S1 *)(o))->unk2EC = ((func_8020A884_S2 *)(i))->unk10;
            ((func_8020A884_S1 *)(o))->unk2EC =
                (s32) ((f32) ((func_8020A884_S1 *)(o))->unk2EC +
                       func_80274564_de(k) * (f32) ((func_8020A884_S2 *)(i))->unk14);
        }
    } else {
        ((func_8020A884_S1 *)(o))->unk2EC = timer - 1;
    }
}
