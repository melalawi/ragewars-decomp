#include "span_1000/code_80210EFC.h"
#include "span_1000/types.h"
#include "types.h"
extern s32 func_802744D4_de(void);
extern void func_80209988_de(void *object);








void func_80212470_eu(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    s32 r1, r2, r3;

    ((func_80212450_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);

    r1 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk2DC = r2 % 2;

    r3 = func_802744D4_de();
    ((func_80212450_S3 *)(inner))->unk320 = -1;
    ((func_80212450_S3 *)(inner))->unk318 = 0;
    ((func_80212450_S3 *)(inner))->unk31C = 0;
    ((func_80212450_S3 *)(inner))->unk2E0 = r3 % 250000 + 360000;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C404C_4 = 1.0f;
const float unbake_rodata_800C4050_4 = (-2000.0f);
const float unbake_rodata_800C4054_4 = 2000.0f;
const float unbake_rodata_800C4058_4 = (-1.0f);
const float unbake_rodata_800C405C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C91C0_8 = 4294967296.0;
const double unbake_rodata_800C91C8_8 = 4294967296.0;
const double unbake_rodata_800C91D0_8 = 4294967296.0;
const double unbake_rodata_800C91D8_8 = 4294967296.0;
const double unbake_rodata_800C91E0_8 = 4294967296.0;
#elif defined(VERSION_EU)
const double unbake_rodata_800C4160_8 = 4294967296.0;
const float unbake_rodata_800C4168_4 = 0.0166666675f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4100_4 = 2.14748365e+09f;
const float unbake_rodata_800C4104_4 = 5.11999989f;
const float unbake_rodata_800C4108_4 = 1.57079649f;
const float unbake_rodata_800C410C_4 = 3.14159298f;
const float unbake_rodata_800C4110_4 = 4.71238947f;
const float unbake_rodata_800C4114_4 = 102.399994f;
const float unbake_rodata_800C4118_4 = 10.2399998f;
const float unbake_rodata_800C411C_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C40A0_8 = 4294967296.0;
const double unbake_rodata_800C40A8_8 = 4294967296.0;
const double unbake_rodata_800C40B0_8 = 4294967296.0;
const double unbake_rodata_800C40B8_8 = 4294967296.0;
const double unbake_rodata_800C40C0_8 = 4294967296.0;
const float unbake_rodata_800C40C8_4 = 1.0f;
#endif
