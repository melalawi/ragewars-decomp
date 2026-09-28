/* Refreshes and probes a controller slot while holding the device lock. */
#include "basetypes.h"
#define NULL ((void *)0)
void func_80263760();                                  /* extern */
void func_8026451C(s32);                                 /* extern */
void func_8026456C();                                  /* extern */
void func_80404018(s32);                               /* extern */
s32 func_80448B80(void *);                          /* extern */
extern s8 D_8010FBB8;
extern s32 D_801534F0[];
extern char D_80153510[];

s32 func_80405290(s32 arg0) {
    s32 var_s0;

    if (D_801534F0[arg0] != 3) {
        return -2;
    }
    func_8026451C(1);
    func_80263760();
    D_8010FBB8 = 2;
    var_s0 = func_80448B80((arg0 * 0x68) + D_80153510);
    if (var_s0 != 0) {
        var_s0 = -1;
    }
    func_80404018(arg0);
    func_8026456C();
    return var_s0;
}
