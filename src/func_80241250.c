#include "basetypes.h"

typedef struct Vector3 {
    f32 x;
    f32 y;
    f32 z;
} Vector3;

extern void func_80271FD8(Vector3 *, Vector3 *, Vector3 *);

s32 func_80241250(void *arg0, Vector3 *arg1) {
    Vector3 sp10;
    s32 var_v0;

    func_80271FD8(&sp10, arg1, (Vector3 *)((char *)arg0 + 0x18));
    var_v0 = 0;
    if (!((*(f32 *)((char *)arg0 + 0x48) * sp10.x) + (*(f32 *)((char *)arg0 + 0x4C) * sp10.y) + (*(f32 *)((char *)arg0 + 0x50) * sp10.z) >= 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
