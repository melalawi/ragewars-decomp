#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "types.h"
extern void func_80216488_de(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40_de(void *arg0, void *arg1, void *arg2);
extern f32 D_800CD738;
extern s32 D_80142208_de;






void func_8022B8E0_de(void *arg0) {
    volatile Slot sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = ((ObjectState13E4 *)(arg0))->unk_11E4;
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800CD738;
        ((ObjectState13E4 *)(arg0))->unk_11E4 = temp_f0;
        if ((temp_f0 <= 0.0f) && !(D_80142208_de & 1)) {
            func_80216488_de(&sp18,
                          ((ObjectState13E4 *)(arg0))->unk_13E0,
                          ((ObjectState13E4 *)(arg0))->unk_174 + 0x1900,
                          25.599998f, 0x4000, 0);
            func_80219A40_de(arg0, &((ObjectState13E4 *)(arg0))->unk_170, &sp18);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5F28_1C[] = {0x002A8ACCU, 0x002A8ADCU, 0x002A8B0CU, 0x002A8AECU, 0x002A8AFCU, 0x002A8AFCU, 0x002A8B0CU};
const float unbake_rodata_800C5F44_4 = 24.0f;
const float unbake_rodata_800C5F48_4 = 12.0f;
const float unbake_rodata_800C5F4C_4 = 6.0f;
const float unbake_rodata_800C5F50_4 = 16.0f;
const float unbake_rodata_800C5F54_4 = 8.0f;
const float unbake_rodata_800C5F58_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB1C0_1C[] = {0x002A9C10U, 0x002A9C20U, 0x002A9C50U, 0x002A9C30U, 0x002A9C40U, 0x002A9C40U, 0x002A9C50U};
const float unbake_rodata_800CB1DC_4 = 24.0f;
const float unbake_rodata_800CB1E0_4 = 12.0f;
const float unbake_rodata_800CB1E4_4 = 6.0f;
const float unbake_rodata_800CB1E8_4 = 16.0f;
const float unbake_rodata_800CB1EC_4 = 8.0f;
const float unbake_rodata_800CB1F0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6058_4 = 1.69014084f;
const float unbake_rodata_800C605C_4 = 1.62162161f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C5F50_8 = 6.2831859588623047;
const float unbake_rodata_800C5F58_4 = 6.28318596f;
const float unbake_rodata_800C5F5C_4 = 6.28318596f;
const float unbake_rodata_800C5F60_4 = 3.14159274f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5F48_4 = 1.52587891e-05f;
const float unbake_rodata_800C5F4C_4 = 0.25f;
const float unbake_rodata_800C5F50_4 = (-90.0f);
#endif
