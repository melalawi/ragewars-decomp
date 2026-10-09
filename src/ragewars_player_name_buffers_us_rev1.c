#include "types.h"
#include "span_16E000/code_804453C4.h"

/* Player-name slots used by the existing menu text-entry state consumers.
 * Each target is the text field at offset12 in a 24-byte state.
 * ROM E7080..E7090, VMA800E6480; pointee objects separately owned above. */
extern Entry_func_80445AB4_de D_800E63C0[8];
u8 *const ragewars_player_name_buffers_us_rev1[4] = {
    D_800E63C0[0].text, D_800E63C0[1].text,
    D_800E63C0[2].text, D_800E63C0[3].text
};
