#include "common/types.h"
#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"





void func_80212C90_de(void *arg0) {
    void *temp_s0;
    temp_s0 = (((struct func_80212828_S2 *) ((s8 *) ((struct func_8020A028_S3 *) ((s8 *) arg0))->unk1D8))->unk1454);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk220) = 0;
    func_80209988_de(temp_s0);
    (((struct Brain_func_80212D78_eu_x *) ((s8 *) temp_s0))->unk2FC) = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C40EC_4 = 9.58767268e-05f;
const float unbake_rodata_800C40F0_4 = 0.0666666701f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9268_4 = 0.5f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4250_8 = 4294967296.0;
const float unbake_rodata_800C4258_4 = 0.00999999978f;
const float unbake_rodata_800C425C_4 = 4.53514731e-05f;
const float unbake_rodata_800C4260_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4228_4 = 3072.0f;
const float unbake_rodata_800C422C_4 = 0.5f;
const float unbake_rodata_800C4230_4 = 0.25f;
const float unbake_rodata_800C4234_4 = 0.5f;
const float unbake_rodata_800C4238_4 = 1.0f;
const float unbake_rodata_800C423C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4168_4 = 0.5f;
#endif
