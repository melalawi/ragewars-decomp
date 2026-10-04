#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"





/** Report whether the nested pointer's word at 0x564 is nonzero. */
int func_8022BAA0_de(void *object) {
    void *nested = ((func_80228774_S5 *)(object))->unk5DC;
    if (nested != 0) {
        return ((func_8021CD70_S4 *)(nested))->unk564 != 0;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C6018_1C[] = {0x002A8D04U, 0x002A8D14U, 0x002A8D44U, 0x002A8D24U, 0x002A8D34U, 0x002A8D34U, 0x002A8D44U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB298_1C[] = {0x002A9DC4U, 0x002A9DD4U, 0x002A9E04U, 0x002A9DE4U, 0x002A9DF4U, 0x002A9DF4U, 0x002A9E04U};
const float unbake_rodata_800CB2B4_4 = 24.0f;
const float unbake_rodata_800CB2B8_4 = 12.0f;
const float unbake_rodata_800CB2BC_4 = 6.0f;
const float unbake_rodata_800CB2C0_4 = 16.0f;
const float unbake_rodata_800CB2C4_4 = 8.0f;
const float unbake_rodata_800CB2C8_4 = 1.0f;
const float unbake_rodata_800CB2CC_4 = 0.00352112669f;
const float unbake_rodata_800CB2D0_4 = 0.00450450461f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C60B0_18[] = {0x002A4294U, 0x002A42C0U, 0x002A42DCU, 0x002A42E8U, 0x002A4354U, 0x002A4394U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60B4_4 = 3.14159274f;
const float unbake_rodata_800C60B8_4 = 0.5f;
const float unbake_rodata_800C60BC_4 = 1.0f;
const float unbake_rodata_800C60C0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C6030_1C[] = {0x002A8C20U, 0x002A8C30U, 0x002A8C60U, 0x002A8C40U, 0x002A8C50U, 0x002A8C50U, 0x002A8C60U};
const float unbake_rodata_800C604C_4 = 24.0f;
const float unbake_rodata_800C6050_4 = 12.0f;
const float unbake_rodata_800C6054_4 = 6.0f;
const float unbake_rodata_800C6058_4 = 16.0f;
const float unbake_rodata_800C605C_4 = 8.0f;
const float unbake_rodata_800C6060_4 = 1.0f;
#endif
