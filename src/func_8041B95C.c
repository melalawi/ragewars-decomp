/* Unless slot index is locked, hides the node in that slot and shows the given node through func_8040E9A8, storing it in that slot or, in shared mode, in all four slots. */
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

extern void func_8040E9A8(Node *node, s32 visible);

void func_8041B95C(Context *context, s32 index, Node *node) {
    s32 i;

    if (context->locked[index] == 0) {
        if (context->shown[index] != 0) {
            func_8040E9A8(context->shown[index], 0);
        }
        func_8040E9A8(node, 1);
        if (context->shared == 0) {
            context->shown[index] = node;
        } else {
            for (i = 3; i >= 0; i--) {
                context->shown[i] = node;
            }
        }
    }
}
