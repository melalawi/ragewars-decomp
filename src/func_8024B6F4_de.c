#include "span_1000/code_8024B644.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_8024B65C_de(void *arg0, u32 arg1);




s32 func_8024B6F4_de(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0 || (arg2 == 0 && (((func_80203C40_S1 *)(arg0))->unk100 & 0x400))) {
        return 0;
    }
    func_8024B65C_de(arg0, (u32) arg1);
    return 1;
}
