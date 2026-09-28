/* Adjusts the volume in steps of eight and starts a sound preview when no preview is playing. */
#include "basetypes.h"
#define NULL ((void *)0)
extern s32 func_8025E2E4(void),func_8044252C(void *,s32,s32,s32,s32,s32);
extern void func_8025E2F4(s32);
extern u8 D_801462E0[];
s32 func_80445B98(void *unused, void *arg1) {
    s32 var_a1;

    var_a1 = D_801462E0[0];
    var_a1 = func_8044252C(arg1, var_a1, 8, 0, 0xFF, 0);
    if(var_a1==0xF7)var_a1=0xF8;
    D_801462E0[0]=var_a1;
    if (func_8025E2E4() <= 0) {
        func_8025E2F4(1);
    }
    return 0;
}
