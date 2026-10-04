#include "span_1000/code_80210EFC.h"
#include "span_C76B0/data.h"
#include "types.h"









s32 func_80210EFC_de(f32 arg0) {
    f32 var_f0;

    arg0 += D_800C1FD8_de;
    if (D_800C1FDC_de <= arg0) {
        do {
            arg0 -= D_800C1FDC_de;
        } while (D_800C1FDC_de <= arg0);
    }
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        do {
            arg0 += D_800C1FE0_de;
        } while (arg0 < var_f0);
    }
    if (D_800C1FE4_de < arg0) {
        arg0 = D_800C1FE4_de;
    }
    if (arg0 < D_800C1FE8_de) {
        arg0 = D_800C1FE8_de;
    }
    arg0 *= D_800C1FEC_de;
    arg0 *= D_800C1FF0_de;
    var_f0 = 0.0f;
    if (arg0 < var_f0) {
        arg0 = var_f0;
    }
    if (D_800C1FF0_de <= arg0) {
        arg0 = *(&D_800C1FF0_de + 1);
    }
    return (s32)arg0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1F08_4 = 0.392699093f;
const float unbake_rodata_800C1F0C_4 = 6.28318548f;
const float unbake_rodata_800C1F10_4 = 6.28318548f;
const float unbake_rodata_800C1F14_4 = 6.18318558f;
const float unbake_rodata_800C1F18_4 = 0.100000001f;
const float unbake_rodata_800C1F1C_4 = 0.159154937f;
const float unbake_rodata_800C1F20_4 = 8.0f;
const float unbake_rodata_800C1F24_4 = 7.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C70C8_4 = 0.392699093f;
const float unbake_rodata_800C70CC_4 = 6.28318548f;
const float unbake_rodata_800C70D0_4 = 6.28318548f;
const float unbake_rodata_800C70D4_4 = 6.18318558f;
const float unbake_rodata_800C70D8_4 = 0.100000001f;
const float unbake_rodata_800C70DC_4 = 0.159154937f;
const float unbake_rodata_800C70E0_4 = 8.0f;
const float unbake_rodata_800C70E4_4 = 7.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2278_4 = 0.392699093f;
const float unbake_rodata_800C227C_4 = 6.28318548f;
const float unbake_rodata_800C2280_4 = 6.28318548f;
const float unbake_rodata_800C2284_4 = 6.18318558f;
const float unbake_rodata_800C2288_4 = 0.100000001f;
const float unbake_rodata_800C228C_4 = 0.159154937f;
const float unbake_rodata_800C2290_4 = 8.0f;
const float unbake_rodata_800C2294_4 = 7.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C22B8_4 = 0.392699093f;
const float unbake_rodata_800C22BC_4 = 6.28318548f;
const float unbake_rodata_800C22C0_4 = 6.28318548f;
const float unbake_rodata_800C22C4_4 = 6.18318558f;
const float unbake_rodata_800C22C8_4 = 0.100000001f;
const float unbake_rodata_800C22CC_4 = 0.159154937f;
const float unbake_rodata_800C22D0_4 = 8.0f;
const float unbake_rodata_800C22D4_4 = 7.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1FD8_4 = 0.392699093f;
const float unbake_rodata_800C1FDC_4 = 6.28318548f;
const float unbake_rodata_800C1FE0_4 = 6.28318548f;
const float unbake_rodata_800C1FE4_4 = 6.18318558f;
const float unbake_rodata_800C1FE8_4 = 0.100000001f;
const float unbake_rodata_800C1FEC_4 = 0.159154937f;
const float unbake_rodata_800C1FF0_4 = 8.0f;
const float unbake_rodata_800C1FF4_4 = 7.0f;
#endif
