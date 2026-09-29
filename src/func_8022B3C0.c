#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Matrix {
    f32 m[16];
} Matrix;

extern void func_80273208(Matrix *, Vec3 *);
extern void func_8027200C(Vec3 *out, Vec3 *in, f32 scale);
extern void func_80271FA4(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_802734B8(Matrix *object, f32 x, f32 y, f32 z);
extern void func_80273DDC(Matrix *object);
extern void func_802702EC(Matrix *src, void *dst);

typedef struct func_8022B3C0_S1 func_8022B3C0_S1;
struct func_8022B3C0_S1 {
    char pad0[0x1200];
    Vec3 unk1200;
};

void func_8022B3C0(char *arg0, s32 arg1, Vec3 *arg2) {
    Matrix matrix;
    Vec3 offset;

    func_80273208(&matrix, arg2);
    func_8027200C(&offset, arg2, 5.12f);
    func_80271FA4(&offset, &offset, &((func_8022B3C0_S1 *)(arg0))->unk1200);
    func_802734B8(&matrix, offset.x, offset.y, offset.z);
    func_80273DDC(&matrix);
    func_802702EC(&matrix, (char *)arg0 + 0x1600);
}
