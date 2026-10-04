#include "span_1000/code_80245804.h"
/* Reports whether func_80245798_de accepts the globally selected record and bit 2 of its word at 0x74
   is set. */
extern int func_80245798_de(void);

extern void *D_800DE7E0;




int func_80245908_de(void) {
    void *record;
    if (func_80245798_de() == 0) {
        return 0;
    }
    record = D_800DE7E0;
    if ((((func_802458F8_S1 *)(record))->unk74 & 2) != 0) {
        return 1;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DDF68_28[] = {0x00, 0x41, 0x9B, 0x6C, 0x00, 0x00, 0x0E, 0x08, 0x00, 0x00, 0x75, 0x30, 0x00, 0x41, 0x97, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x47, 0x52, 0x41, 0x50, 0x48, 0x49, 0x43};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E2788_7[] = {0x20, 0x20, 0x25, 0x30, 0x32, 0x64, 0x00};
#elif defined(VERSION_EU)
const double unbake_rodata_800ED768_8 = 0.0;
const double unbake_rodata_800ED770_8 = 1000000.0;
const double unbake_rodata_800ED778_8 = 10.0;
const double unbake_rodata_800ED780_8 = 1.0;
const double unbake_rodata_800ED788_8 = 0.10000000000000001;
const double unbake_rodata_800ED790_8 = 1.0;
const double unbake_rodata_800ED798_8 = 0.5;
const double unbake_rodata_800ED7A0_8 = 0.0;
const double unbake_rodata_800ED7A8_8 = 9.9999997473787516e-05;
const double unbake_rodata_800ED7B0_8 = 1.0;
const double unbake_rodata_800ED7B8_8 = 10.0;
const double unbake_rodata_800ED7C0_8 = 0.0;
const double unbake_rodata_800ED7C8_8 = 2147483647.0;
const double unbake_rodata_800ED7D0_8 = 0.5;
const double unbake_rodata_800ED7D8_8 = 0.10000000000000001;
const double unbake_rodata_800ED7E0_8 = 0.050000000745058053;
const double unbake_rodata_800ED7E8_8 = 10.0;
const double unbake_rodata_800ED7F0_8 = 10.0;
const double unbake_rodata_800ED7F8_8 = 0.10000000149011612;
const double unbake_rodata_800ED800_8 = 0.0;
const double unbake_rodata_800ED808_8 = 1.0;
const double unbake_rodata_800ED810_8 = 10.0;
const double unbake_rodata_800ED818_8 = 0.10000000000000001;
const double unbake_rodata_800ED820_8 = 0.5;
const double unbake_rodata_800ED828_8 = 1.0;
const double unbake_rodata_800ED830_8 = 10.0;
const double unbake_rodata_800ED838_8 = 0.10000000000000001;
const double unbake_rodata_800ED840_8 = 10.0;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8600_14[] = {0x00409864U, 0x004098E4U, 0x004098E4U, 0x004097E4U, 0x00409764U};
#elif defined(VERSION_DE)
const float unbake_rodata_800DDE68_4 = 0.00499999989f;
const float unbake_rodata_800DDE6C_4 = 100.0f;
const float unbake_rodata_800DDE70_4 = 150.0f;
const float unbake_rodata_800DDE74_4 = 2.14748365e+09f;
#endif
