#include "basetypes.h"

extern f32 D_800CAD64;
extern f32 func_8029C9FC(f32 arg0);

f32 func_8029ED3C(f32 arg0) {
    f32 r1 = func_8029C9FC(arg0);
    f32 r2 = func_8029C9FC(arg0 + D_800CAD64);
    return r1 / r2;
}
