#include "basetypes.h"

extern void func_80216488(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800D2988;
extern s32 D_801462C8;

typedef struct {
    char data[24];
} Local;

typedef struct func_8022B8D0_S1 func_8022B8D0_S1;
struct func_8022B8D0_S1 {
    char pad0[0x170];
    char unk170;
    char pad170[0x174 - 0x170 - sizeof(char)];
    s32 unk174;
    char pad174[0x11E4 - 0x174 - sizeof(s32)];
    f32 unk11E4;
    char pad11E4[0x13E0 - 0x11E4 - sizeof(f32)];
    s32 unk13E0;
};

void func_8022B8D0(void *arg0) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f1 = ((func_8022B8D0_S1 *)(arg0))->unk11E4;
    if (temp_f1 > 0.0f) {
        temp_f0 = temp_f1 - D_800D2988;
        ((func_8022B8D0_S1 *)(arg0))->unk11E4 = temp_f0;
        if ((temp_f0 <= 0.0f) && !(D_801462C8 & 1)) {
            func_80216488(&sp18,
                          ((func_8022B8D0_S1 *)(arg0))->unk13E0,
                          ((func_8022B8D0_S1 *)(arg0))->unk174 + 0x1900,
                          25.599998f, 0x4000, 0);
            func_80219A40(arg0, &((func_8022B8D0_S1 *)(arg0))->unk170, &sp18);
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
