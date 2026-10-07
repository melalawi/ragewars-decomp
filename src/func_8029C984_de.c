#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8029BBA0.h"
#include "types.h"
#include "stddef.h"
/* The values func_8029C984_de loads by address:
 * 0x800CAC34 = 1.0 (float, D_800CAC34 in this cartridge's tables)
 */
void func_8029BBB0_de(f32, f32 *, f32 *);
/* Build a rotation matrix from the three Euler angles in arg1. */
void func_8029C984_de(func_8029D984_S2 *arg0, Vec3 *arg1) {
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
    f32 p0;
    f32 p1;
    f32 p2;
    f32 p3;
    f32 p4;
    f32 p5;
    f32 p6;
    f32 p7;
    f32 p8;
    float temp;
    f32 p9;
    f32 p10;
    f32 p11;
    float temp_2;
    f32 p12;
    f32 p13;
    func_8029BBB0_de(arg1->x, &sp10, &sp14);
    func_8029BBB0_de(arg1->y, &sp18, &sp1C);
    func_8029BBB0_de(arg1->z, &sp20, &sp24);
    p0 = sp10 * sp20;
    p1 = sp10 * sp24;
    temp_2 = sp18 * p0;
    p2 = sp1C * sp24;
    p3 = sp20 * sp1C;
    p4 = sp14 * sp18;
    temp = sp18 * p1;
    p5 = sp14 * sp20;
    p6 = sp14 * sp24;
    p7 = sp18 * sp24;
    p8 = sp14 * sp1C;
    p9 = temp_2;
    p10 = temp;
    p11 = sp1C * p0;
    p12 = sp18 * sp20;
    p13 = sp1C * sp20;
    arg0->unk24 = -sp10;
    arg0->unk20 = p4;
    arg0->unk4 = p5;
    arg0->unk14 = p6;
    arg0->unkC = arg0->unk1C = arg0->unk2C = arg0->unk30 = arg0->unk34 = arg0->unk38 = 0.0f;
    arg0->unk28 = p8;
    arg0->unk3C = 1.0f;
    arg0->unk0 = p2 + p9;
    arg0->unk10 = p10 - p3;
    arg0->unk8 = p11 - p7;
    arg0->unk18 = p12 + p1 * sp1C;
}
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
/* Computes an arcsine-style angle from a clamped matrix element by polynomial approximation, then derives the other two Euler angles with atan2-style calls and writes the triple. Adapted from func_8029CAB4_de, with the source element, the zero test, the branch operands, and the stored order changed. */
extern f32 func_802B72B0_de(f32);
extern f32 func_8029B9FC_de(f32);
extern f32 func_8029C044_de(f32, f32);
void func_8029CC70_de(Input_func_8029CAB4_de *arg0, Vec3 *arg1) {
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
    if (D_800C5AD0_de < clamped) {
        clamped = D_800C5AD0_de;
    }
    if (clamped < *(&D_800C5AD0_de + 1)) {
        clamped = *(&D_800C5AD0_de + 1);
    }
    magnitude = -clamped;
    if (D_800C5AD0_de < magnitude) {
        magnitude = D_800C5AD0_de;
    }
    if (magnitude < *(&D_800C5AD0_de + 1)) {
        magnitude = *(&D_800C5AD0_de + 1);
    }
    negative = 0;
    if (magnitude < 0.0f) {
        negative = 1;
        magnitude = -magnitude;
    }
    polynomial = (((((((((magnitude * D_800C5AD8_de) + *(&D_800C5AD8_de + 1)) * magnitude)
        - D_800C5AE0_de) * magnitude) + *(&D_800C5AE0_de + 1)) * magnitude)
        - D_800C5AE8_de) * magnitude) + *(&D_800C5AE8_de + 1);
    delta = D_800C5AD0_de - magnitude;
    if (delta <= 0.0f) {
        root = 0.0f;
    } else {
        root = func_802B72B0_de(delta);
    }
    angle_temp = D_800C5AF0_de - (root * polynomial);
    if (negative != 0) {
        angle_temp = -angle_temp;
    }
    angle = angle_temp;
    test = func_8029B9FC_de(angle + D_800C5AF0_de);
    if ((0.0f < test) || (test < 0.0f)) {
        polynomial = func_8029C044_de(arg0->pad18, arg0->f28);
        out2 = func_8029C044_de(arg0->f04, arg0->f00);
    } else {
        polynomial = func_8029C044_de(-arg0->f24, arg0->f14);
        out2 = 0.0f;
    }
    arg1->x = polynomial;
    arg1->y = angle;
    arg1->z = out2;
}
