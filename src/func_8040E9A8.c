#include "basetypes.h"

void func_8040E9A8(void *object, int enabled) {
    u16 *flags = (u16 *)((char *)object + 0x12);
    if (enabled) {
        *flags |= 0x40;
    } else {
        *flags &= 0xFFBF;
    }
}
