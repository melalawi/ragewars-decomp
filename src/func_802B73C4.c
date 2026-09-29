#include "basetypes.h"

extern s32 func_802B742C(void *arg0);

typedef struct func_802B73C4_S1 func_802B73C4_S1;
struct func_802B73C4_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    u32 unk8;
    char pad8[0x10 - 0x8 - sizeof(u32)];
    s32 unk10;
};

s32 func_802B73C4(void *arg0, s32 *arg1) {
    u32 field8;

    field8 = ((func_802B73C4_S1 *)(arg0))->unk8;
    if (!(field8 < (u32)(((func_802B73C4_S1 *)(arg0))->unk0 + ((func_802B73C4_S1 *)(arg0))->unk10))) {
        return 0;
    }
    *arg1 = func_802B742C(arg0);
    ((func_802B73C4_S1 *)(arg0))->unk8 = field8;
    return 1;
}
