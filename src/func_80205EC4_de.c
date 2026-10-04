#include "common/types.h"
#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern int D_00206018;
extern int D_800C854C;








void func_80205EC4_de(void *arg0, void *arg1) {
    void *inner = ((func_80203908_S1 *)(arg0))->unk18;

    ((func_80204BB4_S1 *)(arg1))->unk2C = &D_800C854C;
    ((func_80204BB4_S1 *)(arg1))->unk108 = &D_00206018;
    if ((((func_80203908_S1 *)(arg0))->unkE4 == 0x644) ||
        (((func_80204468_S3 *)(inner))->unk14 & 8)) {
        ((func_80203908_S1 *)(arg0))->unk100 &= ~0x2000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C22A8_4 = 0.0666666701f;
const float unbake_rodata_800C22AC_4 = 1.0f;
const float unbake_rodata_800C22B0_4 = 51.1999969f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C73F0_4 = 437.5f;
const float unbake_rodata_800C73F4_4 = (-675.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C2538_4 = 2.0f;
const float unbake_rodata_800C253C_4 = 0.25f;
const float unbake_rodata_800C2540_4 = 1.0f;
const float unbake_rodata_800C2544_4 = 0.25f;
const float unbake_rodata_800C2548_4 = 0.52359885f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C254C_4 = 255.0f;
const float unbake_rodata_800C2550_4 = 0.5f;
const float unbake_rodata_800C2554_4 = 2.14748365e+09f;
const float unbake_rodata_800C2558_4 = 0.00312500005f;
const float unbake_rodata_800C255C_4 = 0.00416666688f;
const float unbake_rodata_800C2560_4 = 63.0f;
const float unbake_rodata_800C2564_4 = 192.0f;
const float unbake_rodata_800C2568_4 = 1.0f;
const float unbake_rodata_800C256C_4 = 0.75f;
const float unbake_rodata_800C2570_4 = 0.600000024f;
const float unbake_rodata_800C2574_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C22F4_4 = 0.5f;
#endif
