#include "span_1000/code_802A137C.h"
#include "types.h"

/* Formats a signed integer as a NUL-terminated decimal string (K&R itoa with the reverse inlined). */
void func_802A066C_de(s32 n, char *s) {
    s32 i;
    s32 j;
    s32 sign;
    s32 len;
    char c;

    if ((sign = n) < 0) {
        n = -n;
    }
    i = 0;
    do {
        s[i++] = n % 10 + '0';
    } while ((n /= 10) > 0);
    if (sign < 0) {
        s[i++] = '-';
    }
    len = i;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    s[len] = '\0';
}
