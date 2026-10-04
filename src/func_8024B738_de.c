#include "span_1000/code_8024B644.h"
#include "types.h"

extern void func_8027985C_de(s16 *arg0);
extern s32 func_80246A08_de(void *arg0, s32 arg1, s32 arg2);
extern s32 func_80279864_de(s16 *arg0, s16 arg1, s16 arg2);
extern s16 func_802798A8_de(s16 *arg0, u16 arg1);

s16 func_8024B738_de(void *arg0, s16 *arg1, s32 arg2) {
    s16 sp10[52];
    u16 var_a1;

    func_8027985C_de(sp10);
    var_a1 = *(u16 *) arg1;
    if (*arg1 != -1) {
        do {
            if (func_80246A08_de(arg0, (s32) (s16) var_a1, arg2) != -1) {
                func_80279864_de(sp10, arg1[0], arg1[1]);
            }
            arg1 += 2;
            var_a1 = *(u16 *) arg1;
        } while (*arg1 != -1);
    }
    return func_802798A8_de(sp10, var_a1);
}
