/* Returns a pointer to the last occurrence of a character in a string, or 0 when it does not occur
   (strrchr). */
#include "basetypes.h"

u8 *func_802A1444(u8 *s, int c) {
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
