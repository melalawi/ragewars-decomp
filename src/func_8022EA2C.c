#include "basetypes.h"

extern f32 func_802752CC(void *arg0, s32 arg1, s32 arg2);
extern f32 func_80275E44(s32, s32, s32);
extern void func_8025E460(f32 arg0);

extern f32 D_800C7F14;
extern f32 D_800C7F18;
extern f32 D_800C7F1C;

typedef struct func_8022EA2C_S1 func_8022EA2C_S1;
typedef struct func_8022EA2C_S2 func_8022EA2C_S2;
struct func_8022EA2C_S1 {
    char pad0[0x2];
    u16 unk2;
};
struct func_8022EA2C_S2 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
};

void func_8022EA2C(void *arg0, void *arg1) {
    f32 first;
    f32 amount;

    if (arg0 != 0 && arg1 != 0 &&
        (((func_8022EA2C_S1 *)(arg0))->unk2 & 0x40)) {
        first = func_802752CC(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8);
        amount = (f32)(s32)(first - func_80275E44(arg0,
            ((func_8022EA2C_S2 *)(arg1))->unk0, ((func_8022EA2C_S2 *)(arg1))->unk8));
        if (amount < D_800C7F14) {
            func_8025E460(D_800C7F1C - (amount * D_800C7F18));
            return;
        }
    }
    func_8025E460(0.0f);
}
