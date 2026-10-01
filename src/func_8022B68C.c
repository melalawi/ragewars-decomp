/* Decreases a float field at offset 0x12C0 by the given amount, clamps it from below at a floor, and when it reaches the floor builds and dispatches an event. Adapted from func_8022B5FC, with the add, the clamp direction, the constant, the third argument (a field plus 0x1900), and a duplicated clamp assignment (which keeps the constant reloaded rather than held in a register) changed. */
#include "basetypes.h"

extern void func_80216488(void *arg0, void *arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800CE3E0[2];

typedef struct {
    char data[24];
} Local;

typedef struct func_8022B68C_S1 func_8022B68C_S1;
struct func_8022B68C_S1 {
    char pad0[0x170];
    char unk170;
    char pad170[0x174 - 0x170 - sizeof(char)];
    s32 unk174;
    char pad174[0x12C0 - 0x174 - sizeof(s32)];
    f32 unk12C0;
};

void func_8022B68C(void *arg0, f32 arg1, void *arg2) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;

    temp_f0 = ((func_8022B68C_S1 *)(arg0))->unk12C0 - arg1;
    temp_f1 = D_800CE3E0[1];
    if (!(temp_f0 <= temp_f1)) {
        if (arg0 != 0) {
            temp_f1 = temp_f0;
        } else {
            temp_f1 = temp_f0;
        }
    }
    temp_f0 = D_800CE3E0[1];
    ((func_8022B68C_S1 *)(arg0))->unk12C0 = temp_f1;
    if (temp_f1 <= temp_f0) {
        func_80216488(&sp18, arg2, ((func_8022B68C_S1 *)(arg0))->unk174 + 0x1900, 25.599998f, 0x80, 0);
        func_80219A40(arg0, &((func_8022B68C_S1 *)(arg0))->unk170, &sp18);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5EE8_1C[] = {0x002A89FCU, 0x002A8A04U, 0x002A8A10U, 0x002A8A10U, 0x002A8A18U, 0x002A8A18U, 0x002A8A20U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB168_1C[] = {0x002A9B54U, 0x002A9C80U, 0x002A9CB8U, 0x002A9CF0U, 0x002A9D28U, 0x002A9D5CU, 0x002A9D90U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C5F48_4 = 0.00999999978f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5DD4_4 = 1.0f;
const float unbake_rodata_800C5DD8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5ED0_4 = 255.0f;
const float unbake_rodata_800C5ED4_4 = 0.100000001f;
const float unbake_rodata_800C5ED8_4 = 0.25f;
const float unbake_rodata_800C5EDC_4 = 0.75f;
const float unbake_rodata_800C5EE0_4 = 0.00156250002f;
const float unbake_rodata_800C5EE4_4 = 0.5f;
const float unbake_rodata_800C5EE8_4 = 0.00208333344f;
const float unbake_rodata_800C5EEC_4 = 2.14748365e+09f;
const float unbake_rodata_800C5EF0_4 = 0.5f;
const float unbake_rodata_800C5EF4_4 = 2.14748365e+09f;
const float unbake_rodata_800C5EF8_4 = 0.00312500005f;
const float unbake_rodata_800C5EFC_4 = 0.00416666688f;
const float unbake_rodata_800C5F00_4 = 0.25f;
const float unbake_rodata_800C5F04_4 = (-0.75f);
const float unbake_rodata_800C5F08_4 = (-0.5f);
const float unbake_rodata_800C5F0C_4 = 0.00390625f;
#endif
