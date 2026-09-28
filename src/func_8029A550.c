#include "basetypes.h"
typedef s32 (*FuncPtr)(s32, s32, s32, s32);

extern s32 D_8014D080;

void func_8029A550(FuncPtr arg0) {
    *(FuncPtr *)D_8014D080 = arg0;
    if (arg0 != 0) {
        arg0(0xE04, 0, 0, 0);
    }
}
