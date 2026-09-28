#include "basetypes.h"

extern void *func_80299170(void);

void func_8029A750(s32 arg0, s32 arg1) {
    *(s32 *)((u8 *)func_80299170() + 0x40) = arg1;
}
