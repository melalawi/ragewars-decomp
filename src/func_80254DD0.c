#include "basetypes.h"

extern s32 D_801050F8;
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void *func_80254DD0(void) {
    void **p = &D_801050F8;
    void *temp_s0 = *p;
    if (temp_s0 != 0) {
        func_80255E78(p, (s32) temp_s0);
        *(s32 *)((char *)temp_s0 + 0x10) = 1;
        func_80255C58((char *)p + 0x14, (s32) temp_s0);
    }
    return temp_s0;
}
