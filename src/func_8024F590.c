#include "basetypes.h"

extern f32 D_800D2988;
extern f32 D_800C8EF0;
extern f32 D_800C8EF8;
extern f32 D_800C8EFC;

typedef struct func_8024F590_S1 func_8024F590_S1;
typedef struct func_8024F590_S2 func_8024F590_S2;
struct func_8024F590_S1 {
    char pad0[0x194];
    f32 unk194;
    char pad194[0x19C - 0x194 - sizeof(f32)];
    u16 unk19C;
    char pad19C[0x1A0 - 0x19C - sizeof(u16)];
    f32 unk1A0;
};
struct func_8024F590_S2 {
    char pad0[0x4];
    f32 unk4;
};

void func_8024F590(void *arg0) {
    f32 temp_f1;
    f32 threshold;
    f32 final_value;

    if (((func_8024F590_S1 *)(arg0))->unk19C & 0x10) {
        temp_f1 = ((func_8024F590_S1 *)(arg0))->unk1A0 +
                  D_800D2988 * D_800C8EF0;
        threshold = ((func_8024F590_S2 *)(&D_800C8EF0))->unk4;
        ((func_8024F590_S1 *)(arg0))->unk1A0 = temp_f1;
        if (temp_f1 < threshold) {
            ((func_8024F590_S1 *)(arg0))->unk194 = temp_f1 * D_800C8EF8;
            return;
        }
        final_value = D_800C8EFC;
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
