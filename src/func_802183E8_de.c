#include "span_1000/code_8021762C.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern void func_802A9234_de(s32);
extern void func_80217928_de(s32 arg0, s32 arg1, s32 arg2);

void func_802183E8_de(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *cmd;

    func_802A9234_de(0xFF);
    gDPSetTextureFilter(D_8010C574++, G_TF_BILERP);
    func_80217928_de(arg0, arg1, arg2);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4AD8_4 = 51.1999969f;
const float unbake_rodata_800C4ADC_4 = 1024.0f;
const float unbake_rodata_800C4AE0_4 = 204.799988f;
const float unbake_rodata_800C4AE4_4 = 0.00122070312f;
const float unbake_rodata_800C4AE8_4 = 0.859999955f;
const float unbake_rodata_800C4AEC_4 = 0.899999976f;
const float unbake_rodata_800C4AF0_4 = 0.0399999991f;
const float unbake_rodata_800C4AF4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9C98_4 = 51.1999969f;
const float unbake_rodata_800C9C9C_4 = 1024.0f;
const float unbake_rodata_800C9CA0_4 = 204.799988f;
const float unbake_rodata_800C9CA4_4 = 0.00122070312f;
const float unbake_rodata_800C9CA8_4 = 0.859999955f;
const float unbake_rodata_800C9CAC_4 = 0.899999976f;
const float unbake_rodata_800C9CB0_4 = 0.0399999991f;
const float unbake_rodata_800C9CB4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4B94_4 = 0.999998987f;
const float unbake_rodata_800C4B98_4 = 0.999998987f;
const float unbake_rodata_800C4B9C_4 = 1.0f;
const float unbake_rodata_800C4BA0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C49C0_4 = 0.00100000005f;
const float unbake_rodata_800C49C4_4 = (-1.0f);
const float unbake_rodata_800C49C8_4 = 1.0f;
const float unbake_rodata_800C49CC_4 = 0.00100000005f;
const float unbake_rodata_800C49D0_4 = 1.0f;
const float unbake_rodata_800C49D4_4 = 1.0f;
const float unbake_rodata_800C49D8_4 = 1.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C4B1C_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#endif
