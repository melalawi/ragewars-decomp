#include "common/types.h"
#include "span_1000/code_80228934.h"
#include "span_C76B0/data.h"
#include "types.h"


extern s32 D_80142850;

extern void *jtbl_800C2C80[];






/** Return the animation-table offset selected by the actor state. */
s32 func_80229C0C_de(void *arg0, s32 arg1) {
    s32 *types = &D_800C922C;
    u16 type = ((func_80229BE0_S1 *)(arg0))->unkE4;
    char *state;
    s32 offset;

    if (type == types[0]) {
        switch (D_80142850) {
        case 0:
            offset = 0x514;
            break;
        case 1:
            offset = 0x5DC;
            break;
        case 2:
            offset = 0x578;
            break;
        default:
            D_80142850 = 0;
            offset = 0x514;
            break;
        }
    } else if (type == types[-2]) {
        offset = 0x190;
    } else if (type == types[-1]) {
        offset = 0x3E8;
    } else {
        state = ((func_80229BE0_S1 *)(arg0))->unk5D8;
        {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_1, &&sw_state_2, &&sw_state_3,
            &&sw_state_4, &&sw_state_5, &&sw_state_6, &&sw_state_7,
            &&sw_state_8, &&sw_state_9, &&sw_state_15, &&sw_state_10,
            &&sw_state_11, &&sw_state_12, &&sw_state_13,
            &&sw_state_16, &&sw_state_14
        };
        s32 sw_state_value = ((func_80229BE0_S2 *)(state))->unk80;
        if ((unsigned int)sw_state_value > 16) {
            goto sw_state_invalid;
        }
        goto *jtbl_800C2C80[sw_state_value];
    }
    do {
        sw_state_invalid:
            ((func_80229BE0_S2 *)(state))->unk80 = 0;
            offset = 0;
            break;
        sw_state_1:
            offset = 0x44C;
            break;
        sw_state_2:
            offset = 0xC8;
            break;
        sw_state_3:
            offset = 0x12C;
            break;
        sw_state_4:
            offset = 0x4B0;
            break;
        sw_state_5:
            offset = 0x64;
            break;
        sw_state_6:
            offset = 0x258;
            break;
        sw_state_7:
            offset = 0x384;
            break;
        sw_state_8:
            offset = 0x320;
            break;
        sw_state_9:
        sw_state_15:
            offset = 0x2BC;
            break;
        sw_state_10:
            offset = 0x1F4;
            break;
        sw_state_11:
            offset = 0x640;
            break;
        sw_state_12:
            offset = 0x6A4;
            break;
        sw_state_13:
        sw_state_16:
            offset = 0x708;
            break;
        sw_state_14:
            offset = 0x76C;
            break;
    
    } while (0);
    }
    return arg1 + offset;
}
