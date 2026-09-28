#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct Matrix {
    f32 m[4][4];
} Matrix;

typedef struct Source {
    u8 pad0[8];
    Vec3 position;
    u8 pad14[4];
    s32 *kind;
    Vec3 velocity;
    u8 pad28[0x10];
    s32 flags38;
    u8 pad3c[0x30];
    f32 height;
} Source;

typedef struct CollisionInfo CollisionInfo;

extern CollisionInfo D_80104338;

extern u8 *func_8024E690(Source *arg0);
extern void func_8024E6C8(u8 *arg0, Vec3 *arg1);
extern void func_80271FA4(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_80271FD8(Vec3 *result, Vec3 *left, Vec3 *right);
extern f32 func_8024E72C(u8 *arg0);
extern void func_80273744(Matrix *arg0, f32 arg1);
extern void func_802729B4(Matrix *arg0, Vec3 *arg1, Vec3 *arg2, s32 count);
extern void func_80243A80(Source *arg0, Vec3 arg1, CollisionInfo *arg2);
extern void func_80207730(u8 *arg0, Source *arg1);

void func_80213CF8(Source *arg0, void *arg1) {
    Vec3 saved_velocity;
    Vec3 position;
    Vec3 transformed;
    Matrix matrix;
    u8 *object;
    f32 amount;

    object = func_8024E690(arg0);
    if ((object != 0) && (**(s32 **)(object + 0x18) == 2)) {
        position = arg0->position;
        func_8024E6C8(object, &saved_velocity);
        if (!(arg0->flags38 & 0x1000) || (saved_velocity.y > 0.0f)) {
            func_80271FA4(&position, &position, &saved_velocity);
        }
        saved_velocity = arg0->velocity;
        arg0->velocity.x = 0.0f;
        arg0->velocity.y = 0.0f;
        arg0->velocity.z = 0.0f;
        func_80271FD8(&transformed, &position, (Vec3 *)(object + 8));
        amount = func_8024E72C(object);
        func_80273744(&matrix, amount);
        func_802729B4(&matrix, &transformed, &transformed, 1);
        func_80271FA4(&transformed, &transformed, (Vec3 *)(object + 8));
        func_80271FD8(&transformed, &transformed, &position);
        arg0->height += amount;
        func_80271FA4(&position, &position, &transformed);
        func_80243A80(arg0, position, &D_80104338);
        arg0->velocity = saved_velocity;
        if ((object[0] == 1) && (**(s32 **)(object + 0x18) == 2)) {
            func_80207730(object, arg0);
        }
    }
}
