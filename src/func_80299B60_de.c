#include "span_1000/code_80299FC4.h"
#include "span_C76B0/data.h"


/** Copy the same global float to two destinations. */
void func_80299B60_de(float *arg0, float *arg1) {
    float value = D_800C5688_de;
    *arg0 = value;
    *arg1 = value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C55B8_4 = (-1.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA818_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C5928_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5968_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C5688_4 = (-1.0f);
#endif
