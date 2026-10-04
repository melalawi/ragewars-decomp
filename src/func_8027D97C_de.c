#include "span_1000/code_80279764.h"
#include "types.h"
extern char D_8011AD70;
extern char D_8011AF38;
extern f32 D_800C4C64_de;
extern void func_80273198_de(void *arg0, void *arg1);
extern f32 func_80275DD4_de(s32 arg0, s32 arg1, s32 arg2);
extern void func_80275410_de(void *arg0, s32 arg1);
extern void func_80275688_de(void *arg0, s32 arg1);
extern void func_80274244_de(void *arg0, void *arg1);
extern void func_8026F620_de(void *arg0, void *arg1, void *arg2);
extern f32 func_802760BC_de(s32 arg0, s32 arg1);
extern void func_802736D4_de(void *arg0, f32 arg1);

extern void *jtbl_800C4C38[];







/** Resolve the shared effect object selected by the actor state. */
void *func_8027D97C_de(void *arg0, void *arg1) {
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
        goto *jtbl_800C4C38[sw_state_value];
    }
    do {
    sw_state_neg_8:
        shared = &D_8011AD70;
        func_80273198_de(shared, (char *)arg0 + 0x174);
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
        value = func_80275DD4_de(0, ((func_8027D950_S1 *)(arg0))->unk8,
            ((func_8027D950_S1 *)(arg0))->unk10);
        if (((func_8027D950_S1 *)(arg0))->unkC - value <= D_800C4C64_de) {
            func_80275410_de(state, 0);
            func_80274244_de(state, output);
            shared = &D_8011AD70;
            func_8026F620_de(shared, &D_8011AF38, output);
            return shared;
        }
    sw_state_neg_5:
        return &D_8011AF38;
    sw_state_neg_2:
        func_80275688_de(state, 0);
        func_80274244_de(state, output);
        shared = &D_8011AD70;
        func_8026F620_de(shared, &D_8011AF38, output);
        return shared;
    sw_state_0:
    sw_state_1:
    sw_state_2:
        value = func_802760BC_de(0, ((func_8027D950_S1 *)(arg0))->unk1D0.v1);
        func_802736D4_de(&D_8011AD70, value);
        return &D_8011AD70;
    sw_state_default:
        return 0;
    
    } while (0);
}
