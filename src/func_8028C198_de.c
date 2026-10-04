#include "span_1000/code_8028B64C.h"
#include "types.h"

extern int func_8028FE28_de(int *arg0, int arg1, int arg2);




s32 func_8028C198_de(void *arg0, s32 arg1) {
    s32 *temp_a0 = ((func_8028C174_S1 *)(arg0))->unk54;

    if (arg1 < *temp_a0) {
        return func_8028FE28_de(temp_a0, ((func_8028C174_S1 *)(arg0))->unk24, arg1);
    }
    return 0;
}
