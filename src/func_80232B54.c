#include "basetypes.h"

extern s32 func_802301E4(void);
extern s32 func_80214178(void *, void *, s32);

void func_80232B54(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = *(void **)((char *)arg0 + 0x1D8);
    *(s32 *)((char *)temp_v0 + 0x788) = 1;
    *(s32 *)((char *)temp_v0 + 0x794) = 0;
    *(s32 *)((char *)temp_v0 + 0x78C) = 0;
    *(s32 *)((char *)arg1 + 0x124) = 0;
    *(s32 *)((char *)arg1 + 0x128) = 0;
    if ((*(s8 *)((char *)arg1 + 0xCB) != 0) && (func_802301E4() == 0)) {
        func_80214178(arg0, arg1, 2);
    }
}
