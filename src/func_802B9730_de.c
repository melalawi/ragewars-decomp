#include "span_1000/code_802BDDB8.h"
#include "types.h"



extern PiTransfer802BE820 *D_800D4380[];

/** Update changed PI timing registers, then write through the uncached transfer address. */
s32 func_802B9730_de(PiTransfer802BE820 *arg0, u32 arg1, u32 arg2) {
    PiTransfer802BE820 *previous;
    s32 index;

    while (*(volatile u32 *)0xA4600010 & 3) {
    }
    index = arg0->index;
    previous = D_800D4380[index];
    if (previous != arg0) {
        if (index == 0) {
            if (previous->field5 != arg0->field5) {
                *(volatile u32 *)0xA4600014 = arg0->field5;
            }
            if (previous->field6 != arg0->field6) {
                *(volatile u32 *)0xA460001C = arg0->field6;
            }
            if (previous->field7 != arg0->field7) {
                *(volatile u32 *)0xA4600020 = arg0->field7;
            }
            if (previous->field8 != arg0->field8) {
                *(volatile u32 *)0xA4600018 = arg0->field8;
            }
        } else {
            if (previous->field5 != arg0->field5) {
                *(volatile u32 *)0xA4600024 = arg0->field5;
            }
            if (previous->field6 != arg0->field6) {
                *(volatile u32 *)0xA460002C = arg0->field6;
            }
            if (previous->field7 != arg0->field7) {
                *(volatile u32 *)0xA4600030 = arg0->field7;
            }
            if (previous->field8 != arg0->field8) {
                *(volatile u32 *)0xA4600028 = arg0->field8;
            }
        }
        D_800D4380[index] = arg0;
    }
    *(volatile u32 *)(arg0->address | arg1 | 0xA0000000) = arg2;
    return 0;
}
