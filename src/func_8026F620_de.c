#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"



#define AFFINE_CELL(row, column)                                             \
    out[(row) * 4 + (column)] =                                              \
        (left[(row) * 4] * right[(column)]) +                                \
        (left[(row) * 4 + 1] * right[4 + (column)]) +                        \
        (left[(row) * 4 + 2] * right[8 + (column)])

/** Multiply two affine 4x4 matrices into the output matrix. */
void func_8026F620_de(f32 *out, f32 *left, f32 *right)
{
    AFFINE_CELL(0, 0);
    AFFINE_CELL(0, 1);
    AFFINE_CELL(0, 2);
    AFFINE_CELL(1, 0);
    AFFINE_CELL(1, 1);
    AFFINE_CELL(1, 2);
    AFFINE_CELL(2, 0);
    AFFINE_CELL(2, 1);
    AFFINE_CELL(2, 2);
    out[12] = (left[12] * right[0]) + (left[13] * right[4]) +
              (left[14] * right[8]) + right[12];
    out[13] = (left[12] * right[1]) + (left[13] * right[5]) +
              (left[14] * right[9]) + right[13];
    out[14] = (left[12] * right[2]) + (left[13] * right[6]) +
              (left[14] * right[10]) + right[14];
    out[3] = out[7] = out[11] = 0.0f;
    out[15] = D_800C46EC_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C461C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C97DC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C499C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C49DC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C46EC_4 = 1.0f;
#endif
