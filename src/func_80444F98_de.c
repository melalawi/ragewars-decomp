#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Stops sound for a menu: calls func_8025E214_de with -1 and func_8025E29C_de with zero, calls
   func_8025E360_de when D_800E63B4 is set, passes D_800E63B0 to func_8025E2D4_de, calls func_80264A0C_de and
   returns what func_80442384_de gives for the three arguments. */
extern s32 D_800E2098;
extern s32 D_800E2094_de;
extern void func_8025E214_de(s32);
extern void func_8025E29C_de(s32);
extern void func_8025E360_de();
extern void func_8025E2D4_de(s32);
extern void func_80264A0C_de();
extern s32 func_80442384_de(void *, void *, void *);

s32 func_80444F98_de(void *first, void *second, void *third) {
    func_8025E214_de(-1);
    func_8025E29C_de(0);
    if (D_800E2098 != 0) {
        func_8025E360_de();
    }
    func_8025E2D4_de(D_800E2094_de);
    func_80264A0C_de();
    return func_80442384_de(first, second, third);
}
