#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

/** Half-plane test: is arg1 on the positive side of arg0's normal (at +0x30)? */
s32 func_80274DFC(void *arg0, void *arg1) {
    Vector3 normal;
    Vector3 delta;
    s32 result;

    normal = *(Vector3 *)((u8 *)arg0 + 0x30);
    delta.x = *(f32 *)((u8 *)arg1 + 0x0) - *(f32 *)((u8 *)arg0 + 0x0);
    delta.z = *(f32 *)((u8 *)arg1 + 0x8) - *(f32 *)((u8 *)arg0 + 0x8);
    result = 0;
    if (!(((normal.x * delta.x) + (normal.z * delta.z)) <= 0.0f)) {
        result = 1;
    }
    return result;
}
