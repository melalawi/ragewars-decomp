#include "basetypes.h"

/* Measures the pixel width of a string of the given length in the given font by summing each character's signed width byte from the font record func_8041208C returns, then adding the spacing func_80411CE0 reports once between each pair of characters.
   Adapted from func_8025C8F8 with the two clears and per-record call replaced by the font lookup, the width sum and the spacing term changed. */

typedef struct {
    s8 width;
    char pad[7];
} Glyph;

typedef struct {
    char pad[8];
    Glyph glyphs[1];
} Font;

extern Font *func_8041208C(s32 index);
extern short func_80411CE0(s32 index);

s32 func_8040F1E0(s32 font, u8 *text, s32 length) {
    Font *record;
    s32 i;
    s32 total;

    record = func_8041208C(font);
    total = 0;
    for (i = 0; i < length; i++) {
        total += record->glyphs[*text++ - 0x20].width;
    }
    total += func_80411CE0(font) * (length - 1);
    return total;
}
