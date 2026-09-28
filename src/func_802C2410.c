#include "basetypes.h"
extern s32 func_802C2520(void *(*)(void *, const char *, s32), void *, const char *, char *);
extern void *D_2C2468(void *, const char *, s32);
/* sprintf: formats into a buffer through func_802C2520 with the copying output routine, terminates the text when the length is not negative, and returns the length. */
s32 func_802C2410(char *buffer, const char *format, ...) {
    s32 length = func_802C2520(D_2C2468, buffer, format, __builtin_next_arg(format));

    if (length >= 0) {
        buffer[length] = 0;
    }
    return length;
}
