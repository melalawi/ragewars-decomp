#include "common/types.h"
#include "span_1000/code_8024C444.h"
#include "span_C76B0/data.h"
#include "types.h"










extern f32 D_80111D2C;

extern void func_80272018_de(Vec3 *out, Vec3 *a, Vec3 *b);
extern void func_8027207C_de(Vec3 *arg0);
extern f32 func_802745D0_de(f32 arg0);
extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);

Vector4f *func_8024D728_de(Vector4f *out, Input_func_8024D728_de *input) {
    Vec3 source;
    Vec3 up;
    Vec3 axis;
    Vector4f result;
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
    source.y = D_800C3C98_de;
    source.z = 0.0f;
    goto source_ready;
input_source:
    source = input->direction;
source_ready:

    up.x = 0.0f;
    up.y = D_800C3C9C_de;
    up.z = 0.0f;
    func_80272018_de(&axis, &up, &source);
    func_8027207C_de(&axis);

    angle = func_802745D0_de((up.x * source.x) +
                          (up.y * source.y) +
                          (up.z * source.z));
    angle *= D_800C3CA0_de;
    scale = func_802B7130_de(angle);
    result.x = axis.x * scale;
    result.y = axis.y * scale;
    result.z = axis.z * scale;
    D_80111D2C = scale;
    result.w = func_802B6560_de(angle);

    *out = result;
    return out;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3BC8_4 = 1.0f;
const float unbake_rodata_800C3BCC_4 = 1.0f;
const float unbake_rodata_800C3BD0_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8D88_4 = 1.0f;
const float unbake_rodata_800C8D8C_4 = 1.0f;
const float unbake_rodata_800C8D90_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3F48_4 = 1.0f;
const float unbake_rodata_800C3F4C_4 = 1.0f;
const float unbake_rodata_800C3F50_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3F88_4 = 1.0f;
const float unbake_rodata_800C3F8C_4 = 1.0f;
const float unbake_rodata_800C3F90_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3C98_4 = 1.0f;
const float unbake_rodata_800C3C9C_4 = 1.0f;
const float unbake_rodata_800C3CA0_4 = 0.5f;
#endif
