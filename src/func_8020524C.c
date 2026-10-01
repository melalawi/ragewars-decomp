#include "basetypes.h"

extern s32 func_80285F28(void *, void *);
extern s32 func_80214178(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_8020524C_S1 func_8020524C_S1;
struct func_8020524C_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_8020524C(void *arg0, void *arg1) {
    if (func_80285F28(&D_8011FE88, arg0) == 1) {
        func_80214178(arg0, arg1, 1);
    } else {
        func_80214178(arg0, arg1, 0);
        ((func_8020524C_S1 *)(arg0))->unk100 |= 0x10000;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C20B0_4 = 1.0f;
const float unbake_rodata_800C20B4_4 = (-1.0f);
const float unbake_rodata_800C20B8_4 = 0.52359885f;
const float unbake_rodata_800C20BC_4 = 3.14159274f;
const float unbake_rodata_800C20C0_4 = 0.261799425f;
const float unbake_rodata_800C20C4_4 = (-0.261799425f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C724C_4 = 51.1999969f;
const float unbake_rodata_800C7250_4 = 51.1999969f;
const float unbake_rodata_800C7254_4 = 3.14159274f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2370_4 = 102.399994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C23B0_4 = 102.399994f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2138_4 = 0.899999976f;
const float unbake_rodata_800C213C_4 = 0.5f;
#endif
