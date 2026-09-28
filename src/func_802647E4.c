#include "basetypes.h"
extern s8 D_8010F30B;
void func_802647E4(void) {
    s32 var_v1;
    s8 *var_v0;
    var_v1 = 3;
    var_v0 = &D_8010F30B;
    do {
        *var_v0 = 0;
        var_v1 -= 1;
        var_v0 -= 1;
    } while (var_v1 >= 0);
}
