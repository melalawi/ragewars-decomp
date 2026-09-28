#include "basetypes.h"

extern f32 D_800C8D6C;
extern f32 D_800C8D70;

extern void *jtbl_800C8D30[];

/** Return the state-dependent extent used for this actor. */
f32 func_8024D388(void *arg0) {
    void *state;
    f32 value;
    f32 other;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_0, &&sw_state_5, &&sw_state_8, &&sw_state_10, &&sw_state_12, &&sw_state_13, &&sw_state_14, &&sw_state_1, &&sw_state_4, &&sw_state_2, &&sw_state_7, &&sw_state_default
        };
        s32 sw_state_value = *(s32 *)*(void **)((char *)arg0 + 0x18);
        if ((unsigned int)sw_state_value > 14) {
            goto sw_state_default;
        }
        goto *jtbl_800C8D30[sw_state_value];
    }
    do {
    sw_state_11:
        if (*(u8 *)arg0 == 1 &&
            (*(s32 *)((char *)arg0 + 0x100) & 0x300000) != 0 &&
            *(s32 *)((char *)*(void **)((char *)arg0 + 0x1D8) + 0x80C) != 0) {
            return D_800C8D6C;
        }
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xEC);
    sw_state_0:
    sw_state_5:
    sw_state_8:
    sw_state_10:
    sw_state_12:
    sw_state_13:
    sw_state_14:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x18);
    sw_state_1:
    sw_state_4:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x28);
    sw_state_2:
        state = *(void **)((char *)arg0 + 0x18);
        if (*(u16 *)((char *)state + 0x18) == 2) {
            value = *(f32 *)((char *)state + 0x20);
            other = *(f32 *)((char *)state + 0x1C);
            if (!(other <= value)) {
                value = other;
            }
            other = *(f32 *)((char *)state + 0x28);
            if (!(value <= other)) {
                other = value;
            }
            return other * D_800C8D70;
        }
        return *(f32 *)((char *)state + 0x1C);
    sw_state_7:
        return *(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x1C);
    sw_state_default:
        return 0.0f;
    
    } while (0);
}
