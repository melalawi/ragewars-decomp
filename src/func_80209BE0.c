#include "basetypes.h"

extern f32 D_800C6D98;
extern f32 D_800C6D9C;
extern f32 D_800C6DA0;

f32 func_80209BE0(void **arg0) {
    f32 var_f0;
    f32 var_f1;
    u8 state;
    void *base;

    base = *arg0;
    state = *(u8 *)((char *)*(void **)((char *)base + 0x5D8) + 0x93);
    var_f1 = *(f32 *)((char *)*(void **)((char *)base + 0x18) + 0x34);
    var_f1 *= D_800C6D98;
    switch (state) {
    case 1:
        goto done;
    default:
        *(s8 *)((char *)*(void **)((char *)*arg0 + 0x5D8) + 0x93) = 0;
    case 0:
        var_f0 = D_800C6D9C;
        goto multiply;
    case 2:
        var_f0 = D_800C6DA0;
    }
multiply:
    var_f1 *= var_f0;
done:
    return var_f1;
}
