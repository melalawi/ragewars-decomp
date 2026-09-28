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
