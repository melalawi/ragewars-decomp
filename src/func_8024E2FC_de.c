#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
extern f32 D_800C3D6C_de;
extern f32 D_800C3D70_de;


extern void *jtbl_800C3D40[];









/** Return the vertical offset selected by the actor's current state. */
f32 func_8024E2FC_de(void *arg0) {
    void *state;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_1, &&sw_state_2, &&sw_state_5, &&sw_state_8, &&sw_state_default
        };
        s32 state_value = *(s32 *)((func_80205314_S1 *)(arg0))->unk18;
        s32 sw_state_value = state_value - 1;
        if ((unsigned int)sw_state_value > 10) {
            goto sw_state_default;
        }
        goto *jtbl_800C3D40[sw_state_value];
    }
    do {
    sw_state_11:
        return ((func_8024E2EC_S2 *)(((func_80205314_S1 *)(arg0))->unk18))->unkEC;
    sw_state_1:
        return ((func_8024E2EC_S2 *)(((func_80205314_S1 *)(arg0))->unk18))->unk2C;
    sw_state_2:
        state = ((func_80205314_S1 *)(arg0))->unk18;
        if (((func_8024E2EC_S3 *)(state))->unk18.v0 == 0) {
            return D_800C3D6C_de;
        }
        return ((func_8024E2EC_S3 *)(state))->unk1C;
    sw_state_5:
        return ((func_8024E2EC_S2 *)(((func_80205314_S1 *)(arg0))->unk18))->unk18;
    sw_state_8:
        state = ((func_80205314_S1 *)(arg0))->unk18;
        if ((((func_8024E2EC_S3 *)(state))->unk14 & 1) != 0) {
            return D_800C3D70_de;
        }
        return ((func_8024E2EC_S3 *)(state))->unk18.v1;
    sw_state_default:
        return D_800C3D74_de;
    
    } while (0);
}
