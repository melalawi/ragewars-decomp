#include "span_1000/code_80242BE0.h"
#include "span_1000/code_80245804.h"
#include "types.h"
/* Zeroes the resident game-state block, sets its four persistent-slot markers to -1, then runs the two state-machine resets that depend on it. */

extern s32 *D_800DE7E0;

extern void func_80245A30_de(void);


void func_80244D70_de(void)
{
    s32 *p = D_800DE7E0;

    p[0x0 / 4] = 0;
    p[0x4 / 4] = 0;
    p[0x8 / 4] = 0;
    p[0xc / 4] = 0;
    p[0x10 / 4] = 0;
    p[0x14 / 4] = 0;
    p[0x18 / 4] = 0;
    p[0x1c / 4] = 0;
    p[0x20 / 4] = 0;
    p[0x24 / 4] = 0;
    p[0x28 / 4] = 0;
    p[0x2c / 4] = 0;
    p[0x30 / 4] = 0;
    p[0x34 / 4] = 0;
    p[0x38 / 4] = 0;
    p[0x3c / 4] = 0;
    p[0x40 / 4] = 0;
    p[0x44 / 4] = 0;
    p[0x48 / 4] = 0;
    p[0x4c / 4] = 0;
    p[0x50 / 4] = 0;
    p[0x54 / 4] = 0;
    p[0x58 / 4] = 0;
    p[0x5c / 4] = 0;
    p[0x60 / 4] = 0;
    p[0x64 / 4] = 0;
    p[0xb4 / 4] = 0;
    p[0xb8 / 4] = 0;
    p[0xbc / 4] = -1;
    p[0xc0 / 4] = -1;
    p[0xc4 / 4] = 0;
    p[0xc8 / 4] = 0;
    p[0xcc / 4] = 0;
    p[0xd0 / 4] = 0;
    p[0xd4 / 4] = 0;
    p[0xd8 / 4] = -1;
    p[0xdc / 4] = -1;
    p[0xe0 / 4] = -1;
    p[0xe4 / 4] = 0;
    p[0xe8 / 4] = 0;
    p[0xec / 4] = 0;
    p[0xf0 / 4] = 0;
    p[0xf4 / 4] = 0;
    p[0xf8 / 4] = 0;
    p[0xfc / 4] = 0;
    p[0x100 / 4] = 0;
    p[0x104 / 4] = 0;

    func_80245A30_de();
    func_80245AC8_de();
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD184_4 = 0.5f;
const float unbake_rodata_800DD188_4 = 0.216216221f;
const float unbake_rodata_800DD18C_4 = 9.0f;
const float unbake_rodata_800DD190_4 = 13.0f;
const float unbake_rodata_800DD194_4 = 192.0f;
const float unbake_rodata_800DD198_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2490_4 = 1.25f;
const float unbake_rodata_800E2494_4 = 0.899999976f;
const float unbake_rodata_800E2498_4 = 0.25f;
const float unbake_rodata_800E249C_4 = 0.00352112669f;
const float unbake_rodata_800E24A0_4 = 0.00450450461f;
const float unbake_rodata_800E24A4_4 = 255.0f;
const float unbake_rodata_800E24A8_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED350_16[] = {0x4D, 0x65, 0x6D, 0x70, 0x61, 0x6B, 0x20, 0x72, 0x65, 0x61, 0x64, 0x20, 0x74, 0x65, 0x6D, 0x70, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
const unsigned char unbake_rodata_800ED368_17[] = {0x4D, 0x65, 0x6D, 0x70, 0x61, 0x6B, 0x20, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x74, 0x65, 0x6D, 0x70, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E8388_4 = 1.0f;
const float unbake_rodata_800E838C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8390_4 = 2.0f;
const float unbake_rodata_800E8394_4 = 2.14748365e+09f;
const float unbake_rodata_800E8398_4 = 2.14748365e+09f;
const float unbake_rodata_800E839C_4 = 2.14748365e+09f;
const float unbake_rodata_800E83A0_4 = 1.0f;
const float unbake_rodata_800E83A4_4 = 2.14748365e+09f;
const float unbake_rodata_800E83A8_4 = 1.0f;
const float unbake_rodata_800E83AC_4 = 2.14748365e+09f;
const float unbake_rodata_800E83B0_4 = 2.14748365e+09f;
const float unbake_rodata_800E83B4_4 = 2.0f;
const float unbake_rodata_800E83B8_4 = 2.14748365e+09f;
const float unbake_rodata_800E83BC_4 = 2.0f;
const float unbake_rodata_800E83C0_4 = 2.14748365e+09f;
const float unbake_rodata_800E83C4_4 = 1.0f;
const float unbake_rodata_800E83C8_4 = 2.14748365e+09f;
const float unbake_rodata_800E83CC_4 = 2.14748365e+09f;
const float unbake_rodata_800E83D0_4 = 2.14748365e+09f;
const float unbake_rodata_800E83D4_4 = 1.0f;
const float unbake_rodata_800E83D8_4 = 2.14748365e+09f;
const float unbake_rodata_800E83DC_4 = 1.0f;
const float unbake_rodata_800E83E0_4 = 2.14748365e+09f;
const float unbake_rodata_800E83E4_4 = 2.0f;
const float unbake_rodata_800E83E8_4 = 2.14748365e+09f;
const float unbake_rodata_800E83EC_4 = 2.14748365e+09f;
const float unbake_rodata_800E83F0_4 = 1.0f;
const float unbake_rodata_800E83F4_4 = 2.14748365e+09f;
const float unbake_rodata_800E83F8_4 = 2.14748365e+09f;
const float unbake_rodata_800E83FC_4 = 2.14748365e+09f;
const float unbake_rodata_800E8400_4 = 2.14748365e+09f;
const float unbake_rodata_800E8404_4 = 1.0f;
const float unbake_rodata_800E8408_4 = 2.14748365e+09f;
const float unbake_rodata_800E840C_4 = 1.0f;
const float unbake_rodata_800E8410_4 = 2.14748365e+09f;
const float unbake_rodata_800E8414_4 = 2.14748365e+09f;
const float unbake_rodata_800E8418_4 = 1.0f;
const float unbake_rodata_800E841C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8420_4 = 2.14748365e+09f;
const float unbake_rodata_800E8424_4 = 1.0f;
const float unbake_rodata_800E8428_4 = 2.14748365e+09f;
const float unbake_rodata_800E842C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8430_4 = 2.14748365e+09f;
const float unbake_rodata_800E8434_4 = 2.14748365e+09f;
const float unbake_rodata_800E8438_4 = 1.0f;
const float unbake_rodata_800E843C_4 = 2.14748365e+09f;
const float unbake_rodata_800E8440_4 = 1.0f;
const float unbake_rodata_800E8444_4 = 2.14748365e+09f;
const float unbake_rodata_800E8448_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DDA70_4 = 0.0179999992f;
const float unbake_rodata_800DDA74_4 = 5.0f;
const float unbake_rodata_800DDA78_4 = 13.0f;
const float unbake_rodata_800DDA7C_4 = (-50.0f);
const float unbake_rodata_800DDA80_4 = 0.0399999991f;
const float unbake_rodata_800DDA84_4 = 17.0f;
const float unbake_rodata_800DDA88_4 = (-10.0f);
#endif
