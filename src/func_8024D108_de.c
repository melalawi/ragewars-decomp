#include "span_1000/code_8024C444.h"
extern int func_802784C0_de(int a, int b, void *c, int d, int e, void *f);
extern void func_80253E64_de(int a, int **b, int c);




void func_8024D108_de(void *arg0, int **arg1) {
    int *deref1;
    int deref2;
    int ret;

    deref1 = *arg1;
    deref2 = *deref1;
    ret = func_802784C0_de(deref2, 0, &((func_8024D0F8_S1 *)(arg0))->unkE8, ((func_8024D0F8_S1 *)(arg0))->unkB4, 1, arg0);
    func_80253E64_de(0, arg1, ret);
}
