#include "basetypes.h"

typedef struct MidiState802B70B8 {
    s32 start;
    s32 track_start;
    s32 current;
    s32 unkC;
    s32 end;
    f32 tick_scale;
    s16 division;
    s16 unk1A;
} MidiState802B70B8;

extern s32 func_802B74C4(MidiState802B70B8 *state);
extern s16 func_802B7494(MidiState802B70B8 *state);
extern f32 D_800CC730;

void func_802B70B8(MidiState802B70B8 *state, s32 start, s32 end) {
    s16 division;

    state->start = start;
    state->end = end;
    state->unk1A = 0;
    state->unkC = 0;
    state->current = start;
    if (func_802B74C4(state) == 0x4D546864) {
        func_802B74C4(state);
        if (((func_802B7494(state) << 16) == 0) && (func_802B7494(state) == 1)) {
            division = func_802B7494(state);
            state->division = division;
            if (!(division & 0x8000)) {
                state->tick_scale = D_800CC730 / (f32) division;
                if (func_802B74C4(state) == 0x4D54726B) {
                    func_802B74C4(state);
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
