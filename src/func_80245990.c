#include "basetypes.h"

extern f32 func_8040184C(f32 arg0);
extern void *D_800E2830;
extern f32 D_800C88C4;
extern f32 D_800C88C8;

f32 func_80245990(void) {
    void *record = D_800E2830;
    f32 temp_f1;

    if (*(int *)((char *)record + 0x38) == 0) {
        return D_800C88C4;
    }
    temp_f1 = *(f32 *)((char *)record + 0x100);
    if (!(D_800C88C8 < temp_f1)) {
        return func_8040184C(*(f32 *)((char *)record + 0x1C));
    }
    return temp_f1;
}
