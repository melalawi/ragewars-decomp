#include "basetypes.h"

extern u8 D_801462E5;

void func_8022E938(void *arg0) {
    u8 *ptr;

    ptr = &D_801462E5;
    if (*ptr != 0) {
        return;
    }
    if (*(s32 *)(ptr - 0x55) != 0) {
        if (*(s32 *)((char *)arg0 + 0x6AC) & 0x20) {
            return;
        }
    }
    if (!(*(s32 *)((char *)arg0 + 0x6B0) & 0x800)) {
        return;
    }
    if (*(s32 *)((char *)arg0 + 0x13D4) != 0) {
        *(s32 *)((char *)arg0 + 0x13D4) = 0;
        return;
    }
    *(s32 *)((char *)arg0 + 0x13D4) = 1;
}
