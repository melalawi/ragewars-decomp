#include "basetypes.h"

typedef struct Node {
    struct Node *next;
} Node;

extern s32 func_802C2260(s32);
extern void func_802B7520(Node *arg0);
extern void func_802B7550(Node *arg0, void *arg1);

typedef struct func_802B52B0_S1 func_802B52B0_S1;
struct func_802B52B0_S1 {
    char pad0[0x8];
    Node* unk8;
};

void func_802B52B0(void *arg0) {
    Node *cur;
    Node *next;
    s32 saved;

    saved = func_802C2260(1);
    cur = ((func_802B52B0_S1 *)(arg0))->unk8;
    if (cur != 0) {
        do {
            next = cur->next;
            func_802B7520(cur);
            func_802B7550(cur, arg0);
            cur = next;
        } while (cur != 0);
    }
    func_802C2260(saved);
}
