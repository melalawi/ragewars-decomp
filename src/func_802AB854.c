#include "basetypes.h"

extern s32 D_8014D3D0;
extern f32 D_800CB3A4;
extern f32 D_800CB3A8;
extern f32 D_800CB3AC;
extern f32 D_800CB3B0;
extern f32 D_800CB3B4;
extern f32 D_800CB3B8;

extern void *jtbl_800CB388[];

/** Return the floating parameter selected by the current global mode. */
f32 func_802AB854(void) {
    {
        static void *sw_mode_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_mode_0, &&sw_mode_1, &&sw_mode_2, &&sw_mode_6, &&sw_mode_3, &&sw_mode_4, &&sw_mode_5, &&sw_mode_default
        };
        s32 sw_mode_value = D_8014D3D0;
        if ((unsigned int)sw_mode_value > 6) {
            goto sw_mode_default;
        }
        goto *jtbl_800CB388[sw_mode_value];
    }
    do {
    sw_mode_0:
        return D_800CB3A4;
    sw_mode_1:
        return D_800CB3A8;
    sw_mode_2:
    sw_mode_6:
        return D_800CB3AC;
    sw_mode_3:
        return D_800CB3B0;
    sw_mode_4:
    sw_mode_5:
        return D_800CB3B4;
    sw_mode_default:
        return D_800CB3B8;
    
    } while (0);
}
