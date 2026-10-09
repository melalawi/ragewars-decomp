#include "span_1000/code_802B9BB4.h"
#include "types.h"

extern s32 D_800D43A0;
extern s32 D_801487E0;
extern s32 D_801487E8;

extern void func_802BAC60_de(s32 *arg0, s32 *arg1, s32 arg2);
extern void func_802BB420_de(s32 *arg0, s32 arg1, s32 arg2);

void func_802B9BC0_de(void) {
    D_800D43A0 = 1;
    func_802BAC60_de(&D_801487E8, &D_801487E0, 1);
    func_802BB420_de(&D_801487E8, 0, 0);
}
