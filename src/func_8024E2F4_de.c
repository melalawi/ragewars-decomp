#include "span_1000/code_8024E130.h"
#include "common/types_8fd754e1e915.h"
#include "types.h"
#include "common/types_1dc8418c21db.h"

/** Return the constant false result used by callers at VRAM 0x8024E2E4. */
int func_8024E2F4_de(void) {
    return 0;
}

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

f32 func_8024E3C4_de(void *arg0) {
    void *temp_a0 = ((func_80205314_S1 *)(arg0))->unk18;
    s32 temp_v1 = *(s32 *)temp_a0;

    switch (temp_v1) {
    case 11:
        return ((func_8024E3B4_S2 *)(temp_a0))->unkF8;
    case 4:
    case 1:
        return ((func_8024E3B4_S2 *)(temp_a0))->unk34;
    default:
        return 0.0f;
    }
}

f32 func_8024E420_de(void *arg0) {
    void *nested;
    if (*(u8 *)arg0 == 1) {
        return ((func_8024E410_S1 *)(arg0))->unk70;
    }
    nested = ((func_8024E410_S1 *)(arg0))->unk18;
    if (*(s32 *)nested == 0) {
        return ((func_8022CA04_S3 *)(nested))->unk20;
    }
    return 0.0f;
}
