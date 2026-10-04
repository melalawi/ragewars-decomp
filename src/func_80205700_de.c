#include "span_1000/code_80204A68.h"
#include "span_1000/types.h"



/** Return the object's 0x200 status bit. */
unsigned int func_80205700_de(void *object) {
    return ((func_80205700_S1 *)(object))->unkC & 0x200;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2248_4 = 13.0f;
const float unbake_rodata_800C224C_4 = 21.0f;
const float unbake_rodata_800C2250_4 = 7.0f;
const float unbake_rodata_800C2254_4 = 3.0f;
const float unbake_rodata_800C2258_4 = 3.0f;
const float unbake_rodata_800C225C_4 = 23.0f;
const float unbake_rodata_800C2260_4 = 7.0f;
const float unbake_rodata_800C2264_4 = 8.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C73C4_4 = 0.0500000007f;
const float unbake_rodata_800C73C8_4 = 0.300000012f;
const float unbake_rodata_800C73CC_4 = (-0.707099974f);
const float unbake_rodata_800C73D0_4 = 0.707099974f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24E8_4 = 0.785398245f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2500_4 = 0.400000006f;
const float unbake_rodata_800C2504_4 = (-0.600000024f);
const float unbake_rodata_800C2508_4 = 1.29999995f;
const float unbake_rodata_800C250C_4 = 0.100000001f;
const float unbake_rodata_800C2510_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C22B0_4 = 0.400000006f;
const float unbake_rodata_800C22B4_4 = 1.29999995f;
const float unbake_rodata_800C22B8_4 = 0.100000001f;
const float unbake_rodata_800C22BC_4 = (-0.600000024f);
const float unbake_rodata_800C22C0_4 = 1.0f;
#endif
