#include "span_16E000/code_804434BC.h"
#include "types.h"

/* Calls func_8025E384_de and passes what func_8025CC6C_de returns to func_8025CB0C_de; then, when D_801540F0
   is set, calls func_80442384_de with the three arguments, otherwise func_8026495C_de. Returns one. */
extern s32 D_8014DE60;
extern void func_8025E384_de();
extern s32 func_8025CC6C_de();
extern void func_8025CB0C_de(s32);
extern void func_80442384_de(void *, void *, void *);
extern void func_8026495C_de();

s32 func_80443464_de(void *first, void *second, void *third) {
    func_8025E384_de();
    func_8025CB0C_de(func_8025CC6C_de());
    if (D_8014DE60 == 0) {
        func_8026495C_de();
        return 1;
    }
    func_80442384_de(first, second, third);
    return 1;
}
