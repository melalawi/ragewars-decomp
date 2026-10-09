#include "span_1000/code_802B8DD0.h"
#include "types.h"

extern s32 D_800D4390;
extern s32 D_801487C0;
extern s32 D_801487C8;

extern void func_802BAC60_de(s32 *arg0, s32 *arg1, s32 arg2);
extern void func_802BB420_de(s32 *arg0, s32 arg1, s32 arg2);

void func_802B9950_de(void) {
    D_800D4390 = 1;
    func_802BAC60_de(&D_801487C8, &D_801487C0, 1);
    func_802BB420_de(&D_801487C8, 0, 0);
}
