#include "basetypes.h"

typedef struct Node Node;

struct Node {
    u8 pad0[0x5D8];
    u8 *state;
    u8 pad5DC[0x280];
    s32 field85C;
    u8 pad860[0xE80];
    Node *next;
};

typedef struct {
    u8 pad0[0x1C];
    s32 field1C;
    s32 field20;
    s32 field24;
    s32 field28;
} GlobalState;

extern GlobalState D_801468A0;
extern s32 D_801468BC;
extern void func_80264874(s32 arg0);
extern void func_802227D0(Node *arg0, Node *arg1, s32 arg2);

void func_8022A738(void *arg0) {
    GlobalState *state;
    Node *node;

    state = &D_801468A0;
    if ((state->field1C != 0) || (state->field20 != 0)) {
        return;
    }

    func_80264874(0);
    if (state->field24 != 0) {
        if (state->field28 == 0) {
            state->field28 = 1;
            node = *(Node **)((u8 *)arg0 + 0x20);
            while (node != 0) {
                func_802227D0(node, node, 0x15);
                node = node->next;
            }
        }
    } else {
        state->field1C = 1;
        node = *(Node **)((u8 *)arg0 + 0x20);
        while (node != 0) {
            func_802227D0(node, node, 0x15);
            node = node->next;
        }
    }

    D_801468BC = 1;
    node = *(Node **)((u8 *)arg0 + 0x20);
    while (node != 0) {
        node->field85C = 0;
        node->state[0x8E] = 1;
        node = node->next;
    }
}
