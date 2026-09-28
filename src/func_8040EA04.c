/* Hit-tests a widget tree at point (px, py): unless a hit is already recorded it searches the
   node's later siblings first, then offsets the origin by the node's position and searches its
   children, and finally records the node itself when it has an id, its rectangle contains the
   point and func_8029A7E4 accepts its selector. */
#include "basetypes.h"

typedef struct Widget {
    char pad0[4];
    struct Widget *next;
    struct Widget *child;
    s16 id;
    u16 selector;
    char pad10[4];
    s16 x;
    s16 y;
    s16 width;
    s16 height;
} Widget;


typedef struct {
    s32 x;
    s32 y;
    s32 flags;
    f32 scaleX;
    f32 scaleY;
    s32 v[5];
} DrawArgs;

extern s32 func_8029A7E4(u16 selector);

void func_8040EA04(Widget **hit, Widget *node, DrawArgs args, s32 px, s32 py) {
    if (*hit != 0) {
        return;
    }
    if (node->next != 0) {
        func_8040EA04(hit, node->next, args, px, py);
    }
    if (*hit != 0) {
        return;
    }
    args.x += node->x;
    args.y += node->y;
    if (node->child != 0) {
        func_8040EA04(hit, node->child, args, px, py);
    }
    if (*hit != 0) {
        return;
    }
    if (node->id == -1) {
        return;
    }
    if (px < args.x || args.x + node->width < px || py < args.y ||
        args.y + node->height < py) {
        return;
    }
    if (func_8029A7E4(node->selector) != 0) {
        *hit = node;
    }
}
