#include "basetypes.h"

typedef struct Node80254858 {
    s32 field0;
    s32 field4;
    s32 references;
    s32 flags;
} Node80254858;

extern Node80254858 *func_80251448(s32 arg0, u32 arg1);
extern s32 func_80254B2C(s32 arg0, s32 arg1, s32 arg2, u32 arg3);
extern void func_80254C10(s32 arg0, void *arg1);
extern void func_80254A70(s32 arg0, void *arg1);

Node80254858 *func_80254858(s32 arg0_unused, s32 arg1, u32 arg2) {
    Node80254858 *node;
    s32 result;

    node = func_80251448(0, arg2);
    if (node != 0) {
        node->references++;
        node->flags |= 0x100;
        result = func_80254B2C(0, arg1, (arg2 >> 5) & 1, arg2);
        node->field0 = result;
        if (result != 0) {
            node->field4 = arg1;
            node->flags |= arg2;
            func_80254C10(0, node);
            return node;
        }
        node->references--;
        if (node->references == 0) {
            node->flags &= ~0x100;
        }
        func_80254A70(0, node);
        node = 0;
    }
    return node;
}
