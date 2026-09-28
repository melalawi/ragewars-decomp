#include "basetypes.h"

extern f32 D_800C8E5C;
extern f32 D_800C8E60;
extern f32 D_800C8E64;

extern void *jtbl_800C8E30[];

/** Return the vertical offset selected by the actor's current state. */
f32 func_8024E2EC(void *arg0) {
    void *state;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_1, &&sw_state_2, &&sw_state_5, &&sw_state_8, &&sw_state_default
        };
        s32 state_value = *(s32 *)*(void **)((char *)arg0 + 0x18);
        s32 sw_state_value = state_value - 1;
        if ((unsigned int)sw_state_value > 10) {
            goto sw_state_default;
        }
        goto *jtbl_800C8E30[sw_state_value];
    }
    do {
    sw_state_11:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xEC);
    sw_state_1:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x2C);
    sw_state_2:
        state = *(void **)((char *)arg0 + 0x18);
        if (*(u16 *)((char *)state + 0x18) == 0) {
            return D_800C8E5C;
        }
        return *(f32 *)((char *)state + 0x1C);
    sw_state_5:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x18);
    sw_state_8:
        state = *(void **)((char *)arg0 + 0x18);
        if ((*(s32 *)((char *)state + 0x14) & 1) != 0) {
            return D_800C8E60;
        }
        return *(f32 *)((char *)state + 0x18);
    sw_state_default:
        return D_800C8E64;
    
    } while (0);
}
