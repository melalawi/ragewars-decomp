#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80285F58_de(void *, void *);
extern s32 D_8011BDC8;




void func_80203C40_de(void *arg0) {
    if (func_80285F58_de(&D_8011BDC8, arg0) == 0) {
        ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1A58_4 = 3.0f;
const float unbake_rodata_800C1A5C_4 = 10.2399998f;
const float unbake_rodata_800C1A60_4 = 1.0f;
const float unbake_rodata_800C1A64_4 = 1.0f;
const float unbake_rodata_800C1A68_4 = 1.0f;
const float unbake_rodata_800C1A6C_4 = 3.14159274f;
const float unbake_rodata_800C1A70_4 = 0.5f;
const float unbake_rodata_800C1A74_4 = 0.300000012f;
const float unbake_rodata_800C1A78_4 = 15.0f;
const float unbake_rodata_800C1A7C_4 = 1.0f;
const float unbake_rodata_800C1A80_4 = 3.14159274f;
const float unbake_rodata_800C1A84_4 = 0.5f;
const float unbake_rodata_800C1A88_4 = 2.67035389f;
const float unbake_rodata_800C1A8C_4 = 0.5f;
const float unbake_rodata_800C1A90_4 = 1.0f;
const float unbake_rodata_800C1A94_4 = 0.0174532942f;
const float unbake_rodata_800C1A98_4 = 0.0174532942f;
const float unbake_rodata_800C1A9C_4 = 0.100000001f;
const float unbake_rodata_800C1AA0_4 = 0.0174532942f;
const float unbake_rodata_800C1AA4_4 = 0.0174532942f;
const float unbake_rodata_800C1AA8_4 = 0.100000001f;
const float unbake_rodata_800C1AAC_4 = 0.0174532942f;
const float unbake_rodata_800C1AB0_4 = 0.0174532942f;
const float unbake_rodata_800C1AB4_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6C00_4 = 1.0f;
const float unbake_rodata_800C6C04_4 = 1.10000002f;
const float unbake_rodata_800C6C08_4 = 0.25f;
const float unbake_rodata_800C6C0C_4 = 1.20000005f;
const float unbake_rodata_800C6C10_4 = 1.29999995f;
const float unbake_rodata_800C6C14_4 = 0.0666666701f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1D90_14[] = {0x00206A94U, 0x00206BFCU, 0x00206CBCU, 0x00206B5CU, 0x00206D34U};
const float unbake_rodata_800C1DA4_4 = (-0.512000024f);
const float unbake_rodata_800C1DA8_4 = 0.512000024f;
const float unbake_rodata_800C1DAC_4 = 45.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1DD0_14[] = {0x00206A94U, 0x00206BFCU, 0x00206CBCU, 0x00206B5CU, 0x00206D34U};
const float unbake_rodata_800C1DE4_4 = (-0.512000024f);
const float unbake_rodata_800C1DE8_4 = 0.512000024f;
const float unbake_rodata_800C1DEC_4 = 45.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1AF0_14[] = {0x00206A74U, 0x00206BDCU, 0x00206C9CU, 0x00206B3CU, 0x00206D14U};
const float unbake_rodata_800C1B04_4 = (-0.512000024f);
const float unbake_rodata_800C1B08_4 = 0.512000024f;
const float unbake_rodata_800C1B0C_4 = 45.0f;
#endif
