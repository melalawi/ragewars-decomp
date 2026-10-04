#include "span_1000/code_8020A95C.h"
#include "span_1000/types.h"



/** Look up a byte in a strided grid addressed via a base-record pointer. */
unsigned char func_8020D1CC_de(void *arg0, int arg1, int arg2) {
    int stride = ((ObjectLinks14 *)(arg0))->unk_4;
    char *base = ((ObjectLinks14 *)(arg0))->unk_10;
    int span = *(int *)base;
    int index = (arg1 * stride + arg2) * span;
    return ((struct func_80242278_S2 *) (index + ((int) base)))->unk8;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3660_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87B8_4 = 10.2399998f;
const float unbake_rodata_800C87BC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C36C4_4 = 1.0f;
const float unbake_rodata_800C36C8_4 = 0.5f;
const float unbake_rodata_800C36CC_4 = 18.0f;
const float unbake_rodata_800C36D0_4 = 0.800000012f;
const float unbake_rodata_800C36D4_4 = 0.600000024f;
const float unbake_rodata_800C36D8_4 = 0.5f;
const float unbake_rodata_800C36DC_4 = 0.800000012f;
const float unbake_rodata_800C36E0_4 = 0.400000006f;
const float unbake_rodata_800C36E4_4 = 0.0061599859f;
const float unbake_rodata_800C36E8_4 = 1.0f;
const float unbake_rodata_800C36EC_4 = 0.0123199718f;
const float unbake_rodata_800C36F0_4 = 255.0f;
const float unbake_rodata_800C36F4_4 = 0.333333343f;
const float unbake_rodata_800C36F8_4 = 9.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C36E8_4 = 9.0f;
const float unbake_rodata_800C36EC_4 = 0.810000002f;
const float unbake_rodata_800C36F0_4 = 1.0f;
const float unbake_rodata_800C36F4_4 = 1.57079637f;
const float unbake_rodata_800C36F8_4 = 255.0f;
const float unbake_rodata_800C36FC_4 = 1.0f;
const float unbake_rodata_800C3700_4 = 0.0666666701f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36C8_4 = 10.2399998f;
const float unbake_rodata_800C36CC_4 = 1.0f;
#endif
