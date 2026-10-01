#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 h0;
    s32 h1;
    s32 h2;
    Triple partA;
    Triple partB;
    s32 extra1;
    Triple partC;
    Triple partD;
    s32 extra2;
} Dest;

typedef struct func_802174E4_S1 func_802174E4_S1;
struct func_802174E4_S1 {
    char pad0[0x8];
    Triple unk8;
};

void func_802174E4(void *arg0, void *unused1, Dest *arg2) {
    Triple local1;
    Triple local2;

    local1 = ((func_802174E4_S1 *)(arg0))->unk8;
    local2.a = 0;
    local2.b = 0;
    local2.c = 0;
    arg2->h0 = 3;
    arg2->h1 = 0;
    arg2->h2 = 0;
    arg2->partA = local1;
    arg2->partB = local2;
    arg2->extra1 = 0;
    local2.b = 0;
    local1.b = 0;
    arg2->partC = local1;
    arg2->partD = local2;
    arg2->extra2 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C4A4C_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C9C0C_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800C4958_4 = 80.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C48D8_1C[] = {0x0026A2B0U, 0x0026A2B0U, 0x0026A2B8U, 0x0026A2C8U, 0x0026A2C8U, 0x0026A2D0U, 0x0026A2C0U};
const float unbake_rodata_800C48F4_4 = 2.14748365e+09f;
const float unbake_rodata_800C48F8_4 = 2.14748365e+09f;
const float unbake_rodata_800C48FC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4900_4 = 2.14748365e+09f;
const float unbake_rodata_800C4904_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4908_1C[] = {0x0026A5B8U, 0x0026A5B8U, 0x0026A5C0U, 0x0026A5D0U, 0x0026A5D0U, 0x0026A5D8U, 0x0026A5C8U};
const float unbake_rodata_800C4924_4 = 2.14748365e+09f;
const float unbake_rodata_800C4928_4 = 2.14748365e+09f;
const float unbake_rodata_800C492C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4930_4 = 2.14748365e+09f;
const float unbake_rodata_800C4934_4 = 2.14748365e+09f;
const unsigned int unbake_rodata_800C4938_1C[] = {0x0026A9A4U, 0x0026A9A4U, 0x0026A9ACU, 0x0026A9BCU, 0x0026A9BCU, 0x0026A9C4U, 0x0026A9B4U};
const float unbake_rodata_800C4954_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4ADC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4AE0_4 = 0.600000024f;
const float unbake_rodata_800C4AE4_4 = 0.300000012f;
const float unbake_rodata_800C4AE8_4 = 0.100000001f;
#endif
