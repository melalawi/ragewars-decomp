#include "basetypes.h"

extern s32 D_800D83C0;
extern s32 D_8014EA50;
extern s32 D_8014EA58;

extern void func_802BFD50(s32 *arg0, s32 *arg1, s32 arg2);
extern void func_802C0510(s32 *arg0, s32 arg1, s32 arg2);

void func_802BEA40(void) {
    D_800D83C0 = 1;
    func_802BFD50(&D_8014EA58, &D_8014EA50, 1);
    func_802C0510(&D_8014EA58, 0, 0);
}
