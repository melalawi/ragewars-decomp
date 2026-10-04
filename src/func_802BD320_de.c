#include "span_1000/code_802C224C.h"
#include "types.h"
extern s32 func_802BD430_de(void *(*)(void *, const char *, s32), void *, const char *, char *);
extern void *D_002BD378(void *, const char *, s32);
/* sprintf: formats into a buffer through func_802BD430_de with the copying output routine, terminates the text when the length is not negative, and returns the length. */
s32 func_802BD320_de(char *buffer, const char *format, ...) {
    s32 length = func_802BD430_de(D_002BD378, buffer, format, __builtin_next_arg(format));

    if (length >= 0) {
        buffer[length] = 0;
    }
    return length;
}
