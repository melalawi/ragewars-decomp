#include "basetypes.h"

/* Formats its arguments into the shared buffer D_8014D0D0 and writes the text to the stream through func_802A1F50 in runs, emitting the one-byte D_800CAEF0 before every newline, returning the number of bytes written. */

extern unsigned char D_8014D0D0;
extern char D_800CAEF0;
extern s32 func_80414D4C(unsigned char *buffer, const char *format, char *args);
extern void func_802A1F50(const unsigned char *data, s32 size, s32 count, void *stream);

s32 func_802A1C38(void *stream, const char *format, ...) {
    unsigned char *run;
    unsigned char *p;
    s32 length;
    s32 total;

    func_80414D4C(&D_8014D0D0, format, __builtin_next_arg(format));
    run = &D_8014D0D0;
    p = run;
    length = 0;
    total = 0;
    for (; *p != 0; p++, length++) {
        if (*p == '\n') {
            if (length > 0) {
                func_802A1F50(run, 1, length, stream);
                total += length;
                length = 0;
                run = p;
            }
            func_802A1F50(&D_800CAEF0, 1, 1, stream);
            total++;
        }
    }
    if (length > 0) {
        func_802A1F50(run, 1, length, stream);
        total += length;
    }
    return total;
}
