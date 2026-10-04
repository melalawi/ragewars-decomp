#include "span_1000/code_802A137C.h"
#include "types.h"
/* Returns a pointer to the last occurrence of a character in a string, or 0 when it does not occur
   (strrchr). */

u8 *func_802A0444_de(u8 *s, int c) {
    u8 *start = s;

    while (*s++ != 0) {
    }
    s--;
    for (; s != start; s--) {
        if (*s == (u8)c) {
            break;
        }
    }
    if (*s == (u8)c) {
        return s;
    }
    return 0;
}
