#include "basetypes.h"

extern void func_8044ACCC(s32 arg0);

void func_8022D204(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x100) &= 0xFF7FFFFF;
    *(s32 *)((u8 *)arg0 + 0x11D8) = 0;
    *(s32 *)((u8 *)arg0 + 0x11FC) = 0;
    *(s32 *)((u8 *)arg0 + 0x100) |= 0x01000000;
    func_8044ACCC((s32) arg0);
}
