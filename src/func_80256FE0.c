#include "basetypes.h"

typedef struct Node {
    struct Node *prev;
    struct Node *next;
    s32 field8;
    u32 age;
} Node;

extern u32 D_800D0940;
extern u32 D_800D0944;
extern char D_8010BDD8[];
extern Node *D_8010BDF4[];

extern void func_802C0390(s32, s32, s32);
extern void func_802B7520(Node *arg0);
extern void func_802B7550(void *arg0, void **arg1);

void func_80256FE0(void) {
    u32 i;
    s32 value;
    Node *node;
    Node *next;

    value = 0;
    for (i = 0; i < D_800D0944; i++) {
        func_802C0390(D_8010BDD8, &value, 1);
    }

    node = D_8010BDF4[0];
    if (node != 0) {
        do {
            next = node->prev;
            if (node->age + 1 < D_800D0940) {
                if (D_8010BDF4[0] == node) {
                    D_8010BDF4[0] = next;
                }
                func_802B7520(node);
                if (D_8010BDF4[1] != 0) {
                    func_802B7550(node, (void **)D_8010BDF4[1]);
                } else {
                    D_8010BDF4[1] = node;
                    node->prev = 0;
                    node->next = 0;
                }
            }
            node = next;
        } while (node != 0);
    }

    D_800D0944 = 0;
    D_800D0940++;
}
