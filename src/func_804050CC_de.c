#include "span_16E000/code_80403BCC.h"
#include "types.h"







extern PakDirectory_func_8040458C_de *D_800DE804;

/* Counts empty Controller Pak note slots on channel ch when the pak is ready and returns its error status, or -2 when not ready. */
s32 func_804050CC_de(s32 ch, s32 *count) {
    s32 i;

    if (D_8014D260[ch] != 3) {
        return -2;
    }
    *count = 0;
    if (D_8014D270[ch] == 0) {
        for (i = 0; i < 16; i++) {
            if (D_800DE804[ch].notes[i].file_size == 0) {
                (*count)++;
            }
        }
    }
    return D_8014D270[ch];
}
