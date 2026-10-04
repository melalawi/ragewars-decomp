#include "span_1000/code_8026E5DC.h"
#include "types.h"

#define MAT4_CELL(row, column)                                                \
    out[(row) * 4 + (column)] =                                               \
        (left[(row) * 4] * right[(column)]) +                                 \
        (left[(row) * 4 + 1] * right[4 + (column)]) +                         \
        (left[(row) * 4 + 2] * right[8 + (column)]) +                         \
        (left[(row) * 4 + 3] * right[12 + (column)])

/** Multiply two column-addressed 4x4 matrices into the output matrix. */
void func_8026F898_de(f32 *out, f32 *left, f32 *right)
{
    MAT4_CELL(0, 0);
    MAT4_CELL(0, 1);
    MAT4_CELL(0, 2);
    MAT4_CELL(0, 3);
    MAT4_CELL(1, 0);
    MAT4_CELL(1, 1);
    MAT4_CELL(1, 2);
    MAT4_CELL(1, 3);
    MAT4_CELL(2, 0);
    MAT4_CELL(2, 1);
    MAT4_CELL(2, 2);
    MAT4_CELL(2, 3);
    MAT4_CELL(3, 0);
    MAT4_CELL(3, 1);
    MAT4_CELL(3, 2);
    MAT4_CELL(3, 3);
}
