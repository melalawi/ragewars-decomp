#include "basetypes.h"

extern f32 D_800C99B0;

typedef struct func_80272848_S1 func_80272848_S1;
struct func_80272848_S1 {
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

/** Reset the matrix to identity-diagonal * D_800C99B0, zeroing the rest. */
void func_80272848(void *arg0) {
    u8 *o = (u8 *)arg0;
    f32 zero = 0.0f;

    ((func_80272848_S1 *)(o))->unk3C = D_800C99B0;
    ((func_80272848_S1 *)(o))->unk28 = D_800C99B0;
    ((func_80272848_S1 *)(o))->unk14 = D_800C99B0;
    ((func_80272848_S1 *)(o))->unk0 = D_800C99B0;
    ((func_80272848_S1 *)(o))->unk38 = zero;
    ((func_80272848_S1 *)(o))->unk34 = zero;
    ((func_80272848_S1 *)(o))->unk30 = zero;
    ((func_80272848_S1 *)(o))->unk2C = zero;
    ((func_80272848_S1 *)(o))->unk24 = zero;
    ((func_80272848_S1 *)(o))->unk20 = zero;
    ((func_80272848_S1 *)(o))->unk1C = zero;
    ((func_80272848_S1 *)(o))->unk18 = zero;
    ((func_80272848_S1 *)(o))->unk10 = zero;
    ((func_80272848_S1 *)(o))->unkC = zero;
    ((func_80272848_S1 *)(o))->unk8 = zero;
    ((func_80272848_S1 *)(o))->unk4 = zero;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C47F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C99B0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B70_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4BB0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C48C0_4 = 1.0f;
#endif
