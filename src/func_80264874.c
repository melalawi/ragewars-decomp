#include "basetypes.h"

extern void func_80264268(void *arg0);
extern void func_80285D00(s32 *);
extern s32 D_8010F328;
extern s32 D_8010EC90;

typedef struct func_80264874_S1 func_80264874_S1;
struct func_80264874_S1 {
    char pad0[0xCC];
    s32 unkCC;
};

void func_80264874(s32 a) {
    u8 *var_s0;
    s32 var_s1;

    var_s1 = 0;
    var_s0 = (u8 *)&D_8010F328;
    do {
        ((func_80264874_S1 *)(var_s0))->unkCC = a;
        if (a == 0) {
            func_80264268(var_s0);
        }
        var_s1 += 1;
        var_s0 += 0x224;
    } while (var_s1 < 4);
    if (a == 0) {
        func_80285D00(&D_8010EC90);
    }
}
