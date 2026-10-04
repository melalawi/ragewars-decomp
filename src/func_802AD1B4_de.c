#include "span_1000/code_802AD4B4.h"
#include "span_C76B0/data.h"
#include "types.h"



extern f32 func_80274564_de(f32 arg0);
extern void func_802391AC_de(void *, s32, s32, s32, s32, s32, s32, s32);






s32 func_802AD1B4_de(void *arg0) {
    f32 value;
    f32 input;
    f32 threshold;
    u32 converted;

    ((func_802AE1A4_S1 *)(arg0))->unk16D4 =
        ((func_802AE1A4_S1 *)(arg0))->unk16D4 == 0;
    if (((func_802AE1A4_S1 *)(arg0))->unk5DC != 0) {
        input = D_800C62E0;
        ((func_802AE1A4_S2 *)(((func_802AE1A4_S1 *)(arg0))->unk5DC))->unk124 = 0;
        value = func_80274564_de(input);
        threshold = (&D_800C62E0)[1];
        if (!(threshold <= value)) {
            converted = (s32)value;
        } else {
            converted = (s32)(value - threshold) | 0x80000000;
        }
        func_802391AC_de(((func_802AE1A4_S1 *)(arg0))->unk5DC, 0xFF, 0xFF, 0xFF,
                      0xFF, (u8)converted, 1, 0);
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C6210_4 = 0.0150000006f;
const float unbake_rodata_800C6214_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB470_4 = 0.0150000006f;
const float unbake_rodata_800CB474_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6580_4 = 0.0150000006f;
const float unbake_rodata_800C6584_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C65C0_4 = 0.0150000006f;
const float unbake_rodata_800C65C4_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C62E0_4 = 0.0150000006f;
const float unbake_rodata_800C62E4_4 = 2.14748365e+09f;
#endif
