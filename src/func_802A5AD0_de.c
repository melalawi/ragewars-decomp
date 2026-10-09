#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802A6AC0.h"
#include "types.h"

extern func_802A6AC0_S2 D_800D15E0;
extern func_802077F4_S2 D_800D15F0;

void func_802A5AD0_de(void *arg0) {
    if (((func_802A6A54_S1 *)(arg0))->unk24 != 0.0f) {
        D_800D15E0.unk4 += ((func_802A6A54_S1 *)(arg0))->unk34;
        D_800D15E0.unk8 += ((func_802A6A54_S1 *)(arg0))->unk38;
        D_800D15E0.unkC += ((func_802A6A54_S1 *)(arg0))->unk3C;
        D_800D15E0.unk10 += ((func_802A6A54_S1 *)(arg0))->unk24;
    }
    D_800D15F0.unk4 += ((func_802A6A54_S1 *)(arg0))->unk14;
}

extern f32 D_800C5EA0_de[2];

void func_802A5B4C_de(f32 *arg0) {
    f32 new_var;
    f32 new_var2;

    new_var2 = (new_var2 = *arg0);
    if (*arg0 < 0.0f) {
        *arg0 = 0.0f;
    } else {
        new_var = D_800C5EA0_de[1];
        if (new_var < new_var2) {
            *arg0 = new_var;
        }
    }
}

extern void *func_8027963C_de(s32 arg0);




void func_802A5B84_de(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    void *node;

    node = func_8027963C_de(arg0 + 0x7588);
    if (node != 0) {
        ((func_802A6B74_S1 *)(node))->unk18 = arg1;
        ((func_802A6B74_S1 *)(node))->unk14 = arg2;
        ((func_802A6B74_S1 *)(node))->unk8 = 0;
        ((func_802A6B74_S1 *)(node))->unkC = arg4;
        ((func_802A6B74_S1 *)(node))->unk10 = arg3;
    }
}
