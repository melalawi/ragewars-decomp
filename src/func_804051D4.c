/* Refreshes a controller slot and resolves its pending device state. */
#include "basetypes.h"
#define NULL ((void *)0)
void func_80263760();                                  /* extern */
void func_8026451C(s32);                                 /* extern */
void func_8026456C();                                  /* extern */
void func_80404018(s32);                               /* extern */
s32 func_80448B80(void *);                          /* extern */
extern s8 D_8010FBB8;
extern s32 D_801534F0[];
extern s32 D_80153500[];
extern char D_80153510[];

s32 func_804051D4(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;

    temp_s0 = arg0 * 4;
    if (D_801534F0[arg0] != 3) {
        return -2;
    }
    func_8026451C(1);
    func_80263760();
    var_s0 = D_80153500[arg0];
    D_8010FBB8 = 2;
    if (var_s0 == -4) {
        var_s0 = func_80448B80((arg0 * 0x68) + D_80153510);
        if (var_s0 != 0) {
            var_s0 = -1;
        }
        func_80404018(arg0);
    }
    func_8026456C();
    return var_s0;
}
