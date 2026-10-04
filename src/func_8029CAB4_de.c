#include "common/types.h"
#include "span_1000/code_8029D984.h"
#include "span_C76B0/data.h"
#include "types.h"










extern f32 func_802B72B0_de(f32);
extern f32 func_8029B9FC_de(f32);
extern f32 func_8029C044_de(f32, f32);

void func_8029CAB4_de(Input_func_8029CAB4_de *arg0, Vec3 *arg1) {
    f32 clamped;
    f32 magnitude;
    f32 polynomial;
    f32 root;
    f32 delta;
    f32 test;
    f32 angle;
    f32 angle_temp;
    f32 out2;
    s32 negative;

    clamped = arg0->f24;
    if (D_800C5AA8_de < clamped) {
        clamped = D_800C5AA8_de;
    }
    if (clamped < *(&D_800C5AA8_de + 1)) {
        clamped = *(&D_800C5AA8_de + 1);
    }
    magnitude = -clamped;
    if (D_800C5AA8_de < magnitude) {
        magnitude = D_800C5AA8_de;
    }
    if (magnitude < *(&D_800C5AA8_de + 1)) {
        magnitude = *(&D_800C5AA8_de + 1);
    }
    negative = 0;
    if (magnitude < 0.0f) {
        negative = 1;
        magnitude = -magnitude;
    }
    polynomial = (((((((((magnitude * D_800C5AB0_de) + *(&D_800C5AB0_de + 1)) * magnitude)
        - D_800C5AB8_de) * magnitude) + *(&D_800C5AB8_de + 1)) * magnitude)
        - D_800C5AC0_de) * magnitude) + *(&D_800C5AC0_de + 1);
    delta = D_800C5AA8_de - magnitude;
    if (delta <= 0.0f) {
        root = 0.0f;
    } else {
        root = func_802B72B0_de(delta);
    }
    angle_temp = D_800C5AC8_de - (root * polynomial);
    if (negative != 0) {
        angle_temp = -angle_temp;
    }
    angle = angle_temp;
    test = func_8029B9FC_de(angle + D_800C5AC8_de);
    if ((*(&D_800C5AC8_de + 1) < test) || (test < *(&D_800C5AC8_de + 1))) {
        polynomial = func_8029C044_de(arg0->f20, arg0->f28);
        out2 = func_8029C044_de(arg0->f04, arg0->f14);
    } else {
        polynomial = 0.0f;
        out2 = func_8029C044_de(arg0->f08, arg0->f00);
    }
    arg1->x = angle;
    arg1->y = polynomial;
    arg1->z = out2;
}
