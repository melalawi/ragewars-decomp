#include "span_16E000/code_8043E364.h"
#include "types.h"

extern void func_804427C4_de(void *arg0, void *arg1, void *arg2);
extern s32 D_0044FDF4;

/** Forwards arg1 through and arg2 as the first parameter, adding the D_450A20 record. */
s32 func_8043E91C_de(void *arg0, void *arg1, void *arg2) {
    func_804427C4_de(arg2, arg1, &D_0044FDF4);
    return 1;
}
