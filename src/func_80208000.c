/* Resets a player controller: marks the active, requested and committed selections empty, sets the
   request kind to 0xB, clears the four link words at 0x14 to -1, resets the stage counters at 0x1BC
   and 0x1C8 and the target list, installs the default table D_800CE040 through func_8020986C and mode
   2 through func_80209874, zeroes the tracking values from 0x23C to 0x260, runs the resets
   func_802110C4, func_80209988 and func_8020999C, and clears the remaining state words. */
#include "basetypes.h"

extern char D_800CE040;
extern void func_8020986C(void *, char *, s32);
extern void func_80209874(void *, s32);
extern void func_802110C4(void *);
extern void func_80209988(void *);
extern void func_8020999C(void *);

void func_80208000(s32 *arg0) {
    s32 i;
    s32 none;

    arg0[1] = -1;
    arg0[2] = -1;
    arg0[3] = 0xB;
    arg0[4] = -1;
    arg0[11] = 0;
    arg0[12] = 0;
    arg0[13] = 0;
    none = -1;
    for (i = 3; i >= 0; i--) {
        arg0[5 + i] = none;
    }
    arg0[10] = -1;
    arg0[0x1BC / 4] = 0xFFFF;
    arg0[0x220 / 4] = 0;
    arg0[0x1C8 / 4] = 0;
    arg0[14] = 1;
    arg0[15] = 0;
    arg0[25] = 0;
    arg0[0x28C / 4] = 0;
    arg0[26] = 0;
    arg0[0xBC / 4] = -1;
    arg0[0x224 / 4] = -1;
    arg0[0x228 / 4] = 0;
    for (i = 0; i < 10; i++) {
        arg0[15 + i] = 0;
        arg0[27 + i] = 0;
        arg0[37 + i] = 0;
    }
    arg0[0x238 / 4] = 0;
    func_8020986C(arg0, &D_800CE040, none);
    func_80209874(arg0, 2);
    ((f32 *) arg0)[0x244 / 4] = 0.0f;
    arg0[0x23C / 4] = 0;
    arg0[0x240 / 4] = 0;
    ((f32 *) arg0)[0x250 / 4] = ((f32 *) arg0)[0x254 / 4] = ((f32 *) arg0)[0x248 / 4] =
        ((f32 *) arg0)[0x24C / 4] = ((f32 *) arg0)[0x258 / 4] = ((f32 *) arg0)[0x25C / 4] =
        ((f32 *) arg0)[0x260 / 4] = ((f32 *) arg0)[0x244 / 4];
    func_802110C4(arg0);
    func_80209988(arg0);
    func_8020999C(arg0);
    arg0[0x318 / 4] = 0;
    arg0[0x31C / 4] = 0;
    arg0[0x320 / 4] = -1;
    arg0[0x324 / 4] = 0;
    arg0[0x328 / 4] = 0;
    arg0[0x2D8 / 4] = 0;
    arg0[0x2E4 / 4] = 0;
    arg0[0x2EC / 4] = 0;
    arg0[0x2E8 / 4] = 0;
    arg0[0x2DC / 4] = 0;
    arg0[0x2E0 / 4] = 0;
    arg0[0x32C / 4] = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C313C_4 = 1.0f;
const float unbake_rodata_800C3140_4 = 0.5f;
const float unbake_rodata_800C3144_4 = 1.0f;
const float unbake_rodata_800C3148_4 = 0.800000012f;
const float unbake_rodata_800C314C_4 = 0.5f;
const float unbake_rodata_800C3150_4 = 1.0f;
const float unbake_rodata_800C3154_4 = 0.899999976f;
const float unbake_rodata_800C3158_4 = 2.5f;
const float unbake_rodata_800C315C_4 = 1.0f;
const float unbake_rodata_800C3160_4 = 0.5f;
const float unbake_rodata_800C3164_4 = 0.104719765f;
const float unbake_rodata_800C3168_4 = 1.0f;
const float unbake_rodata_800C316C_4 = 0.069813177f;
const float unbake_rodata_800C3170_4 = 0.166666672f;
const float unbake_rodata_800C3174_4 = 0.087266475f;
const float unbake_rodata_800C3178_4 = 0.0349065885f;
const float unbake_rodata_800C317C_4 = 1.0f;
const float unbake_rodata_800C3180_4 = 0.0799999982f;
const float unbake_rodata_800C3184_4 = 10.0f;
const float unbake_rodata_800C3188_4 = 1.0f;
const float unbake_rodata_800C318C_4 = 2.14748365e+09f;
const float unbake_rodata_800C3190_4 = 45.0f;
const float unbake_rodata_800C3194_4 = 75.0f;
const float unbake_rodata_800C3198_4 = 75.0f;
const float unbake_rodata_800C319C_4 = 0.666666687f;
const float unbake_rodata_800C31A0_4 = 2.66666603f;
const float unbake_rodata_800C31A4_4 = 1.33333302f;
const float unbake_rodata_800C31A8_4 = 0.0174532942f;
const float unbake_rodata_800C31AC_4 = 1.27927935f;
const float unbake_rodata_800C31B0_4 = 1.0f;
const float unbake_rodata_800C31B4_4 = 57.2957764f;
const float unbake_rodata_800C31B8_4 = 0.949999988f;
const float unbake_rodata_800C31BC_4 = 16.0f;
const float unbake_rodata_800C31C0_4 = 1.0f;
const float unbake_rodata_800C31C4_4 = (-1.0f);
const float unbake_rodata_800C31C8_4 = 0.0109083094f;
const float unbake_rodata_800C31CC_4 = 0.00872664712f;
const float unbake_rodata_800C31D0_4 = 128.0f;
const float unbake_rodata_800C31D4_4 = 127.0f;
const float unbake_rodata_800C31D8_4 = 7168.0f;
const float unbake_rodata_800C31DC_4 = 0.09765625f;
const float unbake_rodata_800C31E0_4 = 11.0f;
const float unbake_rodata_800C31E4_4 = 5.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8250_4 = 1.0f;
const float unbake_rodata_800C8254_4 = 1.0f;
const float unbake_rodata_800C8258_4 = 15.0f;
const float unbake_rodata_800C825C_4 = 1.0f;
const float unbake_rodata_800C8260_4 = (-2.0f);
const float unbake_rodata_800C8264_4 = 3.0f;
const float unbake_rodata_800C8268_4 = 255.0f;
const float unbake_rodata_800C826C_4 = 2.14748365e+09f;
const double unbake_rodata_800C8270_8 = 4294967296.0;
const double unbake_rodata_800C8278_8 = 4294967296.0;
const double unbake_rodata_800C8280_8 = 4294967296.0;
const float unbake_rodata_800C8288_4 = 995.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3260_4 = 1.0f;
const float unbake_rodata_800C3264_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3288_4 = 1.0f;
const float unbake_rodata_800C328C_4 = 1.0f;
const float unbake_rodata_800C3290_4 = 1.0f;
const float unbake_rodata_800C3294_4 = 0.5f;
const float unbake_rodata_800C3298_4 = 2.0f;
const float unbake_rodata_800C329C_4 = 0.0500000007f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3160_4 = 1.0f;
const float unbake_rodata_800C3164_4 = 1.0f;
const float unbake_rodata_800C3168_4 = 15.0f;
const float unbake_rodata_800C316C_4 = 1.0f;
const float unbake_rodata_800C3170_4 = (-2.0f);
const float unbake_rodata_800C3174_4 = 3.0f;
const float unbake_rodata_800C3178_4 = 255.0f;
const float unbake_rodata_800C317C_4 = 2.14748365e+09f;
const double unbake_rodata_800C3180_8 = 4294967296.0;
const double unbake_rodata_800C3188_8 = 4294967296.0;
const double unbake_rodata_800C3190_8 = 4294967296.0;
const float unbake_rodata_800C3198_4 = 995.0f;
#endif
