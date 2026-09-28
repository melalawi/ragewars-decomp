#include "basetypes.h"

void func_802684C8(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u8 temp = *(u8 *)arg0;
    if (temp == 1) {
        s32 *p = &arg3;
        *(s32 *)((char *)arg0 + 0x2E0) = *(s32 *)((char *)arg0 + 0x2E0) | (temp << p[3]);
    }
}
