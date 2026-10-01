#include "basetypes.h"

/** Return whether arg0 is within the range [0x6BA, 0x6BC). */
s32 func_8020F55C(s32 arg0) {
    if (arg0 < 0x6BC) {
        if (arg0 >= 0x6BA) {
            return 1;
        }
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3CB0_4 = 10.2399998f;
const float unbake_rodata_800C3CB4_4 = 0.0247369502f;
const float unbake_rodata_800C3CB8_4 = 0.349999994f;
const float unbake_rodata_800C3CBC_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8D74_4 = 1.0f;
const float unbake_rodata_800C8D78_4 = 1.0f;
const float unbake_rodata_800C8D7C_4 = 1.0f;
const float unbake_rodata_800C8D80_4 = 0.75f;
const float unbake_rodata_800C8D84_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3A64_4 = 0.0666666701f;
const float unbake_rodata_800C3A68_4 = 0.0666666701f;
const float unbake_rodata_800C3A6C_4 = (-0.5f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3A64_4 = 0.699999988f;
const float unbake_rodata_800C3A68_4 = 0.699999988f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C3BF8_3C[] = {0x0024D378U, 0x0024D320U, 0x0024D388U, 0x0024D388U, 0x0024D320U, 0x0024D378U, 0x0024D368U, 0x0024D358U, 0x0024D330U, 0x0024D388U, 0x0024D378U, 0x0024D2E0U, 0x0024D378U, 0x0024D378U, 0x0024D378U};
const float unbake_rodata_800C3C34_4 = 122.879997f;
const float unbake_rodata_800C3C38_4 = 102.399994f;
#endif
