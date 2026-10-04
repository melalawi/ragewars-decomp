#include "span_1000/code_8024DF4C.h"
#include "types.h"




s32 func_8024E1B4_de(void *arg0) {
    if (*(u8 *)arg0 != 1) {
        return 0;
    }
    if (!(((func_8024E1A4_S1 *)(arg0))->unk100 & 0x2000)) {
        return 0;
    }
    arg0 = ((func_8024E1A4_S1 *)(arg0))->unk1A0;
    if (arg0 == 0) {
        goto ret1;
    }
    if (((func_8024E1A4_S1 *)(arg0))->unk1C & 0x10000) {
        return 0;
    }
ret1:
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FD23C_4[] = {0x32, 0x74, 0x04, 0x0A};
#elif defined(VERSION_EU)
const double unbake_rodata_800EEB40_8 = 4294967296.0;
const float unbake_rodata_800EEB48_4 = 0.0174532942f;
const float unbake_rodata_800EEB4C_4 = 1.0f;
const float unbake_rodata_800EEB50_4 = 50.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E9B40_20[] = {0x0043EB98U, 0x0043EBC8U, 0x0043EBF8U, 0x0043EC28U, 0x0043EC58U, 0x0043EC88U, 0x0043ECB8U, 0x0043ECE8U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DFA2C_3[] = {0x42, 0x20, 0x00};
const unsigned char unbake_rodata_800DFA30_4[] = {0xC2, 0x70, 0x00, 0x00};
const unsigned char unbake_rodata_800DFA34_28[] = {0xC2, 0xC8, 0x00, 0x00, 0xC2, 0x20, 0x00, 0x00, 0xC2, 0x70, 0x00, 0x00, 0xC2, 0xC8, 0x00, 0x00, 0x41, 0xE8, 0x00, 0x00, 0xC2, 0xBE, 0x00, 0x00, 0xC2, 0x8C, 0x00, 0x00, 0xC1, 0xE8, 0x00, 0x00, 0xC2, 0xBE, 0x00, 0x00, 0xC2, 0x8C, 0x00, 0x00};
const unsigned char unbake_rodata_800DFA5C_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xEC, 0xFF, 0xFF, 0xFF, 0xEC};
#endif
