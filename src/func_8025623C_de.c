#include "common/types.h"
#include "span_1000/code_802555C8.h"



int func_8025623C_de(void *arg0, int arg1) {
    int node = *(int *)arg0;
    if (node != 0) {
        do {
            if (node == arg1) {
                return 1;
            }
            node = *(int *)(node + ((func_80205628_S3 *)(arg0))->unkC);
        } while (node != 0);
    }
    return 0;
}
