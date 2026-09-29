#include "basetypes.h"

extern f32 D_800C6E18;
extern f32 D_800C6E1C;
extern f32 func_802745D4(f32 arg0);
extern void func_8020A95C(void *arg0, void *arg1);

typedef struct func_8020A884_S1 func_8020A884_S1;
typedef struct func_8020A884_S2 func_8020A884_S2;
struct func_8020A884_S1 {
    char pad0[0x23C];
    s32 unk23C;
    char pad23C[0x240 - 0x23C - sizeof(s32)];
    s32 unk240;
    char pad240[0x2EC - 0x240 - sizeof(s32)];
    s32 unk2EC;
};
struct func_8020A884_S2 {
    char pad0[0x10];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    s32 unk18;
};

void func_8020A884(void *arg0, void *arg1) {
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;
    s32 timer = ((func_8020A884_S1 *)(o))->unk2EC;

    if (timer == 0) {
        if (((func_8020A884_S1 *)(o))->unk23C == 0 && ((func_8020A884_S1 *)(o))->unk240 <= 0) {
            f32 k = D_800C6E1C;
            f32 threshold = func_802745D4(D_800C6E18) + k;

            if ((f32) ((func_8020A884_S2 *)(i))->unk18 < threshold) {
                ((func_8020A884_S1 *)(o))->unk240 = 1;
                func_8020A95C(arg0, arg1);
            }
            ((func_8020A884_S1 *)(o))->unk2EC = ((func_8020A884_S2 *)(i))->unk10;
            ((func_8020A884_S1 *)(o))->unk2EC =
                (s32) ((f32) ((func_8020A884_S1 *)(o))->unk2EC +
                       func_802745D4(k) * (f32) ((func_8020A884_S2 *)(i))->unk14);
        }
    } else {
        ((func_8020A884_S1 *)(o))->unk2EC = timer - 1;
    }
}
