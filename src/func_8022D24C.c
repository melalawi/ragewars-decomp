#include "basetypes.h"

/** Reset two object fields and replace the control word's mode bit. */
void func_8022D24C(void *arg0) {
    *(s32 *)((u8 *)arg0 + 0x100) &= 0xFF7FFFFF;
    *(s32 *)((u8 *)arg0 + 0x11D8) = 0;
    *(s32 *)((u8 *)arg0 + 0x11FC) = 0;
    *(s32 *)((u8 *)arg0 + 0x100) |= 0x01000000;
}
