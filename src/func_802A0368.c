#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern void func_8029D6A8(void *arg0, void *arg2);

typedef struct func_802A0368_S1 func_802A0368_S1;
struct func_802A0368_S1 {
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
    char pad18[0x20 - 0x18 - sizeof(f32)];
    f32 unk20;
    char pad20[0x24 - 0x20 - sizeof(f32)];
    f32 unk24;
    char pad24[0x28 - 0x24 - sizeof(f32)];
    f32 unk28;
    char pad28[0x30 - 0x28 - sizeof(f32)];
    f32 unk30;
    char pad30[0x34 - 0x30 - sizeof(f32)];
    f32 unk34;
    char pad34[0x38 - 0x34 - sizeof(f32)];
    f32 unk38;
};

void func_802A0368(void *arg0, Vec3f *arg1, void *arg2, Vec3f *arg3) {
    char *m = (char *) arg0;

    func_8029D6A8(arg0, arg2);

    ((func_802A0368_S1 *)(m))->unk0 = ((func_802A0368_S1 *)(m))->unk0 * arg1->x;
    ((func_802A0368_S1 *)(m))->unk4 = ((func_802A0368_S1 *)(m))->unk4 * arg1->x;
    ((func_802A0368_S1 *)(m))->unk8 = ((func_802A0368_S1 *)(m))->unk8 * arg1->x;
    ((func_802A0368_S1 *)(m))->unk10 = ((func_802A0368_S1 *)(m))->unk10 * arg1->y;
    ((func_802A0368_S1 *)(m))->unk14 = ((func_802A0368_S1 *)(m))->unk14 * arg1->y;
    ((func_802A0368_S1 *)(m))->unk18 = ((func_802A0368_S1 *)(m))->unk18 * arg1->y;
    ((func_802A0368_S1 *)(m))->unk20 = ((func_802A0368_S1 *)(m))->unk20 * arg1->z;
    ((func_802A0368_S1 *)(m))->unk24 = ((func_802A0368_S1 *)(m))->unk24 * arg1->z;
    ((func_802A0368_S1 *)(m))->unk28 = ((func_802A0368_S1 *)(m))->unk28 * arg1->z;
    ((func_802A0368_S1 *)(m))->unk30 = ((func_802A0368_S1 *)(m))->unk30 + arg3->x;
    ((func_802A0368_S1 *)(m))->unk34 = ((func_802A0368_S1 *)(m))->unk34 + arg3->y;
    ((func_802A0368_S1 *)(m))->unk38 = ((func_802A0368_S1 *)(m))->unk38 + arg3->z;
}
