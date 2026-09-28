#include "basetypes.h"

typedef void (*ContextCallback)(void *);
typedef void (*VoidCallback)(void);

extern s32 func_804030E0(s32);
extern void *D_800E2830;

s32 func_80245608(s32 arg0, ContextCallback arg1, VoidCallback arg2) {
    s32 result;

    result = func_804030E0(arg0);
    if (*(s32 *)((char *)D_800E2830 + 0xE0) == arg0) {
        *(ContextCallback *)((char *)D_800E2830 + 0xE4) = arg1;
        *(VoidCallback *)((char *)D_800E2830 + 0xE8) = arg2;
    } else {
        if (arg1 != 0) {
            arg1(D_800E2830);
        }
        if (arg2 != 0) {
            arg2();
        }
    }
    return result;
}
