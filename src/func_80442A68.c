#include "basetypes.h"

/* Tears down every node of one list: walks it from the head, saving the successor at 0x1D4 first,
   skips nodes of kind 2 while the list is not the global one at D_8014561C and that list's flag at
   0x10 is set, and for each remaining node asks func_80441384 whether it may go; when it may, calls
   the node's optional handler at 0xC of its table at 0x14, clears the three words at 0xB0, 0xB4 and
   0xBC of the state it owns at 0x20, unlinks it with func_80255E78 and releases its handle at 0x8
   through func_802537D8. */

typedef struct Node Node;
typedef struct List List;
typedef struct State State;
typedef struct Table Table;

struct List {
    Node *head;
    char pad04[0x10 - 0x4];
    s32 flag;
};

struct Table {
    char pad00[0xC];
    void (*handler)(Node *, List *);
};

struct State {
    char pad00[0xB0];
    s32 field_B0;
    s32 field_B4;
    char padB8[0xBC - 0xB8];
    s32 field_BC;
};

struct Node {
    char pad00[0x8];
    s32 handle;
    char pad0C[0x14 - 0xC];
    Table *table;
    char pad18[0x20 - 0x18];
    State *state;
    char pad24[0x28 - 0x24];
    s16 kind;
    char pad2A[0x1D4 - 0x2A];
    Node *next;
};

extern List D_8014561C;
extern s32 func_80441384(Node *, List *);
extern void func_80255E78(List *, Node *);
extern void func_802537D8(s32, s32);

void func_80442A68(List *list) {
    Node *node;
    Node *next;
    State *state;

    node = list->head;
    while (node != 0) {
        next = node->next;
        if (!((node->kind == 2) && (list != &D_8014561C) && (D_8014561C.flag != 0))) {
            if (func_80441384(node, list) != 0) {
                if (node->table->handler != 0) {
                    node->table->handler(node, list);
                }
                state = node->state;
                state->field_B0 = 0;
                state->field_B4 = 0;
                state->field_BC = 0;
                func_80255E78(list, node);
                func_802537D8(0, node->handle);
            }
        }
        node = next;
    }
}
