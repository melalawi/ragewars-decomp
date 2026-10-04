#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
#include "types.h"






void func_8028CCA4_de(void *arg0, s32 arg1) {
    s32 count;
    s32 i;
    void **arr;
    void *entry;

    i = 0;
    count = ((func_8028CC80_S1 *)((arg0)))->unkE50;
    arr = &((func_8028CC80_S1 *)((arg0)))->unkC50;
    if (count > 0) {
        do {
            entry = *arr;
            if (((Actor_func_8028CC34_de *)((entry)))->link == arg1) {
                ((Actor_func_8028CC34_de *)((entry)))->link = 0;
            }
            i += 1;
            arr += 1;
        } while (i < count);
    }
}
