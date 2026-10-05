#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80403BCC.h"
#include "types.h"
/* Refreshes a controller slot and resolves its pending device state. */
#define NULL ((void *)0)
void func_80263740_de();                                  /* extern */
void func_802644FC_de(s32);                                 /* extern */
void func_8026454C_de();                                  /* extern */
void func_80404018_de(s32);                               /* extern */
s32 func_80447F30_de(void *);                          /* extern */
extern s8 D_8010BBB8;


extern char D_8014D280[];

s32 func_804051D4_de(s32 arg0) {
    s32 temp_s0;
    s32 var_s0;

    temp_s0 = arg0 * 4;
    if (D_8014D260[arg0] != 3) {
        return -2;
    }
    func_802644FC_de(1);
    func_80263740_de();
    var_s0 = D_8014D270[arg0];
    D_8010BBB8 = 2;
    if (var_s0 == -4) {
        var_s0 = func_80447F30_de((arg0 * 0x68) + D_8014D280);
        if (var_s0 != 0) {
            var_s0 = -1;
        }
        func_80404018_de(arg0);
    }
    func_8026454C_de();
    return var_s0;
}
