#include "basetypes.h"

typedef struct RuntimeState {
    void *resources;
    u32 active;
    u32 scale;
    u32 total;
    u32 previous;
    u32 first;
    u8 *objects[16];
    u32 values[16];
    u8 flags98[16];
    u8 flagsA8[16];
    u32 results[16];
} RuntimeState;

typedef struct DecodeResult {
    s16 type;
    u8 pad2[2];
    u32 value;
    u8 pad8[8];
} DecodeResult;

extern s32 func_802B3100(RuntimeState *state, u32 index, DecodeResult *result);
extern u32 func_802B3AFC(RuntimeState *state, u32 index);

void func_802B378C(RuntimeState *state, DecodeResult *result) {
    u32 minimum;
    u32 index;
    u32 selected;
    u32 decrement;

    minimum = -1;
    index = 0;
    decrement = state->previous;
    do {
        if ((state->active >> index) & 1) {
            if (state->first != 0) {
                state->results[index] -= decrement;
            }
            if (state->results[index] < minimum) {
                minimum = state->results[index];
                selected = index;
            }
        }
        index++;
    } while (index < 16);

    func_802B3100(state, selected, result);
    result->value = minimum;
    state->previous = minimum;
    state->total += minimum;
    if (result->type != 0x12) {
        u32 delta;

        delta = func_802B3AFC(state, selected);
        state->results[selected] += delta;
    }
    state->first = 1;
}
