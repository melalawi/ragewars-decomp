#include "basetypes.h"

typedef struct Node802A6DF8 {
    u32 unk0;
    f32 value;
} Node802A6DF8;

typedef struct State802A6DF8 {
    struct State802A6DF8 *prev;
    struct State802A6DF8 *next;
    Node802A6DF8 *node;
    u8 padC[0x10];
    void *object;
    u8 pad20[4];
    f32 value;
    u8 pad28[0x14];
    u32 flags;
} State802A6DF8;

typedef struct List802A6DF8 {
    State802A6DF8 *head;
    State802A6DF8 *tail;
    s32 count;
} List802A6DF8;

typedef struct Lists802A6DF8 {
    List802A6DF8 active;
    List802A6DF8 inactive;
} Lists802A6DF8;

typedef struct Owner802A6DF8 {
    u8 pad0[0x751C];
    Lists802A6DF8 lists;
} Owner802A6DF8;

extern s32 func_802A3F94(s32 arg0, State802A6DF8 *state);
extern void func_80279764(Lists802A6DF8 *lists, State802A6DF8 *state);

void func_802A6DF8(Owner802A6DF8 *owner) {
    State802A6DF8 *state;
    State802A6DF8 *next;
    u8 *object;

    state = owner->lists.inactive.head;
    if (state != 0) {
        do {
            next = state->next;
            if (func_802A3F94((s32)owner, state) == 0) {
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
                func_80279764(&owner->lists, state);
            }
            state = next;
        } while (state != 0);
    }
}
