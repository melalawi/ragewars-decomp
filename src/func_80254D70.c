#include "basetypes.h"

extern void func_80255428(s32 arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);
extern char D_8010510C;
extern s32 D_801050F8;

void func_80254D70(void *arg0, void *arg1) {
    void *temp_v0;
    void *temp_s0;

    temp_v0 = *(void **)((char *)arg1 + 0x14);
    if (temp_v0 != 0) {
        func_80255428(*(s32 *)((char *)temp_v0 + 8));
        temp_s0 = *(void **)((char *)arg1 + 0x14);
        func_80255E78(&D_8010510C, temp_s0);
        *(s32 *)((char *)temp_s0 + 0x10) = 0;
        func_80255C58(&D_801050F8, (s32) temp_s0);
    }
}
