#include "basetypes.h"

s32 func_8023E854(void *arg0, void *arg1) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(f32 *)((char *)arg0 + 0x18C) == *(f32 *)((char *)arg1 + 0x48)) &&
        (*(f32 *)((char *)arg0 + 0x190) == *(f32 *)((char *)arg1 + 0x4C)) &&
        (*(f32 *)((char *)arg0 + 0x194) == *(f32 *)((char *)arg1 + 0x50))) {
        var_v0 = 1;
    }
    return var_v0;
}
