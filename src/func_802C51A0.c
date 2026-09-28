#include "basetypes.h"

typedef struct DecodeState {
    s32 first;
    s32 third;
    void *source;
    s32 second;
    s32 count;
    void *cursor;
} DecodeState;

extern DecodeState D_80151CC8;
extern volatile unsigned short D_800D94E8;
extern volatile unsigned short D_800D94EA;
extern volatile unsigned short D_800D94EC;
extern volatile unsigned short D_800D94EE;
extern volatile unsigned short D_800D94F0;

/** Initialize the global decoder state and return its scaled period. */
u32 func_802C51A0(s32 *source, u32 divisor, s32 *first)
{
    DecodeState *state = &D_80151CC8;
    state->source = source;
    state->cursor = source;
    state->first = *(s32 *)state->cursor;
    state->cursor = (s32 *)state->cursor + 1;
    state->count = *(s32 *)state->cursor;
    state->second = *(s32 *)state->cursor;
    state->cursor = (s32 *)state->cursor + 1;
    state->third = *(s32 *)state->cursor;
    state->cursor = (s32 *)state->cursor + 1;
    D_800D94EE = 0;
    D_800D94F0 = 0;
    D_800D94E8 = 0;
    D_800D94EA = 0;
    D_800D94EC = 0;
    *first = state->first;
    return (u64)((s64)state->count * 0xF424000) / divisor;
}
