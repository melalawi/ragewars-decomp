#include "basetypes.h"

extern void func_80216488(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800CE3E0;

typedef struct {
    char data[24];
} Local;

typedef struct func_8022B5FC_S1 func_8022B5FC_S1;
struct func_8022B5FC_S1 {
    char pad0[0x170];
    char unk170;
    char pad170[0x12C0 - 0x170 - sizeof(char)];
    f32 unk12C0;
};

void func_8022B5FC(void *arg0, f32 arg1, void *arg2) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f0 = ((func_8022B5FC_S1 *)(arg0))->unk12C0 + arg1;
    temp_f1 = D_800CE3E0;
    if (!(temp_f1 <= temp_f0)) {
        temp_f1 = temp_f0;
    }
    temp_f0 = D_800CE3E0;
    ((func_8022B5FC_S1 *)(arg0))->unk12C0 = temp_f1;
    if (temp_f0 <= temp_f1) {
        func_80216488(&sp18, arg2, 0x40000, 25.599998f, 0x80, 0);
        func_80219A40(arg0, &((func_8022B5FC_S1 *)(arg0))->unk170, &sp18);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5EC4_4 = 0.00100000005f;
const float unbake_rodata_800C5EC8_4 = 0.00999999978f;
const float unbake_rodata_800C5ECC_4 = 0.100000001f;
const float unbake_rodata_800C5ED0_4 = 13.0f;
const float unbake_rodata_800C5ED4_4 = 13.0f;
const float unbake_rodata_800C5ED8_4 = 1.0f;
const float unbake_rodata_800C5EDC_4 = 0.699999988f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB148_1C[] = {0x002A9ABCU, 0x002A9AC4U, 0x002A9AD0U, 0x002A9AD0U, 0x002A9AD8U, 0x002A9AD8U, 0x002A9AE0U};
#elif defined(VERSION_EU)
const double unbake_rodata_800C5F10_8 = 6.2831859588623047;
const float unbake_rodata_800C5F18_4 = 6.28318596f;
const float unbake_rodata_800C5F1C_4 = 6.28318596f;
const float unbake_rodata_800C5F20_4 = 3.14159274f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5D84_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5EA8_4 = 6.14400005f;
#endif
