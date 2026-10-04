#include "span_1000/code_8022F054.h"
#include "types.h"

extern u8 D_800FEB00[];
extern u8 D_800FEB08[];
extern s8 D_800FEB0C[];
extern s8 D_800FEB0D[];
extern s8 D_800FEB0E[];
extern s8 D_800FEC89[];
extern s8 D_800FEC8A[];
extern s8 D_800FEC8B[];
extern s8 D_800FEC8C[];
extern s8 D_800FEC8D[];
extern u8 D_801422D8[];
extern s32 D_800D34E0;

extern void func_8022EF30_de(void *arg0);
extern void func_802A0C08_de(void *arg0, s32 arg1, s32 arg2);

void func_8022F204_de(s32 arg0) {
    s32 offset;
    u8 *entry;
    u8 *config;

    offset = arg0 * 0x190;
    entry = D_800FEB00 + offset;
    func_8022EF30_de(entry);
    *(s32 *)(D_800FEB08 + offset) = 0;
    D_800FEB0D[offset] = arg0;
    D_800FEB0C[offset] = 0;
    D_800FEB0E[offset] = 1;
    func_802A0C08_de(entry, D_800D34E0, arg0 + 1);
    config = D_801422D8 + arg0 * 0x96;
    D_800FEC89[offset] = config[0x7B];
    D_800FEC8A[offset] = config[0x7D];
    D_800FEC8B[offset] = config[0x79];
    D_800FEC8C[offset] = config[0x7A];
    D_800FEC8D[offset] = config[0x82];
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
