#include "span_1000/code_8022D7A0.h"
extern void func_80225B98_de(void *a, void *b, int c);

/** Thin wrapper around func_80225B98_de with a fixed third argument. */
void func_8022D900_de(void *a, void *b) {
    func_80225B98_de(a, b, 0x49);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C9E88_4 = (-118.0f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CF1B4_4 = 3.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C9D84_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C9DA0_4 = 1.22173059f;
const float unbake_rodata_800C9DA4_4 = 0.87266469f;
const float unbake_rodata_800C9DA8_4 = 0.52359885f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C9468_2C[] = {0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xAE, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00};
#endif
