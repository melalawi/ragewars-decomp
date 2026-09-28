#include "basetypes.h"

s32 func_8028D728(void *arg0, void *arg1) {
    void *base;

    if (*(u32 *)((char *)arg1 + 0x100) & 0x80000) {
        return -1;
    }
    base = *(void **)((char *)arg0 + 0x138);
    if (arg1 >= base &&
        (char *)arg1 <= (char *)base + (*(u32 *)((char *)arg0 + 0x140) * 0x2E8 - 0x2E8)) {
        return ((u32)arg1 - (u32)base) / 0x2E8;
    }
    return -1;
}
