#include "span_16E000/code_80434F4C.h"
#include "types.h"
/* Checks that every active player on the selected team has the configured value. */
#define NULL ((void *)0)
  extern State_func_8043590C_de *D_800E1454_de; extern s32 D_800FEB08[]; extern s8 D_800FEB0D[], D_800FEB0E[];





s32 func_8043590C_de(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;


    var_a3 = 1;
    var_a2 = 0;
    var_a1 = 0;
    do {
        if ((*(D_800FEB0E + var_a1) == 0) && (*(D_800FEB0D + var_a1) == arg0) && (*(s32 *)((char *)D_800FEB08 + var_a1) != D_800E1454_de->players[arg0].value)) {
            var_a3 = 0;
        }
        var_a2 += 1;
        var_a1 += 0x190;
    } while (var_a2 < 4);
    return var_a3;
}
