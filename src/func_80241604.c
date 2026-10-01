#include "basetypes.h"

typedef struct func_80241604_S1 func_80241604_S1;
typedef struct func_80241604_S2 func_80241604_S2;
struct func_80241604_S1 {
    char pad0[0x8];
    f32 unk8;
};
struct func_80241604_S2 {
    char pad0[0x8];
    f32 unk8;
};

s32 func_80241604(void *arg0, void *arg1, f32 arg2, void *arg3) {
    f32 dx = *(f32 *)arg1 - *(f32 *)arg3;
    f32 dz = ((func_80241604_S1 *)(arg1))->unk8 - ((func_80241604_S2 *)(arg3))->unk8;
    s32 result = 1;
    if (!((dx * dx + dz * dz) <= (arg2 * arg2))) {
        result = 0;
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCF68_2C[] = {0x0043D3E4U, 0x0043D3ECU, 0x0043D3F4U, 0x0043D3FCU, 0x0043D404U, 0x0043D40CU, 0x0043D414U, 0x0043D41CU, 0x0043D424U, 0x0043D42CU, 0x0043D434U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E2010_18[] = {0x0043B0D4U, 0x0043B0D4U, 0x0043B0E4U, 0x0043B0E4U, 0x0043B0F4U, 0x0043B27CU};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E5A36_2[] = {0x01, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFA2B_1[] = {0x00};
const unsigned char unbake_rodata_800DFA2C_24[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD548_1C[] = {0x0041F720U, 0x0041F7A8U, 0x0041F810U, 0x0041F820U, 0x0041F8B4U, 0x0041F8FCU, 0x0041F94CU};
const float unbake_rodata_800DD564_4 = 2.14748365e+09f;
const float unbake_rodata_800DD568_4 = 0.00333333341f;
const float unbake_rodata_800DD56C_4 = 70.0f;
const float unbake_rodata_800DD570_4 = 170.0f;
#endif
