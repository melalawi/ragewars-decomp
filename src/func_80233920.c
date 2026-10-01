#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct AxisWave {
    s32 kind;
    s32 unk04;
    s32 unk08;
    f32 scale;
    f32 rate;
} AxisWave;

typedef struct Effect33920 {
    s32 unk00;
    s32 unk04;
    Vec3 origin;
    f32 radius;
    AxisWave x;
    AxisWave y;
    AxisWave z;
} Effect33920;

extern f32 D_800C8180;
extern f32 D_800C8184;
extern f32 D_800C8188;
extern f32 D_800C818C;

extern void func_80271FD8(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802BC380(f32);
extern f32 func_80265734(f32);
extern f32 func_802BC200(f32);
extern f32 func_80274B00(f32, f32);

void func_80233920(Effect33920 *arg0, u32 x, u32 y, u32 z, Vec3 *out) {
    f32 distance;
    f32 value;
    AxisWave *wave;

    func_80271FD8((Vec3 *)&x, (Vec3 *)&x, &arg0->origin);
    distance = func_802BC380((*(f32 *)&x * *(f32 *)&x) +
                             (*(f32 *)&y * *(f32 *)&y) +
                             (*(f32 *)&z * *(f32 *)&z));
    if (distance < arg0->radius) {
        distance = func_80265734(D_800C8180 - (distance / arg0->radius));

        wave = &arg0->x;
        if (wave->kind == 0) goto x_sine;
        if (wave->kind != 1) goto x_zero;
        value = func_802BC200(wave->rate * D_800C8184) * wave->scale;
        goto x_done;
x_sine:
        value = func_80274B00(-wave->scale, wave->scale);
        goto x_done;
x_zero:
        value = 0.0f;
x_done:
        out->x += value * distance;

        wave = &arg0->y;
        if (wave->kind == 0) goto y_sine;
        if (wave->kind != 1) goto y_zero;
        value = func_802BC200(wave->rate * D_800C8188) * wave->scale;
        goto y_done;
y_sine:
        value = func_80274B00(-wave->scale, wave->scale);
        goto y_done;
y_zero:
        value = 0.0f;
y_done:
        out->y += value * distance;

        wave = &arg0->z;
        if (wave->kind == 0) goto z_sine;
        if (wave->kind != 1) goto z_zero;
        value = func_802BC200(wave->rate * D_800C818C) * wave->scale;
        goto z_done;
z_sine:
        value = func_80274B00(-wave->scale, wave->scale);
        goto z_done;
z_zero:
        value = 0.0f;
z_done:
        out->z += value * distance;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2FC0_4 = 1.0f;
const float unbake_rodata_800C2FC4_4 = 0.0174532942f;
const float unbake_rodata_800C2FC8_4 = 0.0174532942f;
const float unbake_rodata_800C2FCC_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8180_4 = 1.0f;
const float unbake_rodata_800C8184_4 = 0.0174532942f;
const float unbake_rodata_800C8188_4 = 0.0174532942f;
const float unbake_rodata_800C818C_4 = 0.0174532942f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3340_4 = 1.0f;
const float unbake_rodata_800C3344_4 = 0.0174532942f;
const float unbake_rodata_800C3348_4 = 0.0174532942f;
const float unbake_rodata_800C334C_4 = 0.0174532942f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3380_4 = 1.0f;
const float unbake_rodata_800C3384_4 = 0.0174532942f;
const float unbake_rodata_800C3388_4 = 0.0174532942f;
const float unbake_rodata_800C338C_4 = 0.0174532942f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3090_4 = 1.0f;
const float unbake_rodata_800C3094_4 = 0.0174532942f;
const float unbake_rodata_800C3098_4 = 0.0174532942f;
const float unbake_rodata_800C309C_4 = 0.0174532942f;
#endif
