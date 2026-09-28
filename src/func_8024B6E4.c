#include "basetypes.h"

extern void func_8024B64C(void *arg0, u32 arg1);

s32 func_8024B6E4(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 < 0 || (arg2 == 0 && (*(s32 *)((char *)arg0 + 0x100) & 0x400))) {
        return 0;
    }
    func_8024B64C(arg0, (u32) arg1);
    return 1;
}
