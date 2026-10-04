#include "span_1000/code_802C224C.h"
/** Copy a byte span and return its destination. */
void *func_802BD3A0_de(void *destination, const void *source, int count) {
    unsigned char *out = destination;
    const unsigned char *in = source;
    while (count != 0) {
        *out++ = *in++;
        --count;
    }
    return destination;
}
