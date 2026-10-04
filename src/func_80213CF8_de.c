#include "common/types.h"
#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"







typedef struct CollisionInfo CollisionInfo;

extern CollisionInfo D_80100338;

extern u8 *func_8024E6A0_de(Source *arg0);
extern void func_8024E6D8_de(u8 *arg0, Vec3 *arg1);
extern void func_80271F34_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern void func_80271F68_de(Vec3 *result, Vec3 *left, Vec3 *right);
extern f32 func_8024E73C_de(u8 *arg0);
extern void func_802736D4_de(Matrix_func_80213CF8_de *arg0, f32 arg1);
extern void func_80272944_de(Matrix_func_80213CF8_de *arg0, Vec3 *arg1, Vec3 *arg2, s32 count);
extern void func_80243A90_de(Source *arg0, Vec3 arg1, CollisionInfo *arg2);
extern void func_80207730_de(u8 *arg0, Source *arg1);




void func_80213CF8_de(Source *arg0, void *arg1) {
    Vec3 saved_velocity;
    Vec3 position;
    Vec3 transformed;
    Matrix_func_80213CF8_de matrix;
    u8 *object;
    f32 amount;

    object = func_8024E6A0_de(arg0);
    if ((object != 0) && (*((func_80213CF8_S1 *)(object))->unk18 == 2)) {
        position = arg0->position;
        func_8024E6D8_de(object, &saved_velocity);
        if (!(arg0->flags38 & 0x1000) || (saved_velocity.y > 0.0f)) {
            func_80271F34_de(&position, &position, &saved_velocity);
        }
        saved_velocity = arg0->velocity;
        arg0->velocity.x = 0.0f;
        arg0->velocity.y = 0.0f;
        arg0->velocity.z = 0.0f;
        func_80271F68_de(&transformed, &position, &((func_80213CF8_S1 *)(object))->unk8);
        amount = func_8024E73C_de(object);
        func_802736D4_de(&matrix, amount);
        func_80272944_de(&matrix, &transformed, &transformed, 1);
        func_80271F34_de(&transformed, &transformed, &((func_80213CF8_S1 *)(object))->unk8);
        func_80271F68_de(&transformed, &transformed, &position);
        arg0->height += amount;
        func_80271F34_de(&position, &position, &transformed);
        func_80243A90_de(arg0, position, &D_80100338);
        arg0->velocity = saved_velocity;
        if ((object[0] == 1) && (*((func_80213CF8_S1 *)(object))->unk18 == 2)) {
            func_80207730_de(object, arg0);
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
