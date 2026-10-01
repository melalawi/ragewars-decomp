#include "basetypes.h"

extern char D_8011EE30;
extern char D_8011EFF8;
extern f32 D_800C9D54;
extern void func_80273208(void *arg0, void *arg1);
extern f32 func_80275E44(s32 arg0, s32 arg1, s32 arg2);
extern void func_80275480(void *arg0, s32 arg1);
extern void func_802756F8(void *arg0, s32 arg1);
extern void func_802742B4(void *arg0, void *arg1);
extern void func_8026F690(void *arg0, void *arg1, void *arg2);
extern f32 func_8027612C(s32 arg0, s32 arg1);
extern void func_80273744(void *arg0, f32 arg1);

extern void *jtbl_800C9D28[];

typedef struct func_8027D950_S1 func_8027D950_S1;
typedef struct func_8027D950_S2 func_8027D950_S2;
typedef union func_8027D950_S1_U1D0 { u8 v0; s8 v1; } func_8027D950_S1_U1D0;
struct func_8027D950_S1 {
    char pad0[0x8];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    s32 unk10;
    char pad10[0x1D0 - 0x10 - sizeof(s32)];
    func_8027D950_S1_U1D0 unk1D0;
};
struct func_8027D950_S2 {
    char pad0[0xE54];
    char unkE54;
    char padE54[0xE94 - 0xE54 - sizeof(char)];
    char unkE94;
};

/** Resolve the shared effect object selected by the actor state. */
void *func_8027D950(void *arg0, void *arg1) {
    char output[0x40];
    char state[0x10];
    void *shared;
    f32 value;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_neg_8, &&sw_state_neg_6, &&sw_state_neg_5, &&sw_state_neg_4, &&sw_state_neg_1, &&sw_state_neg_3, &&sw_state_neg_2, &&sw_state_0, &&sw_state_1, &&sw_state_2, &&sw_state_default
        };
        s32 sw_state_value = (s8)(((func_8027D950_S1 *)(arg0))->unk1D0.v0 + 8);
        if ((unsigned int)sw_state_value > 10) {
            goto sw_state_default;
        }
        goto *jtbl_800C9D28[sw_state_value];
    }
    do {
    sw_state_neg_8:
        shared = &D_8011EE30;
        func_80273208(shared, (char *)arg0 + 0x174);
        return shared;
    sw_state_neg_6:
        if (arg1 == 0) {
            return 0;
        }
        return &((func_8027D950_S2 *)(arg1))->unkE94;
    sw_state_neg_4:
    sw_state_neg_1:
        if (arg1 == 0) {
            return 0;
        }
        return &((func_8027D950_S2 *)(arg1))->unkE54;
    sw_state_neg_3:
        value = func_80275E44(0, ((func_8027D950_S1 *)(arg0))->unk8,
            ((func_8027D950_S1 *)(arg0))->unk10);
        if (((func_8027D950_S1 *)(arg0))->unkC - value <= D_800C9D54) {
            func_80275480(state, 0);
            func_802742B4(state, output);
            shared = &D_8011EE30;
            func_8026F690(shared, &D_8011EFF8, output);
            return shared;
        }
    sw_state_neg_5:
        return &D_8011EFF8;
    sw_state_neg_2:
        func_802756F8(state, 0);
        func_802742B4(state, output);
        shared = &D_8011EE30;
        func_8026F690(shared, &D_8011EFF8, output);
        return shared;
    sw_state_0:
    sw_state_1:
    sw_state_2:
        value = func_8027612C(0, ((func_8027D950_S1 *)(arg0))->unk1D0.v1);
        func_80273744(&D_8011EE30, value);
        return &D_8011EE30;
    sw_state_default:
        return 0;
    
    } while (0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C4B68_2C[] = {0x0027D914U, 0x0027DA0CU, 0x0027D930U, 0x0027D994U, 0x0027D940U, 0x0027D950U, 0x0027D9A4U, 0x0027D940U, 0x0027D9E4U, 0x0027D9E4U, 0x0027D9E4U};
const float unbake_rodata_800C4B94_4 = 0.00999999978f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C9D28_2C[] = {0x0027D994U, 0x0027DA8CU, 0x0027D9B0U, 0x0027DA14U, 0x0027D9C0U, 0x0027D9D0U, 0x0027DA24U, 0x0027D9C0U, 0x0027DA64U, 0x0027DA64U, 0x0027DA64U};
const float unbake_rodata_800C9D54_4 = 0.00999999978f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C4EE8_2C[] = {0x0027D964U, 0x0027DA5CU, 0x0027D980U, 0x0027D9E4U, 0x0027D990U, 0x0027D9A0U, 0x0027D9F4U, 0x0027D990U, 0x0027DA34U, 0x0027DA34U, 0x0027DA34U};
const float unbake_rodata_800C4F14_4 = 0.00999999978f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C4F28_2C[] = {0x0027D994U, 0x0027DA8CU, 0x0027D9B0U, 0x0027DA14U, 0x0027D9C0U, 0x0027D9D0U, 0x0027DA24U, 0x0027D9C0U, 0x0027DA64U, 0x0027DA64U, 0x0027DA64U};
const float unbake_rodata_800C4F54_4 = 0.00999999978f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C4C38_2C[] = {0x0027D9C0U, 0x0027DAB8U, 0x0027D9DCU, 0x0027DA40U, 0x0027D9ECU, 0x0027D9FCU, 0x0027DA50U, 0x0027D9ECU, 0x0027DA90U, 0x0027DA90U, 0x0027DA90U};
const float unbake_rodata_800C4C64_4 = 0.00999999978f;
#endif
