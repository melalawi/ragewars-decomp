#include "span_1000/code_802A6488.h"
#include "types.h"

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
