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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2FB0_4 = 90.0f;
const float unbake_rodata_800C2FB4_4 = 3.0f;
const float unbake_rodata_800C2FB8_4 = 6.0f;
const float unbake_rodata_800C2FBC_4 = 6.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8170_4 = 90.0f;
const float unbake_rodata_800C8174_4 = 3.0f;
const float unbake_rodata_800C8178_4 = 6.0f;
const float unbake_rodata_800C817C_4 = 6.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3330_4 = 90.0f;
const float unbake_rodata_800C3334_4 = 3.0f;
const float unbake_rodata_800C3338_4 = 6.0f;
const float unbake_rodata_800C333C_4 = 6.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3370_4 = 90.0f;
const float unbake_rodata_800C3374_4 = 3.0f;
const float unbake_rodata_800C3378_4 = 6.0f;
const float unbake_rodata_800C337C_4 = 6.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3080_4 = 90.0f;
const float unbake_rodata_800C3084_4 = 3.0f;
const float unbake_rodata_800C3088_4 = 6.0f;
const float unbake_rodata_800C308C_4 = 6.0f;
#endif
