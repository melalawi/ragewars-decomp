#include "span_1000/code_80263754.h"
#include "span_16E000/code_80408E1C.h"
#include "types.h"

/* Ensures the session is initialised once (calling func_80293268_de and func_80263C24_de and, the first
   time, latching D_8014ADA0 when D_8014AD9C is set, clearing D_8014AD94 and setting D_80153784),
   then latches D_80153784 to one when D_800E28C8 is not -1 and both func_802645D0_de and
   func_80406178_de(arg0, D_800E28C8, 0) accept it, returning D_80153784. */
extern s32 D_80142CA0_de;
extern s32 D_80146CDC;
extern s32 D_80146CE0;
extern s32 D_80146CD4_de;
extern s32 D_8014D4F4;
extern s32 D_800DE878;
extern s32 D_8011BA00;

extern void func_80293268_de(void *arg0);

extern s32 func_802645D0_de(s32);
extern s32 func_80406178_de(s32, s32, s32);

s32 func_80409E10_de(s32 arg0) {
    if (D_80142CA0_de == 0) {
        func_80293268_de(&D_8011BA00);
        func_80263C24_de();
        if (D_80142CA0_de == 0) {
            if (D_80146CDC != 0) {
                D_80146CE0 = 1;
            }
            D_80146CD4_de = 0;
            D_8014D4F4 = 1;
        }
    }
    if (D_8014D4F4 == 0) {
        if ((D_800DE878 != -1) && (func_802645D0_de(D_800DE878) != 0) && (func_80406178_de(arg0, D_800DE878, 0) != 0)) {
            D_80146CD4_de = 0;
            D_8014D4F4 = 1;
        }
    }
    return D_8014D4F4;
}
