#include "basetypes.h"

/* Builds an orientation matrix whose third row is the given direction: the first row is the cross product of the up vector D_800C97B4 with it, or the X axis when the direction is within the vertical thresholds, the second row is the cross product of the first row with it, all three rows are normalised and the rest is identity. */

typedef struct Vec3f {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct Mtx {
    Vec3f right;
    f32 m03;
    Vec3f up;
    f32 m13;
    Vec3f forward;
    f32 m23;
    f32 m30;
    f32 m31;
    f32 m32;
    f32 m33;
} Mtx;

extern Vec3f D_800C97B0[2];
extern f32 D_800C99D0;
extern f32 D_800C99D8;
extern f32 D_800C99DC;
extern f32 D_800C99E0;
extern void func_80272088(Vec3f *out, Vec3f *a, Vec3f *b);
extern void func_802720EC(Vec3f *v);

void func_80273208(Mtx *m, Vec3f *direction) {
    Vec3f up;

    up = *(Vec3f *)((char *)D_800C97B0 + 4);
    if (direction->y < 0.0f ? *(&D_800C99D0 + 1) <= -direction->y : D_800C99D8 <= direction->y) {
        m->right.y = 0;
        m->right.z = 0;
        m->right.x = D_800C99DC;
    } else {
        func_80272088(&m->right, &up, direction);
    }
    func_80272088(&m->up, &m->right, direction);
    m->forward = *direction;
    func_802720EC(&m->right);
    func_802720EC(&m->up);
    func_802720EC(&m->forward);
    m->m03 = m->m13 = m->m23 = m->m30 = m->m31 = m->m32 = 0.0f;
    m->m33 = D_800C99E0;
}
