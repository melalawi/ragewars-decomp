/* Checks that every active player on the selected team has the configured value. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char a[0xB64]; s32 value; } Player; typedef struct { char a[0x58]; Player players[1]; } State; extern State *D_800E54A4; extern s32 D_80102B08[]; extern s8 D_80102B0D[], D_80102B0E[];





s32 func_80435AE8(s32 arg0) {
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;


    var_a3 = 1;
    var_a2 = 0;
    var_a1 = 0;
    do {
        if ((*(D_80102B0E + var_a1) == 0) && (*(D_80102B0D + var_a1) == arg0) && (*(s32 *)((char *)D_80102B08 + var_a1) != D_800E54A4->players[arg0].value)) {
            var_a3 = 0;
        }
        var_a2 += 1;
        var_a1 += 0x190;
    } while (var_a2 < 4);
    return var_a3;
}
