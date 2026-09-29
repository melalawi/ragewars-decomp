#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);
extern f32 D_800C99E8;

typedef struct func_802736B8_S1 func_802736B8_S1;
struct func_802736B8_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0xC - 0x8 - sizeof(f32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
    char pad18[0x1C - 0x18 - sizeof(f32)];
    f32 unk1C;
    char pad1C[0x20 - 0x1C - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x2C - 0x28 - sizeof(f32)];
    f32 unk2C;
    char pad2C[0x30 - 0x2C - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
    char pad38[0x3C - 0x38 - sizeof(f32)];
    f32 unk3C;
};

void func_802736B8(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 zero;
    f32 identity;

    sin_v = func_802BC200(arg1);
    zero = 0;
    identity = D_800C99E8;
    ((func_802736B8_S1 *)(m))->unk24 = -sin_v;
    ((func_802736B8_S1 *)(m))->unk18 = sin_v;
    ((func_802736B8_S1 *)(m))->unk4 = zero;
    ((func_802736B8_S1 *)(m))->unk10 = zero;
    ((func_802736B8_S1 *)(m))->unk8 = zero;
    ((func_802736B8_S1 *)(m))->unk20 = zero;
    ((func_802736B8_S1 *)(m))->unk38 = zero;
    ((func_802736B8_S1 *)(m))->unk34 = zero;
    ((func_802736B8_S1 *)(m))->unk30 = zero;
    ((func_802736B8_S1 *)(m))->unk2C = zero;
    ((func_802736B8_S1 *)(m))->unk1C = zero;
    ((func_802736B8_S1 *)(m))->unkC = zero;
    ((func_802736B8_S1 *)(m))->unk3C = identity;
    ((func_802736B8_S1 *)(m))->unk0 = identity;
    cos_v = func_802BB630(arg1);
    ((func_802736B8_S1 *)(m))->unk28 = cos_v;
    ((func_802736B8_S1 *)(m))->unk14 = cos_v;
}
