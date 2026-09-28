#include "basetypes.h"

/** Trivial busy-wait delay loop (no side effects). */
void func_80273014(void) {
    s32 count;

    count = 3;
    do {
        count -= 1;
    } while (count >= 0);
}
