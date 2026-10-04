#include "common/types.h"
#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"






extern void func_8029BBB0_de(f32 value, f32 *out0, f32 *out1);
extern f32 func_8029DE48_de(f32 value);
extern f32 func_8029DD18_de(f32 value);
extern f32 func_8029C044_de(f32 x, f32 y);

void func_8029B6E0_de(Vec3 *arg0) {
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

    func_8029BBB0_de(arg0->x, &sp10, &sp14);
    func_8029BBB0_de(arg0->y, &sp18, &sp1C);
    func_8029BBB0_de(arg0->z, &sp20, &sp24);

    clamped = -sp18 * sp24;
    if (D_800C5898_de < clamped) {
        clamped = D_800C5898_de;
    }
    if (clamped < *(&D_800C5898_de + 1)) {
        clamped = *(&D_800C5898_de + 1);
    }

    angle = func_8029DE48_de(-clamped);
    test = func_8029DD18_de(angle);
    if ((D_800C58A0_de < test) || (test < *(&D_800C58A0_de + 1))) {
        f32 product = sp18 * sp20;
        f32 saved10 = sp10;
        f32 saved20 = sp1C;
        f32 saved21 = sp20;
        f32 secondArg = saved20 * sp24;

        outX = func_8029C044_de((sp14 * product) + (saved10 * saved20),
                             (-saved10 * product) + (saved20 * sp14));
        outZ = func_8029C044_de(saved21, secondArg);
    } else {
        outX = func_8029C044_de(-sp24 * sp10, sp24 * sp14);
        outZ = 0.0f;
    }

    arg0->x = outX;
    arg0->y = angle;
    arg0->z = outZ;
}
