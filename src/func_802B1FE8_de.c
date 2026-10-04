#include "span_1000/code_802B6958.h"
#include "span_C76B0/data.h"
#include "types.h"



extern s32 func_802B23F4_de(MidiState802B70B8 *state);
extern s16 func_802B23C4_de(MidiState802B70B8 *state);


void func_802B1FE8_de(MidiState802B70B8 *state, s32 start, s32 end) {
    s16 division;

    state->start = start;
    state->end = end;
    state->unk1A = 0;
    state->unkC = 0;
    state->current = start;
    if (func_802B23F4_de(state) == 0x4D546864) {
        func_802B23F4_de(state);
        if (((func_802B23C4_de(state) << 16) == 0) && (func_802B23C4_de(state) == 1)) {
            division = func_802B23C4_de(state);
            state->division = division;
            if (!(division & 0x8000)) {
                state->tick_scale = D_800C74E0_de / (f32) division;
                if (func_802B23F4_de(state) == 0x4D54726B) {
                    func_802B23F4_de(state);
                    state->track_start = state->current;
                }
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C7400_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CC730_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C80D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C8AA0_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C74E0_4 = 1.0f;
#endif
