#include "span_16E000/code_8043DF84.h"
#include "types.h"

extern void func_804427C4_de(void *arg0, void *arg1, void *arg2);
extern s32 D_0044F994_de;

/* Forwards arg1 through and arg2 as the first parameter, adding the D_4505C0 record. */
s32 func_8043E468_de(void *arg0, void *arg1, void *arg2) {
    func_804427C4_de(arg2, arg1, &D_0044F994_de);
    return 1;
}
