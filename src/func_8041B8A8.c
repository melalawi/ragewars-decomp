/* Unless slot index is locked, hides the node shown in that slot, finds node id under the root through func_8040ECB0, shows it, and stores it in that slot or, in shared mode, in all four slots. */
#include "basetypes.h"

typedef struct Node {
    s32 words_00[3];
    s16 id;
} Node;

typedef struct {
    s32 words_00[17];
    void *root;
    s32 words_48;
    Node *shown[4];
    s32 locked[4];
    s32 shared;
} Context;

extern void func_8029A5D4(s32 id, s32 command, s32 arg2, s32 arg3, s32 arg4);
extern Node *func_8040ECB0(void *root, s32 id);

void func_8041B8A8(Context *context, s32 index, s32 id) {
    Node *node;
    s32 i;

    if (context->locked[index] == 0) {
        if (context->shown[index] != 0) {
            func_8029A5D4(context->shown[index]->id, 0x10, 0, 0, 0);
        }
        node = func_8040ECB0(context->root, id & 0xFFFF);
        func_8029A5D4(node->id, 0xF, 0, 0, 0);
        if (context->shared == 0) {
            context->shown[index] = node;
        } else {
            for (i = 3; i >= 0; i--) {
                context->shown[i] = node;
            }
        }
    }
}
