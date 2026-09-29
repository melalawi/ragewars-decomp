#include "basetypes.h"

typedef void (*ContextCallback)(void *);
typedef void (*VoidCallback)(void);

extern s32 func_804030E0(s32);
typedef struct func_80245608_S1 func_80245608_S1;
struct func_80245608_S1 {
    char pad0[0xE0];
    s32 unkE0;
    char padE0[0xE4 - 0xE0 - sizeof(s32)];
    ContextCallback unkE4;
    char padE4[0xE8 - 0xE4 - sizeof(ContextCallback)];
    VoidCallback unkE8;
};

extern func_80245608_S1 *D_800E2830;

s32 func_80245608(s32 arg0, ContextCallback arg1, VoidCallback arg2) {
    s32 result;

    result = func_804030E0(arg0);
    if (D_800E2830->unkE0 == arg0) {
        D_800E2830->unkE4 = arg1;
        D_800E2830->unkE8 = arg2;
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
