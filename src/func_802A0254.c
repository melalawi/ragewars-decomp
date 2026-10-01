#define M2C_FIELD(base, type, offset) (*(type)((char *)(base) + (offset)))

#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    f32 m[4][4];
} Matrix4f;

extern void func_8029CBB0(f32 arg0, f32 *arg1, f32 *arg2);
extern f32 D_800CAE58;

void func_802A0254(volatile Matrix4f *arg0, Vec3f *arg1, f32 arg2) {
    f32 sine;
    f32 cosine;
    f32 cosine_value;
    f32 one;
    f32 one_minus_cosine;
    f32 tx;
    f32 ty;
    f32 tz;
    f32 txx;
    f32 txy;
    f32 txz;
    f32 tyy;
    f32 tyz;
    f32 tzz;
    f32 sx;
    f32 sy;
    f32 sz;
    f32 zero;

    func_8029CBB0(arg2, &sine, &cosine);
    cosine_value = cosine;
    one = M2C_FIELD(&D_800CAE58, f32 *, 4);
    one_minus_cosine = one - cosine_value;
    tx = one_minus_cosine * arg1->x;
    ty = one_minus_cosine * arg1->y;
    tz = one_minus_cosine * arg1->z;
    txx = tx * arg1->x;
    txy = tx * arg1->y;
    txz = tx * arg1->z;
    tyy = ty * arg1->y;
    tyz = ty * arg1->z;
    tzz = tz * arg1->z;
    sx = sine * arg1->x;
    sy = sine * arg1->y;
    sz = sine * arg1->z;
    zero = 0.0f;
    arg0->m[3][2] = zero;
    arg0->m[3][1] = zero;
    arg0->m[3][0] = zero;
    arg0->m[2][3] = zero;
    arg0->m[1][3] = zero;
    arg0->m[0][3] = zero;
    arg0->m[3][3] = one;
    arg0->m[0][0] = txx + cosine_value;
    arg0->m[0][1] = txy + sz;
    arg0->m[0][2] = txz - sy;
    arg0->m[1][0] = txy - sz;
    arg0->m[1][1] = tyy + cosine_value;
    arg0->m[1][2] = tyz + sx;
    arg0->m[2][0] = txz + sy;
    arg0->m[2][1] = tyz - sx;
    arg0->m[2][2] = tzz + cosine_value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5BFC_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAE5C_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F6C_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5FAC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5CCC_4 = 1.0f;
#endif
