#include "basetypes.h"

extern void *func_802796AC(s32 arg0);

void func_802A6B74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4) {
    void *node;

    node = func_802796AC(arg0 + 0x7588);
    if (node != 0) {
        *(s32 *)((char *)node + 0x18) = arg1;
        *(s32 *)((char *)node + 0x14) = arg2;
        *(s32 *)((char *)node + 8) = 0;
        *(f32 *)((char *)node + 0xC) = arg4;
        *(s32 *)((char *)node + 0x10) = arg3;
    }
}
