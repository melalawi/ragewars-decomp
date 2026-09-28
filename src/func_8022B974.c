#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);

void func_8022B974(void *arg0) {
    if (*(s32 *)((char *)arg0 + 0x1210) == 0) {
        func_802227D0(arg0, arg0, 0x27);
        *(s32 *)((char *)arg0 + 0x1210) = 1;
        *(s32 *)((char *)arg0 + 0x1214) = 0;
    }
}
