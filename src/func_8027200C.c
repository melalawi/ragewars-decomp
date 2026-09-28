#include "basetypes.h"

/** Scale a 3-vector (arg1) by a scalar (arg2), store into arg0. */
void func_8027200C(void *arg0, void *arg1, f32 arg2) {
    *(f32 *)((u8 *)arg0 + 0) = *(f32 *)((u8 *)arg1 + 0) * arg2;
    *(f32 *)((u8 *)arg0 + 4) = *(f32 *)((u8 *)arg1 + 4) * arg2;
    *(f32 *)((u8 *)arg0 + 8) = *(f32 *)((u8 *)arg1 + 8) * arg2;
}
