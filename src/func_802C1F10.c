#include "basetypes.h"

typedef struct Func802C1F10Node Func802C1F10Node;
struct Func802C1F10Node {
    s32 field0;
    s32 field4;
    void *field8;
    Func802C1F10Node *next;
    u16 field10;
};

extern Func802C1F10Node *D_800D929C;
extern void *D_800D92A0;

extern u32 func_802C2020(void);
extern void func_802C0960(void *arg0, Func802C1F10Node *arg1);
extern void func_802C1660(void);
extern void func_802C2040(u32);

void func_802C1F10(Func802C1F10Node *arg0) {
    Func802C1F10Node *node;
    Func802C1F10Node *cur;
    Func802C1F10Node **head;
    s32 token;

    node = arg0;
    token = func_802C2020();
    if (node == 0) {
        node = D_800D92A0;
    } else if (node->field10 != 1) {
        func_802C0960(node->field8, node);
    }

    head = &D_800D929C;
    if (*head == node) {
        *head = node->next;
    } else {
        cur = *head;
        while (cur->field4 != -1) {
            if (cur->next == node) {
                cur->next = node->next;
                break;
            }
            cur = cur->next;
        }
    }

    if (node == D_800D92A0) {
        func_802C1660();
    }
    func_802C2040(token);
}
