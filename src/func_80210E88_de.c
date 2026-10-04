#include "span_1000/code_8020F2A8.h"
/* Advances an animation player one frame: returns 1 when there is no player or clip, or after wrapping
   past frame 7 back to 0; otherwise prepares and shows the current frame through func_802106E0_de and
   func_80210964_de, advances the frame at 0x1CC and returns 0. */


extern void func_802106E0_de(void *, int);
extern void func_80210964_de(void *, int);

int func_80210E88_de(Player_func_80210E88_de *p) {
    if (p == 0) {
        return 1;
    }
    if (p->clip == 0) {
        return 1;
    }
    if (p->frame < 8) {
        func_802106E0_de(p->clip, p->frame);
        func_80210964_de(p->clip, p->frame);
        p->frame++;
        return 0;
    }
    p->frame = 0;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3F70_8 = 4294967296.0;
const double unbake_rodata_800C3F78_8 = 4294967296.0;
const double unbake_rodata_800C3F80_8 = 4294967296.0;
const double unbake_rodata_800C3F88_8 = 4294967296.0;
const double unbake_rodata_800C3F90_8 = 4294967296.0;
const double unbake_rodata_800C3F98_8 = 4294967296.0;
const double unbake_rodata_800C3FA0_8 = 4294967296.0;
const double unbake_rodata_800C3FA8_8 = 4294967296.0;
const double unbake_rodata_800C3FB0_8 = 4294967296.0;
const double unbake_rodata_800C3FB8_8 = 4294967296.0;
const float unbake_rodata_800C3FC0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9090_8 = 4294967296.0;
const float unbake_rodata_800C9098_4 = 0.00999999978f;
const float unbake_rodata_800C909C_4 = 4.53514731e-05f;
const float unbake_rodata_800C90A0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3FB0_3C[] = {0x0024E2FCU, 0x0024E304U, 0x0024E2FCU, 0x0024E2FCU, 0x0024E304U, 0x0024E2FCU, 0x0024E2FCU, 0x0024E2FCU, 0x0024E2FCU, 0x0024E304U, 0x0024E2FCU, 0x0024E304U, 0x0024E2FCU, 0x0024E2FCU, 0x0024E2FCU};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3F94_4 = 1.0f;
const float unbake_rodata_800C3F98_4 = 0.436332345f;
const float unbake_rodata_800C3F9C_4 = 0.163624629f;
const float unbake_rodata_800C3FA0_4 = 0.375f;
const float unbake_rodata_800C3FA4_4 = 0.436332345f;
const float unbake_rodata_800C3FA8_4 = 0.163624629f;
const float unbake_rodata_800C3FAC_4 = 0.375f;
const float unbake_rodata_800C3FB0_4 = 25.0f;
const float unbake_rodata_800C3FB4_4 = 18.75f;
const float unbake_rodata_800C3FB8_4 = 0.75f;
const float unbake_rodata_800C3FBC_4 = 0.5f;
const float unbake_rodata_800C3FC0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3F6C_4 = 1.26999998f;
const float unbake_rodata_800C3F70_4 = 2.14748365e+09f;
const float unbake_rodata_800C3F74_4 = 1.0f;
#endif
