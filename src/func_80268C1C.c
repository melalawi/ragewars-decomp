#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void *func_80268C1C(void *arg0, void *arg1) {
    void *temp_s0;

    temp_s0 = *(void **)((char *)arg0 + 0x14);
    if (temp_s0 != 0) {
        func_80255E78((char *)arg0 + 0x14, (s32)temp_s0);
        func_80255C58(arg0, (s32)temp_s0);
        *(void **)((char *)temp_s0 + 8) = arg1;
        *(s16 *)((char *)temp_s0 + 0x16) = 0;
    }
    return temp_s0;
}
