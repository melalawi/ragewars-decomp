#include "basetypes.h"

typedef struct Node {
    struct Node *next;
    u16 f4;
    u16 f6;
} Node;

extern Node D_80103F88;

Node *func_8023CBB0(u32 arg0) {
    Node *var_v1;
    u16 temp_a1;

    var_v1 = &D_80103F88;
    if (&D_80103F88 != 0) {
    loop_1:
        temp_a1 = var_v1->f4;
        if ((arg0 < temp_a1) || (arg0 >= (u32)(temp_a1 + var_v1->f6))) {
            var_v1 = var_v1->next;
            if (var_v1 != 0) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC630_24[] = {0x00426BB0U, 0x00426C38U, 0x00426CA0U, 0x00426CD0U, 0x00426D4CU, 0x00426DF8U, 0x00426DF8U, 0x00426DC0U, 0x00426DE4U};
const float unbake_rodata_800DC654_4 = 0.00499999989f;
const float unbake_rodata_800DC658_4 = 100.0f;
const float unbake_rodata_800DC65C_4 = 150.0f;
const float unbake_rodata_800DC660_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1640_4 = 45.0f;
const float unbake_rodata_800E1644_4 = 1.33333302f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E27A4_10[] = {0x80, 0x0D, 0x0C, 0xBC, 0x80, 0x0D, 0x62, 0xD8, 0x80, 0x0D, 0xB0, 0x44, 0x80, 0x0D, 0xEE, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DDD00_C[] = {0x80, 0x0D, 0x14, 0xD0, 0x80, 0x0D, 0x62, 0x0C, 0x80, 0x0D, 0xAB, 0xF4};
const unsigned char unbake_rodata_800DDD0C_C[] = {0x80, 0x0D, 0x14, 0xD4, 0x80, 0x0D, 0x62, 0x10, 0x80, 0x0D, 0xAB, 0xF8};
const unsigned char unbake_rodata_800DDD18_C[] = {0x80, 0x0D, 0x14, 0xD8, 0x80, 0x0D, 0x62, 0x14, 0x80, 0x0D, 0xAB, 0xFC};
const unsigned char unbake_rodata_800DDD24_C[] = {0x80, 0x0D, 0x14, 0xDC, 0x80, 0x0D, 0x62, 0x18, 0x80, 0x0D, 0xAC, 0x00};
const unsigned char unbake_rodata_800DDD30_C[] = {0x80, 0x0D, 0x14, 0xE0, 0x80, 0x0D, 0x62, 0x1C, 0x80, 0x0D, 0xAC, 0x04};
const unsigned char unbake_rodata_800DDD3C_C[] = {0x80, 0x0D, 0x14, 0xE4, 0x80, 0x0D, 0x62, 0x20, 0x80, 0x0D, 0xAC, 0x08};
#elif defined(VERSION_DE)
const float unbake_rodata_800DCB48_4 = 1.0f;
const float unbake_rodata_800DCB4C_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB50_4 = 2.0f;
const float unbake_rodata_800DCB54_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB58_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB5C_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB60_4 = 1.0f;
const float unbake_rodata_800DCB64_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB68_4 = 1.0f;
const float unbake_rodata_800DCB6C_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB70_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB74_4 = 2.0f;
const float unbake_rodata_800DCB78_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB7C_4 = 2.0f;
const float unbake_rodata_800DCB80_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB84_4 = 1.0f;
const float unbake_rodata_800DCB88_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB8C_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB90_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB94_4 = 1.0f;
const float unbake_rodata_800DCB98_4 = 2.14748365e+09f;
const float unbake_rodata_800DCB9C_4 = 1.0f;
const float unbake_rodata_800DCBA0_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBA4_4 = 2.0f;
const float unbake_rodata_800DCBA8_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBAC_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBB0_4 = 1.0f;
const float unbake_rodata_800DCBB4_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBB8_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBBC_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBC0_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBC4_4 = 1.0f;
const float unbake_rodata_800DCBC8_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBCC_4 = 1.0f;
const float unbake_rodata_800DCBD0_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBD4_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBD8_4 = 1.0f;
const float unbake_rodata_800DCBDC_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBE0_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBE4_4 = 1.0f;
const float unbake_rodata_800DCBE8_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBEC_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBF0_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBF4_4 = 2.14748365e+09f;
const float unbake_rodata_800DCBF8_4 = 1.0f;
const float unbake_rodata_800DCBFC_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC00_4 = 1.0f;
const float unbake_rodata_800DCC04_4 = 2.14748365e+09f;
const float unbake_rodata_800DCC08_4 = 2.14748365e+09f;
#endif
