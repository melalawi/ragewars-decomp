#include "basetypes.h"

typedef struct Node {
    s32 unk0;
    struct Node *next;
    f32 value;
} Node;

typedef struct State {
    u8 pad0[0x1C];
    void *object;
    u8 pad20[4];
    f32 timer;
    u8 pad28[4];
    f32 count_up;
    f32 total;
    u8 pad34[8];
    u32 flags;
    Node *nodes;
    u8 pad44[4];
    s32 active;
    f32 amount;
    s32 retries;
} State;

extern f32 D_800D2988;
extern f32 D_800D2990;
extern f32 D_800CAF70[];
extern f32 D_800CAF78[];

extern void func_802A6770(s32, State *, Node *);
extern void func_802A6FE0(State *);

s32 func_802A3F94(s32 arg0, State *state) {
    Node *node;
    Node *next;
    f32 saved_step;
    f32 zero;
    f32 decay;
    f32 cutoff;
    f32 value;
    f32 updated;

    saved_step = D_800D2988;
    if (state->flags & 2) {
        D_800D2988 = saved_step * D_800D2990;
    }
    if (state->flags & 1) {
        D_800D2988 *= *(&D_800D2988 + 1);
    }
    if (state->flags & 8) {
        state->retries++;
        if (state->retries >= 3) {
            state->object = 0;
        }
    }

    if (state->count_up >= 0.0f) {
        state->total += D_800D2988;
    }
    state->timer -= D_800D2988;
    if (state->timer < 0.0f) {
        state->timer = 0.0f;
    }

    node = state->nodes;
    if (node != 0) {
        zero = 0.0f;
        decay = D_800CAF70[1];
        cutoff = D_800CAF78[0];
        do {
            next = node->next;
            if (state->timer <= zero && node->value > zero) {
                node->value = zero;
            }
            value = node->value;
            if (value <= zero) {
                updated = value - decay;
                node->value = updated;
                if (updated < cutoff) {
                    func_802A6770(arg0, state, node);
                }
            } else {
                updated = value - D_800D2988;
                node->value = updated;
                if (updated < zero) {
                    node->value = zero;
                }
            }
            node = next;
        } while (node != 0);
    }

    if (state->object != 0 && (state->flags & 1) &&
        !(*(u32 *)((u8 *)state->object + 0x100) & 0x200)) {
        func_802A6FE0(state);
    }
    D_800D2988 = saved_step;

    if (state->active == 0) {
        if (state->timer != 0.0f) {
            if (state->object == 0) {
                return 0;
            }
        } else {
            return 0;
        }
    }
    return 1;
}
