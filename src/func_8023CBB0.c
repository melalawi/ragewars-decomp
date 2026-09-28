#include "basetypes.h"

typedef struct Node {
    struct Node *next;
    u16 f4;
    u16 f6;
} Node;

extern Node D_80103F88;

Node *func_8023CBB0(u32 arg0) {
    Node *var_v1;
    u16 temp_a1;

    var_v1 = &D_80103F88;
    if (&D_80103F88 != 0) {
    loop_1:
        temp_a1 = var_v1->f4;
        if ((arg0 < temp_a1) || (arg0 >= (u32)(temp_a1 + var_v1->f6))) {
            var_v1 = var_v1->next;
            if (var_v1 != 0) {
                goto loop_1;
            }
        }
    }
    return var_v1;
}
