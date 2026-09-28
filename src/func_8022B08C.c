#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Matrix {
    f32 m[4][4];
} Matrix;

extern void func_80226DAC(char *, Matrix *);
extern void func_80272908(void *, void *, void *);

void func_8022B08C(void *arg0, Vec3 *arg1) {
    Vec3 input;
    Matrix matrix;
    Vec3 *input_ptr;
    Matrix *matrix_ptr;

    input = *arg1;
    input_ptr = &input;
    matrix_ptr = *(Matrix **)((char *)arg0 + 0x5DC);

    if (matrix_ptr != 0) {
        matrix_ptr = (Matrix *)((char *)matrix_ptr + 0x160);
    } else {
        func_80226DAC(arg0, &matrix);
        matrix_ptr = &matrix;
    }
    func_80272908(matrix_ptr, input_ptr, arg1);
}
