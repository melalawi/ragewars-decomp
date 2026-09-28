#include "basetypes.h"

typedef struct {
    char pad18[0x18];
    s16 field18;
} Obj;

extern f64 D_800CC738;
extern f32 D_800CC740;

f32 func_802B71A4(Obj *arg0, s32 arg1, s32 arg2) {
    f64 v;
    f32 new_var;

    v = (f64)arg2;
    new_var = (f32)arg1;
    if (arg2 < 0) {
        v = v + D_800CC738;
    }
    return (new_var * (f32)v) / ((f32)arg0->field18 * D_800CC740);
}
