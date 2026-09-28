#include "basetypes.h"

extern s32 D_8013B290;
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void *func_80263018(s32 arg0, s32 *arg1) {
    void *temp_s0;

    if ((D_8013B290 != 0) || ((u32)*(s32 *)(arg0 + 0x5F24) < 3)) {
        temp_s0 = *(void **)(arg0 + 0x5F00);
        if (temp_s0 != 0) {
            func_80255E78((void *)(arg0 + 0x5F00), (s32)temp_s0);
            func_80255C58((void *)(arg0 + 0x5F14), (s32)temp_s0);
            *(s32 **)((char *)temp_s0 + 0x2F0) = arg1;
            if (arg1 != 0) {
                *arg1 += 1;
            }
        }
        return temp_s0;
    }
    return 0;
}
