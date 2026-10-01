#include "basetypes.h"

extern u8 D_80102B00[];
extern u8 D_80102B08[];
extern s8 D_80102B0C[];
extern s8 D_80102B0D[];
extern s8 D_80102B0E[];
extern s8 D_80102C89[];
extern s8 D_80102C8A[];
extern s8 D_80102C8B[];
extern s8 D_80102C8C[];
extern s8 D_80102C8D[];
extern u8 D_80146398[];
extern s32 D_800D750C;

extern void func_8022EF20(void *arg0);
extern void func_802A1C08(void *arg0, s32 arg1, s32 arg2);

void func_8022F1F4(s32 arg0) {
    s32 offset;
    u8 *entry;
    u8 *config;

    offset = arg0 * 0x190;
    entry = D_80102B00 + offset;
    func_8022EF20(entry);
    *(s32 *)(D_80102B08 + offset) = 0;
    D_80102B0D[offset] = arg0;
    D_80102B0C[offset] = 0;
    D_80102B0E[offset] = 1;
    func_802A1C08(entry, D_800D750C, arg0 + 1);
    config = D_80146398 + arg0 * 0x96;
    D_80102C89[offset] = config[0x7B];
    D_80102C8A[offset] = config[0x7D];
    D_80102C8B[offset] = config[0x79];
    D_80102C8C[offset] = config[0x7A];
    D_80102C8D[offset] = config[0x82];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800CD5C0_4[] = {0x3F, 0x80, 0x00, 0x00};
const float unbake_rodata_800CD5C4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D28B8_48[] = {0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0C, 0xD9, 0xD8, 0x80, 0x0C, 0xD8, 0x24, 0x80, 0x0C, 0xD4, 0xA8, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0C, 0xD6, 0x58, 0x80, 0x0C, 0xD7, 0x18, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0C, 0xD8, 0xA8, 0x80, 0x0C, 0xD5, 0x6C, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0D, 0x28, 0xB0, 0x80, 0x0D, 0x28, 0xB0, 0x45, 0x00, 0x00, 0x00, 0x4D, 0x49, 0x4E, 0x49, 0x47, 0x55, 0x4E, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800CBF28_10[] = {0x0B, 0xEA, 0x0B, 0xEB, 0x0B, 0xEC, 0xFF, 0xFF, 0x0B, 0xED, 0x0B, 0xEE, 0x0B, 0xEF, 0x0B, 0xF0};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800CB548_4 = 24.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800CB7F0_4 = 1.0f;
const float unbake_rodata_800CB7F4_4 = 0.850000024f;
#endif
