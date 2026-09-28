#include "basetypes.h"

/** Consume and return two big-endian bytes from the stream pointer at offset 8. */
s16 func_802B7494(void *arg0) {
    unsigned char *p;
    u32 b0;
    u32 b1;

    p = *(unsigned char **)((char *)arg0 + 8);
    b0 = p[0];
    p = p + 1;
    *(unsigned char **)((char *)arg0 + 8) = p;
    b1 = p[0];
    *(unsigned char **)((char *)arg0 + 8) = p + 1;
    return (s16)((b0 << 8) | b1);
}
