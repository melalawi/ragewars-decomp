#include "basetypes.h"

typedef s32 (*FuncPtr)(void *, s32, s32, s32, s32);

extern FuncPtr func_8029A7E4(u16 arg0);

typedef struct func_8029A8E0_S1 func_8029A8E0_S1;
struct func_8029A8E0_S1 {
    char pad0[0xE];
    u16 unkE;
};

s32 func_8029A8E0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    FuncPtr fn;

    fn = func_8029A7E4(((func_8029A8E0_S1 *)(arg0))->unkE);
    if (fn != 0) {
        return fn(arg0, arg1, arg2, arg3, arg4);
    }
    return 0;
}
