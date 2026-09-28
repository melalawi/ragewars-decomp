#include "basetypes.h"

typedef struct Node802A6FE0 {
    u32 unk0;
    f32 value;
} Node802A6FE0;

typedef struct State802A6FE0 {
    u8 pad0[8];
    Node802A6FE0 *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
} State802A6FE0;

void func_802A6FE0(State802A6FE0 *state) {
    u8 *object;

    object = state->object;
    if (object != 0) {
        if (state->flags & 1) {
            if (object[0x13B] != 0) {
                object[0x13B]--;
            }
        }
        if (state->flags & 2) {
            object = state->object;
            if (object[0x1D9] != 0) {
                object[0x1D9]--;
            }
        }
    }
    state->object = 0;
    if (state->value < state->node->value) {
        state->value = state->node->value;
    }
}
