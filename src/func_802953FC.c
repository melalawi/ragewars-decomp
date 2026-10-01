#include "basetypes.h"

extern s32 D_800D2AE0;
extern s32 D_8014AEC8;
extern s32 D_8014AED0;
extern s32 D_8014AED4;
extern s32 D_8014AED8;

extern void *jtbl_800CA638[];
extern void *jtbl_800CA650[];

typedef struct func_802953FC_S1 func_802953FC_S1;
struct func_802953FC_S1 {
    char pad0[0x2];
    u8 unk2;
    char pad2[0x3 - 0x2 - sizeof(u8)];
    u8 unk3;
};

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
        return 1 << ((func_802953FC_S1 *)(D_8014AED0))->unk2;
    sw_outer_0x104:
        return 1 << ((func_802953FC_S1 *)(D_8014AED0))->unk3;
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CA638_18[] = {0x0029542CU, 0x0029543CU, 0x0029544CU, 0x00295464U, 0x00295478U, 0x002954C4U};
const unsigned int unbake_rodata_800CA650_18[] = {0x002954A4U, 0x002954ACU, 0x002954B4U, 0x002954ACU, 0x002954BCU, 0x002954ACU};
#endif
