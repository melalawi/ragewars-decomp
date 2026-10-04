#include "span_1000/code_8027230C.h"
#include "types.h"

/** Trivial busy-wait delay loop (no side effects). */
void func_80272FA4_de(void) {
    s32 count;

    count = 3;
    do {
        count -= 1;
    } while (count >= 0);
}
