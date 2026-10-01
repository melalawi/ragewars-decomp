#include "basetypes.h"

extern void func_8028B250(void *arg0, void *arg1, s32 arg2, s32 arg3);
extern s32 D_801450B8;
extern s32 D_8014694C;
extern void *D_800D052C[];
extern s32 D_8011FE88;

typedef struct func_8022BC04_S1 func_8022BC04_S1;
typedef struct func_8022BC04_S2 func_8022BC04_S2;
typedef struct func_8022BC04_S3 func_8022BC04_S3;
struct func_8022BC04_S1 {
    char pad0[0x2E8];
    char unk2E8;
    char pad2E8[0x484 - 0x2E8 - sizeof(char)];
    void* unk484;
    char pad484[0x62E - 0x484 - sizeof(void*)];
    s16 unk62E;
    char pad62E[0x1450 - 0x62E - sizeof(s16)];
    s32 unk1450;
};
struct func_8022BC04_S2 {
    char pad0[0x4];
    u16 unk4;
};
struct func_8022BC04_S3 {
    char pad0[0x10];
    s32 unk10;
};

void func_8022BC04(void *arg0) {
    s32 var_t0;

    if (((func_8022BC04_S1 *)(arg0))->unk1450 != 0) {
        if (D_8014694C == 0) {
            var_t0 = 0x17;
            goto after;
        }
    }
    var_t0 = (D_801450B8 == 1) ? 0 : 0x17;
after:
    func_8028B250(&D_8011FE88, &((func_8022BC04_S1 *)(arg0))->unk2E8,
        ((func_8022BC04_S2 *)(D_800D052C[((func_8022BC04_S1 *)(arg0))->unk62E]))->unk4 + var_t0,
        ((func_8022BC04_S3 *)(((func_8022BC04_S1 *)(arg0))->unk484))->unk10);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C60F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CB358_8 = 4294967296.0;
const float unbake_rodata_800CB360_4 = 1.0f;
const float unbake_rodata_800CB364_4 = 1.0f;
const float unbake_rodata_800CB368_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6170_4 = 255.0f;
const float unbake_rodata_800C6174_4 = 0.100000001f;
const float unbake_rodata_800C6178_4 = 0.25f;
const float unbake_rodata_800C617C_4 = 0.75f;
const float unbake_rodata_800C6180_4 = 0.00156250002f;
const float unbake_rodata_800C6184_4 = 0.5f;
const float unbake_rodata_800C6188_4 = 0.00208333344f;
const float unbake_rodata_800C618C_4 = 2.14748365e+09f;
const float unbake_rodata_800C6190_4 = 0.5f;
const float unbake_rodata_800C6194_4 = 2.14748365e+09f;
const float unbake_rodata_800C6198_4 = 0.00312500005f;
const float unbake_rodata_800C619C_4 = 0.00416666688f;
const float unbake_rodata_800C61A0_4 = 0.25f;
const float unbake_rodata_800C61A4_4 = (-0.75f);
const float unbake_rodata_800C61A8_4 = (-0.5f);
const float unbake_rodata_800C61AC_4 = 0.00390625f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C60F0_18[] = {0x002A42D4U, 0x002A4300U, 0x002A431CU, 0x002A4328U, 0x002A4394U, 0x002A43D4U};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C60C8_1C[] = {0x002A8DD4U, 0x002A8DE4U, 0x002A8E14U, 0x002A8DF4U, 0x002A8E04U, 0x002A8E04U, 0x002A8E14U};
#endif
