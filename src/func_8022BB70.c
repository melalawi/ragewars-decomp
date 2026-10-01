#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern u8 D_801462C8[];
extern s32 D_800CE47C;
extern s32 D_800CE430[];
extern char D_8011FE88;

typedef struct func_8022BB70_S1 func_8022BB70_S1;
typedef struct func_8022BB70_S2 func_8022BB70_S2;
typedef struct func_8022BB70_S3 func_8022BB70_S3;
typedef struct func_8022BB70_S4 func_8022BB70_S4;
struct func_8022BB70_S1 {
    char pad0[0x62C];
    s32 unk62C;
};
struct func_8022BB70_S2 {
    char pad0[0x3];
    u8 unk3;
    char pad3[0x18 - 0x3 - sizeof(u8)];
    void* unk18;
    char pad18[0x5D8 - 0x18 - sizeof(void*)];
    void* unk5D8;
    char pad5D8[0x86C - 0x5D8 - sizeof(void*)];
    s32 unk86C;
};
struct func_8022BB70_S3 {
    char pad0[0x81];
    u8 unk81;
    char pad81[0x8F - 0x81 - sizeof(u8)];
    u8 unk8F;
};
struct func_8022BB70_S4 {
    char pad0[0xC];
    s16 unkC;
};

void func_8022BB70(void *arg0) {
    s32 var_a2;
    u8 *base;

    base = D_801462C8;
    if (base[0x1D] == 0) {
        var_a2 = 0x66;
    } else if (((func_8022BB70_S1 *)(base))->unk62C != 0 && ((func_8022BB70_S3 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk8F != 0) {
        var_a2 = D_800CE47C;
    } else {
        var_a2 = D_800CE430[((func_8022BB70_S4 *)(((func_8022BB70_S2 *)(arg0))->unk18))->unkC];
        ((func_8022BB70_S2 *)(arg0))->unk3 = ((func_8022BB70_S3 *)(((func_8022BB70_S2 *)(arg0))->unk5D8))->unk81;
    }
    func_8028B250(&D_8011FE88, arg0, var_a2, ((func_8022BB70_S2 *)(arg0))->unk86C);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C60B0_1C[] = {0x002A8F64U, 0x002A8F74U, 0x002A8FA4U, 0x002A8F84U, 0x002A8F94U, 0x002A8F94U, 0x002A8FA4U};
const float unbake_rodata_800C60CC_4 = 24.0f;
const float unbake_rodata_800C60D0_4 = 12.0f;
const float unbake_rodata_800C60D4_4 = 6.0f;
const float unbake_rodata_800C60D8_4 = 16.0f;
const float unbake_rodata_800C60DC_4 = 8.0f;
const float unbake_rodata_800C60E0_4 = 1.0f;
const float unbake_rodata_800C60E4_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB350_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6148_4 = 6.14400005f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60E8_4 = 3.125f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C60A8_1C[] = {0x002A8DD4U, 0x002A8DE4U, 0x002A8E14U, 0x002A8DF4U, 0x002A8E04U, 0x002A8E04U, 0x002A8E14U};
#endif
