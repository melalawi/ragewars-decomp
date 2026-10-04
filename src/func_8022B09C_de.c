#include "common/types.h"
#include "span_1000/code_8022A8E0.h"
#include "types.h"





extern void func_80226DD0_de(char *, Matrix_func_80213CF8_de *);
extern void func_80272898_de(void *, void *, void *);






void func_8022B09C_de(void *arg0, Vec3 *arg1) {
    Vec3 input;
    Matrix_func_80213CF8_de matrix;
    Vec3 *input_ptr;
    Matrix_func_80213CF8_de *matrix_ptr;

    input = *arg1;
    input_ptr = &input;
    matrix_ptr = ((func_8022B08C_S1 *)(arg0))->unk5DC;

    if (matrix_ptr != 0) {
        matrix_ptr = &((func_8022B08C_S2 *)(matrix_ptr))->unk160;
    } else {
        func_80226DD0_de(arg0, &matrix);
        matrix_ptr = &matrix;
    }
    func_80272898_de(matrix_ptr, input_ptr, arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D04_4 = 3.14159274f;
const float unbake_rodata_800C5D08_4 = 0.5f;
const float unbake_rodata_800C5D0C_4 = 1.0f;
const float unbake_rodata_800C5D10_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF80_4 = 0.00999999978f;
const float unbake_rodata_800CAF84_4 = 0.292571425f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C5960_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C5968_8 = 1.0;
const double unbake_rodata_800C5970_8 = 1.0;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5950_8 = 1000.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CA8_4 = 0.00999999978f;
#endif
