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
    f32 pad18;
    f32 pad1C;
    f32 f20;
    f32 f24;
    f32 f28;
} Input;

extern f32 D_800CAC38;
extern f32 D_800CAC40;
extern f32 D_800CAC48;
extern f32 D_800CAC50;
extern f32 D_800CAC58;
extern f32 func_802BC380(f32);
extern f32 func_8029C9FC(f32);
extern f32 func_8029D044(f32, f32);

void func_8029DAB4(Input *arg0, Vec3f *arg1) {
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
    if (D_800CAC38 < clamped) {
        clamped = D_800CAC38;
    }
    if (clamped < *(&D_800CAC38 + 1)) {
        clamped = *(&D_800CAC38 + 1);
    }
    magnitude = -clamped;
    if (D_800CAC38 < magnitude) {
        magnitude = D_800CAC38;
    }
    if (magnitude < *(&D_800CAC38 + 1)) {
        magnitude = *(&D_800CAC38 + 1);
    }
    negative = 0;
    if (magnitude < 0.0f) {
        negative = 1;
        magnitude = -magnitude;
    }
    polynomial = (((((((((magnitude * D_800CAC40) + *(&D_800CAC40 + 1)) * magnitude)
        - D_800CAC48) * magnitude) + *(&D_800CAC48 + 1)) * magnitude)
        - D_800CAC50) * magnitude) + *(&D_800CAC50 + 1);
    delta = D_800CAC38 - magnitude;
    if (delta <= 0.0f) {
        root = 0.0f;
    } else {
        root = func_802BC380(delta);
    }
    angle_temp = D_800CAC58 - (root * polynomial);
    if (negative != 0) {
        angle_temp = -angle_temp;
    }
    angle = angle_temp;
    test = func_8029C9FC(angle + D_800CAC58);
    if ((*(&D_800CAC58 + 1) < test) || (test < *(&D_800CAC58 + 1))) {
        polynomial = func_8029D044(arg0->f20, arg0->f28);
        out2 = func_8029D044(arg0->f04, arg0->f14);
    } else {
        polynomial = 0.0f;
        out2 = func_8029D044(arg0->f08, arg0->f00);
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
