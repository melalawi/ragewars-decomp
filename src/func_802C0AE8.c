#include "basetypes.h"

extern void *D_800D92B0;
extern u64 D_8014FE28;
extern s32 D_8014FE20;
extern s32 D_8014FE24;

typedef struct {
    void *next;
    void *prev;
    u64 field8;
    u64 field10;
    s32 field18;
    s32 field1C;
} Node;

void func_802C0AE8(void) {
    Node *node = (Node *)D_800D92B0;

    D_8014FE28 = 0;
    D_8014FE20 = 0;
    D_8014FE24 = 0;
    node->field10 = 0;
    node->field8 = 0;
    node->prev = node;
    node->next = node;
    node->field18 = 0;
    node->field1C = 0;
}
