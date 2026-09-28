#include "basetypes.h"

extern void func_8025E194(s32 arg0);
extern void func_80255E78(void *, s32);
extern s32 func_80255CB4(void *, s32);
extern s32 D_800D0D54;

s32 func_8025CA44(void *arg0, void *arg1) {
    void *var_s0;

    if (arg1 == 0) {
        return 0;
    }

    var_s0 = *(void **)((char *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            if (var_s0 == arg1) {
                func_8025E194(*(s32 *)((char *)var_s0 + 8));
                D_800D0D54 = *(s32 *)((char *)var_s0 + 8);
                func_80255E78((char *)arg0 + 0x14, (s32)var_s0);
                func_80255CB4(arg0, (s32)var_s0);
                return 1;
            }
            var_s0 = *(void **)((char *)var_s0 + 4);
        } while (var_s0 != 0);
    }
    return 0;
}
