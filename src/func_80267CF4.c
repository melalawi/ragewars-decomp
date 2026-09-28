#include "basetypes.h"

typedef struct Triple {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct SevenBytes {
    u8 a;
    u8 b;
    u8 c;
    u8 d;
    u8 e;
    u8 f;
    u8 g;
} SevenBytes;

typedef struct Node {
    s32 unused;
    struct Node *next;
} Node;

extern void *D_801450A8;
extern s32 func_8023939C(Node *arg0, Triple arg1);
extern void func_8023919C(void *, s32, s32, s32, s32, s32, s32, s32);

void func_80267CF4(s32 arg0, s32 arg1, s32 arg2, Triple arg3, SevenBytes arg6) {
    Node *node;

    node = D_801450A8;
    while (node != 0) {
        if (func_8023939C(node, arg3) != 0) {
            func_8023919C(node, arg6.a, arg6.b, arg6.c, arg6.d,
                          arg6.e, arg6.f, arg6.g);
        }
        node = node->next;
    }
}
