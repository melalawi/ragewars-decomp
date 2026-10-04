#include "span_1000/code_8029FF18.h"
#include "types.h"
u8 *func_802A0324_de(u8 *destination, u8 *source, s32 count) {
    u8 *end = destination + 1;
    u8 byte;
    if (*destination != 0) {
        do { } while (*end++ != 0);
    }
    --end;
    while (count-- != 0) {
        byte = *source++;
        *end++ = byte;
        if (!(byte & 0xFF)) return destination;
    }
    *end = 0;
    return destination;
}
