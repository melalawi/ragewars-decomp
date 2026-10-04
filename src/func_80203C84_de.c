#include "span_1000/code_80203B1C.h"
#include "span_1000/types.h"
#include "types.h"

extern s8 D_8011BDC8[];

extern s32 func_80285F58_de(void *arg0, void *arg1);
extern void func_80203C40_de(void *arg0, void *arg1, s32 arg2);
extern void func_80214178_de(void *arg0, void *arg1, s32 arg2);




void func_80203C84_de(void *arg0, void *arg1, s32 arg2) {
    if ((func_80285F58_de(D_8011BDC8, arg0) == 0) &&
        (((func_80203C84_S1 *)(arg1))->unk34 == 0)) {
        func_80203C40_de(arg0, arg1, arg2);
        func_80214178_de(arg0, arg1, 1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1AB8_14[] = {0x0020776CU, 0x00207764U, 0x00207764U, 0x0020775CU, 0x002077BCU};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6C18_4 = 3.0f;
const float unbake_rodata_800C6C1C_4 = 10.2399998f;
const float unbake_rodata_800C6C20_4 = 1.0f;
const float unbake_rodata_800C6C24_4 = 1.0f;
const float unbake_rodata_800C6C28_4 = 1.0f;
const float unbake_rodata_800C6C2C_4 = 3.14159274f;
const float unbake_rodata_800C6C30_4 = 0.5f;
const float unbake_rodata_800C6C34_4 = 0.300000012f;
const float unbake_rodata_800C6C38_4 = 15.0f;
const float unbake_rodata_800C6C3C_4 = 1.0f;
const float unbake_rodata_800C6C40_4 = 3.14159274f;
const float unbake_rodata_800C6C44_4 = 0.5f;
const float unbake_rodata_800C6C48_4 = 2.67035389f;
const float unbake_rodata_800C6C4C_4 = 0.5f;
const float unbake_rodata_800C6C50_4 = 1.0f;
const float unbake_rodata_800C6C54_4 = 0.0174532942f;
const float unbake_rodata_800C6C58_4 = 0.0174532942f;
const float unbake_rodata_800C6C5C_4 = 0.100000001f;
const float unbake_rodata_800C6C60_4 = 0.0174532942f;
const float unbake_rodata_800C6C64_4 = 0.0174532942f;
const float unbake_rodata_800C6C68_4 = 0.100000001f;
const float unbake_rodata_800C6C6C_4 = 0.0174532942f;
const float unbake_rodata_800C6C70_4 = 0.0174532942f;
const float unbake_rodata_800C6C74_4 = 0.100000001f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1DB0_4 = 1.0f;
const float unbake_rodata_800C1DB4_4 = 1.10000002f;
const float unbake_rodata_800C1DB8_4 = 0.25f;
const float unbake_rodata_800C1DBC_4 = 1.20000005f;
const float unbake_rodata_800C1DC0_4 = 1.29999995f;
const float unbake_rodata_800C1DC4_4 = 0.0666666701f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1DF0_4 = 1.0f;
const float unbake_rodata_800C1DF4_4 = 1.10000002f;
const float unbake_rodata_800C1DF8_4 = 0.25f;
const float unbake_rodata_800C1DFC_4 = 1.20000005f;
const float unbake_rodata_800C1E00_4 = 1.29999995f;
const float unbake_rodata_800C1E04_4 = 0.0666666701f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1B10_4 = 1.0f;
const float unbake_rodata_800C1B14_4 = 1.10000002f;
const float unbake_rodata_800C1B18_4 = 0.25f;
const float unbake_rodata_800C1B1C_4 = 1.20000005f;
const float unbake_rodata_800C1B20_4 = 1.29999995f;
const float unbake_rodata_800C1B24_4 = 0.0666666701f;
#endif
