#include "basetypes.h"

typedef struct {
    s16 type;
    u8 pad2[6];
    u8 unk8;
    u8 unk9;
    u8 padA;
    u8 unkB;
    u8 unkC;
    u8 unkD;
    u8 padE[2];
} Message;

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    s32 value;
    s16 type;
} Node;

extern void func_802B4ECC(void *arg0, f32 arg1);
extern void func_802B7520(Node *arg0);
extern void func_802B7550(Node *arg0, Node *arg1);
extern void func_802B4E3C(void *arg0, Node *arg1);

void func_802B4C3C(void *arg0, Message *arg1) {
    volatile s32 padding[4];
    s32 total = 0;
    Node *head = 0;
    s32 scale;
    Node *node;
    Node *next;

    if (arg1->unk8 == 0xFF) {
        if (arg1->unk9 != 0x51) {
            return;
        }
        scale = *(s32 *)((char *)arg0 + 0x24);
        func_802B4ECC(arg0,
                      (f32)((arg1->unkB << 16) | (arg1->unkC << 8) | arg1->unkD));

        node = *(Node *volatile *)((char *)arg0 + 0x50);
        while (node != 0) {
            next = *(Node *volatile *)((char *)node + 0);
            total += *(volatile s32 *)((char *)node + 8);
            if (node->type == 0x15) {
                s32 node_total;

                func_802B7520(node);
                if (head != 0) {
                    func_802B7550(node, head);
                } else {
                    head = node;
                    node->prev = 0;
                    node->next = 0;
                }
                node_total = total;
                if (next != 0) {
                    total -= node->value;
                    next->value += node->value;
                }
                node->value = node_total;
            }
            node = next;
        }

        node = head;
        while (node != 0) {
            next = node->prev;
            node->value = (node->value / scale) * *(s32 *)((char *)arg0 + 0x24);
            func_802B4E3C((char *)arg0 + 0x48, node);
            node = next;
        }
    }
}
