#include "basetypes.h"

extern f32 D_800C861C;
extern f32 D_800C8620;
extern f32 D_800C8628;

typedef struct func_8023912C_S1 func_8023912C_S1;
typedef struct func_8023912C_S2 func_8023912C_S2;
struct func_8023912C_S1 {
    char pad0[0x4];
    f32 unk4;
};
struct func_8023912C_S2 {
    char pad0[0x88];
    f32 unk88;
    char pad88[0x8C - 0x88 - sizeof(f32)];
    f32 unk8C;
    char pad8C[0x90 - 0x8C - sizeof(f32)];
    s32 unk90;
    char pad90[0x94 - 0x90 - sizeof(s32)];
    s32 unk94;
    char pad94[0x98 - 0x94 - sizeof(s32)];
    f32 unk98;
    char pad98[0x9C - 0x98 - sizeof(f32)];
    f32 unk9C;
};

void func_8023912C(void *arg0) {
    if (arg0 != 0) {
        f32 f0 = D_800C861C;
        f32 f1 = D_800C8620;
        f32 f2 = ((func_8023912C_S1 *)(&D_800C8620))->unk4;
        f32 f3 = D_800C8628;

        ((func_8023912C_S2 *)(arg0))->unk90 = 0;
        ((func_8023912C_S2 *)(arg0))->unk94 = 0;
        ((func_8023912C_S2 *)(arg0))->unk88 = f0;
        ((func_8023912C_S2 *)(arg0))->unk8C = f1;
        ((func_8023912C_S2 *)(arg0))->unk98 = f2;
        ((func_8023912C_S2 *)(arg0))->unk9C = f3;
    }
}

void func_80239174(void) {
}

void func_8023917C(void) {
}
