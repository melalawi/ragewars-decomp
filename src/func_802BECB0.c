#include "basetypes.h"

extern s32 D_800D83D0;
extern s32 D_8014EA70;
extern s32 D_8014EA78;

extern void func_802BFD50(s32 *arg0, s32 *arg1, s32 arg2);
extern void func_802C0510(s32 *arg0, s32 arg1, s32 arg2);

void func_802BECB0(void) {
    D_800D83D0 = 1;
    func_802BFD50(&D_8014EA78, &D_8014EA70, 1);
    func_802C0510(&D_8014EA78, 0, 0);
}
