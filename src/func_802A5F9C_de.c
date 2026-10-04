#include "span_1000/code_802A6488.h"
#include "types.h"

extern void func_80295E84_de(s32 *arg0, s32 arg1);
extern void func_80283064_de(void *arg0, s32 *arg1);




void func_802A5F9C_de(void *unused, void *arg1, void *arg2) {
    s32 field34;
    s32 *p;

    field34 = ((func_802A6F8C_S1 *)(arg1))->unk34;
    if (field34 != -1) {
        p = &((func_802A6F8C_S1 *)(arg1))->unk14;
        func_80295E84_de(p, field34);
        if (arg2 != 0) {
            func_80283064_de(arg2, p);
        }
    }
}
