#include "basetypes.h"

extern s32 D_2BA640;
extern s32 D_2BA800;
extern f32 D_800CC830;

void func_802BA4B0(void *arg0, void *a, void *b, s32 c);
s32 func_802B5410(s32 a, s32 b, s32 c, s32 d, s32 e);

typedef struct func_802B95DC_S1 func_802B95DC_S1;
struct func_802B95DC_S1 {
    char pad0[0x14];
    s32 unk14;
    char pad14[0x18 - 0x14 - sizeof(s32)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    s32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(s32)];
    s32 unk20;
    char pad20[0x24 - 0x20 - sizeof(s32)];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
    s32 unk28;
    char pad28[0x2C - 0x28 - sizeof(s32)];
    s32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(s32)];
    s32 unk30;
};

void func_802B95DC(void *arg0, s32 arg1) {
    s32 result;
    f32 k;

    func_802BA4B0(arg0, &D_2BA640, &D_2BA800, 1);
    result = func_802B5410(0, 0, arg1, 1, 0x20);
    k = D_800CC830;
    ((func_802B95DC_S1 *)(arg0))->unk14 = result;
    ((func_802B95DC_S1 *)(arg0))->unk20 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk24 = 1;
    ((func_802B95DC_S1 *)(arg0))->unk30 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk1C = 0;
    ((func_802B95DC_S1 *)(arg0))->unk28 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk2C = 0;
    ((func_802B95DC_S1 *)(arg0))->unk18 = k;
}
