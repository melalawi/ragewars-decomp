#include "basetypes.h"

typedef struct {
    s32 mode;
    f32 value;
    f32 limit;
    f32 rate;
    f32 accumulator;
} State;

extern f32 func_80274810(f32 value, f32 step);
extern f32 D_800C8170;
extern f32 D_800C8174;
extern f32 D_800C8178;
extern f32 D_800C817C;
extern f32 D_800D2988;

u32 func_802337C0(State *state) {
    f32 scale;
    f32 step;

    if (state->value > state->limit) {
        state->limit = state->value;
    }
    if (state->rate == 0.0f) {
        state->accumulator = D_800C8170;
    }
    if (state->rate < state->limit + state->limit) {
        state->rate = state->limit + state->limit;
    }

    step = D_800D2988;
    scale = D_800C8174;
    state->value = func_80274810(state->value, step * scale);
    state->limit = func_80274810(state->limit, D_800D2988 * scale);

    switch (state->mode) {
    case 1:
        if (state->rate > 0.0f) {
            state->accumulator += (state->rate + state->rate) * (D_800D2988 * scale);
            state->rate = func_80274810(state->rate, D_800C8178);
        }
        break;
    case 0:
        if (state->rate > 0.0f) {
            state->rate = func_80274810(state->rate, D_800C817C);
        }
        break;
    }

    return state->rate == 0.0f;
}
