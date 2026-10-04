#include "span_1000/code_802BC630.h"
#include "span_C76B0/data.h"
#include "types.h"

extern u64 func_802BADC0_de(void);
extern void func_802BAC60_de(void *, s32, s32);
extern void func_802BB6C0_de(void *arg0, u64 arg1, u64 arg2, void *arg3, void *arg4);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802B7A20_de(s32 arg0);
extern s32 func_802B9CB0_de(s32, s32);
extern void func_802B7AD8_de(s32 *arg0, s32 arg1);
extern void func_802B9BC0_de();


extern s8 D_801471DC_de;
extern u8 D_80147220;
extern s32 D_801471C0;
extern s32 D_801471D8;
extern char D_801471E0;

s32 func_802B7880_de(s32 arg0, s32 *arg1, s32 arg2) {
    s32 sp20[8];
    s32 sp40[6];
    s32 sp58[2];
    u64 value;
    s32 result;
    s32 *initialized = &D_800D4340;

    if (*initialized != 0) {
        return 0;
    }
    *initialized = 1;
    value = func_802BADC0_de();
    if (value <= 0x0165A0BBULL) {
        func_802BAC60_de(sp40, (s32)sp58, 1);
        func_802BB6C0_de(sp20, 0x0165A0BCULL - value, 0, sp40, sp58);
        func_802BB2A0_de((s32)sp40, (s32)sp58, 1);
    }
    D_801471DC_de = 4;
    func_802B7A20_de(0);
    func_802B9CB0_de(1, &D_801471E0);
    func_802BB2A0_de(arg0, (s32)sp58, 1);
    result = func_802B9CB0_de(0, &D_801471E0);
    func_802BB2A0_de(arg0, (s32)sp58, 1);
    func_802B7AD8_de(arg1, arg2);
    D_80147220 = 0;
    func_802B9BC0_de();
    func_802BAC60_de(&D_801471C0, (s32)&D_801471D8, 1);
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2FF0_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x04, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D8370_10[] = {0x00, 0x00, 0x00, 0x00, 0x80, 0x15, 0x1B, 0xC8, 0x80, 0x15, 0x2B, 0x80, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E49C0_10[] = {0x00, 0x00, 0x00, 0x00, 0x75, 0x6C, 0x73, 0x00, 0x77, 0x61, 0x72, 0x70, 0x3A, 0x20, 0x20, 0x20};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFB80_10[] = {0x00, 0x00, 0x00, 0x00, 0x80, 0x15, 0x59, 0x38, 0x80, 0x15, 0x68, 0xF0, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D4340_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif
