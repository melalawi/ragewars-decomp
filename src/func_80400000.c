/* Computes the second derivatives of a natural cubic spline through n points (ys over xs) into out: builds the tridiagonal diagonal, interval widths and right-hand side in three scratch arrays from func_80252FFC, eliminates forward, zeroes out and back-substitutes unless a zero diagonal or width was replaced by one, then frees the arrays through func_80254784. */
#include "basetypes.h"

extern f32 *func_80252FFC(s32 size);
extern void func_80254784(f32 *block);

void func_80400000(s32 n, f32 *ys, f32 *xs, f32 *out) {
    f32 *diagonal;
    f32 *rhs;
    f32 *width;
    s32 singular;
    s32 i;

    singular = 0;
    if (n == 1) {
        out[0] = 0;
        return;
    }
    diagonal = func_80252FFC(n * 4);
    rhs = func_80252FFC(n * 4);
    width = func_80252FFC(n * 4);
    for (i = 1; i < n - 1; i++) {
        diagonal[i] = 2.0f * (xs[i + 1] - xs[i - 1]);
        if (diagonal[i] == 0.0f) {
            diagonal[i] = 1.0f;
            singular = 1;
        }
    }
    for (i = 0; i < n - 1; i++) {
        width[i] = xs[i + 1] - xs[i];
        if (width[i] == 0.0f) {
            width[i] = 1.0f;
            singular = 1;
        }
    }
    for (i = 1; i < n - 1; i++) {
        rhs[i] = ((ys[i + 1] - ys[i]) / width[i] - (ys[i] - ys[i - 1]) / width[i - 1]) * 6.0f;
    }
    for (i = 1; i < n - 2; i++) {
        rhs[i + 1] -= rhs[i] * width[i] / diagonal[i];
        diagonal[i + 1] -= width[i] * width[i] / diagonal[i];
    }
    for (i = 0; i < n; i++) {
        out[i] = 0;
    }
    if (!singular) {
        for (i = n - 2; i > 0; i--) {
            out[i] = (rhs[i] - width[i] * out[i + 1]) / diagonal[i];
        }
    }
    func_80254784(diagonal);
    func_80254784(rhs);
    func_80254784(width);
}
