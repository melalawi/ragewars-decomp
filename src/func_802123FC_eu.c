#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"
extern s32 func_802744D4_de(void);
extern void func_80209988_de(void *object);








void func_802123FC_eu(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    s32 r1, r2;

    ((func_802123DC_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);

    r1 = func_802744D4_de();
    ((func_802123DC_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_802744D4_de();
    ((func_802123DC_S3 *)(inner))->unk2DC = r2 % 2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4038_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9190_8 = 4294967296.0;
const double unbake_rodata_800C9198_8 = 4294967296.0;
const double unbake_rodata_800C91A0_8 = 4294967296.0;
const double unbake_rodata_800C91A8_8 = 4294967296.0;
const double unbake_rodata_800C91B0_8 = 4294967296.0;
const float unbake_rodata_800C91B8_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C40E0_4 = 2.14748365e+09f;
const float unbake_rodata_800C40E4_4 = 0.00787401572f;
const float unbake_rodata_800C40E8_4 = 102.399994f;
const float unbake_rodata_800C40EC_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C408C_4 = 0.5f;
const float unbake_rodata_800C4090_4 = 0.100000001f;
const float unbake_rodata_800C4094_4 = 0.5f;
const float unbake_rodata_800C4098_4 = 0.100000001f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4094_4 = 3.05185094e-05f;
const float unbake_rodata_800C4098_4 = 1.0f;
#endif
