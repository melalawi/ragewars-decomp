#include "basetypes.h"

extern s32 D_800D2AE0;
extern s32 D_8014AEC8;
extern s32 D_8014AED0;
extern s32 D_8014AED4;
extern s32 D_8014AED8;

extern void *jtbl_800CA638[];
extern void *jtbl_800CA650[];

/** Decode a frontend input selector into its current button mask. */
s32 func_802953FC(s32 arg0) {
    if (D_800D2AE0 == 0) {
        goto zero;
    }

    {
        static void *sw_outer_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_outer_0x101, &&sw_outer_0x102, &&sw_outer_0x103,
            &&sw_outer_0x104, &&sw_outer_0x105, &&sw_outer_0x106,
            &&sw_outer_default
        };
        s32 sw_outer_value = arg0;
        sw_outer_value -= (257);
        if ((unsigned int)sw_outer_value > 5) {
            goto sw_outer_default;
        }
        goto *jtbl_800CA638[sw_outer_value];
    }
    do {
    sw_outer_0x101:
        return D_8014AED4;
    sw_outer_0x102:
        return D_8014AED8;
    sw_outer_0x103:
        return 1 << *((u8 *)D_8014AED0 + 2);
    sw_outer_0x104:
        return 1 << *((u8 *)D_8014AED0 + 3);
    sw_outer_0x105:
        {
        static void *sw_inner_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_inner_0, &&sw_inner_1, &&sw_inner_3, &&sw_inner_5,
            &&sw_inner_2, &&sw_inner_4
        };
        s32 sw_inner_value = *(u8 *)D_8014AED0;
        if ((unsigned int)sw_inner_value > 5) {
            goto zero;
        }
        goto *jtbl_800CA650[sw_inner_value];
    }
    do {
        sw_inner_0:
            return 8;
        sw_inner_1:
        sw_inner_3:
        sw_inner_5:
            return 4;
        sw_inner_2:
            return 0x20;
        sw_inner_4:
            return 0x10;
    } while (0);
    sw_outer_0x106:
        D_8014AEC8 = 1;
zero:
        return 0;
    sw_outer_default:
        return 0;
    } while (0);
}
