#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern f32 D_800CAA28;
extern f32 D_800CAA30;

extern void func_8029CBB0(f32 value, f32 *out0, f32 *out1);
extern f32 func_8029EE48(f32 value);
extern f32 func_8029ED18(f32 value);
extern f32 func_8029D044(f32 x, f32 y);

void func_8029C6E0(Vec3f *arg0) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 outX;
    f32 outZ;
    f32 clamped;
    f32 angle;
    f32 test;

    func_8029CBB0(arg0->x, &sp10, &sp14);
    func_8029CBB0(arg0->y, &sp18, &sp1C);
    func_8029CBB0(arg0->z, &sp20, &sp24);

    clamped = -sp18 * sp24;
    if (D_800CAA28 < clamped) {
        clamped = D_800CAA28;
    }
    if (clamped < *(&D_800CAA28 + 1)) {
        clamped = *(&D_800CAA28 + 1);
    }

    angle = func_8029EE48(-clamped);
    test = func_8029ED18(angle);
    if ((D_800CAA30 < test) || (test < *(&D_800CAA30 + 1))) {
        f32 product = sp18 * sp20;
        f32 saved10 = sp10;
        f32 saved20 = sp1C;
        f32 saved21 = sp20;
        f32 secondArg = saved20 * sp24;

        outX = func_8029D044((sp14 * product) + (saved10 * saved20),
                             (-saved10 * product) + (saved20 * sp14));
        outZ = func_8029D044(saved21, secondArg);
    } else {
        outX = func_8029D044(-sp24 * sp10, sp24 * sp14);
        outZ = 0.0f;
    }

    arg0->x = outX;
    arg0->y = angle;
    arg0->z = outZ;
}
