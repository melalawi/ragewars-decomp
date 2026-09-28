#include "basetypes.h"

extern void func_80239CD0(void *arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

void *func_80239C2C(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = *(void **)((char *)arg0 + 0xF24);
    if (temp_s0 != 0) {
        func_80239CD0(temp_s0);
        func_80255E78((char *)arg0 + 0xF24, (s32)temp_s0);
        func_80255CB4((char *)arg1 + 0xE40, (s32)temp_s0);
    }
    return temp_s0;
}
