#include "span_1000/code_80204A68.h"
#include "types.h"

extern s32 func_80285F58_de(void *, void *);
extern s32 func_80214178_de(void *, void *, s32);
extern s32 D_8011BDC8;

void func_80204BD0_de(void *arg0, void *arg1) {
    s32 different = func_80285F58_de(&D_8011BDC8, arg0) != 1;

    if (different == 0) {
        func_80214178_de(arg0, arg1, 0);
    } else {
        func_80214178_de(arg0, arg1, 1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1E80_4 = 1536.0f;
const float unbake_rodata_800C1E84_4 = 921.599976f;
const float unbake_rodata_800C1E88_4 = 512.0f;
const float unbake_rodata_800C1E8C_4 = 0.785398245f;
const float unbake_rodata_800C1E90_4 = 2.35619473f;
const float unbake_rodata_800C1E94_4 = 1.10000002f;
const float unbake_rodata_800C1E98_4 = 1.20000005f;
const float unbake_rodata_800C1E9C_4 = 0.800000012f;
const float unbake_rodata_800C1EA0_4 = 0.800000012f;
const float unbake_rodata_800C1EA4_4 = 1.10000002f;
const float unbake_rodata_800C1EA8_4 = 1.20000005f;
const float unbake_rodata_800C1EAC_4 = 1.0f;
const float unbake_rodata_800C1EB0_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6FE0_20[] = {0x0020EFC8U, 0x0020F00CU, 0x0020F01CU, 0x0020F028U, 0x0020F034U, 0x0020F068U, 0x0020F078U, 0x0020F088U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C2108_74[] = {0x0020ED04U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ECD0U};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C2148_74[] = {0x0020ED04U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED04U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ED20U, 0x0020ECD0U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C1F10_4 = 3072.0f;
#endif
