#include "basetypes.h"

/* Builds a look-at view matrix from an eye position, a target and an up vector: the forward axis is the normalised direction from the target back to the eye, the right axis the normalised cross product of up and forward, the true up axis their normalised cross product, each written as a matrix column with the negated eye projections as the translation row, falling back to the x axis when forward or right degenerate. */

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 m[4][4];
} Matrix;

extern void func_80271FD8(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_80272088(Vec3 *out, Vec3 *a, Vec3 *b);
extern f32 func_802BC380(f32);

void func_8026F3D8(Matrix *mtx, Vec3 *eye, Vec3 *target, Vec3 *up) {
    Vec3 upward;
    Vec3 forward;
    Vec3 right;
    f32 length;

    func_80271FD8(&forward, target, eye);
    length = func_802BC380(forward.x * forward.x + forward.y * forward.y + forward.z * forward.z);
    if (0.001f < length) {
        length = -1.0f / length;
        forward.x *= length;
        forward.y *= length;
        forward.z *= length;
    } else {
        forward.x = 1.0f;
        forward.y = 0.0f;
        forward.z = 0.0f;
    }

    func_80272088(&right, up, &forward);
    length = func_802BC380(right.x * right.x + right.y * right.y + right.z * right.z);
    if (0.001f < length) {
        length = 1.0f / length;
        right.x *= length;
        right.y *= length;
        right.z *= length;
    } else {
        right.x = 1.0f;
        right.y = 0.0f;
        right.z = 0.0f;
    }

    func_80272088(&upward, &forward, &right);
    length = 1.0f / func_802BC380(upward.x * upward.x + upward.y * upward.y + upward.z * upward.z);
    upward.x *= length;
    upward.y *= length;
    upward.z *= length;

    mtx->m[0][0] = right.x;
    mtx->m[1][0] = right.y;
    mtx->m[2][0] = right.z;
    mtx->m[3][0] = -(eye->x * right.x + eye->y * right.y + eye->z * right.z);
    mtx->m[0][1] = upward.x;
    mtx->m[1][1] = upward.y;
    mtx->m[2][1] = upward.z;
    mtx->m[3][1] = -(eye->x * upward.x + eye->y * upward.y + eye->z * upward.z);
    mtx->m[0][2] = forward.x;
    mtx->m[1][2] = forward.y;
    mtx->m[2][2] = forward.z;
    mtx->m[3][2] = -(eye->x * forward.x + eye->y * forward.y + eye->z * forward.z);
    mtx->m[0][3] = 0.0f;
    mtx->m[1][3] = 0.0f;
    mtx->m[2][3] = 0.0f;
    mtx->m[3][3] = 1.0f;
}
