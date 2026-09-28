#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

typedef struct {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec4;

typedef struct {
    u8 state;
    u8 pad[0x43];
    Vec3 direction;
} Input;

extern f32 D_800C8D88;
extern f32 D_800C8D8C;
extern f32 D_800C8D90;
extern f32 D_80115DEC;

extern void func_80272088(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_802720EC(Vec3 *arg0);
extern f32 func_80274640(f32 arg0);
extern f32 func_802BC200(f32 arg0);
extern f32 func_802BB630(f32 arg0);

Vec4 *func_8024D718(Vec4 *out, Input *input) {
    Vec3 source;
    Vec3 up;
    Vec3 axis;
    Vec4 result;
    f32 angle;
    f32 scale;
    int state;

    state = input->state;
    if (state == 0) {
        goto default_source;
    }
    if (state < 0) {
        goto default_source;
    }
    if (state < 4) {
        goto input_source;
    }
default_source:
    source.x = 0.0f;
    source.y = D_800C8D88;
    source.z = 0.0f;
    goto source_ready;
input_source:
    source = input->direction;
source_ready:

    up.x = 0.0f;
    up.y = D_800C8D8C;
    up.z = 0.0f;
    func_80272088(&axis, &up, &source);
    func_802720EC(&axis);

    angle = func_80274640((up.x * source.x) +
                          (up.y * source.y) +
                          (up.z * source.z));
    angle *= D_800C8D90;
    scale = func_802BC200(angle);
    result.x = axis.x * scale;
    result.y = axis.y * scale;
    result.z = axis.z * scale;
    D_80115DEC = scale;
    result.w = func_802BB630(angle);

    *out = result;
    return out;
}
