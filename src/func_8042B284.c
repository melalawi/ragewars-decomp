/* Hides each primary and optional secondary selection widget. */
#include "basetypes.h"
#define NULL ((void *)0)
void func_8040E958(s32, s32);                            /* extern */
s32 func_8040ECB0(s32, u16);                        /* extern */
extern s32 *D_800E4F60;
extern char D_800E4F66;
extern char D_800E4F68;
extern char D_800E4F6A;

void func_8042B284(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    do {
        var_s0 = var_s1 * 0x10;
        func_8040E958(func_8040ECB0(*D_800E4F60, *(u16 *)(&D_800E4F66 + var_s0)), 0);
        if (*(s32 *)(&D_800E4F68 + var_s0) != -1) {
            func_8040E958(func_8040ECB0(*D_800E4F60, *(u16 *)(&D_800E4F6A + var_s0)), 0);
        }
            var_s1 += 1;
    } while (var_s1 < 0x28);
}
