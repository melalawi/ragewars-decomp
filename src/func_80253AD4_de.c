#include "common/types.h"
#include "span_1000/code_80252714.h"
#include "types.h"
/* Under the queue lock, takes the table entry indexed by the current slot, marks the slot empty with -1, and returns that entry. Adapted from func_802539EC_de, with the slot read and cleared instead of set, and the entry returned; the table is indexed through a byte offset so the read stays ahead of the clear. */

extern u32 func_802BCF30_de(void);
extern void func_802BCF50_de(u32);
extern void func_802BB2A0_de(s32, s32, s32);
extern void func_802BB420_de(void *arg0, s32 arg1, s32 arg2);

extern s32 D_80100598[];



s32 func_80253AD4_de(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 *base;
    u32 temp_a0;
    u32 temp_v0;
    s32 result;

    temp_a0 = func_802BCF30_de();
    temp_v1 = D_8010115C + 1;
    D_8010115C = temp_v1;
    if (temp_v1 != 1) {
        func_802BCF50_de(temp_a0);
        func_802BB2A0_de((s32)((char *)&D_801005A8 + 0xB98), 0, 1);
    } else {
        func_802BCF50_de(temp_a0);
    }
    base = &D_801005A8;
    result = *(s32 *)((char *)D_80100598 + (*base << 2));
    *base = -1;
    temp_v0 = func_802BCF30_de();
    temp_v1_2 = D_8010115C - 1;
    D_8010115C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802BCF50_de(temp_v0);
        func_802BB420_de((char *)base + 0xB98, 0, 1);
    } else {
        func_802BCF50_de(temp_v0);
    }
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_EU)
const unsigned char unbake_rodata_800F1E5C_64[] = {0x00, 0x43, 0x9B, 0x58, 0x00, 0x00, 0x0E, 0x07, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x99, 0xA8, 0x00, 0x00, 0x0E, 0x06, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x88, 0x80, 0x00, 0x00, 0x0E, 0x03, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x99, 0x78, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x9D, 0x30, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x9C, 0x68, 0x00, 0x00, 0x0E, 0x0A, 0x00, 0x00, 0x00, 0x12, 0x00, 0x43, 0x99, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0x00, 0x20, 0x08, 0x00, 0x7F, 0xFF, 0x40, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EBEA8_4[] = {0x00, 0x00, 0x00, 0x02};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800FEB6C_4[] = {0x0F, 0xE2, 0x10, 0x13};
#endif
