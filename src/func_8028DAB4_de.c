#include "span_1000/code_8028CCB8.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_8028FDF8_de(s32 arg0, s32 arg1);




void func_8028DAB4_de(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *base;
    void *temp_v0;

    if (arg1 != 0) {
        base = ((func_8028DA90_S1 *)(arg0))->unk80;
    } else {
        base = ((func_8028DA90_S1 *)(arg0))->unk84;
    }
    temp_v0 = func_8028FDB4_de(func_8028FDB4_de(func_8028FDB4_de(base, 0), arg3), arg2);
    func_8028FDB4_de(temp_v0, 0);
    func_8028FDF8_de((s32) temp_v0, 1);
    func_8028FDB4_de(temp_v0, 1);
}
