#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273B08_S1 func_80273B08_S1;
struct func_80273B08_S1 {
    f32 unk0;
    char pad0[0x8 - 0x0 - sizeof(f32)];
    f32 unk8;
    char pad8[0x10 - 0x8 - sizeof(f32)];
    f32 unk10;
    char pad10[0x18 - 0x10 - sizeof(f32)];
    f32 unk18;
    char pad18[0x20 - 0x18 - sizeof(f32)];
    f32 unk20;
    char pad20[0x28 - 0x20 - sizeof(f32)];
    f32 unk28;
    char pad28[0x30 - 0x28 - sizeof(f32)];
    f32 unk30;
    char pad30[0x38 - 0x30 - sizeof(f32)];
    f32 unk38;
};

void func_80273B08(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273B08_S1 *)(m))->unk0;
    ((func_80273B08_S1 *)(m))->unk0 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk8 * sin_v);
    ((func_80273B08_S1 *)(m))->unk8 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk8 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk10;
    ((func_80273B08_S1 *)(m))->unk10 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk18 * sin_v);
    ((func_80273B08_S1 *)(m))->unk18 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk18 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk20;
    ((func_80273B08_S1 *)(m))->unk20 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk28 * sin_v);
    ((func_80273B08_S1 *)(m))->unk28 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk28 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk30;
    ((func_80273B08_S1 *)(m))->unk30 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk38 * sin_v);
    ((func_80273B08_S1 *)(m))->unk38 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk38 * cos_v);
}
