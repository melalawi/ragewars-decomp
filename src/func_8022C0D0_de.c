#include "span_1000/code_8022B500.h"
#include "types.h"





extern f32 D_800CD738;
void func_8022C0D0_de(void *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    temp_f1 = (((struct FloatState67C *) ((s8 *) arg0))->unk_678);
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800CD738;
        (((struct FloatState67C *) ((s8 *) arg0))->unk_678) = temp_f0;
        if (temp_f0 < 0.0f) {
            (((struct FloatState67C *) ((s8 *) arg0))->unk_678) = 0.0f;
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7288_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC5B8_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C6298_1C[] = {0x002A8CACU, 0x002A8CBCU, 0x002A8CECU, 0x002A8CCCU, 0x002A8CDCU, 0x002A8CDCU, 0x002A8CECU};
const float unbake_rodata_800C62B4_4 = 24.0f;
const float unbake_rodata_800C62B8_4 = 12.0f;
const float unbake_rodata_800C62BC_4 = 6.0f;
const float unbake_rodata_800C62C0_4 = 16.0f;
const float unbake_rodata_800C62C4_4 = 8.0f;
const float unbake_rodata_800C62C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6270_4 = 1.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C61E0_8 = 4294967296.0;
const float unbake_rodata_800C61E8_4 = 1.0f;
const float unbake_rodata_800C61EC_4 = 1.0f;
#endif
