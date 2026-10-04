#include "span_1000/code_8020A95C.h"
#include "types.h"








void func_8020D114_de(char *owner, s32 *output, s32 count) {
    s32 i;
    s32 done;
    s32 value;
    Node8020D114 *node;

    for (i = 0; i < count; i++) {
        output[i] = -1;
    }

    node = ((func_8020D114_S1 *)(owner))->unk24;
    value = ((func_8020D114_S1 *)(owner))->unk18;
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
