#include "span_1000/code_802A137C.h"
#include "types.h"
/* Searches a zero-terminated byte string for a pattern and returns the position just past the first match, or zero when there is none. */

u8 *func_802A052C_de(u8 *s, u8 *pattern) {
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
