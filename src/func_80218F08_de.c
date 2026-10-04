#include "span_1000/code_8021762C.h"
#include "n64sdk.h"
#include "gbi.h"
#include "types.h"
#include "n64sdk.h"




extern Gfx *D_8010C574;
extern void func_802A9234_de(s32);
extern void func_80218F9C_de(s32 arg0, s32 arg1, s32 arg2);

void func_80218F08_de(s32 arg0, s32 arg1, s32 arg2) {
    Gfx *cmd;

    func_802A9234_de(0xFF);
    gDPSetTextureFilter(D_8010C574++, G_TF_BILERP);
    func_80218F9C_de(arg0, arg1, arg2);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4B98_4 = 16.0f;
const float unbake_rodata_800C4B9C_4 = 0.000492125982f;
const float unbake_rodata_800C4BA0_4 = 1.0f;
const float unbake_rodata_800C4BA4_4 = 0.000492125982f;
const float unbake_rodata_800C4BA8_4 = 0.00100000005f;
const float unbake_rodata_800C4BAC_4 = 1.0f;
const float unbake_rodata_800C4BB0_4 = 47.5f;
const float unbake_rodata_800C4BB4_4 = 0.25f;
const float unbake_rodata_800C4BB8_4 = 0.0210526325f;
const float unbake_rodata_800C4BBC_4 = 1.0f;
const float unbake_rodata_800C4BC0_4 = 1.0f;
const float unbake_rodata_800C4BC4_4 = 1.0f;
const float unbake_rodata_800C4BC8_4 = 1.0f;
const float unbake_rodata_800C4BCC_4 = 1.57079649f;
const float unbake_rodata_800C4BD0_4 = 1.0f;
const float unbake_rodata_800C4BD4_4 = 3.14159298f;
const unsigned int unbake_rodata_800C4BD8_2C[] = {0x0027E28CU, 0x0027E414U, 0x0027E408U, 0x0027E2D4U, 0x0027E408U, 0x0027E330U, 0x0027E3ACU, 0x0027E408U, 0x0027E414U, 0x0027E414U, 0x0027E414U};
const float unbake_rodata_800C4C04_4 = 5.11999989f;
const float unbake_rodata_800C4C08_4 = 5.11999989f;
const float unbake_rodata_800C4C0C_4 = 1.02400005f;
const float unbake_rodata_800C4C10_4 = 5.11999989f;
const float unbake_rodata_800C4C14_4 = 5.11999989f;
const float unbake_rodata_800C4C18_4 = 0.00392156886f;
const float unbake_rodata_800C4C1C_4 = 0.0341796875f;
const float unbake_rodata_800C4C20_4 = (-1.0f);
const float unbake_rodata_800C4C24_4 = 10.2399998f;
const float unbake_rodata_800C4C28_4 = 10.2399998f;
const float unbake_rodata_800C4C2C_4 = 0.00787401572f;
const float unbake_rodata_800C4C30_4 = 0.087266475f;
const float unbake_rodata_800C4C34_4 = 18.8495579f;
const float unbake_rodata_800C4C38_4 = 0.25f;
const float unbake_rodata_800C4C3C_4 = 43.9822998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9D58_4 = 16.0f;
const float unbake_rodata_800C9D5C_4 = 0.000492125982f;
const float unbake_rodata_800C9D60_4 = 1.0f;
const float unbake_rodata_800C9D64_4 = 0.000492125982f;
const float unbake_rodata_800C9D68_4 = 0.00100000005f;
const float unbake_rodata_800C9D6C_4 = 1.0f;
const float unbake_rodata_800C9D70_4 = 47.5f;
const float unbake_rodata_800C9D74_4 = 0.25f;
const float unbake_rodata_800C9D78_4 = 0.0210526325f;
const float unbake_rodata_800C9D7C_4 = 1.0f;
const float unbake_rodata_800C9D80_4 = 1.0f;
const float unbake_rodata_800C9D84_4 = 1.0f;
const float unbake_rodata_800C9D88_4 = 1.0f;
const float unbake_rodata_800C9D8C_4 = 1.57079649f;
const float unbake_rodata_800C9D90_4 = 1.0f;
const float unbake_rodata_800C9D94_4 = 3.14159298f;
const unsigned int unbake_rodata_800C9D98_2C[] = {0x0027E30CU, 0x0027E494U, 0x0027E488U, 0x0027E354U, 0x0027E488U, 0x0027E3B0U, 0x0027E42CU, 0x0027E488U, 0x0027E494U, 0x0027E494U, 0x0027E494U};
const float unbake_rodata_800C9DC4_4 = 5.11999989f;
const float unbake_rodata_800C9DC8_4 = 5.11999989f;
const float unbake_rodata_800C9DCC_4 = 1.02400005f;
const float unbake_rodata_800C9DD0_4 = 5.11999989f;
const float unbake_rodata_800C9DD4_4 = 5.11999989f;
const float unbake_rodata_800C9DD8_4 = 0.00392156886f;
const float unbake_rodata_800C9DDC_4 = 0.0341796875f;
const float unbake_rodata_800C9DE0_4 = (-1.0f);
const float unbake_rodata_800C9DE4_4 = 10.2399998f;
const float unbake_rodata_800C9DE8_4 = 10.2399998f;
const float unbake_rodata_800C9DEC_4 = 0.00787401572f;
const float unbake_rodata_800C9DF0_4 = 0.087266475f;
const float unbake_rodata_800C9DF4_4 = 18.8495579f;
const float unbake_rodata_800C9DF8_4 = 0.25f;
const float unbake_rodata_800C9DFC_4 = 43.9822998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4CC0_4 = 0.0117647061f;
const float unbake_rodata_800C4CC4_4 = 0.0117647061f;
const float unbake_rodata_800C4CC8_4 = 0.0117647061f;
const float unbake_rodata_800C4CCC_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CD0_4 = 2.14748365e+09f;
const float unbake_rodata_800C4CD4_4 = 2.14748365e+09f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4C24_4 = 0.138888896f;
const float unbake_rodata_800C4C28_4 = 0.000174532935f;
const float unbake_rodata_800C4C2C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4BA8_4 = 51.1999969f;
const float unbake_rodata_800C4BAC_4 = 1024.0f;
const float unbake_rodata_800C4BB0_4 = 204.799988f;
const float unbake_rodata_800C4BB4_4 = 0.00122070312f;
const float unbake_rodata_800C4BB8_4 = 0.859999955f;
const float unbake_rodata_800C4BBC_4 = 0.899999976f;
const float unbake_rodata_800C4BC0_4 = 0.0399999991f;
const float unbake_rodata_800C4BC4_4 = 1.0f;
#endif
