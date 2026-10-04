#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
#include "types.h"



extern f32 func_802747A0_de(f32 value, f32 step);




extern f32 D_800CD738;

u32 func_802337D0_de(State_func_802337D0_de *state) {
    f32 scale;
    f32 step;

    if (state->value > state->limit) {
        state->limit = state->value;
    }
    if (state->rate == 0.0f) {
        state->accumulator = D_800C3080_de;
    }
    if (state->rate < state->limit + state->limit) {
        state->rate = state->limit + state->limit;
    }

    step = D_800CD738;
    scale = D_800C3084_de;
    state->value = func_802747A0_de(state->value, step * scale);
    state->limit = func_802747A0_de(state->limit, D_800CD738 * scale);

    switch (state->mode) {
    case 1:
        if (state->rate > 0.0f) {
            state->accumulator += (state->rate + state->rate) * (D_800CD738 * scale);
            state->rate = func_802747A0_de(state->rate, D_800C3088_de);
        }
        break;
    case 0:
        if (state->rate > 0.0f) {
            state->rate = func_802747A0_de(state->rate, D_800C308C_de);
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
