#include "span_16E000/code_8044239C.h"
#include "types.h"
/* Sums the glyph advances that func_8044222C_de returns for each character pair of a string at the given scales, stopping at a newline, the end of the string or a null pointer. */

extern f32 func_8044222C_de(int c, u8 next, f32 sx, f32 sy);

f32 func_804422F0_de(u8 *p, f32 sx, f32 sy) {
    f32 total;
    u8 c;

    total = 0.0f;
    while (p != 0 && (c = *p) != 0 && c != '\n') {
        p++;
        total += func_8044222C_de(c, *p, sx, sy);
    }
    return total;
}
