#include "span_1000/code_802C0384.h"
#include "types.h"



extern void *D_800D5280;
extern u64 func_802BBAAC_de(Node802C07B0 *node);


int func_802BB6C0_de(Node802C07B0 *node, u64 arg1, u64 arg2, void *arg3, void *arg4) {
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
    value = func_802BBAAC_de(node);
    if (*(void **)D_800D5280 == node) {
        func_802BBA4C_de(value);
    }
    return 0;
}
