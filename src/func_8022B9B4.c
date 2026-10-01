#include "basetypes.h"
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef s64 M2C_UNK64;
void func_8022B9B4(void *arg0) {
    if ((*(s32 *)((s8 *)(arg0) + (0x1210))) != 0) {
        if ((*(s32 *)((s8 *)(arg0) + (0x5E4))) != 0) {
            func_802227D0(arg0, arg0, 2);
        }
        (*(s32 *)((s8 *)(arg0) + (0x1210))) = 0;
        (*(s32 *)((s8 *)(arg0) + (0x1214))) = 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5FB8_1C[] = {0x002A8D04U, 0x002A8D14U, 0x002A8D44U, 0x002A8D24U, 0x002A8D34U, 0x002A8D34U, 0x002A8D44U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB238_1C[] = {0x002A9DC4U, 0x002A9DD4U, 0x002A9E04U, 0x002A9DE4U, 0x002A9DF4U, 0x002A9DF4U, 0x002A9E04U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C6090_4 = 0.00999999978f;
const float unbake_rodata_800C6094_4 = 0.292571425f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C6080_17[] = {0x2E, 0x2E, 0x5C, 0x44, 0x41, 0x54, 0x41, 0x5C, 0x54, 0x53, 0x63, 0x72, 0x65, 0x64, 0x44, 0x61, 0x74, 0x61, 0x2E, 0x65, 0x78, 0x70, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C5FB8_1C[] = {0x002A8ACCU, 0x002A8AD4U, 0x002A8AE0U, 0x002A8AE0U, 0x002A8AE8U, 0x002A8AE8U, 0x002A8AF0U};
#endif
