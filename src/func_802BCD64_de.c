#include "span_1000/code_802C1358.h"
#include "span_1000/types.h"
#include "types.h"





extern Ctx D_80149B50;
extern s32 D_800D5268_de;
extern void *func_802BC558_de(Queue_func_802BB420_de *arg0, Queue_func_802BB420_de *arg1, Ctx *arg2);
extern void func_802BC508_de(void *arg0, void *arg1);

void func_802BCD64_de(void) {
    Queue_func_802BB420_de *node;
    s32 a0;
    s32 v1;
    s32 v0;
    s32 rem;

    node = D_80149B50.cur;
    if (node != 0) {
        a0 = node->count;
        v1 = node->capacity;
        if (a0 < v1) {
            v0 = node->start + a0;
            rem = v0 % v1;
            node->entries[rem] = D_80149B50.f4;
            node->count = node->count + 1;
            if (*node->state != 0) {
                func_802BC508_de(&D_800D5268_de, func_802BC558_de(node, node, &D_80149B50));
            }
        }
    }
}
