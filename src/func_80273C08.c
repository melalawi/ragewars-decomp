#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273C08_S1 func_80273C08_S1;
struct func_80273C08_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
};

void func_80273C08(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273C08_S1 *)(m))->unk0;
    ((func_80273C08_S1 *)(m))->unk0 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk10);
    ((func_80273C08_S1 *)(m))->unk10 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk10);

    a = ((func_80273C08_S1 *)(m))->unk4;
    ((func_80273C08_S1 *)(m))->unk4 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk14);
    ((func_80273C08_S1 *)(m))->unk14 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk14);

    a = ((func_80273C08_S1 *)(m))->unk8;
    ((func_80273C08_S1 *)(m))->unk8 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk18);
    ((func_80273C08_S1 *)(m))->unk18 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk18);
}
