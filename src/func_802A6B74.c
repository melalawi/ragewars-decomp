#include "basetypes.h"

extern void *func_802796AC(s32 arg0);

typedef struct func_802A6B74_S1 func_802A6B74_S1;
struct func_802A6B74_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
};

void func_802A6B74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    void *node;

    node = func_802796AC(arg0 + 0x7588);
    if (node != 0) {
        ((func_802A6B74_S1 *)(node))->unk18 = arg1;
        ((func_802A6B74_S1 *)(node))->unk14 = arg2;
        ((func_802A6B74_S1 *)(node))->unk8 = 0;
        ((func_802A6B74_S1 *)(node))->unkC = arg4;
        ((func_802A6B74_S1 *)(node))->unk10 = arg3;
    }
}
