/* Searches a zero-terminated byte string for a pattern and returns the position just past the first match, or zero when there is none. */
#include "basetypes.h"

u8 *func_802A152C(u8 *s, u8 *pattern) {
    u8 *p;

    while (*s != 0) {
        while (*s != 0 && *s != *pattern) {
            s++;
        }
        p = pattern;
        while (*p != 0 && *s == *p) {
            p++;
            s++;
        }
        if (*p == 0) {
            return s;
        }
    }
    return 0;
}
