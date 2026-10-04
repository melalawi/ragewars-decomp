#include "span_1000/code_80206DD4.h"
#include "span_1000/types.h"
extern void func_80214178_de(void *a, void *b, int c);




void func_80207E3C_de(void *arg0, int *arg1) {
    ((func_80203C40_S1 *)(arg0))->unk100 |= 0x2100;
    *arg1 |= 0x10000;
    func_80214178_de(arg0, arg1, 1);
}
