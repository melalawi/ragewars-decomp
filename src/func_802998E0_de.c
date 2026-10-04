#include "span_1000/code_80299FC4.h"
#include "types.h"

typedef s32 (*FuncPtr)(void *, s32, s32, s32, s32);

extern FuncPtr func_802997E4_de(u16 arg0);




s32 func_802998E0_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    FuncPtr fn;

    fn = func_802997E4_de(((func_8029A8E0_S1 *)(arg0))->unkE);
    if (fn != 0) {
        return fn(arg0, arg1, arg2, arg3, arg4);
    }
    return 0;
}
