#include "basetypes.h"

void func_8023EBEC(void *arg0, void *arg1) {
    s32 temp_a1;
    s32 temp_v1;

    temp_v1 = *(s32 *)((char *)arg0 + 0x3C) & ~0xE00;
    *(s32 *)((char *)arg0 + 0x3C) = temp_v1;
    temp_a1 = *(s32 *)((char *)arg1 + 0x10);
    if (temp_a1 & 0x20000000) {
        *(s32 *)((char *)arg0 + 0x3C) = temp_v1 | 0x200;
        return;
    }
    if (temp_a1 & 0x40000000) {
        *(s32 *)((char *)arg0 + 0x3C) = temp_v1 | 0x400;
        return;
    }
    if (temp_a1 < 0) {
        *(s32 *)((char *)arg0 + 0x3C) = temp_v1 | 0x800;
    }
}
