#include "common/types.h"
#include "span_1000/code_802B7488.h"





void func_802B2480_de(void *arg0, void **arg1) {
    void *temp;

    temp = *arg1;
    ((Field_void_4 *)(arg0))->value = arg1;
    *(void **)arg0 = temp;
    temp = *arg1;
    if (temp != 0) {
        ((Field_void_4 *)(temp))->value = arg0;
    }
    *arg1 = arg0;
}
