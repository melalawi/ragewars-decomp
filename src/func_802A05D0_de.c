#include "span_1000/code_802A137C.h"
#include "types.h"

/* Parses a signed decimal integer from a string, skipping leading spaces and one optional sign (atoi). */
s32 func_802A05D0_de(u8 *s) {
    s32 n;
    s32 c;
    u8 sign;

    while (*s == ' ') {
        s++;
    }
    c = *s;
    sign = c;
    s++;
    if (sign == '-' || sign == '+') {
        c = *s;
        s++;
    }
    n = 0;
    while (c >= '0' && c <= '9') {
        n = (c - '0') + n * 10;
        c = *s;
        s++;
    }
    if (sign == '-') {
        return -n;
    }
    return n;
}
