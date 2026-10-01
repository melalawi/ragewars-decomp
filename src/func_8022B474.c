#include "basetypes.h"

extern s32 func_8028B1F8(void *arg0, s32 arg1);
extern s32 func_8028C174(void *arg0, s32 arg1);
extern void func_8026DF30(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern s32 D_8011FE88;
extern char D_800D0EF8;

typedef struct func_8022B474_S1 func_8022B474_S1;
struct func_8022B474_S1 {
    char pad0[0x120C];
    s32 unk120C;
};

void func_8022B474(char *arg0) {
    s32 index;

    if (((func_8022B474_S1 *)(arg0))->unk120C != 0) {
        index = func_8028B1F8(&D_8011FE88, 0xC84);
    } else {
        index = func_8028B1F8(&D_8011FE88, 0xC85);
    }
    if (index != -1) {
        func_8026DF30(func_8028C174(&D_8011FE88, index),
                      (s32)((char *)arg0 + 0x1600), (s32)&D_800D0EF8, 0, -1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5E50_4 = 1.0f;
const float unbake_rodata_800C5E54_4 = 0.75f;
const float unbake_rodata_800C5E58_4 = 9.0f;
const float unbake_rodata_800C5E5C_4 = 15.0f;
const float unbake_rodata_800C5E60_4 = 27.0f;
const float unbake_rodata_800C5E64_4 = 1.5f;
const float unbake_rodata_800C5E68_4 = 1.0f;
const float unbake_rodata_800C5E6C_4 = 0.400000006f;
const float unbake_rodata_800C5E70_4 = 0.400000006f;
const float unbake_rodata_800C5E74_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB0D8_4 = 1.52587891e-05f;
const float unbake_rodata_800CB0DC_4 = 0.25f;
const float unbake_rodata_800CB0E0_4 = (-90.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C5D44_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5D38_4 = 1.0f;
const float unbake_rodata_800C5D3C_4 = (-1.0f);
const float unbake_rodata_800C5D40_4 = 1.0f;
const float unbake_rodata_800C5D44_4 = (-1.0f);
const float unbake_rodata_800C5D48_4 = (-0.0116805276f);
const float unbake_rodata_800C5D4C_4 = 0.0308918804f;
const float unbake_rodata_800C5D50_4 = 0.0501743034f;
const float unbake_rodata_800C5D54_4 = 0.0889789909f;
const float unbake_rodata_800C5D58_4 = 0.214598805f;
const float unbake_rodata_800C5D5C_4 = 1.57079625f;
const float unbake_rodata_800C5D60_4 = 1.57079637f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C5E10_18[] = {0x002A4184U, 0x002A41B0U, 0x002A41CCU, 0x002A41D8U, 0x002A4244U, 0x002A4284U};
#endif
