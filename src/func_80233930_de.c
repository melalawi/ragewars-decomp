#include "common/types.h"
#include "span_1000/code_80232B44.h"
#include "span_1000/code_8026565C.h"
#include "span_C76B0/data.h"
#include "types.h"












extern void func_80271F68_de(Vec3 *, Vec3 *, Vec3 *);
extern f32 func_802B72B0_de(f32);

extern f32 func_802B7130_de(f32);
extern f32 func_80274A90_de(f32, f32);

void func_80233930_de(Effect33920 *arg0, u32 x, u32 y, u32 z, Vec3 *out) {
    f32 distance;
    f32 value;
    AxisWave *wave;

    func_80271F68_de((Vec3 *)&x, (Vec3 *)&x, &arg0->origin);
    distance = func_802B72B0_de((*(f32 *)&x * *(f32 *)&x) +
                             (*(f32 *)&y * *(f32 *)&y) +
                             (*(f32 *)&z * *(f32 *)&z));
    if (distance < arg0->radius) {
        distance = func_80265714_de(D_800C3090_de - (distance / arg0->radius));

        wave = &arg0->x;
        if (wave->kind == 0) goto x_sine;
        if (wave->kind != 1) goto x_zero;
        value = func_802B7130_de(wave->rate * D_800C3094_de) * wave->scale;
        goto x_done;
x_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto x_done;
x_zero:
        value = 0.0f;
x_done:
        out->x += value * distance;

        wave = &arg0->y;
        if (wave->kind == 0) goto y_sine;
        if (wave->kind != 1) goto y_zero;
        value = func_802B7130_de(wave->rate * D_800C3098_de) * wave->scale;
        goto y_done;
y_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto y_done;
y_zero:
        value = 0.0f;
y_done:
        out->y += value * distance;

        wave = &arg0->z;
        if (wave->kind == 0) goto z_sine;
        if (wave->kind != 1) goto z_zero;
        value = func_802B7130_de(wave->rate * D_800C309C_de) * wave->scale;
        goto z_done;
z_sine:
        value = func_80274A90_de(-wave->scale, wave->scale);
        goto z_done;
z_zero:
        value = 0.0f;
z_done:
        out->z += value * distance;
    }
}
