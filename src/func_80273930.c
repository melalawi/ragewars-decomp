#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273930_S1 func_80273930_S1;
struct func_80273930_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
    char pad8[0x14 - 0x8 - sizeof(f32)];
    f32 unk14;
    char pad14[0x18 - 0x14 - sizeof(f32)];
    f32 unk18;
    char pad18[0x24 - 0x18 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x34 - 0x28 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
};

void func_80273930(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273930_S1 *)(m))->unk4;
    ((func_80273930_S1 *)(m))->unk4 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk8 * neg_sin);
    ((func_80273930_S1 *)(m))->unk8 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk8 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk14;
    ((func_80273930_S1 *)(m))->unk14 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk18 * neg_sin);
    ((func_80273930_S1 *)(m))->unk18 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk18 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk24;
    ((func_80273930_S1 *)(m))->unk24 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk28 * neg_sin);
    ((func_80273930_S1 *)(m))->unk28 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk28 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk34;
    ((func_80273930_S1 *)(m))->unk34 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk38 * neg_sin);
    ((func_80273930_S1 *)(m))->unk38 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk38 * cos_v);
}
