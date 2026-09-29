#include "basetypes.h"

extern s32 func_8029EB58(s32 arg0);
extern unsigned int func_8029AB4C(void);
extern void func_802A2D7C(void *arg0);
extern s32 func_8025DF54(s32);

typedef struct func_802A2EC0_S1 func_802A2EC0_S1;
struct func_802A2EC0_S1 {
    char pad0[0x48];
    s32 unk48;
    char pad48[0x5C - 0x48 - sizeof(s32)];
    s32 unk5C;
};

s32 func_802A2EC0(void *arg0, s32 unused1, s32 unused2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_8029EB58(arg4);
    if (temp_s0 < (s32)func_8029AB4C()) {
        ((func_802A2EC0_S1 *)(arg0))->unk5C = 2;
        ((func_802A2EC0_S1 *)(arg0))->unk48 = 0;
    }
    if (arg3 != 1) {
        return 0;
    }
    ((func_802A2EC0_S1 *)(arg0))->unk5C = arg3;
    func_802A2D7C(arg0);
    func_8025DF54(0xE81);
    return 0;
}
