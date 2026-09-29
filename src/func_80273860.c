#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273860_S1 func_80273860_S1;
struct func_80273860_S1 {
    char pad0[0x10];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
    char pad18[0x20 - 0x18 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
};

void func_80273860(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273860_S1 *)(m))->unk10;
    ((func_80273860_S1 *)(m))->unk10 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk20);
    ((func_80273860_S1 *)(m))->unk20 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk20);

    a = ((func_80273860_S1 *)(m))->unk14;
    ((func_80273860_S1 *)(m))->unk14 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk24);
    ((func_80273860_S1 *)(m))->unk24 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk24);

    a = ((func_80273860_S1 *)(m))->unk18;
    ((func_80273860_S1 *)(m))->unk18 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk28);
    ((func_80273860_S1 *)(m))->unk28 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk28);
}
