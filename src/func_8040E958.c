#include "basetypes.h"

void func_8040E958(void *object, int enabled) {
    u16 *flags = (u16 *)((char *)object + 0x12);
    if (enabled) {
        *flags |= 8;
    } else {
        *flags &= 0xFFF7;
    }
}
