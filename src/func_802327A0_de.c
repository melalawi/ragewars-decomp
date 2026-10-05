#include "span_1000/code_80231F5C.h"
#include "types.h"

extern void *jtbl_800C2FD8[];

/** Return whether the encoded type belongs to this caller's accepted set. */
s32 func_802327A0_de(s32 arg0) {
    {
        static void *switch_labels[0] __attribute__((section(".sdata"))) = {
            &&case_2, &&case_7, &&case_8, &&case_9,
            &&case_13, &&case_14, &&case_15, &&case_default
        };
        arg0 -= 2;
        if ((unsigned int)arg0 >= 14) {
            goto case_default;
        }
        goto *jtbl_800C2FD8[arg0];
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

s32 func_802327D4_de(s32 arg0) {
    if (arg0 < 0xD) {
        if (arg0 >= 0xA) {
            return 1;
        }
    }
    return 0;
}
