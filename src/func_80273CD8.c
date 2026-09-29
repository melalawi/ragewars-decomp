#include "basetypes.h"

extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

typedef struct func_80273CD8_S1 func_80273CD8_S1;
struct func_80273CD8_S1 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x10 - 0x4 - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    f32 unk14;
    char pad14[0x20 - 0x14 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x30 - 0x24 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
};

void func_80273CD8(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802BC200(arg1);
    cos_v = func_802BB630(arg1);
    neg_sin = -sin_v;

    a = ((func_80273CD8_S1 *)(m))->unk0;
    ((func_80273CD8_S1 *)(m))->unk0 = (a * cos_v) + (((func_80273CD8_S1 *)(m))->unk4 * neg_sin);
    ((func_80273CD8_S1 *)(m))->unk4 = (a * sin_v) + (((func_80273CD8_S1 *)(m))->unk4 * cos_v);

    a = ((func_80273CD8_S1 *)(m))->unk10;
    ((func_80273CD8_S1 *)(m))->unk10 = (a * cos_v) + (((func_80273CD8_S1 *)(m))->unk14 * neg_sin);
    ((func_80273CD8_S1 *)(m))->unk14 = (a * sin_v) + (((func_80273CD8_S1 *)(m))->unk14 * cos_v);

    a = ((func_80273CD8_S1 *)(m))->unk20;
    ((func_80273CD8_S1 *)(m))->unk20 = (a * cos_v) + (((func_80273CD8_S1 *)(m))->unk24 * neg_sin);
    ((func_80273CD8_S1 *)(m))->unk24 = (a * sin_v) + (((func_80273CD8_S1 *)(m))->unk24 * cos_v);

    a = ((func_80273CD8_S1 *)(m))->unk30;
    ((func_80273CD8_S1 *)(m))->unk30 = (a * cos_v) + (((func_80273CD8_S1 *)(m))->unk34 * neg_sin);
    ((func_80273CD8_S1 *)(m))->unk34 = (a * sin_v) + (((func_80273CD8_S1 *)(m))->unk34 * cos_v);
}
