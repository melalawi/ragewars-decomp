/* Converts a vector of three angles into another angle triple via sine/cosine products, clamping and atan2-style calls, and writes it back. Adapted from func_8029C6E0, with the clamped product, the branch products, and the stored order of the second and third results changed. */
#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3f;

extern f32 D_800CAA18;
extern f32 D_800CAA1C;
extern f32 D_800CAA20;

extern void func_8029CBB0(f32 value, f32 *out0, f32 *out1);
extern f32 func_8029EE48(f32 value);
extern f32 func_8029ED18(f32 value);
extern f32 func_8029D044(f32 x, f32 y);

void func_8029C54C(Vec3f *arg0) {
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

    clamped = sp1C * sp20;
    if (D_800CAA18 < clamped) {
        clamped = D_800CAA18;
    }
    if (clamped < D_800CAA1C) {
        clamped = D_800CAA1C;
    }

    angle = func_8029EE48(clamped);
    test = func_8029ED18(angle);
    if ((D_800CAA20 < test) || (test < *(&D_800CAA20 + 1))) {
        f32 saved18 = sp18;
        f32 product = saved18 * sp20;
        f32 saved10 = sp10;
        f32 saved24 = sp24;
        f32 secondArg = sp1C * saved24;
        f32 t = sp14 * product;

        outX = func_8029D044((saved10 * saved24) - t,
                             (saved10 * product) + (sp14 * saved24));
        outZ = func_8029D044(saved18, secondArg);
    } else {
        { f32 t = sp10 * sp18 * sp24; outX = func_8029D044(sp10 * sp1C, (sp14 * sp20) - t); }
        outZ = 0.0f;
    }

    arg0->x = outX;
    arg0->y = outZ;
    arg0->z = angle;
}
