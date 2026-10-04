#include "common/types.h"
#include "span_1000/code_80222E80.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
































extern f32 D_800CD738;
extern char D_8011BDC8;
extern char D_80140FC8;
extern char D_800C2950_de;

extern void func_80274870_de(f32 *, f32, f32);
extern f32 func_802746A0_de(f32, f32, f32);
extern f32 func_802747A0_de(f32, f32);
extern f32 func_802B7130_de(f32);
extern f32 func_802B6560_de(f32);
extern void func_80271F9C_de(Vec3 *, Vec3 *, f32);
extern void func_80271F34_de(Vec3 *, Vec3 *, Vec3 *);
extern s32 func_80286728_de(void *, void *);
extern void func_802227F4_de(void *, void *, s32);
extern void func_80237E80_de(void *, void *, void *);







void func_8022409C_de(void *arg0, void *arg1) {
    Vec3 direction;
    f32 held;
    f32 value;
    s32 flags;
    s32 result;
    void *data;

    if (((func_80224078_Arg0 *)arg0)->unk650 == 0 &&
        !(((func_80224078_Arg0 *)arg0)->unk6AC & 0xE000)) {
        ((func_80224078_Arg0 *)arg0)->unk650 = 1;
    }
    ((func_80224078_Arg0 *)arg0)->unk72C = 0;

    held = (&D_800C2960_de)[1];
    func_80274870_de(&((func_80224078_Arg1 *)(arg1))->unk6C,
                  ((func_80224078_Arg1 *)arg1)->unk6C +
                      (f32)((Controller_func_80217B3C_de *)((func_80224078_Arg0 *)arg0)->unk698)->x * D_800C2960_de,
                  held);
    func_80274870_de(&((func_80224078_Arg0 *)(arg0))->unk724,
                  ((func_80224078_Arg0 *)arg0)->unk724 +
                      (f32)-((Controller_func_80217B3C_de *)((func_80224078_Arg0 *)arg0)->unk698)->y * D_800C2968_de,
                  held);

    value = ((func_80224078_Arg0 *)arg0)->unk6A8;
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * (&D_800C2968_de)[1];
        if (value < 0.0f) {
            limit = -value * D_800C2970_de;
        } else {
            limit = value * D_800C2974_de;
        }
        ((func_80224078_Arg0 *)arg0)->unk6C0 =
            func_802746A0_de(((func_80224078_Arg0 *)arg0)->unk6C0, step, limit);
    } else {
        ((func_80224078_Arg0 *)arg0)->unk6C0 =
            func_802747A0_de(((func_80224078_Arg0 *)arg0)->unk6C0, D_800C2978_de);
    }

    value = ((func_80224078_Arg0 *)arg0)->unk6A4;
    if (value != 0.0f) {
        f32 step;
        f32 limit;
        step = value * D_800C297C_de;
        if (value < 0.0f) {
            limit = -value * D_800C2980_de;
        } else {
            limit = value * D_800C2984_de;
        }
        ((func_80224078_Arg0 *)arg0)->unk6C4 =
            func_802746A0_de(((func_80224078_Arg0 *)arg0)->unk6C4, step, limit);
    } else {
        ((func_80224078_Arg0 *)arg0)->unk6C4 =
            func_802747A0_de(((func_80224078_Arg0 *)arg0)->unk6C4, D_800C2988_de);
    }

    flags = ((func_80224078_Arg0 *)arg0)->unk6AC;
    if (flags & 0x10) {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_802746A0_de(((func_80224078_Arg1 *)arg1)->unk20, D_800C298C_de, 71.68f);
    } else if (flags & 0x2020) {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_802746A0_de(((func_80224078_Arg1 *)arg1)->unk20, D_800C2990_de, 71.68f);
    } else {
        ((func_80224078_Arg1 *)arg1)->unk20 =
            func_802747A0_de(((func_80224078_Arg1 *)arg1)->unk20, D_800C2994_de);
    }

    {
        f32 angle;
        angle = ((func_80224078_Arg1 *)arg1)->unk6C;
        angle += (held = D_800C2998_de);
        direction.x = ((func_80224078_Arg0 *)arg0)->unk6C0 * func_802B7130_de(angle);
    }
    direction.y = ((func_80224078_Arg1 *)arg1)->unk20;
    direction.z = ((func_80224078_Arg0 *)arg0)->unk6C0 *
                  func_802B6560_de(((func_80224078_Arg1 *)arg1)->unk6C + held);
    held = D_800C299C_de;
    direction.x += ((func_80224078_Arg0 *)arg0)->unk6C4 *
                   func_802B7130_de(((func_80224078_Arg1 *)arg1)->unk6C - held);
    direction.z += ((func_80224078_Arg0 *)arg0)->unk6C4 *
                   func_802B6560_de(((func_80224078_Arg1 *)arg1)->unk6C - held);

    func_80271F9C_de(&direction, &direction, D_800CD738);
    func_80271F34_de(&((func_80224078_Arg0 *)(arg0))->unk6E8,
                  &((func_80224078_Arg0 *)(arg0))->unk6E8, &direction);
    result = func_80286728_de(&D_8011BDC8, &((func_80224078_Arg1 *)arg1)->unk8);
    if (result != 0) {
        ((func_80224078_Arg1 *)arg1)->unk14 = result;
    }

    if (((func_80224078_Arg0 *)arg0)->unk650 == 1 &&
        (((func_80224078_Arg0 *)arg0)->unk6AC & 0xE000) == 0xE000 &&
        (((func_80224078_Arg0 *)arg0)->unk6B0 & 0xE000)) {
        func_802227F4_de(arg0, arg1, 2);
        data = ((func_80224078_Arg0 *)arg0)->unk5DC;
        if (data != 0) {
            func_80237E80_de(&D_80140FC8, data, &D_800C2950_de);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2890_4 = 0.00436332356f;
const float unbake_rodata_800C2894_4 = 0.899999976f;
const float unbake_rodata_800C2898_4 = 0.00218166178f;
const float unbake_rodata_800C289C_4 = 8.53333282f;
const float unbake_rodata_800C28A0_4 = 102.399994f;
const float unbake_rodata_800C28A4_4 = 102.399994f;
const float unbake_rodata_800C28A8_4 = 17.0666656f;
const float unbake_rodata_800C28AC_4 = 8.53333282f;
const float unbake_rodata_800C28B0_4 = 102.399994f;
const float unbake_rodata_800C28B4_4 = 102.399994f;
const float unbake_rodata_800C28B8_4 = 17.0666656f;
const float unbake_rodata_800C28BC_4 = 5.97333336f;
const float unbake_rodata_800C28C0_4 = (-5.97333336f);
const float unbake_rodata_800C28C4_4 = 11.9466667f;
const float unbake_rodata_800C28C8_4 = 3.14159274f;
const float unbake_rodata_800C28CC_4 = 1.57079637f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7A50_4 = 0.00436332356f;
const float unbake_rodata_800C7A54_4 = 0.899999976f;
const float unbake_rodata_800C7A58_4 = 0.00218166178f;
const float unbake_rodata_800C7A5C_4 = 8.53333282f;
const float unbake_rodata_800C7A60_4 = 102.399994f;
const float unbake_rodata_800C7A64_4 = 102.399994f;
const float unbake_rodata_800C7A68_4 = 17.0666656f;
const float unbake_rodata_800C7A6C_4 = 8.53333282f;
const float unbake_rodata_800C7A70_4 = 102.399994f;
const float unbake_rodata_800C7A74_4 = 102.399994f;
const float unbake_rodata_800C7A78_4 = 17.0666656f;
const float unbake_rodata_800C7A7C_4 = 5.97333336f;
const float unbake_rodata_800C7A80_4 = (-5.97333336f);
const float unbake_rodata_800C7A84_4 = 11.9466667f;
const float unbake_rodata_800C7A88_4 = 3.14159274f;
const float unbake_rodata_800C7A8C_4 = 1.57079637f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2C00_4 = 0.00436332356f;
const float unbake_rodata_800C2C04_4 = 0.899999976f;
const float unbake_rodata_800C2C08_4 = 0.00218166178f;
const float unbake_rodata_800C2C0C_4 = 8.53333282f;
const float unbake_rodata_800C2C10_4 = 102.399994f;
const float unbake_rodata_800C2C14_4 = 102.399994f;
const float unbake_rodata_800C2C18_4 = 17.0666656f;
const float unbake_rodata_800C2C1C_4 = 8.53333282f;
const float unbake_rodata_800C2C20_4 = 102.399994f;
const float unbake_rodata_800C2C24_4 = 102.399994f;
const float unbake_rodata_800C2C28_4 = 17.0666656f;
const float unbake_rodata_800C2C2C_4 = 5.97333336f;
const float unbake_rodata_800C2C30_4 = (-5.97333336f);
const float unbake_rodata_800C2C34_4 = 11.9466667f;
const float unbake_rodata_800C2C38_4 = 3.14159274f;
const float unbake_rodata_800C2C3C_4 = 1.57079637f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2C40_4 = 0.00436332356f;
const float unbake_rodata_800C2C44_4 = 0.899999976f;
const float unbake_rodata_800C2C48_4 = 0.00218166178f;
const float unbake_rodata_800C2C4C_4 = 8.53333282f;
const float unbake_rodata_800C2C50_4 = 102.399994f;
const float unbake_rodata_800C2C54_4 = 102.399994f;
const float unbake_rodata_800C2C58_4 = 17.0666656f;
const float unbake_rodata_800C2C5C_4 = 8.53333282f;
const float unbake_rodata_800C2C60_4 = 102.399994f;
const float unbake_rodata_800C2C64_4 = 102.399994f;
const float unbake_rodata_800C2C68_4 = 17.0666656f;
const float unbake_rodata_800C2C6C_4 = 5.97333336f;
const float unbake_rodata_800C2C70_4 = (-5.97333336f);
const float unbake_rodata_800C2C74_4 = 11.9466667f;
const float unbake_rodata_800C2C78_4 = 3.14159274f;
const float unbake_rodata_800C2C7C_4 = 1.57079637f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2960_4 = 0.00436332356f;
const float unbake_rodata_800C2964_4 = 0.899999976f;
const float unbake_rodata_800C2968_4 = 0.00218166178f;
const float unbake_rodata_800C296C_4 = 8.53333282f;
const float unbake_rodata_800C2970_4 = 102.399994f;
const float unbake_rodata_800C2974_4 = 102.399994f;
const float unbake_rodata_800C2978_4 = 17.0666656f;
const float unbake_rodata_800C297C_4 = 8.53333282f;
const float unbake_rodata_800C2980_4 = 102.399994f;
const float unbake_rodata_800C2984_4 = 102.399994f;
const float unbake_rodata_800C2988_4 = 17.0666656f;
const float unbake_rodata_800C298C_4 = 5.97333336f;
const float unbake_rodata_800C2990_4 = (-5.97333336f);
const float unbake_rodata_800C2994_4 = 11.9466667f;
const float unbake_rodata_800C2998_4 = 3.14159274f;
const float unbake_rodata_800C299C_4 = 1.57079637f;
#endif
