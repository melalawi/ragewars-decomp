#include "span_1000/code_80294C64.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);




void func_80295F78_de(s32 **arg0, void *arg1) {
    s32 *temp_s0;
    s32 *tmp;

    temp_s0 = *arg0;
    if (*temp_s0 != 0) {
        ((func_80296F7C_S1 *)(arg1))->unk8 = func_8028FDB4_de(temp_s0, 0);
        tmp = func_8028FDB4_de(temp_s0, 1);
        ((func_80296F7C_S1 *)(arg1))->unk0 = *tmp;
        tmp = func_8028FDB4_de(temp_s0, 2);
        ((func_80296F7C_S1 *)(arg1))->unk4 = *tmp;
        return;
    }
    ((func_80296F7C_S1 *)(arg1))->unk8 = 0;
    ((func_80296F7C_S1 *)(arg1))->unk0 = 0;
    ((func_80296F7C_S1 *)(arg1))->unk4 = 0;
}
