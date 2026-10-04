#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "types.h"
/* Steps an animation cursor one frame: looks up the clip in D_8011FE88, keeps the previous frame,
   and moves forward in states 1 and 2 or backward in states 3 and 4; at either end a looping clip
   (mode 1) wraps and a ping-pong clip (mode 0) reverses direction. */





extern char D_8011BDC8;
extern Clip *func_8028D218_de(char *, s32);

void func_802192C0_de(Cursor *cursor) {
    Clip *clip;
    s32 frames;
    s32 state;

    clip = func_8028D218_de(&D_8011BDC8, cursor->clip);
    frames = clip->frames;
    state = cursor->state;
    cursor->previous = cursor->frame;
    switch (state) {
    case 1:
    case 2:
        {
            cursor->state = 1;
            if (++cursor->frame == frames) {
                switch (clip->mode) {
                case 1:
                    cursor->frame = 0;
                    break;
                case 0:
                    cursor->frame = frames - 2;
                    cursor->state = 3;
                    break;
                }
            }
        }
        break;
    case 3:
    case 4:
        {
            cursor->state = 3;
            if (--cursor->frame < 0) {
                switch (clip->mode) {
                case 0:
                    cursor->frame = 1;
                    cursor->state = 1;
                    break;
                case 1:
                    cursor->frame = frames - 1;
                    break;
                }
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4D34_4 = 6.28318548f;
const float unbake_rodata_800C4D38_4 = 262144.0f;
const float unbake_rodata_800C4D3C_4 = 262144.0f;
const unsigned int unbake_rodata_800C4D40_1C[] = {0x00280314U, 0x00280320U, 0x0028032CU, 0x00280360U, 0x0028038CU, 0x00280308U, 0x00280300U};
const float unbake_rodata_800C4D5C_4 = 0.09765625f;
const float unbake_rodata_800C4D60_4 = 2.85714293f;
const float unbake_rodata_800C4D64_4 = (-1.0f);
const float unbake_rodata_800C4D68_4 = 0.418879062f;
const float unbake_rodata_800C4D6C_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9EF4_4 = 6.28318548f;
const float unbake_rodata_800C9EF8_4 = 262144.0f;
const float unbake_rodata_800C9EFC_4 = 262144.0f;
const unsigned int unbake_rodata_800C9F00_1C[] = {0x00280394U, 0x002803A0U, 0x002803ACU, 0x002803E0U, 0x0028040CU, 0x00280388U, 0x00280380U};
const float unbake_rodata_800C9F1C_4 = 0.09765625f;
const float unbake_rodata_800C9F20_4 = 2.85714293f;
const float unbake_rodata_800C9F24_4 = (-1.0f);
const float unbake_rodata_800C9F28_4 = 0.418879062f;
const float unbake_rodata_800C9F2C_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4D10_4 = 2.38418579e-05f;
const float unbake_rodata_800C4D14_4 = 9.31322575e-09f;
const float unbake_rodata_800C4D18_4 = (-1.0f);
const float unbake_rodata_800C4D1C_4 = 9.31322575e-09f;
const float unbake_rodata_800C4D20_4 = 0.00999999978f;
const float unbake_rodata_800C4D24_4 = 0.00999999978f;
const float unbake_rodata_800C4D28_4 = 0.00999999978f;
const float unbake_rodata_800C4D2C_4 = 0.00999999978f;
const float unbake_rodata_800C4D30_4 = 0.00999999978f;
const float unbake_rodata_800C4D34_4 = 0.00999999978f;
const float unbake_rodata_800C4D38_4 = 2.38418579e-05f;
const float unbake_rodata_800C4D3C_4 = 4.65661287e-10f;
const double unbake_rodata_800C4D40_8 = 4294967296.0;
const float unbake_rodata_800C4D48_4 = 2.37487257e-06f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4D18_4 = 0.00999999978f;
const float unbake_rodata_800C4D1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D20_4 = 0.00999999978f;
const float unbake_rodata_800C4D24_4 = 2.14748365e+09f;
const float unbake_rodata_800C4D28_4 = 0.00999999978f;
const float unbake_rodata_800C4D2C_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4C68_4 = 16.0f;
const float unbake_rodata_800C4C6C_4 = 0.000492125982f;
const float unbake_rodata_800C4C70_4 = 1.0f;
const float unbake_rodata_800C4C74_4 = 0.000492125982f;
const float unbake_rodata_800C4C78_4 = 0.00100000005f;
const float unbake_rodata_800C4C7C_4 = 1.0f;
const float unbake_rodata_800C4C80_4 = 47.5f;
const float unbake_rodata_800C4C84_4 = 0.25f;
const float unbake_rodata_800C4C88_4 = 0.0210526325f;
const float unbake_rodata_800C4C8C_4 = 1.0f;
const float unbake_rodata_800C4C90_4 = 1.0f;
const float unbake_rodata_800C4C94_4 = 1.0f;
const float unbake_rodata_800C4C98_4 = 1.0f;
const float unbake_rodata_800C4C9C_4 = 1.57079649f;
const float unbake_rodata_800C4CA0_4 = 1.0f;
const float unbake_rodata_800C4CA4_4 = 3.14159298f;
const unsigned int unbake_rodata_800C4CA8_2C[] = {0x0027E338U, 0x0027E4C0U, 0x0027E4B4U, 0x0027E380U, 0x0027E4B4U, 0x0027E3DCU, 0x0027E458U, 0x0027E4B4U, 0x0027E4C0U, 0x0027E4C0U, 0x0027E4C0U};
const float unbake_rodata_800C4CD4_4 = 5.11999989f;
const float unbake_rodata_800C4CD8_4 = 5.11999989f;
const float unbake_rodata_800C4CDC_4 = 1.02400005f;
const float unbake_rodata_800C4CE0_4 = 5.11999989f;
const float unbake_rodata_800C4CE4_4 = 5.11999989f;
const float unbake_rodata_800C4CE8_4 = 0.00392156886f;
const float unbake_rodata_800C4CEC_4 = 0.0341796875f;
const float unbake_rodata_800C4CF0_4 = (-1.0f);
const float unbake_rodata_800C4CF4_4 = 10.2399998f;
const float unbake_rodata_800C4CF8_4 = 10.2399998f;
const float unbake_rodata_800C4CFC_4 = 0.00787401572f;
const float unbake_rodata_800C4D00_4 = 0.087266475f;
const float unbake_rodata_800C4D04_4 = 18.8495579f;
const float unbake_rodata_800C4D08_4 = 0.25f;
const float unbake_rodata_800C4D0C_4 = 43.9822998f;
#endif
