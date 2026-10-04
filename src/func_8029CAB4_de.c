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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C59D8_4 = 1.0f;
const float unbake_rodata_800C59DC_4 = (-1.0f);
const float unbake_rodata_800C59E0_4 = (-0.0116805276f);
const float unbake_rodata_800C59E4_4 = 0.0308918804f;
const float unbake_rodata_800C59E8_4 = 0.0501743034f;
const float unbake_rodata_800C59EC_4 = 0.0889789909f;
const float unbake_rodata_800C59F0_4 = 0.214598805f;
const float unbake_rodata_800C59F4_4 = 1.57079625f;
const float unbake_rodata_800C59F8_4 = 1.57079637f;
const float unbake_rodata_800C59FC_4 = 9.99999975e-05f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAC38_4 = 1.0f;
const float unbake_rodata_800CAC3C_4 = (-1.0f);
const float unbake_rodata_800CAC40_4 = (-0.0116805276f);
const float unbake_rodata_800CAC44_4 = 0.0308918804f;
const float unbake_rodata_800CAC48_4 = 0.0501743034f;
const float unbake_rodata_800CAC4C_4 = 0.0889789909f;
const float unbake_rodata_800CAC50_4 = 0.214598805f;
const float unbake_rodata_800CAC54_4 = 1.57079625f;
const float unbake_rodata_800CAC58_4 = 1.57079637f;
const float unbake_rodata_800CAC5C_4 = 9.99999975e-05f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5D48_4 = 1.0f;
const float unbake_rodata_800C5D4C_4 = (-1.0f);
const float unbake_rodata_800C5D50_4 = (-0.0116805276f);
const float unbake_rodata_800C5D54_4 = 0.0308918804f;
const float unbake_rodata_800C5D58_4 = 0.0501743034f;
const float unbake_rodata_800C5D5C_4 = 0.0889789909f;
const float unbake_rodata_800C5D60_4 = 0.214598805f;
const float unbake_rodata_800C5D64_4 = 1.57079625f;
const float unbake_rodata_800C5D68_4 = 1.57079637f;
const float unbake_rodata_800C5D6C_4 = 9.99999975e-05f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5D88_4 = 1.0f;
const float unbake_rodata_800C5D8C_4 = (-1.0f);
const float unbake_rodata_800C5D90_4 = (-0.0116805276f);
const float unbake_rodata_800C5D94_4 = 0.0308918804f;
const float unbake_rodata_800C5D98_4 = 0.0501743034f;
const float unbake_rodata_800C5D9C_4 = 0.0889789909f;
const float unbake_rodata_800C5DA0_4 = 0.214598805f;
const float unbake_rodata_800C5DA4_4 = 1.57079625f;
const float unbake_rodata_800C5DA8_4 = 1.57079637f;
const float unbake_rodata_800C5DAC_4 = 9.99999975e-05f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5AA8_4 = 1.0f;
const float unbake_rodata_800C5AAC_4 = (-1.0f);
const float unbake_rodata_800C5AB0_4 = (-0.0116805276f);
const float unbake_rodata_800C5AB4_4 = 0.0308918804f;
const float unbake_rodata_800C5AB8_4 = 0.0501743034f;
const float unbake_rodata_800C5ABC_4 = 0.0889789909f;
const float unbake_rodata_800C5AC0_4 = 0.214598805f;
const float unbake_rodata_800C5AC4_4 = 1.57079625f;
const float unbake_rodata_800C5AC8_4 = 1.57079637f;
const float unbake_rodata_800C5ACC_4 = 9.99999975e-05f;
#endif
