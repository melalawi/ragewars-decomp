#include "span_1000/code_8026E5DC.h"
#include "types.h"

/* Transforms an axis-aligned box by a matrix: starts the new minimum and maximum at the matrix translation and, for every matrix entry, adds the smaller of its products with the old minimum and maximum to the new minimum and the larger to the new maximum. */



void func_8026EE20_de(f32 m[4][4], Box_func_8026EE20_de *box, Box_func_8026EE20_de *out) {
    f32 min[3];
    f32 max[3];
    f32 newMin[3];
    f32 newMax[3];
    f32 a;
    f32 b;
    s32 i;
    s32 j;

    min[0] = box->min[0];
    min[1] = box->min[1];
    min[2] = box->min[2];
    max[0] = box->max[0];
    max[1] = box->max[1];
    max[2] = box->max[2];
    newMin[0] = newMax[0] = m[3][0];
    newMin[1] = newMax[1] = m[3][1];
    newMin[2] = newMax[2] = m[3][2];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            a = m[j][i] * min[j];
            b = m[j][i] * max[j];
            if (a < b) {
                newMin[i] += a;
                newMax[i] += b;
            } else {
                newMin[i] += b;
                newMax[i] += a;
            }
        }
    }
    out->min[0] = newMin[0];
    out->min[1] = newMin[1];
    out->min[2] = newMin[2];
    out->max[0] = newMax[0];
    out->max[1] = newMax[1];
    out->max[2] = newMax[2];
}
