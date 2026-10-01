#include "basetypes.h"

extern s32 func_802034A4(void *arg0);
extern s32 func_80214178(void *, void *, s32);

void func_80203B1C(void *arg0, void *arg1) {
    if (func_802034A4(arg0) == 0) {
        func_80214178(arg0, arg1, 0x3E);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C1A08_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6B90_28[] = {0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x0020581CU, 0x00205940U, 0x00205940U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D30_4 = 100.0f;
const float unbake_rodata_800C1D34_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D70_4 = 100.0f;
const float unbake_rodata_800C1D74_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A90_4 = 100.0f;
const float unbake_rodata_800C1A94_4 = 2.14748365e+09f;
#endif
