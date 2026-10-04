#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
extern void func_80209988_de(void *object);








/** Reset the inner record via func_80209988_de, then override two of its fields. */
void func_8021290C_de(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    ((func_8021290C_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);
    ((func_8021290C_S3 *)(inner))->unk2FC = 0;
    ((func_8021290C_S3 *)(inner))->unkC = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4088_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9238_8 = 4294967296.0;
const double unbake_rodata_800C9240_8 = 4294967296.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C418C_4 = 127.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C41C0_4 = 0.00392156886f;
const float unbake_rodata_800C41C4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4130_4 = 0.333333343f;
const float unbake_rodata_800C4134_4 = 0.5f;
const double unbake_rodata_800C4138_8 = 4294967296.0;
const float unbake_rodata_800C4140_4 = 1.0f;
const float unbake_rodata_800C4144_4 = 1.0f;
#endif
