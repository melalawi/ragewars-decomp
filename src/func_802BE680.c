#include "basetypes.h"

typedef struct {
    u8 pad0[5];
    u8 field5;
    u8 field6;
    u8 field7;
    u8 field8;
    u8 index;
    u8 padA[2];
    u32 address;
} PiTransfer802BE680;

extern PiTransfer802BE680 *D_800D83B0[];
extern s32 D_800CCBA0;
extern s32 D_800CCBA4;
extern void func_802BFD40(void *arg0, void *arg1, s32 arg2);

s32 func_802BE680(PiTransfer802BE680 *arg0, u32 arg1, u32 *arg2) {
    PiTransfer802BE680 *previous;
    s32 index;

    if (arg2 == 0) {
        func_802BFD40(&D_800CCBA0, &D_800CCBA4, 0x2B);
    }
    while (*(volatile u32 *)0xA4600010 & 3) {
    }
    index = arg0->index;
    previous = D_800D83B0[index];
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
        D_800D83B0[index] = arg0;
    }
    *arg2 = *(volatile u32 *)(arg0->address | arg1 | 0xA0000000);
    return 0;
}
