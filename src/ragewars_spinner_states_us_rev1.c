#include "types.h"
#include "span_16E000/code_804453C4.h"

/* Eight writable 24-byte spinner/text-entry states. The existing menu
 * consumers read value/timer/count and append into the 12-byte text field.
 * ROM E6FC0..E7080, VMA800E63C0. Explicit startup initialization. */
Entry_func_80445AB4_de D_800E20A0[8] = {
    {0, 0.0f, 0, {0}}, {0, 0.0f, 0, {0}},
    {0, 0.0f, 0, {0}}, {0, 0.0f, 0, {0}},
    {0, 0.0f, 0, {0}}, {0, 0.0f, 0, {0}},
    {0, 0.0f, 0, {0}}, {0, 0.0f, 0, {0}}
};
typedef char player_entry_state_size[
    (sizeof(D_800E20A0) == 192) ? 1 : -1];
