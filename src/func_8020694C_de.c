#include "span_1000/code_80206258.h"
/** For each of the object's child slots, attach the child to the record and spawn its effect. */
extern int D_800D297C;
extern void *func_8024BFD4_de(void *, int);
extern void func_8024AA18_de(void *, void *, void *);
extern void func_8026DA4C_de(void *, int, int, void *, int, int);








void func_8020694C_de(char *arg0, void *arg1, Rec *arg2) {
    int i;
    int n;
    void *child;

    n = arg0[0xE7];
    for (i = 0; i < n; i++) {
        child = func_8024BFD4_de(arg0, i);
        if (child != 0) {
            arg2->a = child;
            arg2->b = child;
            func_8024AA18_de(arg0, arg1, arg2);
            func_8026DA4C_de(child, ((func_8020694C_S1 *)(arg0))->unkB4, 1, &(&((func_8020694C_S1 *)(arg0))->unk140)[D_800D297C], 0, arg0[3]);
        }
    }
}
