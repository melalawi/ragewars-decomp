#include "common/types.h"
#include "span_1000/code_8029AC80.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Converts a vector of three angles into another angle triple via sine/cosine products, clamping and atan2-style calls, and writes it back. Adapted from func_8029B6E0_de, with the clamped product, the branch products, and the stored order of the second and third results changed. */






extern void func_8029BBB0_de(f32 value, f32 *out0, f32 *out1);
extern f32 func_8029DE48_de(f32 value);
extern f32 func_8029DD18_de(f32 value);
extern f32 func_8029C044_de(f32 x, f32 y);

void func_8029B54C_de(Vec3 *arg0) {
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

    clamped = sp1C * sp20;
    if (D_800C5888_de < clamped) {
        clamped = D_800C5888_de;
    }
    if (clamped < (-1.0f)) {
        clamped = (-1.0f);
    }

    angle = func_8029DE48_de(clamped);
    test = func_8029DD18_de(angle);
    if ((D_800C5890_de < test) || (test < *(&D_800C5890_de + 1))) {
        f32 saved18 = sp18;
        f32 product = saved18 * sp20;
        f32 saved10 = sp10;
        f32 saved24 = sp24;
        f32 secondArg = sp1C * saved24;
        f32 t = sp14 * product;

        outX = func_8029C044_de((saved10 * saved24) - t,
                             (saved10 * product) + (sp14 * saved24));
        outZ = func_8029C044_de(saved18, secondArg);
    } else {
        { f32 t = sp10 * sp18 * sp24; outX = func_8029C044_de(sp10 * sp1C, (sp14 * sp20) - t); }
        outZ = 0.0f;
    }

    arg0->x = outX;
    arg0->y = outZ;
    arg0->z = angle;
}
