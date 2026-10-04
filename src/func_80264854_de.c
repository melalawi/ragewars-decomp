#include "span_1000/code_802647BC.h"
#include "span_1000/types.h"
#include "types.h"

extern void func_80264248_de(void *arg0);
extern void func_80285D30_de(s32 *);
extern s32 D_8010B328;
extern s32 D_8010AC90;




void func_80264854_de(s32 a) {
    u8 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = (u8 *)&D_8010B328;
    do {
        ((func_80264874_S1 *)(var_s0))->unkCC = a;
        if (a == 0) {
            func_80264248_de(var_s0);
        }
        var_s1 += 1;
        var_s0 += 0x224;
    } while (var_s1 < 4);
    if (a == 0) {
        func_80285D30_de(&D_8010AC90);
    }
}
