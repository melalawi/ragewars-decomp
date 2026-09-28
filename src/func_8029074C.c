#include "basetypes.h"

extern f32 D_801031F8[];
extern void func_8024F460(void *arg0);
extern s32 func_8024D150(void *arg0);

typedef struct Node Node;
struct Node {
    char pad0[0x17C];
    f32 x0;
    f32 x1;
    f32 x2;
    f32 y0;
    f32 y1;
    f32 y2;
    char pad194[8];
    s32 flags;
    char pad1A0[0x3C];
    Node *next;
};

typedef struct {
    char pad0[0x3C04];
    Node *head;
} Container;

typedef struct {
    char pad0[0x144];
    Node *nodes[0x200];
    s32 count;
} Results;

void func_8029074C(Container *arg0, Results *arg1) {
    f32 *bounds;
    s32 count;
    s32 mask;
    s32 required;
    s32 limit;
    Node *node;

    node = arg0->head;
    if (node != 0) {
        mask = 0x30000;
        required = 0x20000;
        bounds = D_801031F8 + 1;
        limit = 0x200;
        do {
            func_8024F460(node);
            if (((node->flags & mask) == required) &&
                (func_8024D150(node) != 0) &&
                !(*(u16 *)&node->flags & 0x100) &&
                (bounds[0] > node->x0) &&
                (bounds[-3] < node->y0) &&
                (bounds[2] > node->x2) &&
                (bounds[-1] < node->y2) &&
                (bounds[1] > node->x1) &&
                (bounds[-2] < node->y1)) {
                count = arg1->count;
                if (count != limit) {
                    arg1->nodes[count] = node;
                    arg1->count = count + 1;
                }
            }
            node = node->next;
        } while (node != 0);
    }
}
