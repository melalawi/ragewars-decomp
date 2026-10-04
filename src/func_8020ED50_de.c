#include "span_1000/code_8020D328.h"
#include "types.h"



extern s32 D_801372A4;

extern s32 func_8020D1CC_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8020BC50_de(void *arg0, s32 arg1, s32 arg2, void *arg3);

s32 func_8020ED50_de(Func8020ED50Arg *arg0) {
    s32 *base;

    base = &D_801372A4;
    if (base != 0) {
        if (arg0->field10 == -1) {
            return 1;
        }
        if (arg0->field4 == arg0->field10) {
            return 1;
        }
        if (func_8020D1CC_de(base, arg0->field4, arg0->field10) == 0) {
            arg0->fieldC = func_8020BC50_de(base, arg0->field4, arg0->field10, arg0);
        }
    }
    return 1;
}
