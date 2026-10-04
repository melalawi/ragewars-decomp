#include "common/types.h"
#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"





void func_802127F4_de(void *arg0) {
    void *temp_s0;
    temp_s0 = (((struct func_80212828_S2 *) ((s8 *) ((struct func_8020A028_S3 *) ((s8 *) arg0))->unk1D8))->unk1454);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk220) = 0;
    func_80209988_de(temp_s0);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk2FC) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4078_8 = 4294967296.0;
const double unbake_rodata_800C4080_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9220_4 = 0.333333343f;
const float unbake_rodata_800C9224_4 = 0.5f;
const double unbake_rodata_800C9228_8 = 4294967296.0;
const float unbake_rodata_800C9230_4 = 1.0f;
const float unbake_rodata_800C9234_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4188_4 = 0.5f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C41B0_8 = 4294967296.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C411C_4 = 1.0f;
const float unbake_rodata_800C4120_4 = (-2000.0f);
const float unbake_rodata_800C4124_4 = 2000.0f;
const float unbake_rodata_800C4128_4 = (-1.0f);
const float unbake_rodata_800C412C_4 = 1.0f;
#endif
