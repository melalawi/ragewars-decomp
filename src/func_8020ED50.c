#include "basetypes.h"

typedef struct {
    char pad0[4];
    s32 field4;
    char pad8[4];
    s32 fieldC;
    s32 field10;
} Func8020ED50Arg;

extern s32 D_8013B364;

extern s32 func_8020D1CC(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8020BC50(void *arg0, s32 arg1, s32 arg2, void *arg3);

s32 func_8020ED50(Func8020ED50Arg *arg0) {
    s32 *base;

    base = &D_8013B364;
    if (base != 0) {
        if (arg0->field10 == -1) {
            return 1;
        }
        if (arg0->field4 == arg0->field10) {
            return 1;
        }
        if (func_8020D1CC(base, arg0->field4, arg0->field10) == 0) {
            arg0->fieldC = func_8020BC50(base, arg0->field4, arg0->field10, arg0);
        }
    }
    return 1;
}
