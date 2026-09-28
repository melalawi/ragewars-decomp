#include "basetypes.h"

extern void func_802798CC(s16 *arg0);
extern s32 func_802469F8(void *arg0, s32 arg1, s32 arg2);
extern s32 func_802798D4(s16 *arg0, s16 arg1, s16 arg2);
extern s16 func_80279918(s16 *arg0, u16 arg1);

s16 func_8024B728(void *arg0, s16 *arg1, s32 arg2) {
    s16 sp10[52];
    u16 var_a1;

    func_802798CC(sp10);
    var_a1 = *(u16 *) arg1;
    if (*arg1 != -1) {
        do {
            if (func_802469F8(arg0, (s32) (s16) var_a1, arg2) != -1) {
                func_802798D4(sp10, arg1[0], arg1[1]);
            }
            arg1 += 2;
            var_a1 = *(u16 *) arg1;
        } while (*arg1 != -1);
    }
    return func_80279918(sp10, var_a1);
}
