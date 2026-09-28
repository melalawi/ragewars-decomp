#include "basetypes.h"

extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);

void func_802630A0(s32 arg0, void *arg1) {
    s32 *temp_v1;

    temp_v1 = *(s32 **)((char *)arg1 + 0x2F0);
    *(s32 *)((char *)arg1 + 0x174) = 0;
    if (temp_v1 != 0) {
        *temp_v1 -= 1;
    }
    func_80255E78((void *)(arg0 + 0x5F14), arg1);
    func_80255CB4((void *)(arg0 + 0x5F00), (s32)arg1);
}
