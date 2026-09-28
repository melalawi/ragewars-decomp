#include "basetypes.h"

extern void *jtbl_800C80C8[];

/** Return whether the encoded type belongs to this caller's accepted set. */
s32 func_80232790(s32 arg0) {
    {
        static void *switch_labels[0] __attribute__((section(".sdata"))) = {
            &&case_2, &&case_7, &&case_8, &&case_9,
            &&case_13, &&case_14, &&case_15, &&case_default
        };
        arg0 -= 2;
        if ((unsigned int)arg0 >= 14) {
            goto case_default;
        }
        goto *jtbl_800C80C8[arg0];
    }
case_2:
case_7:
case_8:
case_9:
case_13:
case_14:
case_15:
    return 1;
case_default:
    return 0;
}
