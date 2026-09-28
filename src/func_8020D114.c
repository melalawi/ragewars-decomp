#include "basetypes.h"

typedef struct Node8020D114 Node8020D114;

struct Node8020D114 {
    s32 value;
    char pad04[0xC];
    Node8020D114 *next;
    char pad14[0x1C];
    Node8020D114 *parent;
};

void func_8020D114(char *owner, s32 *output, s32 count) {
    s32 i;
    s32 done;
    s32 value;
    Node8020D114 *node;

    for (i = 0; i < count; i++) {
        output[i] = -1;
    }

    node = *(Node8020D114 **)(owner + 0x24);
    value = *(s32 *)(owner + 0x18);
    done = 0;
    if (node == 0) {
        goto not_found;
    }
    do {
        if (node->value == value) {
            owner = (char *)node;
            goto found;
        }
        node = node->next;
    } while (node != 0);
not_found:
    owner = 0;
found:
    if (((Node8020D114 *)owner)->parent == 0) {
        output[0] = ((Node8020D114 *)owner)->value;
        return;
    }

    while (done == 0) {
        for (i = count - 1; i > 0; i--) {
            output[i] = output[i - 1];
        }
        output[0] = ((Node8020D114 *)owner)->value;
        owner = (char *)((Node8020D114 *)owner)->parent;
        if (((Node8020D114 *)owner)->parent == 0) {
            done = 1;
        }
    }
}
