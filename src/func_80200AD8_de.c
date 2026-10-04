#include "common/types.h"
#include "span_1000/code_80200400.h"
/* Updates the selected byte in the aligned word addressed by arg0. */

void func_80200AD8_de(s32 arg0, s32 arg1) {
    int temp_ff;
    s32 word_2;
    struct Shape_func_8021A2D4_de_2 *word_3;
    int new_var3_2;
    s32 shift = (~arg0 & 3) * 8;
    int shift_ff;
    int temp;
    struct Shape_func_8021A2D4_de_2 *word = (struct Shape_func_8021A2D4_de_2 *) (arg0 & ~3);
    int new_var5_2;
    word_2 = (*word).field_0;
    shift_ff = 0xFF << shift;
    word_3 = word;
    new_var5_2 = shift_ff;
    do {
        ;
    } while (0);
    new_var3_2 = ~new_var5_2;
    temp_ff = (arg1 & 0xFF) << shift;
    word_3->field_0 = (word_2 & new_var3_2) | temp_ff;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1958_4 = 0.5f;
const float unbake_rodata_800C195C_4 = 6.28318596f;
const float unbake_rodata_800C1960_4 = 0.5f;
const float unbake_rodata_800C1964_4 = 0.00999999978f;
const float unbake_rodata_800C1968_4 = 0.00999999978f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B18_4 = 0.5f;
const float unbake_rodata_800C6B1C_4 = 6.28318596f;
const float unbake_rodata_800C6B20_4 = 0.5f;
const float unbake_rodata_800C6B24_4 = 0.00999999978f;
const float unbake_rodata_800C6B28_4 = 0.00999999978f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1CC8_4 = 0.5f;
const float unbake_rodata_800C1CCC_4 = 6.28318596f;
const float unbake_rodata_800C1CD0_4 = 0.5f;
const float unbake_rodata_800C1CD4_4 = 0.00999999978f;
const float unbake_rodata_800C1CD8_4 = 0.00999999978f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D08_4 = 0.5f;
const float unbake_rodata_800C1D0C_4 = 6.28318596f;
const float unbake_rodata_800C1D10_4 = 0.5f;
const float unbake_rodata_800C1D14_4 = 0.00999999978f;
const float unbake_rodata_800C1D18_4 = 0.00999999978f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A1C_4 = 1.0f;
const float unbake_rodata_800C1A20_4 = 1.0f;
#endif
