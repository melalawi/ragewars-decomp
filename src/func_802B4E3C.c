#include "basetypes.h"

typedef struct Node Node;

struct Node {
    Node *prev;
    Node *next;
    s32 value;
    short type;
};

extern s32 func_802C2260(s32);
extern void func_802B7550(void *, void * *);

void func_802B4E3C(void *arg0, Node *arg1) {
    s32 saved;
    Node **link;
    Node *node;
    s32 value;
    s32 node_value;

    saved = func_802C2260(1);
    link = (Node **)((char *)arg0 + 8);
    if (link != 0) {
loop:
        node = *link;
        if (node == 0) {
            goto insert;
        }
        value = arg1->value;
        node_value = node->value;
        if (value < node_value) {
            node->value = node_value - value;
insert:
            func_802B7550(arg1, link);
            goto done;
        }
        arg1->value = value - node_value;
        link = (Node **)*link;
        if (link != 0) {
            goto loop;
        }
    }
done:
    func_802C2260(saved);
}
