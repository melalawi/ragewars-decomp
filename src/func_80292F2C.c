#include "basetypes.h"

extern void func_802A101C(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BFD80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802C0840(s32 arg0);

extern char D_800EBC00[];
extern char D_8011F650[];
extern char D_2934F0[];
extern s32 D_800D2B14;

void func_80292F2C(void) {
    func_802A101C((s32)D_800EBC00, 0, 0x80);
    func_802BFD80((s32)D_8011F650, 0, D_2934F0, 0, (s32)(D_800EBC00 + 0x80), D_800D2B14);
    func_802C0840((s32)D_8011F650);
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
