#include "span_1000/code_802B7488.h"
#include "span_1000/code_802B9BB4.h"
#include "types.h"



extern s32 func_802B9CB0_de(s32, s32);
extern void func_802BB2A0_de(s32, s32, s32);


extern u8 D_80147220;
extern char D_801471E0;

s32 func_802B7560_de(s32 arg0) {
    s32 result;
    u8 *p;

    func_802B9C14_de();
    p = &D_80147220;
    if (*p != 1) {
        func_802B768C_de();
        func_802B9CB0_de(1, &D_801471E0);
        func_802BB2A0_de(arg0, 0, 1);
    }
    result = func_802B9CB0_de(0, &D_801471E0);
    *p = 1;
    func_802B9C80_de();
    return result;
}
