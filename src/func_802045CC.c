#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern void func_80278DE8(void *arg0, s32 arg1, void *arg2);
extern s32 D_8011FE88;

typedef struct func_802045CC_S1 func_802045CC_S1;
struct func_802045CC_S1 {
    char pad0[0x12C];
    s32 unk12C;
};

void func_802045CC(void *arg0, void *arg1) {
    func_80285D80(&D_8011FE88, arg0, 0);
    func_80278DE8(arg0, 0x200000, arg0);
    ((func_802045CC_S1 *)(arg1))->unk12C = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1CA4_4 = 10000000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6E60_4 = 1e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1FF4_4 = 307.199982f;
const float unbake_rodata_800C1FF8_4 = 307.199982f;
const float unbake_rodata_800C1FFC_4 = 61.4399986f;
const float unbake_rodata_800C2000_4 = (-1.0f);
const float unbake_rodata_800C2004_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2034_4 = 307.199982f;
const float unbake_rodata_800C2038_4 = 307.199982f;
const float unbake_rodata_800C203C_4 = 61.4399986f;
const float unbake_rodata_800C2040_4 = (-1.0f);
const float unbake_rodata_800C2044_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C1D54_4 = 307.199982f;
const float unbake_rodata_800C1D58_4 = 307.199982f;
const float unbake_rodata_800C1D5C_4 = 61.4399986f;
const float unbake_rodata_800C1D60_4 = (-1.0f);
const float unbake_rodata_800C1D64_4 = (-1.0f);
#endif
