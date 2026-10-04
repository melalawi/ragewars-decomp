#include "common/types.h"
#include "span_1000/code_8026D4F0.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_80253F8C_de(s32 arg0, s32 arg1);




void func_8026E1F8_de(void **arg0) {
    void *temp_v0;
    s32 count;
    s32 i;
    void *rec;

    temp_v0 = func_8028FDB4_de(*arg0, 2);
    count = *(s32 *)temp_v0;
    for (i = 0; i < count; i++) {
        rec = func_8028FDB4_de(func_8028FDB4_de(temp_v0, i), 0);
        if (((func_80254D70_S2 *)(rec))->unk8 == 0) {
            continue;
        }
        func_80253F8C_de(0, ((func_80254D70_S2 *)(rec))->unk8);
    }
}
