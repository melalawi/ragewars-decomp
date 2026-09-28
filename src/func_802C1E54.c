#include "basetypes.h"

typedef struct {
    s32 *f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 *f14;
} Node;

typedef struct {
    Node *cur;
    s32 f4;
} Ctx;

extern Ctx D_8014FDE0;
extern s32 D_800D9298;
extern void *func_802C1648(Node *arg0, Node *arg1, Ctx *arg2);
extern void func_802C15F8(void *arg0, void *arg1);

void func_802C1E54(void) {
    Node *node;
    s32 a0;
    s32 v1;
    s32 v0;
    s32 rem;

    node = D_8014FDE0.cur;
    if (node != 0) {
        a0 = node->f8;
        v1 = node->f10;
        if (a0 < v1) {
            v0 = node->fC + a0;
            rem = v0 % v1;
            node->f14[rem] = D_8014FDE0.f4;
            node->f8 = node->f8 + 1;
            if (*node->f0 != 0) {
                func_802C15F8(&D_800D9298, func_802C1648(node, node, &D_8014FDE0));
            }
        }
    }
}
