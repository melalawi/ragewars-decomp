/* Returns whether an actor's current state type allows the tested interaction: descriptor flag bits for
 * some types, the player flags 0x2000 and 0x10000 (or the attached object's 0x10000 bit) for player
 * actors in others, always for type 8, and for type 11 unless a flagged player's link at 0x85C is set
 * while D_801462E5 is enabled. Adapted from the jump-table shape of func_8024D388. */
#include "basetypes.h"

extern u8 D_801462E5;

extern void *jtbl_800C8CB0[];

typedef struct func_8024D150_S1 func_8024D150_S1;
typedef struct func_8024D150_S2 func_8024D150_S2;
typedef struct func_8024D150_S3 func_8024D150_S3;
struct func_8024D150_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    s32 unk100;
    char pad100[0x1A0 - 0x100 - sizeof(s32)];
    void* unk1A0;
    char pad1A0[0x1D8 - 0x1A0 - sizeof(void*)];
    void* unk1D8;
};
struct func_8024D150_S2 {
    char pad0[0x1C];
    s32 unk1C;
    char pad1C[0x85C - 0x1C - sizeof(s32)];
    s32 unk85C;
};
struct func_8024D150_S3 {
    char pad0[0x14];
    s32 unk14;
};

s32 func_8024D150(void *arg0) {
    s32 flags;
    void *link;
    s32 bit;

    {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_11, &&sw_state_8, &&sw_state_0, &&sw_state_2, &&sw_state_1, &&sw_state_4, &&sw_state_12, &&sw_state_default
        };
        s32 sw_state_value = *(s32 *)((func_8024D150_S1 *)(arg0))->unk18;
        if ((unsigned int)sw_state_value > 12) {
            goto sw_state_default;
        }
        goto *jtbl_800C8CB0[sw_state_value];
    }
    do {
    sw_state_11:
        if (*(u8 *)arg0 == 1 && (((func_8024D150_S1 *)(arg0))->unk100 & 0x300000) != 0) {
            link = ((func_8024D150_S1 *)(arg0))->unk1D8;
            if (D_801462E5 != 0 && ((func_8024D150_S2 *)(link))->unk85C != 0) {
                return 0;
            }
        }
    sw_state_8:
        return 1;
    sw_state_0:
        return ((func_8024D150_S3 *)(((func_8024D150_S1 *)(arg0))->unk18))->unk14 & 2;
    sw_state_2:
        if (*(u8 *)arg0 != 1) {
            goto sw_false;
        }
        return ((func_8024D150_S1 *)(arg0))->unk100 & 0x10000;
    sw_state_1:
        if (*(u8 *)arg0 != 1 || (((func_8024D150_S1 *)(arg0))->unk100 & 0x2000) == 0) {
            goto sw_false;
        }
        link = ((func_8024D150_S1 *)(arg0))->unk1A0;
        if (link == 0) {
            goto sw_false;
        }
        bit = ((func_8024D150_S2 *)(link))->unk1C & 0x10000;
        return !bit;
    sw_state_4:
    sw_state_5:
    sw_state_7:
    sw_state_10:
        if (*(u8 *)arg0 == 1) {
            flags = ((func_8024D150_S1 *)(arg0))->unk100;
            if (flags & 0x2000) {
                goto sw_flag_bit;
            }
        }
    sw_false:
        return 0;
    sw_flag_bit:
        return flags & 0x10000;
    sw_state_12:
        return ((func_8024D150_S3 *)(((func_8024D150_S1 *)(arg0))->unk18))->unk14 & 1;
    } while (0);
sw_state_default:
    return 0;
}
