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

typedef struct func_80213CF8_S1 func_80213CF8_S1;
struct func_80213CF8_S1 {
    char pad0[0x8];
    Vec3 unk8;
    char pad8[0x18 - 0x8 - sizeof(Vec3)];
    s32* unk18;
};

void func_80213CF8(Source *arg0, void *arg1) {
    Vec3 saved_velocity;
    Vec3 position;
    Vec3 transformed;
    Matrix matrix;
    u8 *object;
    f32 amount;

    object = func_8024E690(arg0);
    if ((object != 0) && (*((func_80213CF8_S1 *)(object))->unk18 == 2)) {
        position = arg0->position;
        func_8024E6C8(object, &saved_velocity);
        if (!(arg0->flags38 & 0x1000) || (saved_velocity.y > 0.0f)) {
            func_80271FA4(&position, &position, &saved_velocity);
        }
        saved_velocity = arg0->velocity;
        arg0->velocity.x = 0.0f;
        arg0->velocity.y = 0.0f;
        arg0->velocity.z = 0.0f;
        func_80271FD8(&transformed, &position, &((func_80213CF8_S1 *)(object))->unk8);
        amount = func_8024E72C(object);
        func_80273744(&matrix, amount);
        func_802729B4(&matrix, &transformed, &transformed, 1);
        func_80271FA4(&transformed, &transformed, &((func_80213CF8_S1 *)(object))->unk8);
        func_80271FD8(&transformed, &transformed, &position);
        arg0->height += amount;
        func_80271FA4(&position, &position, &transformed);
        func_80243A80(arg0, position, &D_80104338);
        arg0->velocity = saved_velocity;
        if ((object[0] == 1) && (*((func_80213CF8_S1 *)(object))->unk18 == 2)) {
            func_80207730(object, arg0);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4310_4 = 0.5f;
const float unbake_rodata_800C4314_4 = 0.0399999991f;
const float unbake_rodata_800C4318_4 = 1.0f;
const float unbake_rodata_800C431C_4 = 1.0f;
const float unbake_rodata_800C4320_4 = 1.0f;
const float unbake_rodata_800C4324_4 = 1.0f;
const float unbake_rodata_800C4328_4 = 0.0399999991f;
const float unbake_rodata_800C432C_4 = 102.399994f;
const float unbake_rodata_800C4330_4 = 0.666666985f;
const float unbake_rodata_800C4334_4 = 0.25f;
const float unbake_rodata_800C4338_4 = 75.0f;
const float unbake_rodata_800C433C_4 = 11.0f;
const float unbake_rodata_800C4340_4 = 0.666666985f;
const float unbake_rodata_800C4344_4 = 0.25f;
const float unbake_rodata_800C4348_4 = 75.0f;
const float unbake_rodata_800C434C_4 = 11.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C94D0_4 = 0.5f;
const float unbake_rodata_800C94D4_4 = 0.0399999991f;
const float unbake_rodata_800C94D8_4 = 1.0f;
const float unbake_rodata_800C94DC_4 = 1.0f;
const float unbake_rodata_800C94E0_4 = 1.0f;
const float unbake_rodata_800C94E4_4 = 1.0f;
const float unbake_rodata_800C94E8_4 = 0.0399999991f;
const float unbake_rodata_800C94EC_4 = 102.399994f;
const float unbake_rodata_800C94F0_4 = 0.666666985f;
const float unbake_rodata_800C94F4_4 = 0.25f;
const float unbake_rodata_800C94F8_4 = 75.0f;
const float unbake_rodata_800C94FC_4 = 11.0f;
const float unbake_rodata_800C9500_4 = 0.666666985f;
const float unbake_rodata_800C9504_4 = 0.25f;
const float unbake_rodata_800C9508_4 = 75.0f;
const float unbake_rodata_800C950C_4 = 11.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4408_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4420_4 = 0.333333343f;
const float unbake_rodata_800C4424_4 = 0.5f;
const double unbake_rodata_800C4428_8 = 4294967296.0;
const float unbake_rodata_800C4430_4 = 1.0f;
const float unbake_rodata_800C4434_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C43B0_4 = 2.14748365e+09f;
#endif
