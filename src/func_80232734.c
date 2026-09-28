#include "basetypes.h"

extern void func_8021A9A4(void *arg0, s32 arg1);

void func_80232734(void *arg0, s32 arg1, s32 arg2) {
    func_8021A9A4(*(void **)((char *)arg0 + 0x1D8), arg2);
}
