/* Returns whether an actor's current state type allows the tested interaction: descriptor flag bits for
 * some types, the player flags 0x2000 and 0x10000 (or the attached object's 0x10000 bit) for player
 * actors in others, always for type 8, and for type 11 unless a flagged player's link at 0x85C is set
 * while D_801462E5 is enabled. Adapted from the jump-table shape of func_8024D388. */
#include "basetypes.h"

extern u8 D_801462E5;

extern void *jtbl_800C8CB0[];

s32 func_8024D150(void *arg0) {
    s32 flags;
    void *link;
    s32 bit;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_8, &&sw_state_0, &&sw_state_2, &&sw_state_1, &&sw_state_4, &&sw_state_12, &&sw_state_default
        };
        s32 sw_state_value = *(s32 *)*(void **)((char *)arg0 + 0x18);
        if ((unsigned int)sw_state_value > 12) {
            goto sw_state_default;
        }
        goto *jtbl_800C8CB0[sw_state_value];
    }
    do {
    sw_state_11:
        if (*(u8 *)arg0 == 1 && (*(s32 *)((char *)arg0 + 0x100) & 0x300000) != 0) {
            link = *(void **)((char *)arg0 + 0x1D8);
            if (D_801462E5 != 0 && *(s32 *)((char *)link + 0x85C) != 0) {
                return 0;
            }
        }
    sw_state_8:
        return 1;
    sw_state_0:
        return *(s32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x14) & 2;
    sw_state_2:
        if (*(u8 *)arg0 != 1) {
            goto sw_false;
        }
        return *(s32 *)((char *)arg0 + 0x100) & 0x10000;
    sw_state_1:
        if (*(u8 *)arg0 != 1 || (*(s32 *)((char *)arg0 + 0x100) & 0x2000) == 0) {
            goto sw_false;
        }
        link = *(void **)((char *)arg0 + 0x1A0);
        if (link == 0) {
            goto sw_false;
        }
        bit = *(s32 *)((char *)link + 0x1C) & 0x10000;
        return !bit;
    sw_state_4:
    sw_state_5:
    sw_state_7:
    sw_state_10:
        if (*(u8 *)arg0 == 1) {
            flags = *(s32 *)((char *)arg0 + 0x100);
            if (flags & 0x2000) {
                goto sw_flag_bit;
            }
        }
    sw_false:
        return 0;
    sw_flag_bit:
        return flags & 0x10000;
    sw_state_12:
        return *(s32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0x14) & 1;
    } while (0);
sw_state_default:
    return 0;
}
