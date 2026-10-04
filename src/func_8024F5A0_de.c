#include "common/types.h"
#include "span_1000/code_8024E6C8.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 D_800CD738;









void func_8024F5A0_de(void *arg0) {
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    if (((func_8024F590_S1 *)(arg0))->unk19C & 0x10) {
        temp_f1 = ((func_8024F590_S1 *)(arg0))->unk1A0 +
                  D_800CD738 * D_800C3E00_de;
        threshold = ((func_802077F4_S2 *)(&D_800C3E00_de))->unk4;
        ((func_8024F590_S1 *)(arg0))->unk1A0 = temp_f1;
        if (temp_f1 < threshold) {
            ((func_8024F590_S1 *)(arg0))->unk194 = temp_f1 * D_800C3E08_de;
            return;
        }
        final_value = D_800C3E0C_de;
        ((func_8024F590_S1 *)(arg0))->unk19C &= 0xFFEF;
        ((func_8024F590_S1 *)(arg0))->unk194 = final_value;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3D30_4 = 0.0666666701f;
const float unbake_rodata_800C3D34_4 = 0.75f;
const float unbake_rodata_800C3D38_4 = 0.466666669f;
const float unbake_rodata_800C3D3C_4 = 0.349999994f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8EF0_4 = 0.0666666701f;
const float unbake_rodata_800C8EF4_4 = 0.75f;
const float unbake_rodata_800C8EF8_4 = 0.466666669f;
const float unbake_rodata_800C8EFC_4 = 0.349999994f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C40B0_4 = 0.0666666701f;
const float unbake_rodata_800C40B4_4 = 0.75f;
const float unbake_rodata_800C40B8_4 = 0.466666669f;
const float unbake_rodata_800C40BC_4 = 0.349999994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C40F0_4 = 0.0666666701f;
const float unbake_rodata_800C40F4_4 = 0.75f;
const float unbake_rodata_800C40F8_4 = 0.466666669f;
const float unbake_rodata_800C40FC_4 = 0.349999994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3E00_4 = 0.0666666701f;
const float unbake_rodata_800C3E04_4 = 0.75f;
const float unbake_rodata_800C3E08_4 = 0.466666669f;
const float unbake_rodata_800C3E0C_4 = 0.349999994f;
#endif
