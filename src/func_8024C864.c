#include "basetypes.h"

/** Lerp a 3-component vector: out = a + t * (b - a). */
void func_8024C864(void *arg0, f32 t, void *a, void *b) {
    *(f32 *)((u8 *)arg0 + 0x0) = *(f32 *)((u8 *)a + 0x0) + (t * (*(f32 *)((u8 *)b + 0x0) - *(f32 *)((u8 *)a + 0x0)));
    *(f32 *)((u8 *)arg0 + 0x4) = *(f32 *)((u8 *)a + 0x4) + (t * (*(f32 *)((u8 *)b + 0x4) - *(f32 *)((u8 *)a + 0x4)));
    *(f32 *)((u8 *)arg0 + 0x8) = *(f32 *)((u8 *)a + 0x8) + (t * (*(f32 *)((u8 *)b + 0x8) - *(f32 *)((u8 *)a + 0x8)));
}
