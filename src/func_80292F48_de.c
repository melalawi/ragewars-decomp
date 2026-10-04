#include "span_1000/code_8029193C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_802A001C_de(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BAC90_de(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802BB750_de(s32 arg0);

extern char D_800E7C00[];
extern char D_8011B590[];
extern char D_0029350C[];


void func_80292F48_de(void) {
    func_802A001C_de((s32)D_800E7C00, 0, 0x80);
    func_802BAC90_de((s32)D_8011B590, 0, D_0029350C, 0, (s32)(D_800E7C00 + 0x80), D_800CD8A4_de);
    func_802BB750_de((s32)D_8011B590);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD7B4_8[] = {0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D2B14_8[] = {0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CE484_8[] = {0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800CEE54_8[] = {0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800CD8A4_8[] = {0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A};
#endif
