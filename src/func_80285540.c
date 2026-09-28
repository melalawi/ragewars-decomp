#include "basetypes.h"

extern void func_80296DDC(s32 *arg0, s32 arg1);

void func_80285540(void *arg0, void *arg1) {
    s16 value;
    s32 reference;

    *(s32 *)arg0 = *(s32 *)((char *)arg1 + 4);
    *(u8 *)((char *)arg0 + 0x10) = *(u8 *)((char *)arg1 + 0xC);
    *(u8 *)((char *)arg0 + 0x11) = *(u8 *)((char *)arg1 + 0xD);
    *(u8 *)((char *)arg0 + 0x12) = *(u8 *)((char *)arg1 + 0xE);
    *(u8 *)((char *)arg0 + 0x13) = *(u8 *)((char *)arg1 + 0xF);
    *(u8 *)((char *)arg0 + 0x14) = *(u8 *)((char *)arg1 + 0x10);
    *(u8 *)((char *)arg0 + 0x15) = *(u8 *)((char *)arg1 + 0x11);
    *(u8 *)((char *)arg0 + 0x16) = *(u8 *)((char *)arg1 + 0x12);
    *(u8 *)((char *)arg0 + 0x17) = *(u8 *)((char *)arg1 + 0x13);
    *(u16 *)((char *)arg0 + 0x18) = *(u16 *)((char *)arg1 + 0x14);
    *(u16 *)((char *)arg0 + 0x1A) = *(u16 *)((char *)arg1 + 0x16);
    *(u8 *)((char *)arg0 + 6) = *(u8 *)((char *)arg1 + 0xA);
    if (*(s32 *)((char *)arg1 + 4) & 0x40) {
        value = (*(u16 *)((char *)arg1 + 8) * 2) | 1;
    } else {
        value = *(u16 *)((char *)arg1 + 8) * 2;
    }
    *(s16 *)((char *)arg0 + 4) = value;
    reference = *(s32 *)arg1;
    if (reference == -1) {
        *(s32 *)((char *)arg0 + 8) = 0;
        return;
    }
    func_80296DDC((s32 *)((char *)arg0 + 8), reference);
}
