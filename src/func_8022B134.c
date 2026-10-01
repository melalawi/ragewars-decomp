#include "basetypes.h"

extern void func_80226DAC(void *arg0, s8 *arg1);
extern void func_80273340(char *, f32 *);

void func_8022B134(void *arg0, f32 *arg1) {
    s8 sp10[0x40];
    func_80226DAC(arg0, sp10);
    func_80273340(sp10, arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D28_4 = 3.125f;
const float unbake_rodata_800C5D2C_4 = 32.0f;
const float unbake_rodata_800C5D30_4 = 1.0f;
const float unbake_rodata_800C5D34_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CAF98_4 = 3.125f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C59E0_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char unbake_rodata_800C59E8_8[] = {0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C59F0_8 = 0.0;
const double unbake_rodata_800C59F8_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5A00_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5A08_8 = 1.0;
const double unbake_rodata_800C5A10_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5A18_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5A20_8 = 1.0;
const double unbake_rodata_800C5A28_8 = 1.0;
const double unbake_rodata_800C5A30_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5A38_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5A40_8 = 1.4426950216293335;
const double unbake_rodata_800C5A48_8 = 0.5;
const double unbake_rodata_800C5A50_8 = 0.693359375;
const double unbake_rodata_800C5A58_8 = 0.00021219444170128557;
const double unbake_rodata_800C5A60_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5A68_8 = 0.0069435997866094112;
const double unbake_rodata_800C5A70_8 = 0.00049586285604164004;
const double unbake_rodata_800C5A78_8 = 0.055553868412971497;
const double unbake_rodata_800C5A80_8 = 0.25;
const double unbake_rodata_800C5A88_8 = (-2.7105049465376212e-20);
const double unbake_rodata_800C5A90_8 = 2.7105049465376212e-20;
const double unbake_rodata_800C5A98_8 = 1.0;
const double unbake_rodata_800C5AA0_8 = 1.4426950216293335;
const double unbake_rodata_800C5AA8_8 = 0.5;
const double unbake_rodata_800C5AB0_8 = 0.693359375;
const double unbake_rodata_800C5AB8_8 = 0.00021219444170128557;
const double unbake_rodata_800C5AC0_8 = 1.652032915444579e-05;
const double unbake_rodata_800C5AC8_8 = 0.0069435997866094112;
const double unbake_rodata_800C5AD0_8 = 0.00049586285604164004;
const double unbake_rodata_800C5AD8_8 = 0.055553868412971497;
const double unbake_rodata_800C5AE0_8 = 0.25;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C5970_24[] = {0x0029A128U, 0x0029A1ACU, 0x0029A230U, 0x0029A2B4U, 0x0029A344U, 0x0029A344U, 0x0029A344U, 0x0029A048U, 0x0029A0B8U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C5DA0_17[] = {0x2E, 0x2E, 0x5C, 0x44, 0x41, 0x54, 0x41, 0x5C, 0x54, 0x53, 0x63, 0x72, 0x65, 0x64, 0x44, 0x61, 0x74, 0x61, 0x2E, 0x65, 0x78, 0x70, 0x00};
#endif
