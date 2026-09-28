#include "basetypes.h"

extern void func_80276580(void *arg0, s32 arg1, void *arg2);

void func_80276544(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;

    if (arg1 != 0) {
        temp_f0 = *(f32 *)((char *)arg2 + 0);
        *(f32 *)((char *)arg0 + 8) = temp_f0;
        *(f32 *)((char *)arg0 + 0) = temp_f0;
        temp_f0_2 = *(f32 *)((char *)arg2 + 8);
        *(f32 *)((char *)arg0 + 0xC) = temp_f0_2;
        *(f32 *)((char *)arg0 + 4) = temp_f0_2;
        func_80276580(arg0, arg1 - 1, (char *)arg2 + 0xC);
    }
}
