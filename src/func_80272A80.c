#include "basetypes.h"

typedef struct Vector3f {
    f32 x;
    f32 y;
    f32 z;
} Vector3f;

extern f32 D_800C99B8[];

typedef struct func_80272A80_S1 func_80272A80_S1;
typedef struct func_80272A80_S2 func_80272A80_S2;
struct func_80272A80_S1 {
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
struct func_80272A80_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_80272A80(void *arg0, void *arg1, Vector3f *arg2) {
    char *m = (char *)arg0;
    char *v = (char *)arg1;
    f32 w;
    f32 scale;

    arg2->x = (((func_80272A80_S1 *)(m))->unk0 * ((func_80272A80_S2 *)(v))->unk0)
                       + (((func_80272A80_S1 *)(m))->unk10 * ((func_80272A80_S2 *)(v))->unk4)
                       + (((func_80272A80_S1 *)(m))->unk20 * ((func_80272A80_S2 *)(v))->unk8)
                       + ((func_80272A80_S1 *)(m))->unk30;
    arg2->y = (((func_80272A80_S1 *)(m))->unk4 * ((func_80272A80_S2 *)(v))->unk0)
                       + (((func_80272A80_S1 *)(m))->unk14 * ((func_80272A80_S2 *)(v))->unk4)
                       + (((func_80272A80_S1 *)(m))->unk24 * ((func_80272A80_S2 *)(v))->unk8)
                       + ((func_80272A80_S1 *)(m))->unk34;
    arg2->z = (((func_80272A80_S1 *)(m))->unk8 * ((func_80272A80_S2 *)(v))->unk0)
                       + (((func_80272A80_S1 *)(m))->unk18 * ((func_80272A80_S2 *)(v))->unk4)
                       + (((func_80272A80_S1 *)(m))->unk28 * ((func_80272A80_S2 *)(v))->unk8)
                       + ((func_80272A80_S1 *)(m))->unk38;
    w = (((func_80272A80_S1 *)(m))->unkC * ((func_80272A80_S2 *)(v))->unk0)
        + (((func_80272A80_S1 *)(m))->unk1C * ((func_80272A80_S2 *)(v))->unk4)
        + (((func_80272A80_S1 *)(m))->unk2C * ((func_80272A80_S2 *)(v))->unk8)
        + ((func_80272A80_S1 *)(m))->unk3C;
    if (w != 0.0f) {
        scale = D_800C99B8[1] / w;
        arg2->x = arg2->x * scale;
        arg2->y = arg2->y * scale;
        arg2->z = arg2->z * scale;
    }
}
