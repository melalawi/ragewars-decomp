#include "basetypes.h"

extern void *func_8025CC8C(void);
extern s32 func_8025CA44(void *, void *);
extern void *func_8025C97C(void *, s32, void *, void *, s32);
extern s32 D_8013B29C;
extern s32 D_80146894;

void func_8022AE90(void *arg0, s32 arg1) {
    s32 field5DC;
    void *var_s1;

    field5DC = *(s32 *)((char *)arg0 + 0x5DC);
    if (field5DC != 0) {
        var_s1 = (void *)(field5DC + 0x128);
    } else {
        var_s1 = (char *)arg0 + 8;
    }
    if (D_8013B29C == 0 && D_80146894 == 0) {
        func_8025CA44(func_8025CC8C(), *(s32 *)((char *)arg0 + 0x11BC));
        *(s32 *)((char *)arg0 + 0x11BC) = (s32)func_8025C97C((void *)func_8025CC8C(), arg1, var_s1, var_s1, (s32)arg0);
    }
}
