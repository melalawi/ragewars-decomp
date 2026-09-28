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
        s32 sw_state_value = (s8)(*(u8 *)((char *)arg0 + 0x1D0) + 8);
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
        return (char *)arg1 + 0xE94;
    sw_state_neg_4:
    sw_state_neg_1:
        if (arg1 == 0) {
            return 0;
        }
        return (char *)arg1 + 0xE54;
    sw_state_neg_3:
        value = func_80275E44(0, *(s32 *)((char *)arg0 + 8),
            *(s32 *)((char *)arg0 + 0x10));
        if (*(f32 *)((char *)arg0 + 0xC) - value <= D_800C9D54) {
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
        value = func_8027612C(0, *(s8 *)((char *)arg0 + 0x1D0));
        func_80273744(&D_8011EE30, value);
        return &D_8011EE30;
    sw_state_default:
        return 0;
    
    } while (0);
}
