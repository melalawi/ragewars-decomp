#include "span_1000/code_80245804.h"
extern int D_800DE7E8;

/** Set the global word at VRAM 0x800E2838 to one. */
void func_802458C4_de(void) {
    D_800DE7E8 = 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD4A8_4 = 0.200000003f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E26F8_24[] = {0x0044316CU, 0x00443194U, 0x00443194U, 0x00443174U, 0x00443184U, 0x00443194U, 0x004431A4U, 0x004431E4U, 0x00443224U};
const float unbake_rodata_800E271C_4 = 2.14748365e+09f;
const float unbake_rodata_800E2720_4 = 2.14748365e+09f;
const float unbake_rodata_800E2724_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED700_20[] = {0x0040E320U, 0x0040E1CCU, 0x0040DF8CU, 0x0040DFE0U, 0x0040E46CU, 0x0040E034U, 0x0040E46CU, 0x0040E088U};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E85C4_E[] = {0x25, 0x33, 0x64, 0x2E, 0x25, 0x30, 0x32, 0x64, 0x2E, 0x25, 0x30, 0x32, 0x64, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDC30_60[] = {0x0043050CU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x00430464U, 0x00430550U, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004305F4U, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x004306BCU, 0x00430658U};
#endif
