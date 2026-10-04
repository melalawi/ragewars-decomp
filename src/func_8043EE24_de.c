#include "common/types.h"
#include "span_16E000/code_8043EEC0.h"
#include "types.h"

/* Counts the timer at offset 0x10 of D_801468A0 down by D_800D2988, stopping at zero, and returns
   zero. */


extern struct Field_f32_10 D_801427E0;
extern f32 D_800CD738;

s32 func_8043EE24_de(void) {
    struct Field_f32_10 *state = &D_801427E0;
    f32 timer = state->value - D_800CD738;

    state->value = timer;
    if (timer < 0.0f) {
        state->value = 0.0f;
    }
    return 0;
}
