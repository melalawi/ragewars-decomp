/* Stores its parameters into the object at arg0 offsets 0x24 through 0x60, then refreshes the object's ground reference and picks its surface value at 0x64 from the ground under it. Adapted from func_80239FCC with the parameter block stores added and the D_800C8610 thresholds changed. */
#include "basetypes.h"

typedef struct {
    s32 w[4];
} Quad80238F14;

extern s32 func_80245788(void);
extern s32 func_802866F8(void *arg0, void *arg1);
extern f32 func_80275E44(s32 arg0, f32 arg1, f32 arg2);
extern s32 D_8011FE88;
extern s32 D_800D2B40;
extern f32 D_800C8610;
extern f32 D_800C8614;
extern f32 D_800C8618;

typedef struct func_80238F14_S1 func_80238F14_S1;
typedef struct func_80238F14_S2 func_80238F14_S2;
struct func_80238F14_S1 {
    char pad0[0x24];
    s32 unk24;
    char pad24[0x28 - 0x24 - sizeof(s32)];
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
    char pad3C[0x40 - 0x3C - sizeof(f32)];
    f32 unk40;
    char pad40[0x44 - 0x40 - sizeof(f32)];
    f32 unk44;
    char pad44[0x48 - 0x44 - sizeof(f32)];
    Quad80238F14 unk48;
    char pad48[0x58 - 0x48 - sizeof(Quad80238F14)];
    s32 unk58;
    char pad58[0x5C - 0x58 - sizeof(s32)];
    f32 unk5C;
    char pad5C[0x60 - 0x5C - sizeof(f32)];
    f32 unk60;
    char pad60[0x64 - 0x60 - sizeof(f32)];
    s32 unk64;
};
struct func_80238F14_S2 {
    char pad0[0x1C];
    s32 unk1C;
};

void func_80238F14(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6,
                   f32 arg7, f32 arg8, f32 arg9, Quad80238F14 arg10, s32 arg11, f32 arg12,
                   f32 arg13) {
    s32 object;
    f32 value;
    f32 x;
    f32 y;
    f32 z;
    f32 w;

    ((func_80238F14_S1 *)(arg0))->unk24 = arg1;
    ((func_80238F14_S1 *)(arg0))->unk28 = arg2;
    ((func_80238F14_S1 *)(arg0))->unk2C = arg3;
    ((func_80238F14_S1 *)(arg0))->unk30 = arg4;
    ((func_80238F14_S1 *)(arg0))->unk34 = arg5;
    ((func_80238F14_S1 *)(arg0))->unk38 = arg6;
    ((func_80238F14_S1 *)(arg0))->unk3C = arg7;
    ((func_80238F14_S1 *)(arg0))->unk40 = arg8;
    ((func_80238F14_S1 *)(arg0))->unk44 = arg9;
    ((func_80238F14_S1 *)(arg0))->unk48 = arg10;
    ((func_80238F14_S1 *)(arg0))->unk58 = arg11;
    ((func_80238F14_S1 *)(arg0))->unk5C = arg12;
    ((func_80238F14_S1 *)(arg0))->unk60 = arg13;
    if (func_80245788() != 0) {
        ((func_80238F14_S1 *)(arg0))->unk58 = func_802866F8(&D_8011FE88, (char *)arg0 + 0x38);
    }
    object = ((func_80238F14_S1 *)(arg0))->unk58;
    x = ((func_80238F14_S1 *)(arg0))->unk38;
    y = ((func_80238F14_S1 *)(arg0))->unk3C;
    z = ((func_80238F14_S1 *)(arg0))->unk40;
    w = ((func_80238F14_S1 *)(arg0))->unk44;
    ((func_80238F14_S1 *)(arg0))->unk64 = D_800D2B40;
    if (object != 0 && func_80245788() == 0) {
        value = ((y + w) - func_80275E44(object, x, z)) * D_800C8610;
        if (value < D_800C8614 && D_800C8618 < value) {
            ((func_80238F14_S1 *)(arg0))->unk64 = ((func_80238F14_S2 *)(object))->unk1C;
        }
    }
    if (func_80245788() != 0) {
        ((func_80238F14_S1 *)(arg0))->unk64 = D_800D2B40;
    }
    if (((func_80238F14_S1 *)(arg0))->unk5C > 0.0f) {
        ((func_80238F14_S1 *)(arg0))->unk64 = D_800D2B40;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3450_4 = 0.09765625f;
const float unbake_rodata_800C3454_4 = 11.0f;
const float unbake_rodata_800C3458_4 = 5.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8610_4 = 0.09765625f;
const float unbake_rodata_800C8614_4 = 11.0f;
const float unbake_rodata_800C8618_4 = 5.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C37D0_4 = 0.09765625f;
const float unbake_rodata_800C37D4_4 = 11.0f;
const float unbake_rodata_800C37D8_4 = 5.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3810_4 = 0.09765625f;
const float unbake_rodata_800C3814_4 = 11.0f;
const float unbake_rodata_800C3818_4 = 5.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3520_4 = 0.09765625f;
const float unbake_rodata_800C3524_4 = 11.0f;
const float unbake_rodata_800C3528_4 = 5.0f;
#endif
