#include "basetypes.h"

extern s32 D_800D0D3C;
extern s32 D_800D0D40;

extern void func_8025AE3C(void *arg0);

void func_8025BD20(void **arg0) {
    s32 var_s0;
    s32 var_s2;
    char *var_s1;

    var_s2 = 0;
    var_s1 = (char *) arg0 + 4;
    var_s0 = 0;
    do {
        if (*(s32 *) (var_s1 + 8) != -1 && *(s16 *) ((char *) *arg0 + 0x102) != var_s0) {
            func_8025AE3C(var_s1);
            var_s2 += 1;
        }
        var_s0 += 1;
        var_s1 += 0xCC;
    } while (var_s0 < 0x10);
    D_800D0D3C = var_s2;
    if (D_800D0D40 < var_s2) {
        D_800D0D40 = var_s2;
    }
}
