#include "basetypes.h"

extern f32 D_800C99D0;

typedef struct func_8027317C_S1 func_8027317C_S1;
typedef struct func_8027317C_S2 func_8027317C_S2;
struct func_8027317C_S1 {
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
struct func_8027317C_S2 {
    f32 unk0;
    char pad0[0x4 - 0x0 - sizeof(f32)];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    f32 unk8;
};

void func_8027317C(void *arg0, void *arg1, f32 arg2) {
    char *o = (char *)arg0;
    f32 zero = 0.0f;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;

    temp_f0 = D_800C99D0;
    ((func_8027317C_S1 *)(o))->unk3C = temp_f0;
    ((func_8027317C_S1 *)(o))->unk28 = temp_f0;
    ((func_8027317C_S1 *)(o))->unk0 = temp_f0;
    ((func_8027317C_S1 *)(o))->unk38 = zero;
    ((func_8027317C_S1 *)(o))->unk34 = zero;
    ((func_8027317C_S1 *)(o))->unk30 = zero;
    ((func_8027317C_S1 *)(o))->unk2C = zero;
    ((func_8027317C_S1 *)(o))->unk24 = zero;
    ((func_8027317C_S1 *)(o))->unk20 = zero;
    ((func_8027317C_S1 *)(o))->unk1C = zero;
    ((func_8027317C_S1 *)(o))->unkC = zero;
    ((func_8027317C_S1 *)(o))->unk8 = zero;
    ((func_8027317C_S1 *)(o))->unk4 = zero;
    temp_f3 = temp_f0 / ((func_8027317C_S2 *)(arg1))->unk4;
    temp_f2 = ((func_8027317C_S2 *)(arg1))->unk0 * temp_f3;
    temp_f1 = ((func_8027317C_S2 *)(arg1))->unk8 * temp_f3;
    ((func_8027317C_S1 *)(o))->unk34 = arg2;
    ((func_8027317C_S1 *)(o))->unk14 = zero;
    ((func_8027317C_S1 *)(o))->unk10 = -temp_f2;
    ((func_8027317C_S1 *)(o))->unk18 = -temp_f1;
    ((func_8027317C_S1 *)(o))->unk30 = arg2 * temp_f2;
    ((func_8027317C_S1 *)(o))->unk38 = arg2 * temp_f1;
}
