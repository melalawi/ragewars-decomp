/* Swaps two widgets within the widget tree: after walking up from the first widget to the root
   (type 2), it finds each widget's predecessor in its parent's child list, links the other widget
   in its place (as the predecessor's next or the parent's first child), and swaps the two widgets'
   parent and next links. */
#include "basetypes.h"

typedef struct Widget {
    struct Widget *parent;
    struct Widget *next;
    struct Widget *child;
    char padC[2];
    u16 type;
    char pad10[0x1C];
} Widget;

void func_8040F0C4(Widget *a, Widget *b) {
    Widget *w;
    Widget *cursorA;
    Widget *cursorB;
    Widget saved;

    cursorA = a;
root:
    if (cursorA->type != 2) {
        cursorA = cursorA->parent;
        goto root;
    }
    cursorA = a->parent;
    w = cursorA->child;
    cursorA = 0;
    goto testA;
nextA:
    w = cursorA->next;
testA:
    if (w != a) {
        cursorA = w;
        if (cursorA != 0) {
            goto nextA;
        }
    }
    cursorB = b->parent;
    w = cursorB->child;
    cursorB = 0;
    goto testB;
nextB:
    w = cursorB->next;
testB:
    if (w != b) {
        cursorB = w;
        if (cursorB != 0) {
            goto nextB;
        }
    }
    if (cursorA != 0) {
        cursorA->next = b;
    } else {
        a->parent->child = b;
    }
    if (cursorB != 0) {
        cursorB->next = a;
    } else {
        b->parent->child = a;
    }
    saved = *a;
    a->next = b->next;
    a->parent = b->parent;
    b->next = saved.next;
    b->parent = saved.parent;
}
