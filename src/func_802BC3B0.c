/* osAiSetFrequency, drafted from ultralib src/io/aisetfreq.c (before 2.0J: also turns AI DMA on).
   The unsigned conversions of the frequency and of the rate use the cartridge's constants
   D_800CCB70 (2^32) and D_800CCB78 (0.5, then 2^31), so both are written out in GCC's order. */
#include "basetypes.h"

extern s32 D_800D9280;
extern f64 D_800CCB70;
extern float D_800CCB78; /* 0.5, followed by 2^31 */
#define TWO_31 (*(&D_800CCB78 + 1))

s32 func_802BC3B0(u32 frequency)
{
    register unsigned int dacRate;
    register unsigned char bitRate;
    register float f;
    f64 wide;
    float clock;

    wide = (s32)frequency;
    clock = D_800D9280;
    if ((s32)frequency < 0) {
        wide += D_800CCB70;
    }
    f = clock / (float)wide + D_800CCB78;
    if (f >= TWO_31) {
        goto large;
    }
    dacRate = (s32)f;
    goto converted;
large:
    dacRate = (s32)(f - TWO_31);
    dacRate |= 0x80000000;
converted:

    if (dacRate < 132) {
        return -1;
    }

    bitRate = dacRate / 66;
    if (bitRate > 16) {
        bitRate = 16;
    }

    *(volatile u32 *)0xA4500010 = dacRate - 1;
    *(volatile u32 *)0xA4500014 = bitRate - 1;
    *(volatile u32 *)0xA4500008 = 1;
    return D_800D9280 / (s32)dacRate;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C7840_8 = 4294967296.0;
const float unbake_rodata_800C7848_4 = 0.5f;
const float unbake_rodata_800C784C_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800CCB70_8 = 4294967296.0;
const float unbake_rodata_800CCB78_4 = 0.5f;
const float unbake_rodata_800CCB7C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C8510_8 = 4294967296.0;
const float unbake_rodata_800C8518_4 = 0.5f;
const float unbake_rodata_800C851C_4 = 2.14748365e+09f;
#endif
