#include "basetypes.h"

extern s32 func_8024E7CC(void *);
extern f32 D_800C7E18;

void func_8022C070(void *arg0, void *arg1) {
    void *result;
    f32 t0;
    f32 t1;

    result = (void *)func_8024E7CC(arg1);
    if (result != 0) {
        t0 = *(f32 *)((char *)result + 0x2C);
        t1 = *(f32 *)((char *)arg0 + 0x780);
        t0 = t0 - t1;
        t0 = t0 * D_800C7E18;
        t1 = t1 + t0;
        *(f32 *)((char *)arg0 + 0x780) = t1;
    }
}
