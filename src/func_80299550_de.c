#include "span_1000/code_80299FC4.h"
#include "types.h"
typedef s32 (*FuncPtr)(s32, s32, s32, s32);

extern s32 D_80146E00;

void func_80299550_de(FuncPtr arg0) {
    *(FuncPtr *)D_80146E00 = arg0;
    if (arg0 != 0) {
        arg0(0xE04, 0, 0, 0);
    }
}
