#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273A34_S1 func_80273A34_S1;
struct func_80273A34_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0x20 - 0x8 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
};

void func_80273A34(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273A34_S1 *)(m))->unk0;
    ((func_80273A34_S1 *)(m))->unk0 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk20);
    ((func_80273A34_S1 *)(m))->unk20 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk20);

    a = ((func_80273A34_S1 *)(m))->unk4;
    ((func_80273A34_S1 *)(m))->unk4 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk24);
    ((func_80273A34_S1 *)(m))->unk24 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk24);

    a = ((func_80273A34_S1 *)(m))->unk8;
    ((func_80273A34_S1 *)(m))->unk8 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk28);
    ((func_80273A34_S1 *)(m))->unk28 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk28);
}
