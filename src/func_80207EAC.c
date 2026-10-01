#include "basetypes.h"

extern void func_80285D80(void *, void *, s32);
extern s32 D_8011FE88;

typedef struct func_80207EAC_S1 func_80207EAC_S1;
struct func_80207EAC_S1 {
    char pad0[0x100];
    s32 unk100;
};

void func_80207EAC(void *arg0) {
    func_80285D80(&D_8011FE88, arg0, 1);
    ((func_80207EAC_S1 *)(arg0))->unk100 |= 0x100;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C2FE8_8 = 4294967296.0;
const float unbake_rodata_800C2FF0_4 = 4.0f;
const float unbake_rodata_800C2FF4_4 = 0.0174532942f;
const float unbake_rodata_800C2FF8_4 = 16.0f;
const float unbake_rodata_800C2FFC_4 = 2.14748365e+09f;
const float unbake_rodata_800C3000_4 = 1.0f;
const float unbake_rodata_800C3004_4 = 64.0f;
const float unbake_rodata_800C3008_4 = 48.0f;
const float unbake_rodata_800C300C_4 = 255.0f;
const float unbake_rodata_800C3010_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8088_4 = 1.0f;
const float unbake_rodata_800C808C_4 = 1.0f;
const float unbake_rodata_800C8090_4 = 1.0f;
const float unbake_rodata_800C8094_4 = 0.5f;
const float unbake_rodata_800C8098_4 = 2.0f;
const float unbake_rodata_800C809C_4 = 0.0500000007f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3148_48[] = {0x00230174U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x002300ECU, 0x00230180U, 0x002300BCU, 0x00230150U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x00230180U, 0x002300D4U};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3004_4 = 300.0f;
const float unbake_rodata_800C3008_4 = 22.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F98_4 = 1.0f;
const float unbake_rodata_800C2F9C_4 = 1.0f;
const float unbake_rodata_800C2FA0_4 = 1.0f;
const float unbake_rodata_800C2FA4_4 = 0.5f;
const float unbake_rodata_800C2FA8_4 = 2.0f;
const float unbake_rodata_800C2FAC_4 = 0.0500000007f;
#endif
