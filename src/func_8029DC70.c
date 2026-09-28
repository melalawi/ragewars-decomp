/* Computes an arcsine-style angle from a clamped matrix element by polynomial approximation, then derives the other two Euler angles with atan2-style calls and writes the triple. Adapted from func_8029DAB4, with the source element, the zero test, the branch operands, and the stored order changed. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

typedef struct {
    f32 f00;
    f32 f04;
    f32 f08;
    f32 pad0C;
    f32 pad10;
    f32 f14;
    f32 f18;
    f32 pad1C;
    f32 f20;
    f32 f24;
    f32 f28;
} Input;

extern f32 D_800CAC60;
extern f32 D_800CAC68;
extern f32 D_800CAC70;
extern f32 D_800CAC78;
extern f32 D_800CAC80;
extern f32 func_802BC380(f32);
extern f32 func_8029C9FC(f32);
extern f32 func_8029D044(f32, f32);

void func_8029DC70(Input *arg0, Vec3f *arg1) {
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

    clamped = arg0->f08;
    if (D_800CAC60 < clamped) {
        clamped = D_800CAC60;
    }
    if (clamped < *(&D_800CAC60 + 1)) {
        clamped = *(&D_800CAC60 + 1);
    }
    magnitude = -clamped;
    if (D_800CAC60 < magnitude) {
        magnitude = D_800CAC60;
    }
    if (magnitude < *(&D_800CAC60 + 1)) {
        magnitude = *(&D_800CAC60 + 1);
    }
    negative = 0;
    if (magnitude < 0.0f) {
        negative = 1;
        magnitude = -magnitude;
    }
    polynomial = (((((((((magnitude * D_800CAC68) + *(&D_800CAC68 + 1)) * magnitude)
        - D_800CAC70) * magnitude) + *(&D_800CAC70 + 1)) * magnitude)
        - D_800CAC78) * magnitude) + *(&D_800CAC78 + 1);
    delta = D_800CAC60 - magnitude;
    if (delta <= 0.0f) {
        root = 0.0f;
    } else {
        root = func_802BC380(delta);
    }
    angle_temp = D_800CAC80 - (root * polynomial);
    if (negative != 0) {
        angle_temp = -angle_temp;
    }
    angle = angle_temp;
    test = func_8029C9FC(angle + D_800CAC80);
    if ((0.0f < test) || (test < 0.0f)) {
        polynomial = func_8029D044(arg0->f18, arg0->f28);
        out2 = func_8029D044(arg0->f04, arg0->f00);
    } else {
        polynomial = func_8029D044(-arg0->f24, arg0->f14);
        out2 = 0.0f;
    }
    arg1->x = polynomial;
    arg1->y = angle;
    arg1->z = out2;
}
