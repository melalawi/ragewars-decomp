#include "types.h"
#include "span_1000/code_80200610.h"

extern s32 func_802005A0_de(s32 address);

void func_80200880_de(s32 source, u8 *destination, u32 count) {
    while (count != 0 && (source & 3) != 0) {
        *destination++ = func_80200800_de(source++);
        count--;
    }
    while (count >= 4) {
        u32 word = func_802005A0_de(source);
        *destination++ = word >> 24;
        *destination++ = word >> 16;
        *destination++ = word >> 8;
        *destination++ = word;
        source += 4;
        count -= 4;
    }
    while (count != 0) {
        *destination++ = func_80200800_de(source++);
        count--;
    }
}
