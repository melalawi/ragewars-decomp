#include "span_1000/code_80201ACC.h"
#include "types.h"

extern s32 func_802034A4_de(void *arg0);
extern s32 func_80214178_de(void *, void *, s32);

void func_80203AD8_de(void *arg0, void *arg1) {
    if (func_802034A4_de(arg0) != 0) {
        func_80214178_de(arg0, arg1, 0x3F);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C19D0_28[] = {0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x00205940U, 0x0020581CU, 0x00205940U, 0x00205940U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B80_4 = 100.0f;
const float unbake_rodata_800C6B84_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D14_4 = 8.5f;
const float unbake_rodata_800C1D18_4 = 255.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D54_4 = 8.5f;
const float unbake_rodata_800C1D58_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A74_4 = 8.5f;
const float unbake_rodata_800C1A78_4 = 255.0f;
#endif
