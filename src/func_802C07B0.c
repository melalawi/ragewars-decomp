#include "basetypes.h"

typedef struct Node802C07B0 {
    s32 field0;
    s32 field4;
    u64 field8;
    u64 field10;
    void *field18;
    void *field1C;
} Node802C07B0;

extern void *D_800D92B0;
extern u64 func_802C0B9C(Node802C07B0 *node);
extern void func_802C0B3C(u64 value);

int func_802C07B0(Node802C07B0 *node, u64 arg1, u64 arg2, void *arg3, void *arg4) {
    u64 value;

    node->field10 = arg1;
    node->field0 = 0;
    node->field4 = 0;
    node->field8 = arg2;
    if (arg1 == 0) {
        node->field10 = arg2;
    }
    node->field18 = arg3;
    node->field1C = arg4;
    value = func_802C0B9C(node);
    if (*(void **)D_800D92B0 == node) {
        func_802C0B3C(value);
    }
    return 0;
}
