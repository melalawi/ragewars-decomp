/* Walks a node tree recursively, replacing every reference to one pointer with another in each node's link fields. */
#include "basetypes.h"

typedef struct Node {
    char pad0[4];
    struct Node *left;
    struct Node *right;
    char padC[2];
    u16 kind;
    char pad10[2];
    u16 flags;
    char pad14[0x18];
    void *ref2C;
    void *ref30;
    void *ref34;
    void *ref38;
    char pad3C[8];
    void *ref44;
} Node;

void func_8040F004(Node *node, void *from, void *to) {
    if (node != 0) {
        if (node->left != 0) {
            func_8040F004(node->left, from, to);
        }
        if (node->right != 0) {
            func_8040F004(node->right, from, to);
        }
        if (node->flags & 0x10) {
            if (node->ref30 == from) {
                node->ref30 = to;
            }
            if (node->ref34 == from) {
                node->ref34 = to;
            }
            if (node->ref38 == from) {
                node->ref38 = to;
            }
            if (node->ref2C == from) {
                node->ref2C = to;
            }
        }
        if (node->kind == 2) {
            if (node->ref44 == from) {
                node->ref44 = to;
            }
        }
    }
}
