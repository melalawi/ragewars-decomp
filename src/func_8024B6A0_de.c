#include "span_1000/code_8024B644.h"
#include "types.h"

extern s32 func_80246A08_de(void *, s32, s32);
extern s32 func_8024B6F4_de(void *arg0, s32 arg1, s32 arg2);

s32 func_8024B6A0_de(void *a, s32 c, s32 flag) {
    s32 temp_v0 = func_80246A08_de(a, c, -1);

    if (temp_v0 != -1) {
        return func_8024B6F4_de(a, temp_v0, flag);
    }
    return 0;
}
