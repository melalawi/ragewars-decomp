#include "basetypes.h"

extern void func_80442934(void *arg0, void *arg1, void *arg2);
extern s32 D_452834;

/** Forwards arg1 through and arg2 as the first parameter, adding the D_452834 record. */
s32 func_8043E4A4(void *arg0, void *arg1, void *arg2) {
    func_80442934(arg2, arg1, &D_452834);
    return 1;
}
