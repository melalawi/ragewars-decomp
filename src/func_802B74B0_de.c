#include "span_1000/code_802BB9D0.h"
#include "span_1000/code_802BDDB8.h"
#include "types.h"


extern void func_802B7A20_de(s32 arg0);
extern s32 func_802B9CB0_de(s32, s32);
extern void func_802BB2A0_de(s32, s32, s32);


extern u8 D_80147220;
extern char D_801471E0;

s32 func_802B74B0_de(s32 arg0) {
    s32 result;
    u8 *p;

    func_802B9C14_de();
    p = &D_80147220;
    if (*p != 0) {
        func_802B7A20_de(0);
        func_802B9CB0_de(1, &D_801471E0);
        func_802BB2A0_de(arg0, 0, 1);
    }
    result = func_802B9CB0_de(0, &D_801471E0);
    *p = 0;
    func_802B9C80_de();
    return result;
}
